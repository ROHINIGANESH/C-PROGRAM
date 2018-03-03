#include <stdio.h>
int main()
{
char s[100000],i,len;  
scanf("%[^\t\n]",s);
len=strlen(s); 
while(i>=0)    
{
i=len; 
printf("%c",s[i]);   
len=len-1;  
i--;  
}
return 0;
}
