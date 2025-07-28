#include "internal.h"
#include "GL/glx.h"

XVisualInfo* glXChooseVisual(Display* dpy, int screen, int* attribList) {

}

GLXContext glXCreateContext(Display* dpy, XVisualInfo* info, GLXContext ctx, Bool direct) {

}

Bool glXMakeCurrent(Display* dpy, GLXDrawable drawable, GLXContext ctx) {

}

GLXContext glXGetCurrentContext(void) {

}

void glXSwapBuffers(Display* dpy, GLXDrawable drawable) {

}

typedef void(*my_proc)();
my_proc glXGetProcAddress(const GLubyte * procName) {

}

__GLXextFuncPtr glXGetProcAddressARB(const GLubyte* procName) {

}

void glXDestroyContext(Display *dpy, GLXContext ctx) {

}

const char* glXQueryExtensionsString(Display* dpy, int screen) {

}
