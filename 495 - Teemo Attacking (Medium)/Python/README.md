# Python Solution for 495 - Teemo Attacking

## Approach

We simply need to iterate the array and count the total number of seconds Ashe
is poisoned. However, we must account for overlap.

## Explanation

Iterate through the time series array. At each time, reset the duration clock.
If the difference between the previous time and the current time is less than
the duration, we must only add that amount of time. If it's the first time
encountered, we must start the timer but not add any time to the total. If it
is not the first time and there is no overlap, we just add the entire duration
and reset the timer.
