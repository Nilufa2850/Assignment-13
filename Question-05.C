// Write a recursive function to calculate sum of digits of a given number.

#include<stdio.h>
int digit_sum (int);

int digit_sum (int x)
{
        if(x==0)
                return 0;

        return x%10 + digit_sum(x/10) ;  
          
}

int main ()
{
        int a ;
        printf("Enter a number : ");
        scanf("%d",&a);

        printf("Sum is %d", digit_sum(a));
        return 0;
}
