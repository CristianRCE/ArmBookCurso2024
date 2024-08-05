#include "mbed.h"

int main()
{
    DigitalIn B1_USER(BUTTON1); //objeto de la clase digitalin

    DigitalOut LD2(LED2);

    while (true) {
        LD2 = B1_USER;
    }
}
