#include <stdio.h>
#define SIGN 'a'
int main()
{
	int c,lastc;
	lastc = SIGN;
	while ((c = getchar())!=EOF)
	{
	if(c != ' ')
		putchar(c);
	if(c == ' ')
		if(lastc != ' ')
			putchar(c);
	lastc = c;
	}
	return 0;
}
