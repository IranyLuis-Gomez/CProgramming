/*

The program converts the given number of seconds to HMS.

65 seconds -> 0 hours 1 minute 5 seconds

*/

#include <stdio.h>

int main(){

    // Variables 
    int seconds = 0;
    int minutes = 0;
    int hours = 0;
    int remaining_minutes = 0;
    int remaining_seconds = 0;

    // Get the number of seconds 
    puts("Enter the number of second(s):");
    scanf("%d", &seconds);

    // Calculate number of hours and minutes
    minutes = seconds / 60;
    hours = minutes / 60;

    // Calculate remaining minutes and seconds
    remaining_minutes = minutes % 60;
    remaining_seconds = seconds % 60;

    // Print the results
    printf("%d second(s) is %d hour(s) %d minute(s) and %d second(s).\n", seconds, hours, remaining_minutes, remaining_seconds);

    // TODO by Thursday 
    // Calculate the number of hours 

    return 0;

}