#include <stdio.h>

// Define the structure for time
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to calculate the difference between two time periods
struct Time calculateTimeDifference(struct Time t1, struct Time t2) {
    struct Time difference;
    int seconds1, seconds2, totalSeconds;

    // Convert both time periods to seconds
    seconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    seconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    // Calculate the absolute difference in seconds
    totalSeconds = seconds2 - seconds1;
    if (totalSeconds < 0) {
        totalSeconds *= -1;
    }

    // Convert the total seconds back to hours, minutes, and seconds
    difference.hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    difference.minutes = totalSeconds / 60;
    difference.seconds = totalSeconds % 60;

    return difference;
}

int main() {
    struct Time time1, time2, difference;

    printf("Enter the first time period (hours minutes seconds): ");
    scanf("%d %d %d", &time1.hours, &time1.minutes, &time1.seconds);

    printf("Enter the second time period (hours minutes seconds): ");
    scanf("%d %d %d", &time2.hours, &time2.minutes, &time2.seconds);

    difference = calculateTimeDifference(time1, time2);

    printf("Time Difference: %d hours, %d minutes, %d seconds\n",
           difference.hours, difference.minutes, difference.seconds);

    return 0;
}