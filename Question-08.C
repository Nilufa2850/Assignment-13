// Write a recursive function to print first N terms of Fibonacci series.

#include<stdio.h>
int fibo(int);

int fibo(int n)
{
        if(n==1 || n==2)
                return 1;
        
        return fibo(n-1)+fibo(n-2);
                      
}


int main()
{
    int n , i ;
    printf("Enter term : ");
    scanf("%d", &n);
    
    for(i=1 ; i<=n ; i++)
        printf(" %d ", fibo(i) ) ;
    
    return 0;
}
