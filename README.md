# netrom-schedules-problem

A planning software for a vessel transport company allows creating schedules for the days in which crew members work.

Each schedule has a start and end date (full day is considered). 

The software needs an improvement in order to create recurrences. A recurrence is created as following: start day of the month, number of working days, number of days off and the number of occurrences.  

Q2 (Working Schedules) - Requirement
Write a function that receives these parameters and outputs the working schedules. The working schedules will be displayed as a list of working intervals, in the format (startday, endday) of each interval.

The header of the function should be the following:

void DisplaySchedules(int startDay, int noOfWorkingDays, int noOfDaysOff, int noOfOccurences) 



Example:

For startday=1, noOfWorkingDays= 5, noofDaysOff= 3 and noOfOccurences = 5, the function should print: 

(1-5), (9-13), (17-21), (25-29), (3-7) 
