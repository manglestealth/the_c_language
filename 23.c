#include <stdio.h>
#define MAXLINE 1000

int getlines(char line[],int maxline);

int strlens(char s[]);
int main()
{
	const double e = 2.7123123;
	e = 2.123123;

}

int strlens(char s[])
{
	int i = 0;
	while(s[i]!='\0')
	{
		i++;
	}
	return i;
}

int getlines(char line[],int maxline)
{
	int c,i;
	for (i = 0; i < maxline-1 && (c = getchar())!=EOF && c != '\n'; ++i)
	{
		line[i] = c;
	}
	if (c=='\n')
	{
		line[i] = c;
		i++;
	}
	line[i] = '\0';
	return i;
}