#include <stdio.h>
#define MAXLINE 1000
int getlines(char line[],int maxline);
void copy(char to[],char from[]);
int lower(char c);
int main()
{
	int len;
	int max = 0;
	char line[MAXLINE];
	char longest[MAXLINE];

	while((len = getlines(line,MAXLINE)) > 0)
	{
		// if(len > max)
		// {
		// 	max = len;
		// 	copy(longest,line);
		// }
		printf("%s\n",line);

	}

	// if(max > 0)
	// {
	// 	printf("%s",longest);
	// }
	return 0;
}

int getlines(char line[],int maxline)
{
	int c,i;
	for (i = 0; i < maxline-1 && (c = getchar())!=EOF && c != '\n'; ++i)
	{
		line[i] = lower(c);
	}
	if (c=='\n')
	{
		line[i] = c;
		i++;
	}
	line[i] = '\0';
	return i;
}

void copy(char to[],char from[])
{
	int i = 0;
	while((to[i] = from[i])!='\0')
		i++;
}
int lower(char c)
{
	if(c>='A'&&c<='Z')
		return 'a'-'A'+c;
	else
		return c;
}