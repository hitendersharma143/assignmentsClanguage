// 1. Write a program which takes the month number as an input and display
// number of days in that month.
// #include <stdio.h>

// int main()
// {
//     int month;
//     printf("enter a month number\n");
//     scanf("%d", &month);
//     switch (month)
//     {
//     case 1:
//         printf("31 days");
//         break;
//     case 2:
//         printf("28 days");
//         break;
//     case 3:
//         printf("31 days");
//         break;
//     case 4:
//         printf("30 days");
//         break;
//     case 5:
//         printf("31 days");
//         break;
//     case 6:
//         printf("30 days");
//         break;
//     case 7:
//         printf("31 days");
//         break;
//     case 8:
//         printf("31 days");
//         break;
//     case 9:
//         printf("30 days");
//         break;
//     case 10:
//         printf("31 days");
//         break;
//     case 11:
//         printf("30 days");
//         break;
//     case 12:
//         printf("31 days");
//         break;

//     default:
//         printf("Invalid input!!");
//         break;
//     }
//     return 0;
// }
// 2. Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit
// #include <stdio.h>
// #include <conio.h>

// int main()
// {
//     char menu;
//     int a,b;
//     printf("enter two numbers\n");
//     scanf("%d%d",&a,&b);
//     printf("The option are :\n");
//     printf("a. Addition\n b. Substraction \n c. Multiplication \n d. division \n e. exit \n");
//     printf("enter a option \n");
//     // menu=getch();
//     // fflush(stdin);
//     scanf(" %c",&menu);

//     switch (menu)
//     {
//     case 'a':
//         printf("%d+%d = %d\n",a,b,a+b);
//         break;
//     case 'b':
//         printf("%d-%d = %d\n",a,b,a-b);
//         break;
//     case 'c':
//         printf("%dx%d = %d\n",a,b,a*b);
//         break;
//     case 'd':
//         printf("%d/%d = %d\n",a,b,a/b);
//         break;
//     case 'e':
//         break;

//     default:
//         break;
//     }

