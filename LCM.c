#include<stdio.h>
 int lcm(int , int);
 int main()
 {
     int a,b,l;
     printf("Enter 2 no's to get their lcm:");
     scanf("%d%d",&a,&b);
     l = lcm(a,b);
     printf("LCM of %d & %d is %d",a,b,l);
     return 0;
 }
 int temp = 1;
 int lcm(int x,int y)
 {

     if(temp%x==0 && temp%y==0)
        return temp;
     else
     {
         temp++;
         lcm(x,y);
     }
 }
