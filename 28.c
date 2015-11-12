#include <stdio.h>
void printd(int n);
void qsort(int v[],int left,int right);
int main()
{
	int i;
	int t[] = {5,6,7,1,2,8,12,4,9};
	qsort(t,0,8);
	for(i=0;i<=8;i++)
	{
		printf("%d\n",t[i]);
	}
}

void printd(int n)
{
	if(n < 0)
	{
		n = -n;
		putchar('-');
	}

	if(n/10)
		printd(n/10);
	putchar(n%10+'0');
}



void qsort(int v[],int left,int right)
{
	int i,last;

	void swap(int v[],int i,int j);
	if(left >= right)
		return;

	swap(v,left,(left+right)/2);
	last = left;

	for(i = left+1;i<=right;i++)
		if(v[i]<v[left])
			swap(v,++last,i);
	swap(v,left,last);
	
	qsort(v,left,last-1);
	qsort(v,last+1,right);	
}


void swap(int v[],int i,int j)
{
	int temp;

	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}
void itoa(int n,char s[])
{
	static int i;
	if(n/10)
		itoa(n/10,s);

	else{
		i = 0;
		if (n < 0)
			s[i++] = '-';
	}
	s[i++] = abs(n) % 10 + '0';
	s[i]  = '\0';
}