#include <stdio.h>
int strlenu(char *);
char *alloc(int);
void afree(char *);
int strlenu2(char *);

int main()
{
	char g[] = "abcdefg";
	char *f = &g[2];
	printf("%d\n",strlenu(f));
	return 0;
}


int strlenu(char *s)
{
	int n;
	for(n=0;*s!='\0';s++)
		n++;
	return n;
}

#define MAXSIZE 10000 //栈最大宽度
static char allocbuf[MAXSIZE]; //alloc使用的存储区
static char *allocp = allocbuf; //下一个空闲位置

char *alloc(int n)
{
	if((allocbuf + MAXSIZE - allocp) >= n)
	{
		allocp +=n;
		return allocp - n;
	}else{
		return 0;
	}
}

void afree(char *p)
{
	if (p >= allocbuf && p < allocbuf+MAXSIZE)
		allocp = p;
}

int strlenu2(char *s)
{
	char *p = s;
	while(*p != '\0')
		p++;

	return p-s;
}