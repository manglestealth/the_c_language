#include <stdio.h>
int main()
{
	int c,white,other,i,j;
	int oc[10];
	white = other = 0;
	for(i=0;i<10;i++)
	{
	oc[i] = 0;
	}
	
	while((c=getchar())!=EOF)
	{
		if(c>='0'&&c<='9')
		{
			oc[c-'0']++;
		}else if(c==' '|| c=='\t' || c=='\n')
		{
			white++;
		}else
		{
			other++;
		}
	}
	printf("white:%d,other:%d\n",white,other);

	for(j=0;j<10;j++)
	{
	printf("%d:%d\n",j,oc[j]);
	}
	return 0;
}
