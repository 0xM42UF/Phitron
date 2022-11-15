#include<stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
   for(int i=0; i<t; i++)
    {
       int n,c,sum=0;
       scanf("%d %d",&n,&c);
       int arr[n];
       for(int i=0; i<n; i++)
       {
           scanf("%d",&arr[i]);
       }
       for(int i=0; i<n; i++)
       {
           sum = sum + (arr[i]*2);
       }
       if(sum>c)
       {
           printf("NO\n");
       }
       else
       {
           printf("YES\n");
       }

    }
    return 0;
}




