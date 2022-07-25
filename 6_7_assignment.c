// 1. Write a program to calculate sum of first N natural numbers
// #include <stdio.h>

// int main()
// {
//     int n, sum = 0;
//     printf("enter a number\n");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//         sum = sum + i;
//     printf("the sum of first %d natural numbers are %d", n, sum);
//     return 0;
// }
// 2. Write a program to calculate sum of first N even natural numbers
// #include <stdio.h>

// int main()
// {
//     int n, sum = 0;
//     printf("enter a number\n");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//         sum = sum + 2*i;
//     printf("the sum of first %d natural numbers are %d", n, sum);
//     return 0;
// }
// 3. Write a program to calculate sum of first N odd natural numbers
// #include <stdio.h>

// int main()
// {
//     int n, sum = 0;
//     printf("enter a number\n");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//         sum = sum + 2*i-1;
//     printf("the sum of first %d natural numbers are %d", n, sum);
//     return 0;
// }
// 4. Write a program to calculate sum of squares of first N natural numbers
//  #include <stdio.h>

// int main()
// {
//     int n,sum=0;
//     printf("enter a number\n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     sum+=i*i;
//     printf("%d ",sum);
//     return 0;
// }
// 5. Write a program to calculate sum of cubes of first N natural numbers
//  #include <stdio.h>

// int main()
// {
//     int n,sum=0;
//     printf("enter a number\n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     sum+=i*i*i;
//     printf("%d ",sum);
//     return 0;
// }
// 6. Write a program to calculate factorial of a number
// #include <stdio.h>

// int main()
// {
//     int n,fact=1;
//     printf("enter a number\n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     fact*=i;
//     printf("%d",fact);
//     return 0;
// }
// 7. Write a program to count digits in a given number
// #include <stdio.h>

// int main()
// {
//     int n,temp,count=0;
//     printf("enter a number\n");
//     scanf("%d",&n);
//     temp=n;
//     while(temp)
//     {
//         temp/=10;
//         count++;
//     }
// printf("digits in the number are %d",count);
//     return 0;
// }
// 8. Write a program to check whether a given number is a Prime number or
// not
// #include <stdio.h>

// int main()
// {
//     int n,i;
//     printf("enter a number\n");
//     scanf("%d",&n);
//     for(i=2;i<=n/2;i++)
//         if(n%i==0)
//         break;
//     if(i==n/2+1)
//     printf("prime");
//     else
//     printf("not prime");
//     return 0;
// }
// 9. Write a program to calculate LCM of two numbers
// #include <stdio.h>

// int main()
// {

//     int n,m,i;
//     printf("enter two number\n");
//     scanf("%d%d", &n,&m);
//     for(i=(n>m)?n:m;i<=m*n;i+=(n>m)?n:m)
//     {
//         if(i%n==0 && i%m==0){
//         break;
//         }
//     }
//         printf("the lcm of two numbers is %d",i);
//     return 0;
// }
// 10. Write a program to reverse a given number
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int n, reverse=0, temp, count = 0, last_digit;
//     printf("enter a number\n");
//     scanf("%d",&n);
//     temp = n;
//     while (temp)
//     {
//         temp /= 10;
//         count++;
//     }
//     printf("%d\n",count);
//     temp = n;
//     for (int i = 0; i < count; i++)
//     {
//         last_digit = temp % 10;
//         reverse=(reverse*10)+last_digit;
//         temp=temp/10;
//     }
//     printf("the reverse of the number is %d",reverse);
//     return 0;
// }
// 1. Write a program to find the Nth term of the Fibonnaci series.
// #include <stdio.h>

// int main()
// {
//     int n,prev=0,cur=1,next=1;
//     printf("enter a number\n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         next = prev+cur;
//         prev=cur;
//         cur=next;
//     }
//         printf("%d ",next);
//     return 0;
// }
// 2. Write a program to print first N terms of Fibonacci series
// #include <stdio.h>

// int main()
// {
//     int n,prev=0,cur=1,next=1;
//     printf("enter a number\n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         printf("%d ",next);
//         next = prev+cur;
//         prev=cur;
//         cur=next;
//     }
//     return 0;
// }
// 3. Write a program to check whether a given number is there in the Fibonacci
// series or not.
// #include <stdio.h>

