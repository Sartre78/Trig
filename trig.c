/**
 *
 * 06/08/2014
 *
 * trig.c
 *
 * fun with basic trig functions
 *
 *
 * For a given triangle:
 *
 *                 *
 *              *  *
 *           *     *
 *        *        * X
 *     *  0 theta  *
 *  *  *  *  *  *  *  
 *          Y 
 *
 **/

// libraries
#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

// include trig.h header file
#include "trig.h"

// function declarations
float hypotenuse(float x, float y);
float sine(float x, float y);
float cosine(float x, float y);
float tangent(float x, float y);
float arcsine(float x, float y);
float arcosine(float x, float y);
float arctangent(float x, float y);
float area(float x, float y);




int main (void)
{

    printf("\nPlease define the right triangle:\n\n"); // initial user prompt
    // printout of triangle being depicted
    printf("                *\n");
    printf("             *  *\n");
    printf("          *     *\n");
    printf("       *        * X\n");
    printf("    *  0 theta  *\n");
    printf(" *  *  *  *  *  *\n");  
    printf("          Y\n"); 

    
    // prompt user to define X dimension
    printf("\n\nPlease enter the 'X' dimension (i.e., the 'rise'):\n\n"); float x = GetFloat();
    // prompt user to define Y dimension
    printf("\n\nPlease enter the 'Y' dimension (i.e., the 'run'):\n\n"); float y = GetFloat();
    
        // switch case
    while (true)
    {
        printf("\nPlease enter a valid option\n"); 
        printf("\n 1 - Quit\n"); 
        printf("\n 2 - Hypotenuse\n");
        printf("\n 3 - Sine\n");
        printf("\n 4 - Cosine\n");
        printf("\n 5 - Tangent\n");
        printf("\n 6 - Cosecant\n");
        printf("\n 7 - Secant\n");
        printf("\n 8 - Cotangent\n");
        printf("\n 9 - Triangle Area\n\n");
        int option = GetInt();

        switch (option)
        {
            // quit
            case 1: printf("\nGoodbye!\n\n"); return 0;
            
            // hypotenuse
            case 2: printf("\nThe hypotenuse of this triangle is: %.2f units long.\n", hypotenuse(x, y)); break;
            
            // Sine
            case 3: printf("\nThe Sine of this triangle is: %.2f.\n",sine(x, y)); break;
            
            // Cosine
            case 4: printf("\nThe Cosine of this triangle is: %.2f.\n",cosine(x, y)); break;
            
            // Tangent
            case 5: printf("\nThe Tangent of this triangle is: %.2f.\n",tangent(x, y)); break;
            
            // Cosecant
            case 6: printf("\nThe Cosecant of this triangle is: %.2f.\n",cosecant(x, y)); break;
            
            // Secant
            case 7: printf("\nThe Secant of this triangle is: %.2f.\n",secant(x, y)); break;
            
            // Cotangent
            case 8: printf("\nThe Cotangent of this triangle is: %.2f.\n",cotangent(x, y)); break;
            
            // area
            case 9: printf("\nThe total Area of this triangle is: %.2f square units.\n",area (x, y)); break;
                      
            default: printf("Not a valid option.\n"); break;
        }   
    }      
}
















