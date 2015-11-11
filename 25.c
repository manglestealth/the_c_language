#include <stdio.h>
#define MAXLENGTH 1000
void squeeze1(char s[],char c);
void strcat1(char s[],char t[]);
void squeeze2(char s[],char t[]);
int any(char s1[],char s2[]);
unsigned getbits1(unsigned x,int p,int n);
unsigned setbits1(unsigned x,int p,int n,unsigned y);
int bitsearch(int x,int v[],int n);
void expands(char s1[],char s2[]);
void itob(int n,char s[],int b);

int main()
{

	char s2[MAXLENGTH];
	itob(-47,s2,16);
	printf("%s\n", s2);
}

void squeeze1(char s[],char c)
{
	int i,j;
	for(i=j=0;s[i]!='\0';i++)
	{
		if(s[i]!= c)
		{
			s[j++] = s[i];
		}
	}
	s[j] = '\0';
}

void strcat1(char s[],char t[])
{
	int i,j;
	i = j = 0;
	while(s[i]!='\0')
		i++;

	while((s[i++]=t[j++])!='\0')
		;
}

void squeeze2(char s[],char t[])
{
	int i,n,k;
	for (int i = k = 0; s[i]!='\0'; ++i)
	{
		for(n=0;(t[n]!='\0') && (s[i]!=t[n]);++n)
			;
		if(t[n]=='\0')
			s[k++] = s[i];
	}
	s[k] = '\0';
}

int any(char s1[],char s2[])
{
	int i,n;
	for(i = 0;s1[i]!='\0';i++)
		for(n=0;s2[n]!='\0';n++)
			if(s1[i]==s2[n])
				return i;

	
	return -1;	

}

unsigned getbits1(unsigned x,int p,int n)
{
	return (x >> (p+1-n)) & (~(~0 << n));
}

int bitsearch(int x,int v[],int n)
{
	int low,high,mid;
	low = 0;
	high = n-1;
	while(low <= high)
	{
		mid = (high - low)/2;
		if(x < mid)
		{
			high = mid;
		}else if(mid < x)
		{
			low = mid;
		}else if(mid == x)
		{
			return mid;
		}
	}
	return -1;
}

void expands(char s1[],char s2[])
{
	char c;
	int i,j;
	i = j = 0;
	while((c=s1[i++])!='\0')
	{
		if(s1[i]=='-' && s1[i+1]>=c)
		{
			i++;
			while(c<s1[i])
				s2[j++] = c++;
		}else{
			s2[j++] = c;
 		}
	}
	s2[j] = '\0';
}

void itob(int n,char s[],int b)
{
	int sign,j,i;
	i = 0;
	if((sign = n) < 0)
		n = -n;

	i = 0;

	do{
		j = n%b;
		s[i++] = (j<=9)? j+'0' : j+'a'-10;
	}while((n /= b)>0);

	if(sign < 0)
		s[i++] = '-';
		s[i] = '\0';
}