//     return 0;
// }
// 3. Write a program which takes the day number of a week and displays a
// unique greeting message for the day.
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("enter a number\n");
//     scanf("%d", &n);
//     switch (n)
//     {
//     case 1:
//         printf("wishing you a happy monday \n");
//         break;
//     case 2:
//         printf("wishing you a happy tuesday \n");
//         break;
//     case 3:
//         printf("wishing you a happy wednesday\n");
//         break;
//     case 4:
//         printf("wishing you a happy thursday\n");
//         break;
//     case 5:
//         printf("aaj friday ha beg sheg botle wotle :) \n");
//         break;
//     case 6:
//         printf("wishing you a happy saturday \n");
//         break;
//     case 7:
//         printf("wishing you a happy sunday\n");
//         break;
//         default :
//         printf("Invallid input");
//         break;
//     }
//     return 0;
// }
// 4. Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an
// isosceles triangle or not
// b. Check whether a given set of three numbers are lengths of sides of
// a right angled triangle or not
// c. Check whether a given set of three numbers are equilateral triangle
// or not
// d. Exit
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {

//     int d, t, a, b, c;
//     char n;
//     printf("enter a number\n");
//     scanf(" %c", &n);
//     switch (n)
//     {
//     case 'a':
//         printf("enter three numbers\n");
//         scanf("%d%d%d", &a, &b, &c);
//         if (a == b || b == c || c == a)
//             printf("this set of given numbers are lengths of sides of a isosceles triangle \n");
//         else
//             printf("this set of given numbers are  not lengths of sides of a isosceles triangle \n");
//         break;
//     case 'b':
//         printf("enter three numbers\n");
//         scanf("%d%d%d", &a, &b, &c);
//         t = a > b ? (a > c ? a : c) : (b > c) ? b
//                                               : c;
//         if (t == a)
//             d = b * b + c * c;
//         if (t == b)
//             d = a * a + c * c;
//         if (t == c)
//             d = b * b + a * a;
//         if (t * t == d)
//             printf("this set of given numbers are lengths of sides of a right angle triangle \n");
//         else
//             printf("this set of given numbers are  not lengths of sides of a right angle triangle \n");
//         break;
//     case 'c':
//         printf("enter three numbers\n");
//         scanf("%d%d%d", &a, &b, &c);
//         if (a == b && b == c && c == a)
//             printf("this set of given numbers are lengths of sides of a equilatral triangle \n");
//         else
//             printf("this set of given numbers are  not lengths of sides of a equilatral triangle \n");
//         break;
//     case 'd':
//         exit(0);
//     default:
//         printf("invallid input!!");
//         break;
//     }
//     return 0;
// }
// 5. Convert the following if-else-if construct into switch case:
// if(var == 1)
// System.out.println("good");
// else if(var == 2)
// System.out.println("better");
// else if(var == 3)
// System.out.println("best");
// else
// System.out.println("invalid");
// #include <stdio.h>

// int main()
// {
//     int var;
//     printf("enter a number\n");
//     scanf("%d", &var);
//     switch (var)
//     {
//     case 1:
//         printf("good");
//         break;
//     case 2:
//         printf("better");
//         break;
//     case 3:
//         printf("best");
//         break;

//     default:
//         printf("invalid");
//         break;
//     }
//     return 0;
// }

// 6. Program to check whether a year is a leap year or not. Using switch
// statement
// #include <stdio.h>

// int main()
// {
//     int n,temp;
//     printf("enter a number\n");
//     scanf("%d",&n);
//     temp=n;
//     switch (temp%100==0)
//     {
//     case 1:
//         switch (temp%400==0)
//         {
//         case 1:
//             printf("this is a leap year");
//             break;
//         case 0:
//             printf("this is not a leap year");
//             break;

//         default:
//             break;
//         }
//         break;
//     case 0:
//         switch (temp%4==0)
//         {
//         case 1:
//             printf("the is a leap year");
//             break;
//         case 0:
//             printf("the is not  a leap year");
//             break;

//         default:
//             break;
//         }
//         break;
//     default:
//     printf("invalid input!!");
//         break;
//     }
//     return 0;
// }
// 7. Program to take the value from the user as input electricity unit charges
// and calculate total electricity bill according to the given condition . Using
// the switch statement.
// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// For the next 100 units Rs. 1.20/unit
// For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.
// #include <stdio.h>

// int main()
// {
//     float n;
//     float amount, total_E_bill;
//     printf("enter a number\n");
//     scanf("%f", &n);
//     switch (n <= 50)
//     {
//     case 1:
//         amount = 0.50 * n;
//         break;
//     case 0:
//         switch (n <= 150)
//         {
//         case 1:
//             amount = 25 + 0.75 * (n-50);
//             break;
//         case 0:
//             switch (n <= 250)
//             {
//             case 1:
//                 amount = 100 + 1.20 * (n- 150);
//                 break;
//             case 0:
//                 amount = 220 + 1.50 * (n-250);
//                 break;
//             }
//             break;
//         }
//         break;
//     }
//     total_E_bill=amount+amount*0.20;
//     printf("the total electicity bill is %.3f",total_E_bill);
//     return 0;
// }
// 8. Program to convert a positive number into a negative number and negative
// number into a positive number using a switch statement.
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("enter a number\n");
//     scanf("%d", &n);
//     switch (n>=1)
//     {
//     case 1:
//         printf("%d",-n);
//         break;
//     case 0:
//         printf("%d",-n);
//         break;
//     }
//     return 0;
// }
// 9. Program to Convert even number into its upper nearest odd number
// Switch Statement.
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("enter a number\n");
//     scanf("%d",&n);
//     switch (n%2==0)
//     {
//     case 1:
//         printf("%d",n+1);
//         break;
//     case 0:
//         printf("invalid!!");
//     }
//     return 0;
// }
// 10. C program to find all roots of a quadratic equation using switch case
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     float a, b, c, d;
//     printf("enter the coficient of x^2, x and constant");
//     scanf("%f%f%f", &a, &b, &c);
//     d = (b * b) - (4 * a * c);
//     printf("%f",sqrt(d));
//     switch (d > 0)
//     {
//     case 1:
//         printf("there are two real distinct roots of the equation %.2f and %.2f ", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));
//         break;
//     case 0:
//         switch (d < 0)
//         {
//         case 1:
//             printf("there are two imaginary distinct roots of the equation %.2f+i%.2f and %.2f-i%.2f ", -b / (2 * a), sqrt(-d) / (2 * a), -b / (2 * a), sqrt(-d) / (2 * a));
//             break;
//         case 0:
//             printf("there are two same roots: %.2f and %.2f", -b / (2 * a), -b / (2 * a));
//             break;
//         }
//         break;
//     }
//     return 0;
// }