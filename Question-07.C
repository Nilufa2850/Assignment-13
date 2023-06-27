// Write a recursive function to calculate HCF of two numbers.

#include<stdio.h>
int hcf(int, int);

int main()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);
    int result = (a>b) ? hcf(b, a%b) : hcf(a, b%a);
    printf("HCF of given two number is : %d", result);
    printf("\n");
    return 0;
}

int hcf(int x, int y)
{
    if (y == 0)
        return x;
    hcf(y, x%y);
}
