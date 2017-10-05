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

void IoTPlatformFactory_destory(IoTPlatformFactory* t, IoTPlatform* iot_platform, const char* type)
{
    if (strcmp(type, "aws") == 0) {
        AWSIoTPlatform* aws_iot_platform = SUB_PTR(iot_platform, IoTPlatform, AWSIoTPlatform);
        lw_oopc_delete(aws_iot_platform);
    } else {
        fprintf(stderr, "Invalid IoT platform type.");
    }
}

CTOR(IoTPlatformFactory)
FUNCTION_SETTING(create, IoTPlatformFactory_create);
FUNCTION_SETTING(destory, IoTPlatformFactory_destory);
END_CTOR

