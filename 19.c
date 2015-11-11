#include <stdio.h>
#define MAXLINE 1000

int getlines(char line[],int maxline);
void copy(char to[],char from[]);

int main()
{
    int len; /*当前行的长度*/
    int max; /*最长行的长度*/
    char line[MAXLINE]; /*当前输入行*/
    char longest[MAXLINE]; /*最长输入行*/
    
    max = 0;
    while ((len=getlines(line,MAXLINE))>0)
    {
        if (len > max)
        {
            max = len;
            copy(longest,line);
        }
    }
   
    if (max > 0)
    {
        printf("%s",longest);
        
    }
    return 0;
}

int getlines(char line[],int maxline)
{
    int c,i;
    
    for (i=0; i<maxline-1 && (c=getchar())!=EOF && c!='\n'; i++)
    {
        line[i] = c;
    }
    if (c=='\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
   
    return i;
}

void copy(char to[],char from[])
{
    int i;
    i = 0;
    while ((to[i]=from[i])!='\0') {
        i++;
    }
}