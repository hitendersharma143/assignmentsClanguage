// gernallize way of printing star pattern.
// #include <stdio.h>

// int main()
// {
//     int i, j;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if(1)
//             printf("*");
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// *
// **
// ***
// ****
// *****
// #include <stdio.h>

// int main()
// {
//     int i, j;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if(j<=i)
//             printf("*");
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//     *
//    **
//   ***
//  ****
// *****
// #include <stdio.h>

// int main()
// {
//     int i, j;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if(j>=6-i)
//             printf("*");
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//   *****
//    ****
//     ***
//      **
//       *

// #include <stdio.h>

// int main()
// {
//     int i, j;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if(j>=i)
//             printf("*");
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// * * * * *
// * * * *
// * * *
// * *
// *
// #include <stdio.h>

// int main()
// {
//     int i, j;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if(j<=6-i)
//             printf("*");
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
// #include <stdio.h>

// int main()
// {
//     int i, j;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 9; j++)
//         {
//             if(j<=4+i && j>=6-i)
//             printf("*");
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// * * * * * * *
//   * * * * *
//     * * *
//       *
// #include <stdio.h>

// int main()
// {
//     int i, j;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 9; j++)
//         {
//             if(j<=10-i && j>=i)
//             printf("*");
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// * * * * * * * * *
// * * * *   * * * *
// * * *       * * *
// * *           * *
// *               *
// #include <stdio.h>

// int main()
// {
//     int i, j;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 9; j++)
//         {
//             if(j<=6-i ||j>=4+i)
//             printf("*");
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//    1
//   121
//  12321
// 1234321
// #include <stdio.h>

// int main()
// {
//     int i, j, k = 1;
//     for (int i = 1; i <= 4; i++)
//     {
//         k = 1;
//         for (int j = 1; j <= 7; j++)
//         {
//             if (j <= 3 + i && j >= 5 - i)
//                 if (j < 4)
//                     printf("%d", k++);
//                 else
//                     printf("%d", k--);
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1234321
//  12321
//   121
//    1

// int main()
// {
//     int i, j, k = 1;
//     for (int i = 1; i <= 4; i++)
//     {
//         k = 1;
//         for (int j = 1; j <= 7; j++)
//         {
//             if (j >=  i && j <= 8 - i)
//                 if (j < 4)
//                     printf("%d", k++);
//                 else
//                     printf("%d", k--);
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//  1234321
//  123 321
//  12   21
//  1     1

// #include <stdio.h>
// int main()
// {
//     int i, j, k=1;
//     for (int i = 1; i <= 4; i++)
//     {
//         k=1;
//         for (int j = 1; j <= 7; j++)
//         {
//             if (j <= 5 - i || j >= 3 + i)
//                 if (j < 4)
//                     printf("%d", k++);
//                 else
//                     printf("%d", k--);
//             else
//             {
//                 printf(" ");
//                j<4?k++:k--;
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

//         A
//       A B A
//     A B C B A
//   A B C D C B A
// A B C D E D C B A

// #include <stdio.h>
// int main()
// {
//     int i, j, k;
//     for (int i = 1; i <= 5; i++)
//     {
//         k = 'A';
//         for (int j = 1; j <= 9; j++)
//         {
//             if (j >= 6 - i && j <= 4 + i)
//                 if (j < 5)
//                     printf("%c ", k++);
//                 else
//                     printf("%c ", k--);
//             else
//                 printf("  ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// A B C D C B A
//   A B C B A
//     A B A
//       A

// #include <stdio.h>
// int main()
// {
//     int i, j, k;
//     for (int i = 1; i <= 4; i++)
//     {
//         k = 'A';
//         for (int j = 1; j <= 7; j++)
//         {
//             if (j >= i && j <= 8 - i)
//                 if (j < 4)
//                     printf("%c ", k++);
//                 else
//                     printf("%c ", k--);
//             else
//                 printf("  ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// A B C D E F G F E D C B A
// A B C D E F   F E D C B A
// A B C D E       E D C B A
// A B C D           D C B A
// A B C               C B A
// A B                   B A
// A                       A

//#include <stdio.h>
// int main()
// {
//     int i, j, k;
//     for (int i = 1; i <= 7; i++)
//     {
//         k = 64;
//         for (int j = 1; j <= 13; j++)
//         {
//             if (j <= 7)
//                 k++;
//             else
//                 k--;
//             if (j >= 6 + i || j <= 8 - i)
//                 printf("%c ", k);
//             else
//                 printf("  ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// *
// * *
// *   *
// *     *
// * * * * *

// #include <stdio.h>
// int main()
// {
//     int i, j;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if (i == 5)
//                 printf("* ");
//             else if (j == 1 || j == i)
//                 printf("* ");
//             else
//                 printf("  ");
//         }
//     printf("\n");
//     }
//     return 0;
// }

//         *
//       * *
//     *   *
//   *     *
// * * * * *

// #include <stdio.h>
// int main()
// {
//     int i, j;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if (i == 5)
//                 printf("* ");
//             else if (j == 5 || j ==6-i)
//                     printf("* ");
//             else
//             printf("  ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//     *
//    * *
//   *   *
//  *     *
// *********

// #include <stdio.h>

// int main()
// {
//     int i, j;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 9; j++)
//         {
//             if(i==5)
//             printf("* ");
//             else  if(j==6-i || j==4+i)
//             printf("* ");
//             else
//             printf("  ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// *********
//  *     *
//   *   *
//    * *
//     *

// #include <stdio.h>

// int main()
// {
//     int i, j;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 9; j++)
//         {
//             if(i==1)
//             printf("* ");
//             else  if(j==i || j==10-i)
//             printf("* ");
//             else
//             printf("  ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *

// #include <stdio.h>

// int main()
// {
//     int i, j, k;
//     for (int i = 1; i <= 9; i++)
//     {

//         for (int j = 1; j <= 9; j++)
//         {
//                 k = 1;
//             if (i < 5)
//             {
//                 if (j >= 6 - i && j <= 4 + i)
//                     printf("*");
//                 else
//                     printf(" ");
//             }
//             else
//             {
//                 i=k;
//                 if (j >= i && j <= 10 - i)
//                     printf("*");
//                 else
//                     printf(" ");
//                 k++;
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

//   *****     *****
//  *******   *******
// ********* *********
// *****hitender******
//  *****************
//   ***************
//    *************
//     ***********
//      *********
//       *******
//        *****
//         ***
//          *
