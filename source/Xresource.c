#include "internal.h"

XrmDatabase XrmGetStringDatabase(const char* data) {
    return NULL;
}

Bool XrmGetResource(XrmDatabase database, const char* resource_name, const char* resource_class, char** type_return, XrmValue* value_return) {
    return False;
}

void XrmDestroyDatabase(XrmDatabase database) {
}
