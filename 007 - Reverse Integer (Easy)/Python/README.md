# Python Solution for 7 - Reverse Integer

## Approach

There are essentially two ways to go about this problem. One is through using arithmetic,
and the other is through string manipulation. In either case, we will need to first keep track of
the sign of the number, reverse the digits, and then multiply by the sign again. At this point, we
can check if the number is a 32 bit signed integer; if it is, we will return it. If not, we will return 0.

## Explanation

Hold the negative flag in a boolean.

For the arithmetic approach, we start with the new number being 0. We iterate
while the absolute value of x is greater than 0, and each time we multiply our new number by 10 (to get a 0 in the ones place) and add the
old number mod 10 (which gives us the ones digit of the old number). We can then divide the old number by 10 to shift
the number one place to the right.

For the string manipulation approach, just convert the number to a string and reverse it. This is far easier, but an interview may ask that you don't use
string manipulation.

Finally, add a negative sign (if needed), and check if the number is 32 bit. That's it.
