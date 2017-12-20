#include<stdio.h>
void main()
{
int a[10],i,t[10],n,count1=1,k,j;
printf("enter the number of elements:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
printf("\nenter the number of shift:");
scanf("%d",&k);
for(i=1;i<=k;i++)
{
t[i]=a[i];
}
for(i=1;i<=n-k;i++)
{
a[i]=a[k+i];
count1++;
}
j=1;
for(i=count1;i<=n;i++)
{
a[i]=t[j++];
}
for(i=1;i<=n;i++)
{
printf("%d\n",a[i]);
}
}
