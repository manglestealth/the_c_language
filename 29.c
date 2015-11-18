#include <stdio.h>
#include <ctype.h>
int getch(void);
void ungetch(int c);

#define SIZE 1000 /* max of array length */

int main()
{
	int array[SIZE],n,getint(int *);
	for(n=0;n<SIZE && getint(&array[n])!=EOF;n++)
		;
	array[n] = '\0';
	for(n=0;array[n] != '\0';n++)
	{
		printf("%d\n", array[n]);
	}
	return 0;
}


int getint(int *pn)
{
	int c,sign,d;
	while(isspace(c = getch()))
		;

	if(!isdigit(c) && c!=EOF && c!='+' && c!='-')
	{
		ungetch(c);
		return 0;
	}
		
	sign = (c == '-') ? -1:1;	

	if(c== '+' || c== '-')
	{
		d = c;

		if(!isdigit(c = getch()))
		{

			if(c!=EOF)
				ungetch(c);

			ungetch(d);
			return d;
		}
	}
		

	for(*pn = 0;isdigit(c);c=getch())
		*pn = *pn * 10 + (c - '0');

	*pn *= sign;

	if(c!=EOF)
		ungetch(c);

	return c;
}

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getch(void)
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
	if(bufp >= BUFSIZE)
		printf("ungetch:too many characters\n");
	else
		buf[bufp++] = c;
}

