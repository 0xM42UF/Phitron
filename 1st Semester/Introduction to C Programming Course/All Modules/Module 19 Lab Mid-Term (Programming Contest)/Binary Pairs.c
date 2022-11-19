#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    for(int i = 0; i < T; i++)
    {
        int n;
        scanf("%d",&n);
        char str[n + 1];
        scanf("%s", str);
        int cnt = 0;
        for(int i = 0, j = 1; str[j] != '\0'; i++, j++)
        {
            if((str[i] == '1') && (str[j] == '0'))
            {
                cnt++;
            }
            else if((str[i] == '0') && (str[j] == '1'))
            {
                cnt++;
            }
        }
        printf("%d\n",cnt);

    }
    return 0;
}
