# Monte-Carlo-Simulation

## Prompt
A Monte Carlo method uses random values to model a system and/or estimate values. The technique is used widely in science and engineering, finance, and even law/policy.

A simple and common example of a Monte Carlo simulation can be used to estimate the value of π, which is widely known as the ratio of the area of a circle's circumference to its diameter. Less prevalent (but equally true) is the relationship between the areas of a circle and a square it is inscribed within.

With A_c = πr^2 and A_s = (2r)^2 = 4r^2, the ratio of these two quantities is given by A_c / A_s = (πr^2) / (4r^2) = π / 4.

The Monte Carlo method for estimating π picks several random points within a unit square and counts the number of these sample points that also lie within the unit circle. As indicated by the formula above, four times this ratio gives a reasonable estimate of π when the number of samples is large. This fact is demonstrated in the animation at right.

Write a program montecarlopi.c that uses this method to calculate and print an estimate of π that is accurate to three decimal digits.

## Response
The program is [here](https://github.com/ridhika123/Monte-Carlo-Simulation/blob/main/montecarlopi.c).
