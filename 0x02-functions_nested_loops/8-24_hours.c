#include "main.h"

/**
 * jack_bauer -  prints every minute of the day of Jack Bauer,
 *			 starting from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int hours, mins;

	for (hours = 0; hours <= 24 ; hours++)
	{
		for (mins = 0 ; mins <= 59 ; mins++)
		{
			_putchar((hours / 10) + 48);
			_putchar((hours % 10) + 48);
			_putchar(':');
			_putchar((mins / 10) + 48);
			_putchar((mins % 10) + 48);
			_putchar('\n');
		}
	}
}
