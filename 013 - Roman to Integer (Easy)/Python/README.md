# Python Solution for 13 - Roman to Integer

## Approach

We can simoly iterate through each character and sum their corresponding values, except for six exceptions: IV, IX, XL, XC, CD, and CM.
As long as we properly handle these exception, we can iterate normally.

## Explanation

Keep a reference to an integer containing our sum and to the previous value seen. If we iterate over a value, and our previous value is smaller,
this is a special case, and we should have subtracted this value, so decrement the total by 2 times that value. Return the result after iterating over every character.
