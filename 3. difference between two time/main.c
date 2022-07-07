#include <stdio.h>
struct TIME {
   int seconds;
   int minutes;
   int hours;
};

// Computes difference between time periods
void differenceBetweenTimePeriod(struct TIME start, struct TIME stop, struct TIME *diff) 
{
    // count second
   while (start.seconds > stop.seconds) {
      --stop.minutes;
      stop.seconds += 60;
   }
   diff->seconds = stop.seconds - start.seconds ;

    // count minutes
   while (start.minutes > stop.minutes) {
      --stop.hours;
      stop.minutes += 60;
   }
   diff->minutes = stop.minutes - start.minutes ;

    // count hours
   diff->hours = stop.hours - start.hours ;
}

int main() {
   struct TIME startTime, stopTime, diff;

   printf("Enter the start time hours, minutes and seconds: ");
   scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

   printf("Enter the stop time hours, minutes and seconds: ");
   scanf("%d %d %d", &stopTime.hours, &stopTime.minutes, &stopTime.seconds);

   // Difference between start and stop time
   differenceBetweenTimePeriod(startTime, stopTime, &diff);

   printf("\nTime Difference: %d:%d:%d - ", stopTime.hours, stopTime.minutes, stopTime.seconds);
   printf("%d:%d:%d ", startTime.hours, startTime.minutes, startTime.seconds);
   printf("= %d:%d:%d\n", diff.hours, diff.minutes, diff.seconds);
   return 0;
}