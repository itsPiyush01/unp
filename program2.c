#include <stdio.h>

void main()
{

     int a, b, c;

     printf("Enter three Number :");

     scanf("%d%d%d", &a, &b, &c);

     switch (a > b)
     {
     case 0:
     {
          switch (b > c)

          {
          case 0:
               printf("Largest :%d", c);
               break;
          case 1:
               printf("Largest :%d", b);
               break;
          }
          break;
     }

     case 1:
     {

          switch (a > c)

          {

          case 0:
               printf("Largest :%d", c);

               break;

          case 1:
               printf("Largest :%d", a);

               break;
          }

          break;
     }
