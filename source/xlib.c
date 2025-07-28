#include "internal.h"
#include "waylib/waylib.h"
#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>

Display* XOpenDisplay(const char* display_name) {
    (void)display_name; // suppress unused param warning for now

    Display* display = malloc(sizeof(struct _XDisplay));
    if (!display) return NULL;

    memset(display, 0, sizeof(struct _XDisplay));

    if (waylib_display_open(&display->wl_display) == 0) {
        fprintf(stderr, "Failed to connect to Wayland display\n");
        free(display);
        return NULL;
    }

    display->priv.screens = malloc(sizeof(Screen) * 1);
    display->priv.default_screen = 0;
    display->priv.nscreens = 1;

    return display;
}

int XCloseDisplay(Display* display) {
    waylib_display_close(&display->wl_display);
    return 0;
}


int XNextEvent(Display* display, XEvent* event_return) {
    return 0;
}

Window XCreateSimpleWindow(Display *display, Window parent, int x, int y, unsigned int width, unsigned int height, unsigned int border_width, unsigned long border, unsigned long background) {
    // we get these unsigned long border, unsigned long background
    unsigned int class = InputOutput;
    unsigned long valuemask = CWColormap | CWBorderPixel | CWEventMask;

    XSetWindowAttributes attr;
    attr.border_pixel = border;
    attr.background_pixel = background;

    return XCreateWindow(display, parent, x, y, width, height, border_width, CopyFromParent, class, CopyFromParent, valuemask, &attr);
}

Window XCreateWindow(Display* display, Window parent, int x, int y, unsigned int width, unsigned int height, unsigned int border_width, int depth, unsigned int class, Visual* visual, unsigned long valuemask, XSetWindowAttributes* attributes) {



    return 0;
}



XClassHint* XAllocClassHint() { return malloc(sizeof(XClassHint)); }

XSizeHints* XAllocSizeHints() {
    return NULL;
}

XWMHints* XAllocWMHints() { return malloc(sizeof(XWMHints)); }

int XChangeProperty(Display* display, Window window, Atom property, Atom type, int format, int mode, const unsigned char* data, int nelements) {
    return 0;
}

int XChangeWindowAttributes(Display* display, Window window, unsigned long valuemask, XSetWindowAttributes* attributes) {
    return 0;
}

Bool XCheckIfEvent(Display* display, XEvent* event_return, Bool (*predicate)(Display*, XEvent*, XPointer), XPointer arg) {
    return False;
}

Bool XCheckTypedWindowEvent(Display* display, Window window, int event_type, XEvent* event_return) {
    return False;
}

Status XCloseIM(XIM im) {
    return 0;
}

int XConvertSelection(Display* display, Atom selection, Atom target, Atom property, Window requestor, Time time) {
    return 0;
}

Colormap XCreateColormap(Display* display, Window window, Visual* visual, int alloc) {
    return 0;
}

Cursor XCreateFontCursor(Display* display, unsigned int shape) {
    return 0;
}

XIC XCreateIC(XIM im, ...) {
    return NULL;
}

Region XCreateRegion() {
    return NULL;
}

int XDefineCursor(Display* display, Window window, Cursor cursor) {
    return 0;
}

int XDeleteContext(Display* display, XID id, XContext context) {
    return 0;
}

int XDeleteProperty(Display* display, Window window, Atom property) {
    return 0;
}

void XDestroyIC(XIC ic) {
}

int XDestroyRegion(Region region) {
    return 0;
}

int XDestroyWindow(Display* display, Window window) {
    return 0;
}

int XDisplayKeycodes(Display* display, int* min_keycodes_return, int* max_keycodes_return) {
    return 0;
}

int XEventsQueued(Display* display, int mode) {
    return 0;
}

Bool XFilterEvent(XEvent* event, Window window) {
    return False;
}

int XFindContext(Display* display, XID id, XContext context, XPointer* data_return) {
    return 0;
}

int XFlush(Display* display) {
    return 0;
}

int XFree(void* data) {
    return 0;
}

int XFreeColormap(Display* display, Colormap colormap) {
    return 0;
}

