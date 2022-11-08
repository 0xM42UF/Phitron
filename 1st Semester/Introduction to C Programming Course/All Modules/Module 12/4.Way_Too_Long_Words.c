//https://codeforces.com/problemset/problem/71/A
#include<stdio.h>
#include<string.h>

int main(){

    char name[100];
    int g, n, i;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {

        scanf("%s", name);

        g = strlen(name);

        if(g>10){
            printf("%c%d%c\n", name[0], g-2, name[g-1]);
        }
        else{
            puts(name);
        }
    }

    return 0;
}