// int main()
// {
//     int n, prev = 0, cur = 1, next = 1;
//     printf("enter a number\n");
//     scanf("%d", &n);
//     while (n >= next)
//     {
//         if (n == next)
//         {
//             printf("this number is in fabonacci series \n");
//             break;
//         }
//         next = prev + cur;
//         prev = cur;
//         cur = next;
//     }
//     if (next > n)
//         printf("this number is not in fabonacci series \n");
//     return 0;
// }
// 4. Write a program to calculate HCF of two numbers
// #include <stdio.h>

// int main()
// {
//     int a, b, i;
//     printf("enter two numbers\n");
//     scanf("%d%d", &a, &b);
//     for (i = ((a > b) ? b : a); i; i--)
//     {
//         if (a % i == 0 && b % i == 0)
//         {
//             printf("the HCF of %d and %d is %d", a, b, i);
//             break;
//         }
//     }
//     return 0;
// }
// 5. Write a program to check whether two given numbers are co-prime
// numbers or not
// #include <stdio.h>

// int main()
// {
//     int i,a,b;
//     printf("enter two numbers\n");
//     scanf("%d%d",&a,&b);
//     for(i=2;i<=((a>b)?b:a);i++)
//     {
//         if(a%i==0 &&b%i==0)
//         {
//             printf("%d and %d are not co-prime numbers\n",a,b);
//             break;
//         }
//     }
//     if(i==((a>b)?b:a)+1)
//     printf("co prime");
//     return 0;
// }
// 6. Write a program to print all Prime numbers under 100
// #include <stdio.h>

// int main()
// {
//     int i, j;
//     for (i = 2; i <= 100; i++)
//     {
//     for (j = 2; j <= i / 2; j++)
//         if (i % j == 0)
//             break;
//     if(j==i/2+1)
//     printf("%d ",i);
//     }

//     return 0;
// }
// 7. Write a program to print all Prime numbers between two given numbers
// #include <stdio.h>

// int main()
// {
//     int a, b, i, j;
//     printf("enter two numbers\n");
//     scanf("%d%d", &a, &b);
//     for (i = a; i <= b; i++)
//     {
//         for (j = 2; j <= i / 2; j++)
//             if (i % j == 0)
//                 break;
//         if (j == i / 2 + 1)
//             printf("%d ", i);
//     }

//     return 0;
// }
// 8. Write a program to find next Prime number of a given number
// #include <stdio.h>

// int main()
// {
//     int n, i, j;
//     printf("enter a number \n");
//     scanf("%d", &n);
//     for (i = n + 1; i; i++)
//     {
//         for (j = 2; j <= i / 2; j++)
//             if (i % j == 0)
//                 break;
//         if (j == i / 2 + 1)
//         {
//         printf("%d ", i);
//         break;
//         }
//     }
//     return 0;
// }
// 9. Write a program to check whether a given number is an Armstrong number
// or not
// #include <stdio.h>

// int main()
// {
//     int n, count=0, temp, i,last_digit,sum=0;
//     printf("enter a number\n");
//     scanf("%d", &n);
//     temp = n;
//     for (i = 1; temp; i++)
//     {
//     temp /= 10;
//     count++;
//     }
//     // 153printf("%d",count);
//     temp=n;
//     for(i=1;i<=count;i++)
//     {
//         last_digit=temp%10;
//         sum+=last_digit*last_digit*last_digit;
//         temp/=10;
//     }
//     if(sum==n)
//     printf("%d is an amstrong number\n",n);
//     else
//     printf("%d is not an amstrong number\n",n);

//     return 0;
// }
// 10. Write a program to print all Armstrong numbers under 1000
// #include <stdio.h>

// int main()
// {
//     int j, count = 0, temp, i, last_digit, sum = 0;
//     for (int i = 1; i <= 1000; i++)
//     {
//         temp = i;
//         sum=0;
//         for (j = 1; temp; j++)
//         {
//             last_digit = temp % 10;
//             sum += last_digit * last_digit * last_digit;
//             temp /= 10;
//         }
//     if (sum == i)
//         printf("%d ", i);
//     }

//     return 0;
// }