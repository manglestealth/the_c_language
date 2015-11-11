#include <stdio.h>
int main()
{
int c,nl,nt,nb;
for(nl=nt=nb=0;(c = getchar())!=EOF;)
{
	if(c=='\n')
		nl++;
	if(c=='\t')
		nt++;
	if(c==' ')
		nb++;
}
printf ("nl:%d nt:%d nb:%d\n",nl,nt,nb);
return 0;
}
