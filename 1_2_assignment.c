// #include <stdio.h>

// int main()
// {
//     int d,m,y;
//     printf("Enter day, Month and Year of the date");
//     scanf("%d%d%d",&d,&m,&y);
//     printf("day-%d,month-%d,year-%d",d,m,y);
//     return 0;
// }
// Write a program to print unit digit of a given number
// #include <stdio.h>

// int main(){
//     int x=234;
//     printf("the unit digit  of %d is %d",x,x%10);
//     return 0;
// }
// 2. Write a program to print a given number without its last digit.
// #include <stdio.h>

// int main(){
//     int x=43342;
//     printf("the number %d without last digit is %d",x,x/10);
//     return 0;
// }
// 3. Write a program to swap values of two int variables
// #include <stdio.h>

// int main()
// {
//     int a=10,b=20,c;
//     printf("before swapping\na=%d,b=%d\n",a,b);
//     c=b;
//     b=a;
//     a=c;
//     printf("after swapping\na=%d,b=%d\n",a,b);
//     return 0;
// }
// 4. Write a program to swap values of two int variables without using a third variable.
// #include <stdio.h>
// int main()
// {
//     int a,b;
//     printf("enter two numbers");
//     scanf("%d%d",&a,&b);
//     printf("before swapping\na=%d,b=%d\n",a,b);
//     a=a*b;
//     b=a/b;
//     a=a/b;
//     printf("after swapping\na=%d,b=%d\n",a,b);
//     return 0;
// }
// 5. Write a program to input a three-digit number and display the sum of the digits.
// #include <stdio.h>

// int main()
// {
//     int a,sum,x;
//     printf("Enter a number");
//     scanf("%d",&a);
//     x=a;
//     x=a/10;
//     x=x%10;
//     sum=a%10+x+a/100;
//     printf("the sum of the digit of the number %d is %d",a,sum);
//     return 0;
// }
// 6. Write a program which takes a character as an input and displays its ASCII code.
// #include <stdio.h>
// #include<conio.h>
// int main()
// {
//     char a;
//     a=getch(); 
//     printf("%d",a);
//     return 0;
// }
// 7. Write a program to find the position of first 1 in LSB.
#include <stdio.h>

int main()
{
    int a,count=1;
    printf("enter a number\n");
    scanf("%d",&a);
    if(a&1==1)
    printf("count");
    else 
    {
        a>>1;
        count++;
        
    }
    return 0;
}
// 8. Write a program to check whether the given number is even or odd using a bitwise
// operator.
// #include <stdio.h>

// int main()
// {
//     int a;
//     printf("Enter the number\n");
//     scanf("%d",&a);
//     if(a&1==1)
//     printf("odd");
//     else
//     printf("even");
//     return 0;
// }
// 9. Write a program to print size of an int, a float, a char and a double type variable
// #include <stdio.h>

// int main()
// {
//     printf("the size of an int type variable is %d\n",sizeof(int));
//     printf("the size of the float type variable is %d\n",sizeof(float));
//     printf("the size of the char type variable is %d\n",sizeof(char));
//     printf("the size of the double type variable is %d\n",sizeof(double));
//     return 0;
// }
// 10. Write a program to make the last digit of a number stored in a variable as zero.
// (Example - if x=2345 then make it x=2340)
// #include <stdio.h>

// int main()
// {
//     int a; 
//     printf("Enter the number \n");
//     scanf("%d",&a);
//     a=a/10*10;
//     printf("the desired number is %d",a);
//     return 0;
// }
// 11. Write a program to input a number from the user and also input a digit. Append a
// digit in the number and print the resulting number. (Example - number=234 and
// digit=9 then the resulting number is 2349)
// #include <stdio.h>

// int main()
// {
//     int a,b;
//     printf("enter the number and the digit \n");
//     scanf("%d%d",&a,&b);
//     a=a*10+b;
//     printf("the desired number is %d",a);
//     return 0;
// }
// 12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
// convert it into USD.
// #include <stdio.h>

// int main()
// {
//     float amount,dollar;
//     printf("enter the amount in INR\n");
//     scanf("%f",&amount);
//     dollar=amount/76.23;
//     printf("%.2f INR = %.3f $",amount,dollar);
//     return 0;
// }
// 13. Write a program to take a three-digit number from the user and rotate its digits by
// one position towards the right.
// #include <stdio.h>

// int main()
// {
//     int n,x;
//     scanf("%d",&n);
//     x=n%10*100;
//     n=n/10;
//     x=x+n;
//     printf("%d",x);
//     return 0;
// }