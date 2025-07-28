#include "X11/Xlib.h"
#include "X11/extensions/Xrandr.h"

XRRScreenResources *XRRGetScreenResourcesCurrent(Display *display, Window window) {

}

XRRCrtcInfo *XRRGetCrtcInfo(Display *display, XRRScreenResources *resources, RRCrtc crtc) {

}

XRROutputInfo *XRRGetOutputInfo(Display *display, XRRScreenResources *resources, RROutput output) {

}

void XRRFreeCrtcInfo(XRRCrtcInfo *crtc_info) {

}

XRRScreenResources *XRRGetScreenResources(Display *display, Window window) {

}

void XRRFreeScreenResources(XRRScreenResources *resources) {

}

void XRRFreeOutputInfo(XRROutputInfo*info) {

}

Status XRRSetScreenConfig(Display *dpy, XRRScreenConfiguration *config, Drawable draw, int size_index, Rotation rotation, Time timestamp) {


}

Status XRRSetCrtcConfig(Display* dpy, XRRScreenResources* resources, RRCrtc crtc, Time timestamp, int x, int y, RRMode mod, Rotation rotation, RROutput* outputs, int noutputs) {

}
