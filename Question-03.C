// Write a recursive function to calculate sum of first N EVEN natural numbers

#include<stdio.h>
int evensum (int);

int evensum (int n)
{
        int s = 0 ;

        if(n==1)
                return 2 ;

        s = 2*n + evensum(n-1);
        return s ;
          
}

int main ()
{
        int x ;
        printf("Enter a number : ");
        scanf("%d",&x);

        printf("Sum is %d", evensum(x));
        return 0;
}
