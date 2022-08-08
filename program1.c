#include <stdio.h>
int main()
{

     printf("Enter three number : ");
     int a, b, c;
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
     }

     switch (a < b)
     {
     case 0:
     {
          switch (b < c)

          {
          case 0:
               printf("smallest :%d", c);
               break;
          case 1:
               printf("smallest :%d", b);
               break;
          }
          break;
     }
     case 1:
     {
          switch (a < c)
          {
          case 0:
               printf("smallest :%d", c);

               break;

          case 1:
               printf("smallest :%d", a);

               break;
          }
          break;
     }
     }

     return;
}