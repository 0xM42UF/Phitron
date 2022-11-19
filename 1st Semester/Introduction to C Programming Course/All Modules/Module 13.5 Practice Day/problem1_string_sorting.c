#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s", &s);

    int i=0, LE= 26, len=strlen(s), total=0;

    int freq[LE+1];

    for(i=0; i<LE+1; i++)
    {
       freq[i] = 0;
    }

    for(i=0; i<len; i++)
    {
       freq[(s[i] - 'a') + 1]++;
    }

    for(i=0; i<LE+1; i++)
    {
       if(freq[i] > 0)
         total++;
    }

   int next = 0;
    while(next!=total)
    {
      int max= -1, index=-1;
      char ch;
      for(i=1; i<=LE; i++)
      {
         if(freq[i] > max)
         {
            max = freq[i];
            ch = i + 96;
            index = i;
         }
      }
      for(i=1; i<=max; i++)
      {
         printf("%c", ch);
      }
      freq[index] = 0;
      next++;
    }
    return 0;
}

/*
Steps -
1) Take input/ initialization part
2) Find the largest element from the string (z is the largest element which is 26)
3) LargestElement+1 size array and fill with 0;
4) After traversing string, fill the corresponding location of frequency array
5) Total available character;
6) Filter next largest value and character
*/
