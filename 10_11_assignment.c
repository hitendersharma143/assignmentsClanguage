// 1. Write a function to calculate the area of a circle. (TSRS)
// #include <stdio.h>
// float area(float r)
// {
//     return 3.14*r*r;
// }
// int main()
// {
//     float rad;
//     printf("%.2f",area(4));
//     return 0;
// }
// 2. Write a function to calculate simple interest. (TSRS)
// #include <stdio.h>
// float simple_interest(int p, int  r , int t)
// {
//     return p*r*t/100;
// }
// int main()
// {
//     int principle, rate, time ;
//     printf("Enter priciple ,rate and time");
//     scanf("%d%d%d",&principle,&rate,&time);
//     printf("%.2f\n",simple_interest(principle,rate,time));
//     return 0;
// // }
// 3. Write a function to check whether a given number is even or odd. Return 1 if the
// number is even, otherwise return 0. (TSRS)
// #include <stdio.h>
// int even_odd(int n)
// {
//     if(n%2==0)
//     return 1;
//     return 0;
// }
// int main()
// {
//     int n;
//     printf("enter a number\n");
//     scanf("%d",&n);
//     if(even_odd(n))
//     printf("even");
//     else
//     printf("odd");
//     return 0;
// }
// 4. Write a function to print first N natural numbers (TSRN)
// #include <stdio.h>
// void printN_natural(int n)
// {
//     for(int i=1;i<=n;i++)
//     printf("%d ",i);
// }
// int main()
// {
//     int n;
//     printf("enter a number\n");
//     scanf("%d",&n);
//     printN_natural(n);
//     return 0;
// }
// 5. Write a function to print first N odd natural numbers. (TSRN)
// #include <stdio.h>
// void printN_odd_natural(int n)
// {
//     for(int i=1;i<=n;i++)
//     printf("%d ",2*i-1);
// }
// int main()
// {
//     int n;
//     printf("enter a number\n");
//     scanf("%d",&n);
//     printN_odd_natural(n);
//     return 0;
// }
// 6. Write a function to calculate the factorial of a number. (TSRS)
// #include <stdio.h>
// int factorial(int n)
// {
//     int fact=1;
//     for(int i=1;i<=n;i++)
//     {
//         fact*=i;
//     }
//     return fact;
// }
// int main()
// {
//     int n;
//     printf("enter a number\n");
//     scanf("%d",&n);
//     printf("the factorial of the number is %d",factorial(n));
//     return 0;
// }
// 7. Write a function to calculate the number of combinations one can make from n items
// and r selected at a time. (TSRS)
// #include <stdio.h>
// int factorial(int n)
// {
//     int fact=1;
//     for(int i=1;i<=n;i++)
//     {
//         fact*=i;
//     }
//     return fact;
// }
// float combination(int n,int r)
// {
//     return (factorial(n)/factorial(r)*(factorial(n-r)));
// }
// int main()
// {
//     int a,b;
//     printf("enter two numbers\n");
//     scanf("%d%d",&a,&b);
//     printf("%.3f",combination(a,b));
//     return 0;
// }

// 8. Write a function to calculate the number of arrangements one can make from n items
// and r selected at a time. (TSRS)
// #include <stdio.h>
// int factorial(int n)
// {
//     int fact=1;
//     for(int i=1;i<=n;i++)
//     {
//         fact*=i;
//     }
//     return fact;
// }
// float perm(int n,int r)
// {
//     return (factorial(n)/factorial(r));
// }
// int main()
// {
//     int a,b;
//     printf("enter two numbers\n");
//     scanf("%d%d",&a,&b);
//     printf("%.3f",perm(a,b));
//     return 0;
// }

// 9. Write a function to check whether a given number contains a given digit or not.
// (TSRS)
// #include <stdio.h>
// int is_digit(int n,int d)
// {
//     int temp,last_digit;
//     temp=n;
//     while(temp)
//     {
//         last_digit=temp%10;
//         if(last_digit==d)
//         return 1;
//         temp/=10;
//     }
//     return 0;
// }
// int main()
// {
//     int a,b;
//     printf("enter two numbers\n");
//     scanf("%d%d",&a,&b);
//     if(is_digit(a,b))
//     printf("The number does contain the given digit");
//     else
//     printf("The number does not contain the given digit");
//     return 0;
// }
// 10. Write a function to print all prime factors of a given number. For example, if the
// number is 36 then your result should be 2, 2, 3, 3. (TSRN)
// #include <stdio.h>
// void print_factors(int n)
// {
//     int temp=n;
//     for (int i = 2; i <= n; i++)
//     {
//         if (temp % i == 0)
//         {
//         printf("%d ", i);
//         temp/=i;
//         }
//         if(temp==1)
//         break;
//         if(temp%i==0)
//         i--;
//     }
// }
// int main()
// {
//     int n;
//     printf("enter a number\n");
//     scanf("%d", &n);
//     print_factors(n);
//     return 0;
// }
//  1. Write a function to calculate LCM of two numbers. (TSRS)
// #include <stdio.h>
// int LCM(int a,int b)
// {
//     int i;
//     for(i=a>b?a:b;i<=a*b;i+=a>b?a:b)
//     {
//         if(i%a==0 && i%b==0)
//         return i;
//     }
// }
// int main()
// {
//     int a,b;
//     printf("enter two numbers\n");
//     scanf("%d%d",&a,&b);
//     printf("the LCM of %d and %d is %d ",a,b,LCM(a,b));
//     return 0;
// }
// 2. Write a function to calculate HCF of two numbers. (TSRS)
// #include <stdio.h>
// int HCF(int a,int b)
// {
//     int i;
//     for(i=a>b?b:a;i;i--)
//     {
//         if(a%i==0 && b%i==0)
//         return i;
//     }
// }
// int main()
// {
//     int a,b;
//     printf("enter two numbers\n");
//     scanf("%d%d",&a,&b);
//     printf("the HCF of %d and %d is %d ",a,b,HCF(a,b));
//     return 0;
// }

