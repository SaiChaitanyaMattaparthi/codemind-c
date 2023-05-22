#include <stdio.h>

void convertTo12HourFormat(int *hour, int *minute) {
    char period[] = "AM";

    if (*hour >= 12) {
        period[0] = 'P';
        *hour -= 12;
    }

    if (*hour == 0) {
        *hour = 12;
    }

    printf("%02d:%02d %s
",*hour,*minute,period);
}

int main() {
    int hour, minute;
    scanf("%d:%d", &hour, &minute);

    convertTo12HourFormat(&hour, &minute);

    return 0;
}
