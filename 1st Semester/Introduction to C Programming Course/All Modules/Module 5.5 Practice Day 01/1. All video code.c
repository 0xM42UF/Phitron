/*এখন পর্যন্ত ভিডিওগুলাতে যতগুলা কোড দেখানো হয়েছে সবগুলো কোডব্লকস এ টাইপ করে রান করে দেখ। প্রতিক্ষেত্রে মিলিয়ে দেখ আউটপুট মিলে কিনা।*/
/*
//First C program
#include<stdio.h>
int main()
{
    printf("Hello World.!");
    return 0;
}
*/

/*
//Happy Birthday
#include<stdio.h>
int main()
{
    printf("Happy Birthday\n");
    printf("Have fun");
    return 0;
}
*/

/*
//Variable declaration
#include<stdio.h>
int main()
{
    int price=20+30;
    printf("%d\n",price);

    int marks=90;
    printf("%d\n",marks);

    price=marks-10;
    printf("%d\n",price);
    return 0;
}
*/

/*
//variable type
#include<stdio.h>
int main()
{
    int price=10;
    printf("Price: %d\n",price);

    float temperature=30.5;
    printf("Temperature: %f\n",temperature);

    double temp=30.5;
    printf("Temp: %lf\n", temp);

    char character = '<';
    printf("Character: %c\n", character);
    return 0;
}
*/

/*
//variable input
#include<stdio.h>
int main()
{
    int marks_english, marks_math;
    scanf("%d %d",&marks_english,&marks_math);
    int total_marks= marks_english+marks_math;
    printf("Marks: %d", total_marks);
    return 0;
}
*/

/*
//type_conversion
#include<stdio.h>
int main()
{
    int number=10;
    double realnumber=number;
    printf("Number: %d,Real Number: %lf\n",number,realnumber);
    return 0;
}
*/

/*
//explosive_conversion
#include<stdio.h>
int main()
{
    double realnumber=10.5;

    printf("Real Number: %d\n",(int)realnumber);
    return 0;
}
*/

/*
//Find the perimeter and are of circle.
#include<stdio.h>
int main()
{
    printf("Enter the radius: ");

    double radius;
    scanf("%lf",&radius);

    const PI=3.1416;

    double perimeter = 2*PI*radius;
    printf("Perimeter = %.2lf\n", perimeter);

    double area = PI*radius*radius;
    printf("area: %.2lf\n",area);

    return 0;
}
*/

/*
//**********************If Else**********************

//Pass failed condition using if else.
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your result: ");
    scanf("%d", &marks);
    if(marks >=40)
    {
        printf("You have passed.\n");
        printf("Congrats");
    }
    else{
        printf("You have failed.\n");
    }
}
*/

/*
//absolute value
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num<0){
        num=-num;
    }
    printf("%d",num);
}
*/

/*
//relational operator: < <= >= == !=

#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a=8,b=18;
    bool condition = a<b;

    if(condition){
        printf("True");
    }
    else{
        printf("False");
    }
}
*/

//6 3 -> 6 id divisible by 3
//8 3 -> 8 is not divisible by 3
//7 0 -> you cannot divided by 0
/*
#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d",&a,&b);

    if(b != 0){
        if(a%b==0){
            printf("%d is divisible by %d\n",a,b);
        }
        else{
            printf("%d is not divisible by %d\n",a,b);
        }
    }else{
        printf("You cannot divided by 0\n");
    }
}
*/

// 2 -> positive
// 0 -> zero
//-3 -> negative
/*
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>0){
        printf("positive");
    }else{
        if(a==0){
            printf("Zero");
        }else{
            printf("Negative");
        }
    }
}
*/

//************Logical Operator *******
/*
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);

    if(num>=1 && num<=10){
        printf("Okay");
    }else
    {
        printf("Not okay");
    }
}
*/

//******************a,e,i,o,u**********
/*
#include<stdio.h>
#include<stdbool.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("Vowel");
    }
    else{
        printf("Consonent");
    }
}
*/

//use ! operator to change the condition value.*********
/*
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);

    if(!(num>=1 && num<=10)){
        printf("Okay");
    }else
    {
        printf("Not okay");
    }
}
*/
//*********************Leap year**********
//divisible by 4
//not divisible by 100
  //divisible by 400
/*
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    bool is_leap_year =(n%4==0) && (n%100!=0 || n%400==0);

    if(is_leap_year){
        printf("Leap year.");
    }
    else{
        printf("Not leap year.");
    }
}
*/

//***********Switch case*********
/*
#include<stdio.h>
int main()
{
    int num1,num2;
    char op;
    scanf("%d %c %d", &num1,&op,&num2);

    switch (op){
        case '+':
            printf("%d", num1+num2);
            break;
        case '-':
            printf("%d", num1-num2);
            break;
        case '*':
            printf("%d", num1*num2);
            break;
        case '/':
            printf("%d", num1/num2);
            break;
        default:
            printf("Unknown operator");
            break;
    }
}
*/

//*********************Ternary Operator**********
//Condition ? True val: False val;
/*
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);

    int abs=(num >=0 ? num : -num);

    printf("%d",abs);
}
*/

//**********************Loop************
//For loop structure
/*#include<stdio.h>
int main()
{
    int n=20;
    for(int i=0;i<=n;i++){
        printf("%d\n", i);
    }
}*/

















