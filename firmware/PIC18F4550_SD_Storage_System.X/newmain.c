
#include <xc.h>
#include <stdint.h>

void main(void)
{
    // Disable analog functionality on applicable pins
    ADCON1 = 0x0F;

    // Configure PORTB as output
    TRISB = 0x00;
    LATB = 0x00;

    while (1)
    {
        // Main application loop
    }
}
