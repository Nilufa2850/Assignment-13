// Write a recursive function to calculate sum of first N odd natural numbers

#include<stdio.h>
int sum (int);

int sum (int n)
{
        int s = 0 ;

        if(n==1)
                return 1 ;

        s = 2*n-1 + sum(n-1);
        return s ;
          
}

int main ()
{
        int x ;
        printf("Enter a number : ");
        scanf("%d",&x);

        printf("Sum is %d",sum(x));
        return 0;
}
