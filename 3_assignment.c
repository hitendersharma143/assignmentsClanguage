// 1. Write a program to check whether a given number is positive or non-positive.
// #include <stdio.h>

// int main()
// {
//     int num;
//     printf("Enter the number\n");
//     scanf("%d",&num);
//     if(num>0)
//     printf("positive");
//     else
//     printf("non-positive");
//     return 0;
// }
// 2. Write a program to check whether a given number is divisible by 5 or not
// #include <stdio.h>

// int main()
// {
//     int num;
//     printf("Enter the number\n");
//     scanf("%d",&num);
//     if(num%5==0)
//     printf("is divisible");
//     else
//     printf("not divisible");
//     return 0;
// }
// 3. Write a program to check whether a given number is an even number or an odd
// number.
// #include <stdio.h>

// int main()
// {
//     int num;
//     printf("Enter the number\n");
//     scanf("%d",&num);
//     if(num%2==0)
//     printf("even");
//     else
//     printf("odd");
//     return 0;
// }
// 4. Write a program to check whether a given number is an even number or an odd
// number without using % operator.
// #include <stdio.h>

// int main()
// {
//     int num,temp;
//     printf("Enter the number\n");
//     scanf("%d",&num);
//     temp=num/2*2;
//     if(num==temp)
//     printf("even");
//     else
//     printf("odd");
//     return 0;
// }
// 5. Write a program to check whether a given number is a three-digit number or not.
// #include <stdio.h>

// int main()
// {
//     int num;
//     printf("Enter the number\n");
//     scanf("%d",&num);
//     if(num/100>=1 && num/100<=9)
//     printf("this is a three digit number\n");
//     else
//     printf("this is not a three digit number\n");
//     return 0;
// }
// 6. Write a program to print greater between two numbers. Print one number of both are
// the same.
// #include <stdio.h>

// int main()
// {
//     int a, b;
//     printf("Enter two numbers\n");
//     scanf("%d%d", &a, &b);
//     a>b?printf("%d",a):printf("%d",b);
//     return 0;
// }
// 7. Write a program to check whether roots of a given quadratic equation are real &
// distinct, real & equal or imaginary roots
// #include <stdio.h>

// int main()
// {
//     int a,b,c,D;
//     printf("Enter the coefficiants of x^2,x and constant \n");
//     scanf("%d%d%d",&a,&b,&c);
//     D=b*b-4*a*c;
//     if(D==0)
//     printf("the roots of the given quardratic equation are real and equal");
//     if(D>0)
//     printf("the roots of the given quardratic equation are real and distinct");
//     if(D<0)
//     printf("the roots of the given quardratic equation are imaginary");
//     return 0;
// }
// 8. Write a program to check whether a given year is a leap year or not.
// #include <stdio.h>

// int main()
// {
//     short int year;
//     printf("enter the year");
//     scanf("%d", &year);
//     if (year % 100 == 0)
//     {
//         if (year % 400 == 0)
//             printf("the year is leap year");
//         else
//             printf("not a leap year");
//     }
//     else if (year % 4 == 0)
//         printf("the year is leap year");
//     else
//         printf("the year is not leap year");
//     return 0;
// }
// 9. Write a program to find the greatest among three given numbers. Print number once
// if the greatest number appears two or three times.
// #include <stdio.h>

// int main()
// {
//     int a,b,c;
//     scanf("%d%d%d",&a,&b,&c);
//     a>=b?(a>=c?printf("%d",a):printf("%d",c)):(b>=c?printf("%d",b):printf("%d",c));
//     return 0;
// }
// 10. Write a program which takes the cost price and selling price of a product from the
// user. Now calculate and print profit or loss percentage.
// #include <stdio.h>

