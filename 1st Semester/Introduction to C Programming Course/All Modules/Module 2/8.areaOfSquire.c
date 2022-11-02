#include<stdio.h>
int main(){
    int height,width;
    printf("Enter the value for height : ");
    scanf("%d",&height);
    printf("Enter the value for width : ");
    scanf("%d",&width);

    float area;
    area =0.5* height * width;
    printf("The area of the triangle is : %f\n",area);
    return 0;
}