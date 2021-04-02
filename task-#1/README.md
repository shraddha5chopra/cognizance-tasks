**1. Programming using C++

**An elephant decided to visit his friend. It turned out that the elephant's house is located at point 0 and his friend's house is located at point
x(x > 0) of the coordinate line. In one step the elephant can move 1, 2, 3, 4 or 5 positions forward. Determine, what is the minimum number of steps
he needs to make in order to get to his friend's house.

**Input
The first line of the input contains an integer x (1 ≤ x ≤ 1 000 000) — The coordinate of the friend's house.

**Output
Print the minimum number of steps that the elephant needs to make to get from point 0 to point x.

I had opted for Computer Science as my optional subject and hence I'm well versed with C++. So this task wasn't so difficult for me. 

Here we need to input a positive number(let it be x) which is the location of the friend's house and initialize the position of the elephant as 0.
Then, we need to calculate the minimum number of steps the elephant needs to take to reach that location.
The steps can range from 1 to 5.

First we'll divide x by 5 which is step 1 taken by the elephant and the % will help us in calculating the rest of the required steps. 
