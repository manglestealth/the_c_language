#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXLINE 1000
int getlines(char s[],int maxline);
int strindex(char s[],char t[]);
int strrindex(char s[],char t[]);
double atof(char s[]);
char pattern[1000] = "hell";

int main()
{

	// char line[MAXLINE];
	// int found = 0;
	// while(getlines(line,MAXLINE) > 0)
	// {
	// 	found = strrindex(line,pattern);
	// 	printf("%d\n",found);
	// }
	// char s[] = "123";
	// double f = atof(s);
	// printf("%f\n", f);
	int c;
	c = getc(stdin);
	c = getc(stdin);

	ungetc(c,stdin);
	c = getc(stdin);
	printf("%c\n",c);
	return 0;
}

int getlines(char s[],int maxline)
{
	int i = 0;
	int c;
	while(--maxline >0 && (c=getchar())!=EOF && c!='\n')
	{
		s[i++] = c;
	}	
		if(c == '\n')
			s[i++] = c;

		s[i] = '\0';

		return i;
	
}

int strindex(char s[],char t[])
{
	int i,j,k;
	for (i = 0; s[i] != '\0'; ++i)
	{
		for(j=i,k=0;t[k]!='\0' && s[j]==t[k];j++,k++)
			;
		if(k>0 && t[k]=='\0')
		{
			return i;
		}
	}
	return -1;
}

int strrindex(char s[],char t[])
{
	int i,j,k;
	for(i=strlen(s)-strlen(t);i>=0;i--)
	{
		for(j=i,k=0;s[j]==t[k] && t[k]!='\0';j++,k++)
			;
		if(t[k]=='\0' && k>0)
			return i;
	}
	return -1;
}

double atof(char s[])
{
	double val,power;
	int i,sign,exps;

	for(i=0;isspace(s[i]);i++)
		;

	sign = (s[i]=='-') ? -1:1;

	if(s[i]=='-'||s[i]=='+')
		i++;

	
	for(val=0.0;isdigit(s[i]);i++)
	{
		val = val*10.0 + (s[i]-'0');
	}

	if(s[i]=='.')
		i++;
	for (power = 1.0;isdigit(s[i]);i++)
	{
		val = val*10.0+(s[i]-'0');
		power *= 10.0;
	}
	val = val*sign/power;

	if(s[i]=='e'||s[i]=='E')
	{
		sign = (s[++i]=='-')?-1:1;
		if(s[i]=='-'||s[i]=='+')
		i++;

		for(exps=0;isdigit(s[i]);i++)
		{
			exps = 10*exps + (s[i]-'0');
			if(sign==1)
			{
				while(exps-- > 0)
				
					val = val*10;
				
			}else{
				while(exps-- >0)
				
					val = val/10;
				
			}
		}
	}

	return val;

}