#include<stdio.h>
int main()
{
    int a,i,b=0;
    scanf("%d",&a);
    for(i=2; i<a-1; i++)
        {
            if(a%i==0)
            {
                b++;
            }
        }

            if(b == 0)
            {
                printf("Prime");
            }

            else
            {
                printf("Composite");
            }
    return 0;
}