int XFreeCursor(Display* display, Cursor cursor) {
    return 0;
}

void XFreeEventData(Display* display, XGenericEventCookie* cookie) {
}

int XGetErrorText(Display* display, int code, char* buffer_return, int length) {
    return 0;
}

Bool XGetEventData(Display* display, XGenericEventCookie* cookie) {
    return False;
}

char* XGetICValues(XIC ic, ...) {
    return NULL;
}

char* XGetIMValues(XIM im, ...) {
    return NULL;
}

int XGetInputFocus(Display* display, Window* focus_return, int* revert_to_return) {
    return 0;
}

KeySym* XGetKeyboardMapping(Display* display, KeyCode keycode, int start, int* keysyms_per_keycode_return) {
    return NULL;
}

int XGetScreenSaver(Display* display, int* timeout, int* interval, int* prefer_blank, int* allow_exposures) {
    return 0;
}

Window XGetSelectionOwner(Display* display, Atom selection) {
    return 0;
}

XVisualInfo* XGetVisualInfo(Display* display, long mask, XVisualInfo* template, int* nitems_return) {
    return NULL;
}

Status XGetWMNormalHints(Display* display, Window window, XSizeHints* hints_return, long* supplied_return) {
    return 0;
}

Status XGetWindowAttributes(Display* display, Window window, XWindowAttributes* attributes_return) {
    return 0;
}

int XGetWindowProperty(Display* display, Window window, Atom property, long offset, long length, Bool delete, Atom req_type, Atom* actual_type_return, int* actual_format_return, unsigned long* nitems_return, unsigned long* bytes_after_return, unsigned char** prop_return) {
    return 0;
}

int XGrabPointer(Display* display, Window grab_window, Bool owner_events, unsigned int event_mask, int pointer_mode, int keyboard_mode, Window confine_to, Cursor cursor, Time time) {
    return 0;
}

Status XIconifyWindow(Display* display, Window window, int screen_number) {
    return 0;
}

Status XInitThreads() {
    return 1;
}

Atom XInternAtom(Display* display, const char* name, Bool only_if_exists) {
    return 0;
}

int XLookupString(XKeyEvent* event, char* buffer_return, int bytes_buffer, KeySym* keysym_return, XComposeStatus* status_in_out) {
    return 0;
}

int XMapRaised(Display* display, Window window) {
    return 0;
}

int XMapWindow(Display* display, Window window) {
    return 0;
}

int XMoveResizeWindow(Display* display, Window window, int x, int y, unsigned int width, unsigned int height) {
    return 0;
}

int XMoveWindow(Display* display, Window window, int x, int y) {
    return 0;
}

int XPeekEvent(Display* display, XEvent* event_return) {
    return 0;
}

int XPending(Display* display) {
    return 0;
}

Bool XQueryExtension(Display* display, const char* name, int* major_opcode_return, int* first_event_return, int* first_error_return) {
    return False;
}

Bool XQueryPointer(Display* display, Window window, Window* root_return, Window* child_return, int* root_x_return, int* root_y_return, int* win_x_return, int* win_y_return, unsigned int* mask_return) {
    return False;
}

int XRaiseWindow(Display* display, Window window) {
    return 0;
}

Bool XRegisterIMInstantiateCallback(Display* display, struct _XrmHashBucketRec* rdb, char* res_name, char* res_class, XIDProc callback, XPointer client_data) {
    return False;
}

int XResizeWindow(Display* display, Window window, unsigned int width, unsigned int height) {
    return 0;
}

char* XResourceManagerString(Display* display) {
    return NULL;
}

int XSaveContext(Display* display, XID id, XContext context, const char* data) {
    return 0;
}

int XSelectInput(Display* display, Window window, long event_mask) {
    return 0;
}

Status XSendEvent(Display* display, Window window, Bool propagate, long event_mask, XEvent* event_send) {
    return 0;
}

int XSetClassHint(Display* display, Window window, XClassHint* class_hint) {
    return 0;
}

XErrorHandler XSetErrorHandler(XErrorHandler handler) {
    return handler;
}

void XSetICFocus(XIC ic) {
}

