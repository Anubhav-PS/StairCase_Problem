# StairCase_Problem
C++ Program to find the number of stair case that can be formed from given number of horizontal and vertical lines

Question )

Given enpoints of 'n' lines, design an algorithm and write a C++ code to form a maximum length climb up staircase. 
Length of a staircase is determined by the number of horizontal lines in it.A staircase starts and ends with a horizontal line.
Assume that no two horizontal lines have same 'x' and no two vertical lines have same 'y' and all the values given are positive.
For example, when eight lines with end points as follows are given as input:

 
Line 1 - (10, 10) - (30, 10)

Line 2 - (20, 15) - (35, 15)

Line 3 - (30, 10) - (30, 20)

Line 4 - (30, 20) - (40, 20)

Line 5 - (40, 20) - (40, 30)

Line 6 - (50, 30) - (40, 30)

Line 7 - (50, 50) - (50, 30)

Line 8 - (50, 50) - (60, 50)

Three staircases can be formed as follows and their end points are:

Stair case 1 - (10, 10), (30, 10 ), (30, 20), (40, 20 ), (40, 30), (50, 30 ), (50, 50), (60, 50)

Stair case 2 – (30, 20), (40, 20 ), (40, 30), (50, 30 ), (50, 50), (60, 50 )

Stair case 3 – (40, 30), ( 50, 30 ), (50, 50), (60, 50 )

Staircase of maximum length is Stair case 1 with four horizontal lines.

Input Format

Number of lines, n

x – coordinate of end point 1 of line1

y – coordinate of end point 1 of line1

x – coordinate of end point 2 of line1

y – coordinate of end point 2 of line1

x – coordinate of end point 1 of line2

y – coordinate of end point 1 of line2

x – coordinate of end point 2 of line2

y – coordinate of end point 2 of line2

...

....

...

x – coordinate of end point 1 of linen

y – coordinate of end point 1 of linen

x – coordinate of end point 2 of linen

y – coordinate of end point 2 of linen

Output Format

Print each point in a line, x and y coordinates separated by a tab

End point 1 in staircase

End point 2 in staircase

End point 2 in staircase

...

...

...

last point 1 in staircase
