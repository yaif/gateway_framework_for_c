#include <stdio.h>
#include <stdlib.h>
#include "AWSIoTPlatform.h"

void AWSIoTPlatform_init(AWSIoTPlatform *t)
{
    IoTPlatform* iot_platform =  SUPER_PTR(t, IoTPlatform);
    iot_platform->set_name(iot_platform, "AWS IoT Platform");
}

CTOR(AWSIoTPlatform)
SUPER_CTOR(IoTPlatform);
FUNCTION_SETTING(init, AWSIoTPlatform_init);
END_CTOR
