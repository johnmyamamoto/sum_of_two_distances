#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//added the struct to the code - E
struct distance1 {
    char feet1[15];
    char inches1[15];
};

struct distance2 {
    char feet2[15];
    char inches2[15];
};

int main() {
    //Reformatted variables into structures - K
    struct distance1 distance1;
    struct distance2 distance2;
    //While loop for each distance (did not get a chance to edit as much) - K
    while (1) {
        printf("Enter 1st distance\nEnter feet (non-negative **integer only**): ");
        scanf("%s", &distance1.feet1);

        // Integer valid: break out of loop
        if (atoi(distance1.feet1) > 0) {
            break;
        }
        printf("Please enter a non-negative integer value.\n");

        printf("Enter inch (non-negative **integer only**): ");
        scanf("%s", &distance1.inches1);

        //Check float validity - K
        if (atoi(distance1.inches1) > 0) {
            if(atoi(distance1.inches1)>144){
                break;
            }
            break;
        }
    }
    while (1) {
        printf("Enter 2nd distance\nEnter feet (non-negative **integer only**): ");
        scanf("%s", &distance2.feet2);

        // Integer valid: break out of loop
        if (atoi(distance2.feet2) > 0) {
            break;
        }
        printf("Please enter a non-negative integer value.\n");

        printf("Enter inch (non-negative **integer only**): ");
        scanf("%s", &distance2.inches2);

        //Check float validity - K
        if (atoi(distance2.inches2) > 0) {
            if(atoi(distance2.inches2)>144){
                break;
            }
            break;
        }
    }

    //Converts any extra inches to feet - E
    float totalInches = atof(distance1.inches1) + atof(distance2.inches2);
    int extraFeet;
    while(totalInches>11){
        totalInches -= 12;
        extraFeet++;
    }

    int totalFeet = atoi(distance1.feet1)+atoi(distance2.feet2)+extraFeet;
    
    //Print sum - K
    printf("Sum of distances = %d' %f", totalFeet,totalInches);
    
    return 0;
}