#include <stdio.h>
#include <string.h>
#include "IoTPlatform.h"

void IoTPlatform_set_name(IoTPlatform *t, const char *name)
{
    strncpy(t->_name, name, NAME_MAX_LENGTH);
}

const char *IoTPlatform_get_name(IoTPlatform *t)
{
    return t->_name;
}

void IoTPlatform_init(IoTPlatform *t, const char *name)
{
    strncpy(t->_name, name, NAME_MAX_LENGTH);
}

ABS_CTOR(IoTPlatform)
FUNCTION_SETTING(set_name, IoTPlatform_set_name);
FUNCTION_SETTING(get_name, IoTPlatform_get_name);
FUNCTION_SETTING(init, IoTPlatform_init);
END_ABS_CTOR

