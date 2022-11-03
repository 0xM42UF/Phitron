#include <stdio.h>
int main()
{
    int i,player,run,cnt=0;
    scanf("%d",&player);
    scanf("%d",&run);
    int score[player];
    for(i=0 ;i<player; i++)
    {
        scanf("%d",&score[i]);
    }
    for(i=0; i<player; i++)
    {
        if(score[i]<run)
        {
            cnt++;
        }
    }

    return 0;
}
