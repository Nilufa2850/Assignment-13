// Write a program in C to count the digits of a given number using recursion.

#include<stdio.h>
int count(int);

int count(int x)
{
        static int c = 0 ;
        if(x>0)
        {
                c ++ ;
                count(x/10);
        }
        
        return c ;
}


int main()
{
    int x ;
    printf("Enter a number : ");
    scanf("%d", &x);
    
    printf(" count is %d",count(x));

    
    return 0;
}

