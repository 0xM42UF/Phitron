#include <stdio.h>

int is_leap_year(int yr);
int is_distinct(int yr);

int main()
{
   int year;
   scanf("%d", &year);

   int yes = is_leap_year(year);
   int dis = is_distinct(year);

   dis ? printf("Beautiful ") : printf("Ugly ");

   yes ? printf("Leap year") : printf("Not leap year");
   return 0;
}


int is_leap_year(int yr)
{
   if((yr%400==0) || (yr%4==0 && yr != 100))
      return 1;
   else
      return 0;
}

int is_distinct(int yr)
{
   int c[10] = {0,0,0,0,0,0,0,0,0,0};

   while(yr>0)
   {
      int idx = yr%10;
      c[idx]++;
      yr/= 10;
   }
   for(int i=0; i<10; i++)
   {
      if(c[i] > 1)
         return 0;
   }
   return 1;
}
