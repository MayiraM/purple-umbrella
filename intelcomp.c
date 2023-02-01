#include<stdio.h>
#include<conio.h>

void  main()
{
    int y, count = 1;  //first 61 lines are not printing
    float i, x;

    for(y = 1; y <= 6; y++)
    {
        for(x = 5.5; x <= 12.5; x += 0.5)
        {
          i = 2 + (y + 0.5 * x);

          printf("%d. i = %0.2f,\t x = %0.2f,\t y = %d\n", count++,i, x, y);

        }
    }

    getch();
}
