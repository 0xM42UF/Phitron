#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    scanf("%s", &s);

    int i = 0;
    while(s[i] != '\0')
    {
        if(s[i] >= 'A' && s[i]<= 'Z')
        {
           s[i] += 32;
        }

        if(!(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y'))
         {
            printf(".%c", s[i]);
         }
        i++;
    }

    return 0;
}
