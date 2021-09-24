/*Import necessary libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*Create main function with input parameters argc and argv
So that we can accept input from command line*/
void main (int argc, char*argv[])
{

    /*Initialize a double array "prices" that represents the price of meals
    Index represents: 0=Salad, 1=Soup, 2-Sandwhich, 3-Pizza*/
    double prices[4] = {9.95, 4.55, 13.25, 22.35};

    /*Declare double variables for "mealCost", "taxAmount","tipAmount" &"totalBill" */
    double mealCost, taxAmount, tipAmount, totalBill;

    /*Declare int variables for "taxPercentage" & "tipPercentage" 
    which will be set to user input*/
    double taxPercentage, tipPercentage;

    /*Declare int "index" which will signify the meal and price*/
    int index;

    /*Declare time_t "t" for random number generator*/
    time_t t;

    /*Init random number genereator*/
    srand((unsigned) time(&t));

    /*Set "index" equal to random number 0-3 which we will use to select random meal*/
    index = rand() % 4;

    /*Use index to set "mealCost" */
    mealCost = prices[index];

    /*Ask user for tax percentage*/
    printf("What was the tax percentage?");
    /*Store input in "taxPercentage"*/
    scanf("%lf", &taxPercentage);

     
    /*Ask user for tip amount*/
    printf("What percent would you like to tip?");
    /*Store input in "tipPercentage"*/
    scanf("%lf", &tipPercentage);

    /*Calculate and store appropriate values to "taxAmount","tipAmount" & "totalBill"*/
    taxAmount = mealCost * (taxPercentage /100);
    tipAmount = mealCost * (tipPercentage/100);
    totalBill = mealCost + taxAmount + tipAmount;


    /*Print out meal name*/
    /*0=Salad, 1=Soup,2=Sandwich,3=Pizza*/
    switch(index)
    {
        case 0:
            printf("Meal name: Salad\n");
            break;
        case 1:
            printf("Meal name: Soup\n");
            break;
        case 2:
            printf("Meal name: Sandwich\n");
            break;
        case 3:
            printf("Meal name: Pizza\n");
            break;
    }

    /*Print out meal cost, tax amount, tip amount, & total bill*/
    printf("Meal cost: %lf\n", mealCost);
    printf("Tax amount: %lf\n", taxAmount);
    printf("Tip amount: %lf\n", tipAmount);
    printf("Total Bill: %lf\n", totalBill);



}

