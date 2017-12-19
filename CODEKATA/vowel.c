#include<stdio.h>
void main()
{
char b;
scanf("%c",&b);
if(b=='a' || b=='A' || b=='e' || b=='E' || b=='i' || b=='I' || b=='o' || b=='O' || b=='u' || b=='U')
printf("Vowel");
else
printf("Consonant");
}
