#include <stdio.h>
#include <ctype.h>
#include <math.h>

#define MAXOP 100 /*操作数和操作符的最大长度*/
#define NUMBER '0' /*标示找到了一个数*/

double atof(char s[]);
void pushu(double);
double popu(void);
int gettopu(char s[]);
int getch(void);
void ungetch(int c);
void clearu(void);
int main()
{
	int type;
	char s[MAXOP];
	double op1,op2;
	while((type = gettopu(s)) != EOF)
		{
			switch(type){
				case NUMBER:
					pushu(atof(s));
					break;

				case '+':
					pushu(popu()+popu());
					break;


				case '-':
					op2 = popu();
					pushu(popu()-op2);
					break;


				case '*':
					pushu(popu()*popu());		
					break;

				case '/':
					op2 = popu();
					if(op2 != 0.0)
						pushu(popu()/op2);
					else
						printf("error:zero divisor\n");
					break;
				case '%':
					op2 = popu();
					if(op2 != 0.0)
						pushu(fmod(popu(),op2));
					else 
						printf("error:zero divisor\n");	
					break;	
				case '\n':
					printf("\t%.8g\n",popu());
					break;


				case '?':
					op2 = popu();
					printf("\t%.8g\n", op2);
					pushu(op2);	
					break;	

				case 'c':
					clearu();
					break;

				case 'd':
					op2 = popu();
					pushu(op2);		
					pushu(op2);		
					break;

				case 's':
					op1 = popu();
					op2 = popu();
					pushu(op1);
					pushu(op2);
					break;

						
				default:
					printf("unknown command %s\n",s);
					break;				

			}
		}
	return 0;
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


#define MAXVAL 100 /*栈val的最大深度*/
int sp = 0; /*下一个空闲栈的位置*/
double val[MAXVAL]; /*值栈*/

void pushu(double f)
{
	if(sp < MAXVAL)
		val[sp++] = f;
	else
		printf("error:stack full,can't push %g\n",f);
}

double popu(void)
{
	if(sp > 0)
		return val[--sp];
	else
		printf("error:stack empty\n");
		return 0.0;
}
void clearu(void)
{
	sp = 0;
}
int gettopu(char s[])
{
	int i,c;
	while((s[0]= c = getch())==' '||c=='\t')
		;

	s[1] = '\0';

	if(!isdigit(c) && c!='.')
		return c;

	i = 0;
	if(isdigit(c))
		while(isdigit(s[++i] = c = getch()))
			;

	if(c=='.')
		while(isdigit(s[++i] = c = getch()))
			;

	s[i] = '\0';

	if(c!=EOF)
		ungetch(c);

	return NUMBER;				

}

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getch(void)
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
	if(bufp >= BUFSIZE)
		printf("ungetch:too many characters\n");
	else
		buf[bufp++] = c;
}