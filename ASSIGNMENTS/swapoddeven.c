#include<stdio.h>
#include<string.h>
void main()
{
char str[10],temp;
int i,len;
printf("enter the string\n");
scanf("%s",str);
len=strlen(str);
if(len%2==0)
{
for(i=0;i<len;i+=2)
{
temp=str[i];
str[i]=str[i+1];
str[i+1]=temp;
}
printf("%s",str);
}
else
{
for(i=0;i<len-1;i+=2)
{
temp=str[i];
str[i]=str[i+1];
str[i+1]=temp;
}
printf("%s",str);
}
}