// 3. Write a function to check whether a given number is Prime or not. (TSRS)
// #include <stdio.h>
// int is_prime(int n)
// {
//     int i;
//     for ( i = 2; i <= n / 2; i++)
//         if (n % i == 0)
//             break;
//     if(i==n/2+1)
//     return 1;
//     return 0;
// }
// int main()
// {
//     int n;
//     printf("enter a number\n");
//     scanf("%d", &n);
//     if (is_prime(n))
//         printf("is prime");
//     else
//         printf("Is not prime");
//     return 0;
// }
// 4. Write a function to find the next prime number of a given number. (TSRS)
// #include <stdio.h>
// int next_prime(int n)
// {
//     int i, flag = 0;
//     while (1)
//     {
//         n++;
//         flag = 0;
//         for (i = 2; i <= n / 2; i++)
//         {
//             if (n % i == 0)
//                 flag = 1;
//         }
//         if (flag==0)
//             return n;
//     }
// }
// int main()
// {
//     int n;
//     printf("enter a number\n");
//     scanf("%d", &n);
//     printf("%d",next_prime(n));
//     return 0;
// }
// 5. Write a function to print first N prime numbers (TSRN)
// #include <stdio.h>
// void print_prime(int n)
// {
//     int i, j;
//     for (i = 2; n; i++)
//     {
//         for (j = 2; j <= i / 2; j++)
//         {
//             if (i % j == 0)
//                 break;
//         }
//         if (j == i / 2 + 1)
//         {
//         printf("%d ", i);
//         n--;
//         }
//     }
// }

// int main()
// {
//     int n;
//     printf("enter a number\n");
//     scanf("%d",&n);
//     print_prime(n);
//     return 0;
// }
// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)
// #include <stdio.h>
// void printAll_prime(int a,int b)
// {
//     int i,j;
//     for(i=a;i<=b;i++)
//     {
//         for(j=2;j<=i/2;j++)
//         {
//             if(i%j==0)
//             break;
//         }
//         if(j==i/2+1)
//         {
//             printf("%d ",i);
//         }
//     }
// }
// int main()
// {
//     int a,b;
//     printf("enter two numbers\n");
//     scanf("%d%d",&a,&b);
//     printAll_prime(a,b);
//     return 0;
// }
// 7. Write a function to print first N terms of Fibonacci series (TSRN)
// #include <stdio.h>
// void print_fabonacci(int n)
// {
//     int prev=0,curr=1,next;
//     while(n)
//     {
//         next=prev+curr;
//         printf("%d ",curr);
//         prev=curr;
//         curr=next;
//         n--;
//     }
// }
// int main()
// {
//     int n;
//     printf("enter a number\n");
//     scanf("%d",&n);
//     print_fabonacci(n);
//     return 0;
// }
// 8. Write a function to print PASCAL Triangle. (TSRN)
// #include <stdio.h>
// int factorial(int n)
// {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact *= i;
//     }
//     return fact;
// }
// int combination(int n,int r)
// {
//     return (factorial(n)/(factorial(r)*(factorial(n-r))));
// }
// void print_pascal(int n)
// {
//     int i, j, k,r;
//     for (int i = 1; i <= n; i++)
//     {
//         k = 1;
//         r=0;
//         for (int j = 1; j <= 2 * n - 1; j++)
//         {
//             if (j >= n + 1 - i && j <= n - 1 + i && k)
//             {
//                 printf("%2d",combination(i-1,r));
//                 k = 0;
//                 r++;
//             }
//             else
//             {
//                 printf("  ");
//                 k=1;
//             }
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     int n = 6;
//     print_pascal(n);
//     return 0;
// }
// 9. Write a program in C to find the square of any number using the function.
// #include <stdio.h>
// int square(int n)
// {
//     return n*n;
// }
// int main()
// {
//     int n;
//     printf("enter a number\n");
//     scanf("%d",&n);
//     printf("the square of %d is %d",n,square(n));
//     return 0;
// }
// 10. Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the
// function.
// #include <stdio.h>
// int factorial(int n)
// {
//     int fact=1;
//     for(int i=1;i<=n;i++)
//     {
//         fact*=i;
//     }
//     return fact;
// }
// int sum_series(void){
//     int sum=0;
//     for(int i=1;i<=5;i++)
//     sum+=factorial(i)/i;
//     return sum;
// }
// int main()
// {
//     printf("the sum of the series is %d",sum_series());
//     return 0;
// }