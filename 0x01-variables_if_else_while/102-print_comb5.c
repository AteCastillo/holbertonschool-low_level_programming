#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
 
int main(void)
{
  int i, ii, iii, iia;
 
  for (i = '0'; i <= '9'; i++) /* 1st number from the left */
  {
        for (ii = '0'; ii <= '9'; ii++) /* 2nd number from the left */
            {
            for (iii = '0'; iii <= '9'; iii++) /* 3rd number from the left */
            {
                for (iia = '0'; iia <= '9'; iia++) /* last number */
            {
            
            
            if (i < iii || (i == iii && ii < iia ))
            {
            putchar(i);
            putchar(ii);
            putchar(' ');
            putchar(iii);
            putchar(iia);
            
        
         if (i != '9' || ii != '8' || iii != '9' || iia != '9')
            
         {
            putchar(',');
            putchar(' ');
        
         }
         else
         break;
         }
         }
        }
        }
        }

    return 0;
}