// int main()
// {
//     float cost_prize, sellingprize, profit, loss;
//     printf("enter cost prize and selling prize\n");
//     scanf("%f%f", &cost_prize, &sellingprize);
//     if (cost_prize > sellingprize)
//     {
//         loss=cost_prize-sellingprize;
//         printf("the loss precentage of the product is %.2f%",(loss*100)/cost_prize);
//     }
//     if (cost_prize < sellingprize)
//     {
//         profit=sellingprize-cost_prize;
//         printf("the profit precentage of the product is %.2f%",(profit*100)/cost_prize);
//     }
//     return 0;
// }
// 11. Write a program to take marks of 5 subjects from the user. Assume marks are given
// out of 100 and passing marks is 33. Now display whether the candidate passed the
// examination or failed.
// #include <stdio.h>

// int main()
// {
//     int math,science,SST,english,hindi,count=0;
//     printf("Enter the marks of the student\n");
//     scanf("%d%d%d%d%d",&math,&science,&SST,&english,&hindi);
//     if(math<33)
//     count++;
//     if(science<33)
//     count++;
//     if(SST<33)
//     count++;
//     if(english<33)
//     count++;
//     if(hindi<33)
//     count++;
//     if(count==1)
//     printf("the student has compartment in one subject");
//     if(count==0)
//     printf("the student is passed in the examination");
//     if(count>=2)
//     printf("the student is failed in the examination");
//     return 0;
// }
// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.
// #include <stdio.h>
// #include <conio.h>

// int main()
// {
//     char a;
//     a=getch();
//     if (a>=65 && a<=90)
//         printf("the alphabet is in uppercase ");
//     else if(a>=97 && a<=122)
//         printf("the alphabet is in lowecase ");
//     else
//     printf("invallid alphabet enterence");
//     return 0;
// }
// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
// #include <stdio.h>

// int main()
// {
//     int num;
//     printf("Enter the number\n");
//     scanf("%d",&num);
//     if(num%3==0 && num%2==0)
//     printf("the number is divisible by 2 and 3");
//     else
//     printf("the number is not divisible by 2 and 3");

//     return 0;
// }
// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
// #include <stdio.h>

// int main()
// {
//     int num;
//     printf("Enter the number\n");
//     scanf("%d", &num);
//     if (num % 3 == 0 && num % 7 == 0)
//         printf("the number is divisible by both 3 and 7\n");
//     else if (num % 3 == 0)
//         printf("the number is divisible by  3 \n");
//     else if (num % 7 == 0)
//         printf("the number is divisible by 7\n");
//         return 0;
// }
// 15. Write a program to check whether a given number is positive, negative or zero.
// #include <stdio.h>

// int main()
// {
//     int num;
//     printf("Enter the number\n");
//     scanf("%d", &num);
//     if(num>0)
//     printf("positive");
//     if(num<0)
//     printf("negitive");
//     if(num==0)
//     printf("zero");
//     return 0;
// }
// 16. Write a program to check whether a given character is an alphabet (uppercase), an
// alphabet (lower case), a digit or a special character.
// #include <stdio.h>
// #include <conio.h>

// int main()
// {
//     char a;
//     a=getch();
//     if (a>=65 && a<=90)
//         printf("the alphabet is in uppercase ");
//     else if(a>=97 && a<=122)
//         printf("the alphabet is in lowecase ");
//     else if(a>=48 && a<=57)
//     printf("the charactor is a digit");
//     else
//     printf("the charactor is a special charactor");
//     return 0;
// }
// 17. Write a program which takes the length of the sides of a triangle as an input. Display
// whether the triangle is valid or not.
// #include <stdio.h>

// int main()
// {   
//     int l1,l2,l3;
//     printf("enter the length of the sides of a triangle\n");
//     scanf("%d%d%d",&l1,&l2,&l3);
//     if((l1+l2)>l3 && (l2+l3)>l1 && (l3+l1)>l2)
//     printf("this is a valid triangle");
//     else
//     printf("this is not a valid triangle");
    
//     return 0;
// }
// 18. Write a program which takes the month number as an input and display number of
// days in that month
// #include <stdio.h>

// int main(){
//     int num;
//     printf("Enter the number \n");
//     scanf("%d",&num);
//     switch (num)
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
//     printf("Invalid input\n");
//         break;
//     }
//     return 0;
// }