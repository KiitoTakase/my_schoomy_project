#include <SchooMyUtilities.h>

int main(void) {
    int distance;
    while (1) {
        distance = readDistance();
        if (distance <= 15) {
            ledOn();
        } else {
            ledOff();
        }
        delayMs(100);
    }
    return 0;
}
