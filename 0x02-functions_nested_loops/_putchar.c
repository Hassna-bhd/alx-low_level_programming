#include "main.h"
#include <unistd>
/**
 *_putchar -writs the character c to stdout
 *@c the charcter to print
 *
 *Return :On success 1
 *On error -1 is returned 
*/
int _putchar(char c)
{
	return(write(1, &c, 1));
}
