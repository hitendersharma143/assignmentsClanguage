// 1. Write a recursive function to print first N natural numbers
// #include <stdio.h>
// void printN_natural(int n)
// {
//     if (n)
//     {
//         printN_natural(n - 1);
//         printf("%d ", n);
//     }
// }
// int main()
// {
//     int n;
//     printf("enter a number\n");
//     scanf("%d", &n);
//     printN_natural(n);
//     return 0;
// }
// 2. Write a recursive function to print first N natural numbers in reverse order
// #include <stdio.h>
// void printN_natural(int n)
// {
//     if (n)
//     {
//     printf("%d ", n);
//     printN_natural(n - 1);
//     }
// }
// int main()
// {
//     int n;
//     printf("enter a number\n");
//     scanf("%d", &n);
//     printN_natural(n);
//     return 0;
// }
// 3. Write a recursive function to print first N odd natural numbers
// #include <stdio.h>
// void print_oddN(int n)
// {
//     if(n)
//     {
//         print_oddN(n-1);
//         printf("%d ",2*n-1);
//     }
// }

// int main()
// {
//     int n;
//     printf("enter a number\n");
//     scanf("%d",&n);
//     print_oddN(n);
//     return 0;
// }
// // 4. Write a recursive function to print first N odd natural numbers in reverse order
// #include <stdio.h>
// void print_oddN(int n)
// {
//     if(n)
//     {
//         printf("%d ",2*n-1);
//         print_oddN(n-1);
//     }
// }

// int main()
// {
//     int n;
//     printf("enter a number\n");
//     scanf("%d",&n);
//     print_oddN(n);
//     return 0;
// }
// 5. Write a recursive function to print first N even natural numbers
// #include <stdio.h>
// void print_oddN(int n)
// {
//     if(n)
//     {
//         print_oddN(n-1);
//         printf("%d ",2*n);
//     }
// }

// int main()
// {
//     int n;
//     printf("enter a number\n");
//     scanf("%d",&n);
//     print_oddN(n);
//     return 0;
// }

// // 6. Write a recursive function to print first N even natural numbers in reverse order
// #include <stdio.h>
// void print_oddN(int n)
// {
//     if(n)
//     {
//         printf("%d ",2*n);
//         print_oddN(n-1);
//     }
// }

// int main()
// {
//     int n;
//     printf("enter a number\n");
//     scanf("%d",&n);
//     print_oddN(n);
//     return 0;
// }
// // 7. Write a recursive function to print squares of first N natural numbers
// #include <stdio.h>
// void print_oddN(int n)
// {
//     if(n)
//     {
//         print_oddN(n-1);
//         printf("%d ",n*n);
//     }
// }

// int main()
// {
//     int n;
//     printf("enter a number\n");
//     scanf("%d",&n);
//     print_oddN(n);
//     return 0;
// }
// 8. Write a recursive function to print binary of a given decimal number
// #include <stdio.h>
// void print_binary(int n)
// {
//     if (n)
//     {
//         print_binary(n >> 1);
//         printf("%d", n & 1);
//     }
// }
// int main()
// {
//     int n = 43;
//     print_binary(n);
//     return 0;
// }
// 9. Write a recursive function to print octal of a given decimal number
// #include <stdio.h>
// void print_octal(int n)
// {
//     if (n)
//     {
//         print_octal(n / 8);
//         printf("%d", n % 8);
//     }
// }
// int main()
// {
//     int n = 358;
//     print_octal(n);
//     return 0;
// }
// 10. Write a recursive function to print reverse of a given number
// #include <stdio.h>
// void  print_reverse(int);
// void print_reverse(int n)
// {
//     if(n)
//     {
//         printf("%d",n%10);
//         print_reverse(n/10);
//     }
// }
// int main()
// {
//     int n;
//     printf("enter a number\n");
//     scanf("%d",&n);
//     print_reverse(n);
// //     return 0;
// // }
// 1. Write a recursive function to calculate sum of first N natural numbers
// #include <stdio.h>
// int sumN_natural(int n)
// {
//     int sum=0;
//     if(n)
//     sum=n+sumN_natural(n-1);
//     return sum;
// }
// int main()
// {
//     int n=10;
//     printf("%d",sumN_natural(n));
//     return 0;
// }
// 2. Write a recursive function to calculate sum of first N odd natural numbers
// #include <stdio.h>
// int sumN_natural(int n)
// {
//     int sum=0;
//     if(n)
//     sum=2*n-1+sumN_natural(n-1);
//     return sum;
// }
// int main()
// {
//     int n=10;
//     printf("%d",sumN_natural(n));
//     return 0;
// }

// 3. Write a recursive function to calculate sum of first N even natural numbers
// #include <stdio.h>
// int sumN_natural(int n)
// {
//     int sum=0;
//     if(n)
//     sum=2*n+sumN_natural(n-1);
//     return sum;
// }
// int main()
// {
//     int n=10;
//     printf("%d",sumN_natural(n));
//     return 0;
// }
// 4. Write a recursive function to calculate sum of squares of first n natural numbers
// #include <stdio.h>
// int sumN_natural(int n)
// {
//     int sum=0;
//     if(n)
//     sum=n*n+sumN_natural(n-1);
//     return sum;
// }
// int main()
// {
//     int n=10;
//     printf("%d",sumN_natural(n));
//     return 0;
// }

// 5. Write a recursive function to calculate sum of digits of a given number
// #include <stdio.h>
// int sum_digit(int n)
// {
//     int sum=0;
//     if(n)
//     {
//         sum=n%10+sum_digit(n/10);
//     }
//     return sum;
// }
// int main()
// {
//     int n=123457;
//     printf("%d",sum_digit(n));
//     return 0;
// }
// 6. Write a recursive function to calculate factorial of a given number
// #include <stdio.h>
// int fact(int n)
// {
//     int fac=1;
//     if(n)
//     {
//         fac=n*fact(n-1);
//     }
//     return fac;
// }
// int main()
// {
//     int n=5;
//     printf("%d",fact(n));
//     return 0;
// }
// 7. Write a recursive function to calculate HCF of two numbers
// #include <stdio.h>
// int hcf(int a, int b)
// {
//     if (a > b)
//     {
//         if (a % b == 0)
//             return b;
//         hcf(a % b, b);
//     }
//     else
//     {
//         if (b % a == 0)
//             return a;
//         hcf(a, b % a);
//     }
// }
// int main()
// {
//     printf("%d", hcf(12, 24));
//     return 0;
// }
// 8. Write a recursive function to print first N terms of Fibonacci series
// #include <stdio.h>
// int  print_fabonacci(int n)
// {
//     if(n==1 || n==2)
//     return 1;
//      return print_fabonacci(n-1)+print_fabonacci(n-2);
// }
// int main()
// {
//     int n;
//     printf("enter a number\n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     printf("%d ",print_fabonacci(i));
//     return 0;
// }
// 9. Write a program in C to count the digits of a given number using recursion.
// #include <stdio.h>
// int count(int n, int r)
// {
//     if (n)
//     {
//         r++;
//         return count(n / 10, r);
//     }
//     return r;
// }
// int main()
// {
//     printf("%d", count(243243464, 0));
//     return 0;
// }
// 10. Write a program in C to calculate the power of any number using recursion.
#include <stdio.h>
int power(int n,int r)
{
    if(r){
    return n*power(n,r-1);
    }
    return 1;
}
int main()
{
    printf("%d",power(2,4));
    return 0;
}