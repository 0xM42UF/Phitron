//https://codeforces.com/problemset/problem/281/A
#include<stdio.h>
#include<string.h>

int main(){

    char name[1000];
    int k, i;

    scanf("%s", name);

    k = strlen(name);

    for(i=0; i<k; i++){
        if(name[0] >= 'a' && name[0] <= 'z')
            name[0] -= 32;
    }

    puts(name);

    return 0;
}
