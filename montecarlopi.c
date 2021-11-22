/***********************************************************************
 * Homework 1: Loopy Conditionals
 ***********************************************************************/

/* Program conducting Monte Carlo simulations to estimate value if pi
 *
 * Picks several random points (x and y values) 1000000 times from the unit square first quadrant.
 * Counts the points that are in the first quadrant of the unit circle (by using equation of circle). 
 * Calculates the value of pi using relationship: Area of circle / Area of square = (πr^2) / (4r^2) = π / 4. 
 * Prints pi up to 4 decimal places.
 * 
 */

#include <stdio.h>
#include <stdlib.h>

/* Main program entry */
int 
main (void)
{
    double x_coordinate, y_coordinate;
    double no_of_trials = 1000000; /* Declares number of random samplings equal to 1000000. */
    double points_inside_circle = 0; /* Declares and sets counter for number of points inside 1st quadrant of unit circle .*/
    int unit_radius = 1;
    double ratio_square_to_circle = 4; 
    double pi;

    for (int i = 1; i <= no_of_trials; i++) /* Does random sampling of points 1000000 number of times. */
    {
        x_coordinate = (double) random() / (double) RAND_MAX; /* Randomly picking x coordinate and divides by RAND_MAX to scale range. */
        y_coordinate = (double) random() / (double) RAND_MAX; /* Randomly picking y coordinate and divides by RAND_MAX to scale range. */
        if (x_coordinate * x_coordinate + y_coordinate * y_coordinate <= unit_radius) points_inside_circle++; 
        /* If (x,y) lies inside the unit circle, increments number of points. */
    }

    pi = ratio_square_to_circle * (points_inside_circle / no_of_trials); /* Calculates value of pi. */
    printf("%.4f\n", pi); 
    if (pi < 3.141) 
    printf("Increase the number of random samplings to get accuracy up to 3 decimal points.\n"); /* Accoiunting for edge case. */
    return 0;
} // main
