#include <stdio.h>
void main()
{
int h1,m1,h2,m2,h_dif,m_dif;
printf("enter the starting time:\n");
printf("enter the hour:");
scanf("%d",&h1);
printf("\nenter the mins:");
scanf("%d",&m1);
printf("\nenter the ending time:\n");
printf("enter the hour:");
scanf("%d",&h2);
printf("\nenter the mins:");
scanf("%d",&m2);
printf("starting time:%d:%d\n",h1,m1);
printf("ending time:%d:%d\n",h2,m2);
if(m2>m1)
{
m_dif=m2-m1;
}
else
{
h2--;
m_dif=60-m1-m2;
}
if(h2<h1)
{
h_dif=12-h1+h2;
}
else
{
h_dif=h2-h1;
}
printf("the difference between the timings is:\n");
printf("%d:%d\n",h_dif,m_dif);
printf("in minutes:%d",((h_dif*60)+m_dif));
}
