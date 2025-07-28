#include <X11/XKBlib.h>

void XkbFreeKeyboard(XkbDescPtr desc, unsigned int which, Bool free_all) {
}

void XkbFreeNames(XkbDescPtr desc, unsigned int which, Bool free_all) {
}

XkbDescPtr XkbGetMap(Display* display, unsigned int which, unsigned int device_spec) {
    return NULL;
}

XkbDescPtr XkbGetKeyboardByName(Display* display, unsigned int device_spec, XkbComponentNamesPtr names, unsigned int want, unsigned int need, Bool load) {
    return NULL;
}

Status XkbGetNames(Display* display, unsigned int which, XkbDescPtr desc) {
    return 0;
}

Status XkbGetState(Display* display, unsigned int device_spec, XkbStatePtr state_return) {
    return 0;
}

KeySym XkbKeycodeToKeysym(Display* display, KeyCode keycode, int group, int level) {
    return 0;
}

Bool XkbQueryExtension(Display* display, int* opcode_rtrn, int* event_rtrn, int* error_rtrn, int* major_rtrn, int* minor_rtrn) {
    return False;
}

Bool XkbSelectEventDetails(Display* display, unsigned int device_spec, unsigned int event_type, unsigned long bits_to_change, unsigned long values_for_bits) {
    return False;
}

Bool XkbSetDetectableAutoRepeat(Display* display, Bool detectable, Bool* supported_return) {
    return False;
}


