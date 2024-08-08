#include "mbed.h"

int main()
{
    DigitalIn B1_USER(BUTTON1);
    // DigitalOut Trigger_sensor();
    // DigitalIn Echo_sensor();
    DigitalOut LD2(LED2); 

    while (true){
        if(B1_USER==0) 
        {
        LD2=1; // prendo el led.
        wait_us(1000000);
        LD2=0; // prendo el led.
        wait_us(1000000);
        }
        else
        {
        LD2=0; //apago el led.
        }
    }
}
