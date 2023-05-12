#include <stdio.h>

int main()
{
    int y, m, d;
    printf("Enter year, month, and day (YYYY MM DD): ");

    scanf("%d %d %d", &y, &m, &d);

    int w = (y - 1) * 12 + m - 2 + d;

    w %= 7;

    if (w == 0)
    {
        printf("Sunday\n");
    }
    else if (w == 1)
    {
        printf("Monday\n");
    }
    else if (w == 2)
    {
        printf("Tuesday\n");
    }
    else if (w == 3)
    {
        printf("Wednesday\n");
    }
    else if (w == 4)
    {
        printf("Thursday\n");
    }
    else if (w == 5)
    {

        printf("Friday\n");
    }
    else if (w == 6)
    {
        printf("Saturday\n");
    }

    return 0;
}
