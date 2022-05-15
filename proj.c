#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
 char *alphamorse[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
 "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-", "...-",".--","-..-","-.--","--.."};
 char *nummorse[]={"-----",".----","..---","...--","....-",".....","-....","--...","---..","----."};
 
 int i = 0;
 char str[1000];
 printf("Enter your secret message: ");
 gets(str);
 printf("The Morse Code of your secret message is: ");
  while(str[i]!='\0')
  {
	 if(str[i]!=' '&&(!isdigit(str[i])))  
	 {
    	 printf("%s ",alphamorse[toupper(str[i])-65]);  
	 }
	 if(str[i] == ' ')
	 {
		 printf(" ");
	 } 
    if(isdigit(str[i])&&str[i]!=' ')
    {
      printf("%s ",nummorse[str[i]-48]);    
    }
   i++;
  }
}
