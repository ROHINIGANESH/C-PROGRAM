#include<stdio.h>
void main()
{
int a=7,d=0,i,s=0,count=1;
char g[20];
printf("enter the expression");
/* a+aa+aaa+aaaa */
scanf("%s",g);
for(i=0;g[i]!='\0';i++)
{
if(g[i]=='+')
{
count++;
}
}
for(i=1;i<=count;i++)
{
d=d*10+a;
s=s+d;
}
printf("%d",s);
}