char* XSetIMValues(XIM im, ...) {
    return NULL;
}

int XSetInputFocus(Display* display, Window focus, int revert_to, Time time) {
    return 0;
}

char* XSetLocaleModifiers(const char* modifiers) {
    return NULL;
}

int XSetScreenSaver(Display* display, int timeout, int interval, int prefer_blank, int allow_exposures) {
    return 0;
}

int XSetSelectionOwner(Display* display, Atom selection, Window owner, Time time) {
    return 0;
}

int XSetWMHints(Display* display, Window window, XWMHints* hints) {
    return 0;
}

void XSetWMNormalHints(Display* display, Window window, XSizeHints* hints) {
}

Status XSetWMProtocols(Display* display, Window window, Atom* protocols, int count) {
    return 0;
}

Bool XSupportsLocale() {
    return True;
}

int XSync(Display* display, Bool discard) {
    return 0;
}

Bool XTranslateCoordinates(Display* display, Window src_window, Window dest_window, int src_x, int src_y, int* dest_x_return, int* dest_y_return, Window* child_return) {
    return False;
}

int XUndefineCursor(Display* display, Window window) {
    return 0;
}

int XUngrabPointer(Display* display, Time time) {
    return 0;
}

int XUnmapWindow(Display* display, Window window) {
    return 0;
}

void XUnsetICFocus(XIC ic) {
}

VisualID XVisualIDFromVisual(Visual* visual) {
    return 0;
}

int XWarpPointer(Display* display, Window src_window, Window dest_window, int src_x, int src_y, unsigned int src_width, unsigned int src_height, int dest_x, int dest_y) {
    return 0;
}

KeySym XStringToKeysym(const char* string) {
    return 0;
}

int XConnectionNumber(Display* display) {
    return 0;
}

int XStoreName(Display* display, Window window, const char* window_name) {
    return 0;
}

Status XMatchVisualInfo(Display* display, int screen, int depth, int class, XVisualInfo* vinfo_return) {
    return 0;
}

void XSetWMSizeHints(Display* display, Window window, XSizeHints* hints, Atom property) {
}

char* XKeysymToString(KeySym keysym) {
    return NULL;
}

int XGetKeyboardControl(Display* display, XKeyboardState* values_return) {
    return 0;
}

char* XGetAtomName(Display* display, Atom atom) {
    return NULL;
}

Window XDefaultRootWindow(Display* display) {
    return 0;
}

int XDefaultScreen(Display* display) {
    return 0;
}

int XQueryKeymap(Display* display, char keys_return[32]) {
    return 0;
}

KeyCode XKeysymToKeycode(Display* display, KeySym keysym) {
    return 0;
}

int XFreeColors(Display* display, Colormap colormap, unsigned long* pixels, int npixels, unsigned long planes) {
    return 0;
}

int XDisplayWidth(Display* display, int screen_number) {
    return 1024;
}

int XDisplayHeight(Display* display, int screen_number) {
    return 768;
}

int XGetSystemContentDPI(Display* display) {
    return 96;
}

char* XDisplayName(const char* string) {
    return NULL;
}

int XWidthOfScreen(Screen* screen) {
    return 1024;
}

int XHeightOfScreen(Screen* screen) {
    return 768;
}

GC XCreateGC(Display* display, Drawable drawable, unsigned long valuemask, XGCValues* values) {
    return NULL;
}

int XFreeGC(Display* display, GC gc) {
    return 0;
}

XImage* XCreateImage(Display* display, Visual* visual, unsigned int depth, int format, int offset, char* data, unsigned int width, unsigned int height, int bitmap_pad, int bytes_per_line) {
    return NULL;
}

Pixmap XCreatePixmap(Display* display, Drawable drawable, unsigned int width, unsigned int height, unsigned int depth) {
    return 0;
}

int XPutImage(Display* display, Drawable drawable, GC gc, XImage* image, int src_x, int src_y, int dest_x, int dest_y, unsigned int width, unsigned int height) {
    return 0;
}


int XFillRectangle(Display *display, Drawable d, GC gc, int x, int y, unsigned int width, unsigned int height) {
    return 0;
}

