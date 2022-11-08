#include<stdio.h>
#include<string.h>

int main(){
    char name[100];
    int i;

    fgets(name, sizeof(name), stdin);

    for(i=0; name[i] != '\0'; i++)
    {
        if(name[i]>=97 && name[i]<=122)
        {
            name[i]-= 32;
        }

    }

    puts(name);

    return 0;
}
