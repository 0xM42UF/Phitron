#include <stdio.h>

int is_vowel(char x);

int main()
{
   char ch;
   ch = getchar();
   getchar();

   if(is_vowel(ch)== 1)
      printf("The character is a vowel.\n");
   else
      printf("The character is a consonant.\n");


   return 0;
}

int is_vowel(char x)
{
   if(x>='A' && x<='Z')
      x+=32;

   if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
      return 1;
   else
      return 0;
}
