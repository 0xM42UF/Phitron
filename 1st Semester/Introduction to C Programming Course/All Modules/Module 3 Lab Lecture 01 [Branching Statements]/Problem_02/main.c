#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter your two number: ");
    scanf("%d%d",&x,&y);

    if(x>y)
    {
        printf("X is Large.");
    }
    else if(x<y)
    {
        printf("Y is Large.");
    }
    else
    {
        printf("They are Equal.");
    }



   return 0;
}
//Inside the comments is fine, let's assume it's the fast option and the easier way is above.

/*#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter your two number: ");
    scanf("%d%d",&x,&y);

    if(x>y)
    {
        printf("X is Large.");
    }
    else
    {
        if(x<y)
        {
            printf("Y is Large. ");
        }
        else
        {
            printf("They  are Equal.");
        }

    }

   return 0;
}
*/
