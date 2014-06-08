/**
 *
 * 06/08/2014
 *
 * trig.h
 *
 * header file for trig.c
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

// function declarations
float hypotenuse(float x, float y);
float sine(float x, float y);
float cosine(float x, float y);
float tangent(float x, float y);
float cosecant(float x, float y);
float secant(float x, float y);
float cotangent(float x, float y);
float area(float x, float y);

/* hypotenuse is defined as the square root of the summation of squares of the
   two given lengths. */ 
float hypotenuse(float x, float y) {return sqrt((x * x) + (y * y));}

/* The sine of an angle is defined as its opposite side divided by the
   hypotenuse length. */
float sine(float x, float y) {float h = hypotenuse(x, y); return (x / h);}

/* The cosine of an angle is defined as its adjacent side divided by the
   hypotenuse length. */
float cosine(float x, float y) {float h = hypotenuse(x, y); return (y / h);}

/* The tangent of an angle is defined as its opposite side divided by the
   adjacent side length. */
float tangent(float x, float y) {return (x / y);}

// cosecant function is defined as 1 divided by the sine function
float cosecant(float x, float y) {float s = sine(x, y); return (1 / s);}

// secant function is defined as 1 divided by the cosine function
float secant(float x, float y) {float c = cosine(x, y); return (1 / c);}

// cotangent function is defined as 1 divided by the tangent function
float cotangent(float x, float y) {return (y / x);}

/* the toal area of a triangle is defined as one-half the base times the height.
   This being a right triangle, it simplifies down to one-half times the two
   dimensions given. */
float area(float x, float y) {return ( 0.5 * x * y);}




