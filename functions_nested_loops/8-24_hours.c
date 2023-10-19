#include "main.h"
#include<stdio.h>
/**
 * jack_bauer -  used for check letter, lowercase or uppercase
 * Return:  every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			printf("%02d:%02d\n", hour, minute);
		}
	}
}
