class Solution(object):
    def findPoisonedDuration(self, timeSeries, duration):
        """
        :type timeSeries: List[int]
        :type duration: int
        :rtype: int
        """
        if len(timeSeries) < 1: return 0

        currentTimeLeft = 0 # Our current timer for poison.
        totalTime = 0       # The total time Ashe has been poisoned.

        for i in range(len(timeSeries)): # Iterate the time series.
            if currentTimeLeft == 0:        # If this is the first number
                currentTimeLeft = duration  # just start the timer.
            elif timeSeries[i] - timeSeries[i - 1] < duration:  # If there is overlap
                currentTimeLeft = duration                      # Restart the timer.
                totalTime += timeSeries[i] - timeSeries[i - 1]  # Add time equal to the difference.
            else:                               # Otherwise
                totalTime += currentTimeLeft    # Add all the time.
                currentTimeLeft = duration      # Restart the timer.

        totalTime += duration # Account for the time added by the last number in the time series.

        return totalTime
                
