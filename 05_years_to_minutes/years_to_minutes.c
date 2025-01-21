// Include 
#include <stdio.h>

//Main Function'
int main(){

    //Variables
    int age_in_years;
    int age_in_minutes;

    //Write Prompt
    puts("Enter your age in years:");

    //Get Input
    scanf("%d", &age_in_years);

    //Do The Math
    age_in_minutes = age_in_years * 525600;

    //Print 
    printf("\"%d\" years is \"%d\" minutes", age_in_years, age_in_minutes);

return 0;
}