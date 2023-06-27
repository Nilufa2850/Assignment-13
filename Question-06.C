// Write a recursive function to calculate factorial of a given number.

#include<stdio.h>
int fact (int);

int fact (int x)
{
        if(x==0 || x==1)
                return 1;

        return x*fact(x-1) ;  
          
}

int main ()
{
        int a ;
        printf("Enter a number : ");
        scanf("%d",&a);

        printf("factorial is %d", fact(a));
        return 0;
}
