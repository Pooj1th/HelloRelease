#include <stdio.h>

#define APP_NAME "HelloRelease"
#define APP_VERSION "1.0.0"

int main()
{
    printf("================================\n");
    printf(" Welcome to %s\n", APP_NAME);
    printf(" Application Version: %s\n", APP_VERSION);
    printf(" Build Status: SUCCESS\n");
    printf("================================\n");

    return 0;
}
