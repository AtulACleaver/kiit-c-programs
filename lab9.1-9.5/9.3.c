// WAP to add two times (in hr-min-sec) by passing structure to a function.

#include <stdio.h>

struct Time { int hours, minutes, seconds; };

struct Time addTimes(struct Time t1, struct Time t2) {
    return (struct Time){
        t1.hours + t2.hours + (t1.minutes + t2.minutes + (t1.seconds + t2.seconds) / 60) / 60,
        (t1.minutes + t2.minutes + (t1.seconds + t2.seconds) / 60) % 60,
        (t1.seconds + t2.seconds) % 60
    };
}

int main() {
    struct Time t1, t2, result;
    printf("Enter first time (hh mm ss): "); scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);
    printf("Enter second time (hh mm ss): "); scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);
    result = addTimes(t1, t2);
    printf("Sum of times: %d hours %d minutes %d seconds\n", result.hours, result.minutes, result.seconds);
    return 0;
}

// Output:
// Enter first time (hh mm ss): 2 30 45
// Enter second time (hh mm ss): 1 45 50
// Sum of times: 4 hours 16 minutes 35 seconds