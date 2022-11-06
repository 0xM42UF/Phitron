
#include <stdio.h>
int main()
{
    char sen[1000];
    //scanf er poriborta (fgets) use hobe
    fgets(sen,sizeof(sen),stdin);

    int i=0,coun=0;
    while(sen[i ]!='\0')
    {
        //vowel holo counter++
        if(sen[i]=='a')
            coun++;
        else if(sen[i]=='e')
            coun++;
        else if(sen[i]=='i')
            coun++;
        else if(sen[i]=='o')
            coun++;
        else if(sen[i]=='u')
            coun++;
        i++;

    }
    printf("%d",coun);

    return 0;
}
