#include <stdio.h>
#define MAXLINE 1000

int getlines(char line[],int maxline);
int removes(char s[]);
void reverses(char s[]);
int main()
{
	char line[MAXLINE];
	int len;
	while((len = getlines(line,MAXLINE))>0)
	{	
		reverses(line);
		printf("%s\n", line);
	}	

	return 0;
}

int getlines(char line[],int maxline)
{
	int c,i,j;

	for(i=0;(c = getchar())!=EOF && i < maxline-1 && c != '\n';i++)
	{	
		if(c=='\t')
		{
			line[i] = 't';
		}else
		line[i] = c;
		
	}
	if(c == '\n')
	{
		line[i] = c;
		j = i+1;
	}
	line[j] = '\0';
	return i;
}

int removes(char s[])
{	
	int i = 0;
	while(s[i] != '\n')
		++i;

	for(;i>=0 && (s[i]==' '|| s[i]=='t'||s[i]=='\n');--i)
		;

	if(i>=0)
	{
		s[++i] = '\n';
		s[++i] = '\0';
	}
	return i;
}

void reverses(char s[])
{
	int i = 0;
	while(s[i] != '\0')
		i++;
	--i;
	if(s[i] == '\n')
		--i;
	
	int j = 0;
	char temp;
	while(i > j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		--i;
		++j;
	}
}