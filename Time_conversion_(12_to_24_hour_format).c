#include <stdio.h>
#include <string.h>
#include <ctype.h>

void convertTo24HourFormat(char *time12, char *time24) {
    int hour, minute;
    char period[3];

    sscanf(time12, "%d:%d %2s", &hour, &minute, period);

    if (strcasecmp(period, "AM") == 0) {
        if (hour == 12) {
            hour = 0;
        }
    } else if (strcasecmp(period, "PM") == 0) {
        if (hour != 12) {
            hour += 12;
        }
    }

    sprintf(time24, "%02d:%02d", hour, minute);
}

int main() {
    char time12[10];
    char time24[10];
    fgets(time12, sizeof(time12), stdin);
    time12[strcspn(time12, "
")] = NULL; // Remove trailing newline

    convertTo24HourFormat(time12, time24);

    printf("%s
", time24);

    return 0;
}
