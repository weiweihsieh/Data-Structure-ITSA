#include <stdio.h>

#define DAY 24
#define HOUR 60
#define MINUTE 60

int main()
{
    int time, days, hours, minutes, seconds;

    scanf("%d", &time);

    seconds = time % MINUTE;

    time /= MINUTE;
    minutes = time % HOUR;

    time /= HOUR;
    hours = time % DAY;

    days = time /= DAY;

    printf("%d days\n", days);
    printf("%d hours\n", hours);
    printf("%d minutes\n", minutes);
    printf("%d seconds\n", seconds);

    return 0;
}
