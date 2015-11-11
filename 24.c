#include <stdio.h>
int atoi(char s[]);
double htois(char s[]);
enum INDEX{NO,YES};
int main()
{
	double b = htois("0xff112030acd");
	printf("%f\n",b);
}

int atoi(char s[])
{
	int n = 0;
	for (int i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
	{
		n = n*10 + (s[i] - '0');
	}
	return n;
}

double htois(char s[])
{
	int n = 0;
	 double all = 0;
	unsigned char index = YES;
	if(s[n]=='0')
		++n;
	else
		index = NO;

	if(s[n]=='x'|| s[n]=='X')
		++n;
	else
		index = NO;

	for (; index == YES; ++n)
	{
		if(s[n] >= '0' && s[n] <= '9')
		{
			all = all*16 + (s[n] - '0');

			
		}

		else if(s[n] >= 'a' && s[n] <= 'f')
			all = all*16 + (s[n] - 'a' + 10);
		else if (s[n] >= 'A' && s[n] <= 'F')
			all = all*16 + (s[n] - 'A' + 10);
		else 
			index = NO;

	}
	return all;
}