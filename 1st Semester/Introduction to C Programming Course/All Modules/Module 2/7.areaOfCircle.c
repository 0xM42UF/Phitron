#include<stdio.h>
int main(){
    int radius;
    printf("Enter the value of radius : ");
    scanf("%d",&radius);

    float area ;
    area = 3.1416 *radius*radius;
    printf("The area of the circle is : %f\n",area);
    return 0;
}