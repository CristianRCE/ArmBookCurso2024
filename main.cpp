#include "mbed.h"

int main()
{
    DigitalIn B1_USER(BUTTON1);

    DigitalOut LD2(LED2); 

    while (true) {
        if (B1_USER==1) 
        {
        LD2=1; // prendo el led.
        }
        else
        {
        LD2=0; //apago el led.
        }
    }
}
