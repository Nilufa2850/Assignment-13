// Write a program in C to calculate the power of any number using recursion.

#include<stdio.h>
int power (int, int );

int power (int n, int p)
{
        if (p == 0)
                 return 1;
        
        return n*power(n,p-1);
}


int main()
{
    int num ;
    printf("Enter a base number : ");
    scanf("%d", &num);

    int pwr ;
    printf("Enter power : ");
    scanf("%d",&pwr);
    
    printf("Power is %d",power(num,pwr));

    
    return 0;
}
