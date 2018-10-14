# C++ Solution for 7 - Two Sum

## Approach

We will need to first keep track of the sign of the number, reverse the digits, and then multiply by the sign again. At this point, we
can check if the number is a 32 bit signed integer; if it is, we will return it. If not, we will return 0.

## Explanation

Hold the negative flag in a boolean.

We start with the new number being 0. We iterate while the absolute value of x is greater than 0, and each time we multiply our new number
by 10 (to get a 0 in the ones place) and add the old number mod 10 (which gives us the ones digit of the old number). We can then divide
the old number by 10 to shift the number one place to the right.

Finally, add a negative sign (if needed), and check if the number is 32 bit.
