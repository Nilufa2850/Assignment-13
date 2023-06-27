// Write a recursive function to calculate sum of squares of first n natural numbers

#include<stdio.h>
int sqr_sum (int);

int sqr_sum (int n)
{
        int s = 0 ;

        if(n==1)
                return 1 ;

        s = n*n + sqr_sum(n-1);
        return s ;
          
}

int main ()
{
        int x ;
        printf("Enter a number : ");
        scanf("%d",&x);

        printf("Sum is %d", sqr_sum(x));
        return 0;
}
