#include <stdio.h>
#include "alerter_stub.h"

int networkAlertStub(float celcius);

int networkAlertStub(float celcius) {
    printf("ALERT: Temperature is %.1f celcius.\n", celcius);
    // Return 200 for ok
    // Return 500 for not-ok
    // stub always succeeds and returns 200
    if (celcius > 200)
    {
        return 500;
    }
    return 200;
}
