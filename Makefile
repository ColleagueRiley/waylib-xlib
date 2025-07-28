
NAME=waylib-x11
CC = gcc
OUTDIR = build
SOURCES = $(wildcard source/*.c)

EXAMPLES_SOURCES = $(wildcard examples/*.c)
EXAMPLES = $(patsubst examples/%.c, build/%, $(EXAMPLES_SOURCES))
ifeq ($(CC),x86_64-w64-mingw32-gcc)
    PLATFORM = Windows_NT
endif

LDFLAGS = -shared
SOURCES += $(wildcard waylib/waylib.c)

OBJECTS = $(SOURCES:.c=.o)

all: $(EXAMPLES)
	echo $(EXAMPLES)

#  relative-pointer-unstable-v1-client-protocol.c xdg-decoration-unstable-v1.c xdg-shell.c
LIBS += -lwayland-cursor -lwayland-client -lxkbcommon  -lwayland-egl

$(OUTDIR)/libwaylib-x11.so: waylib/xdg-shell-client-protocol.h  $(OBJECTS) | $(OUTDIR)
	$(CC) -shared -o $@ $(OBJECTS) $(LIBS)

waylib/xdg-shell-client-protocol.h:
	make -C waylib

%.o: %.c
	$(CC) -fPIC -I./ -I./include  -c $< -o $@

$(OUTDIR):
	mkdir -p $(OUTDIR)

clean:
	rm -rf $(OUTDIR)
	rm -f source/*.o


CFLAGS = -Wall -I./include
LDFLAGS = -L./build -lwaylib-x11 -Wl,-rpath=\$$ORIGIN

 $(EXAMPLES): build/%: examples/%.c $(OUTDIR)/libwaylib-x11.so
	$(CC) -o $@ $< $(LDFLAGS)

debug: $(EXAMPLES)
	@for exe in $(EXAMPLES); do \
		echo "Running $$exe..."; \
		./$$exe$(EXT); \
	done

.PHONY: all clean
