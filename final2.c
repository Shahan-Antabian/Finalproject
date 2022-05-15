#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>
int main()
{
	int i=0, j=0 , k=0;
char *alph[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
                    "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-",
     "...-",".--","-..-","-.--","--.."};
char *num[]={"-----",".----","..---","...--","....-",".....","-....","--...","---..","----."};
char symbol[1000]={0}, substr[1000][1000]={0},  c;
printf("Enter a code with Morse symbols: ");
gets(symbol);
printf("The secret message generated is: ");
while(symbol[k] !='\0')
{
	j = 0;
	while(symbol[k] !=' ' && symbol[k]!='\0')
	{
	 substr[i][j]=symbol[k];
	 j++;
	 k++;
	}
	substr[i][j]='\0';
	 i++;
	if(symbol[k]!='\0')
	{
		k++;
	}
}
	int length=i;
for (i=0;i<length;i++)
{
  for (j=0;j<26;j++)
  {
	if(!strcmp(alph[j],substr[i]))
	{
	 printf("%c",tolower((j+65)));
	 break;
	}
  }	
  for (j=0;j<10;j++)
  {
	if(!strcmp(num[j],substr[i]))
	{
	 printf("%d",j);
	 break;
	}
   }
	}
 }	
