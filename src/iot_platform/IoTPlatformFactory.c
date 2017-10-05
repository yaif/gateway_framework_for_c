#include <stdio.h>
#include <string.h>
#include "IoTPlatformFactory.h"
#include "AWSIoTPlatform.h"

IoTPlatform* IoTPlatformFactory_create(IoTPlatformFactory* t, const char* type)
{
    IoTPlatform* iot_platform = NULL;
    if (strcmp(type, "aws") == 0) {
        AWSIoTPlatform* aws_iot_platform = AWSIoTPlatform_new();
        aws_iot_platform->init(aws_iot_platform);
        iot_platform = SUPER_PTR(aws_iot_platform, IoTPlatform);
    } else {
        fprintf(stderr, "Invalid IoT platform type.");
    };
    return iot_platform;
}

CTOR(IoTPlatformFactory)
FUNCTION_SETTING(create, IoTPlatformFactory_create);
END_CTOR

