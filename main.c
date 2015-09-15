#include <msp430g2553.h>

void main(void)
{
	/* stop watchdog timer */
	WDTCTL = WDTPW | WDTHOLD;

	
}