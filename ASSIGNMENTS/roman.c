#include<stdio.h>
#include<string.h>
void main()
{
char str[10];
int i,len,j,a[10],b,count=0;
printf("enter the roman letters:\n");
scanf("%s",str);
len=strlen(str);
for(i=0;i<len;i++)
{
if(str[i]=='I')
{
a[i]=1;
}
else if(str[i]=='V')
{
a[i]=5;
}
else if(str[i]=='X')
{
a[i]=10;
}
else if(str[i]=='L')
{
a[i]=50;
}
else if(str[i]=='C')
{
a[i]=100;
}
else
{
break;
}
}
if(len==1)
{
for(i=0;i<len;i++)
{
if(str[i]=='I')
{
printf("1");
}
else if(str[i]=='V')
{
printf("5");
}
else if(str[i]=='X')
{
printf("10");
}
else if(str[i]=='L')
{
printf("50");
}
else if(str[i]=='C')
{
printf("100");
}
}
}
else{
for(i=0;i<len-1;i++)
{
for(j=1;j<len;j++)
{
if(count==0)
{
if(a[i]<a[j])
{
b=a[j]-a[i];
count++;
}
else
{
b=a[i]+a[j];
count++;
}
}
}
}
for(i=count;i<len-1;i++)
{
for(j=count+1;j<len;j++)
{
if(a[i]<a[j])
{
b=b-a[j];
count++;
}
else
{
b=b+a[j];
count++;
}
}
}
printf("%d",b);
}
}
