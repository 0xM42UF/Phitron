#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int T;
    scanf("%d", &T);
    int arr[T];
    for (int i = 0; i < T; i++)
    {
        scanf("%d%%\n", &arr[i]);
    }
    int X, Y, Z;
    for (int i = 0; i < T; i++)
    {
        if(arr[i] >= 0 && arr[i] < 60){
            X = 60 - arr[i];
            X = X + 40 + 60;
            printf("%d minutes\n", X);
        }
        if(arr[i] >= 60 && arr[i] < 80){
            Y = 80 - arr[i];
            Y = Y * 2 + 60;
            printf("%d minutes\n", Y);
        }
        if(arr[i] >= 80 && arr[i] <= 100){
            Z = 100 - arr[i];
            Z = Z * 3;
            printf("%d minutes\n", Z);
        }
    }
    return 0;
}
