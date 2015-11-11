#include <stdio.h>
#include <limits.h>
int main()
{
	printf("signed char min = %d\n",(char)(signed char) ~0 >> 1);

}
