#include <stdio.h>
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sum(n - 1);
    }
}
int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int fibb(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    else
    {
        return fibb(n - 1) + fibb(n - 2);
    }
}

int main()
{
    // lcm hcf
    // int a, b, hcf, flag = 1;
    // printf("enter number 1 = ");
    // scanf("%d", &a);
    // printf("enter number 2 = ");
    // scanf("%d", &b);
    // int low = a < b ? a : b;
    // for (int i = low - 1; i >= 2; --i)
    // {
    //     if ((a % i == 0 && b % i == 0))
    //     {
    //         hcf = i;
    //         flag = 0;
    //         break;
    //     }
    // }
    // if (flag == 0)
    // {
    //     printf("the hcf is %d\n", hcf);
    // }
    // else
    // {
    //     printf("the hcf is %d\n", low);
    // }
    // printf("lcm of the numbers is %d\n", (a * b) / hcf);

    // armstrong
    // int num1, rem, temp, arm = 0;
    // printf("enter number = ");
    // scanf("%d", &num1);
    // printf("entered number = %d", num1);
    // temp = num1;
    // while (num1)
    // {
    //     rem = num1 % 10;
    //     arm += (rem * rem * rem);
    //     num1 /= 10;
    //     printf("%d %d\n", rem, arm);
    // }
    // // num == arm ? printf("yes\n") : printf("no\n");
    // if (temp == arm)
    // {
    //     printf("yes\n");
    // }
    // else
    // {
    //     printf("no\n");
    // }

    // recursion
    int n;
    scanf("%d", &n);
    printf("sum till n is %d\n", sum(n));
    printf("factorial till n is %d\n", fact(n));
    printf("fibb on n is %d\n", fibb(n));
}
