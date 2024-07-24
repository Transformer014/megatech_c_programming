#include <stdio.h>

// Define the date structure
typedef struct
{
    int day;
    int month;
    int year;
} 
Date;

// Function to update the date to the following day
void dateUpdate(Date* date)
{
    // Increment the day
    date->day++;

    // Check for month rollover
    if (date->day > 31) 
    {
        date->day = 1;
        date->month++;

        // Check for year rollover
        if (date->month > 12)
       	{
            date->month = 1;
            date->year++;
        }
    }
}

int main() 
{
    Date today = {31, 12, 2024};
    printf("Today: %d-%d-%d\n", today.day, today.month, today.year);

    dateUpdate(&today);
    printf("Tomorrow: %d-%d-%d\n", today.day, today.month, today.year);

    return 0;
}
