#include <stdio.h>
#include <string.h>

int main()
{
    int i=0, j;

    char s1[100], s2[100];

    scanf("%s %s", &s1, &s2);

    while(s1[i] != '\0' && s2[i] != '\0')
    {
        if(s1[i] >= 'A' && s1[i] <= 'Z')
         s1[i] += 32;

        if(s2[i] >= 'A' && s2[i] <= 'Z')
         s2[i] += 32;

        i++;
    }

    i=0;
    while(i < strlen(s1))
    {
      if(s1[i] < s2[i]){
         printf("-1\n");
         return 0;
      }else if(s1[i] > s2[i]){
         printf("1\n");
         return 0;
      }
      i++;
    }

    printf("0\n");
    return 0;
}
