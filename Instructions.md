## Learning Objectives
- Learn the VS-Code programming environment
- Apply basic programming concepts in C++

## Overview
Your task for this assignment is to build a dice roll simulator that functions according to the following specifications.

## Program Operation
Your program should prompt the user for the number of rolls to make (see example below). It should then simulate two (6-sided) die tosses per roll using the C++ rand() function for each individual die toss. For each roll, the total value of the result should be calculated. An array of integers should be used to keep track of the number of times each total is rolled. After all simulations are complete, the number of times each total was rolled should be printed. Be sure to seed the random number generator with the time (as discussed in class) to ensure that you get new random outputs each time you run the program.

## Example of Program Execution
In the example below, the number 100 is entered by the user:
```
How many rolls?  100
Simulating 100 rolls...
Results:
2 was rolled 6 times
3 was rolled 5 times
4 was rolled 9 times
5 was rolled 9 times
6 was rolled 14 times
7 was rolled 23 times
8 was rolled 13 times
9 was rolled 11 times
10 was rolled 7 times
11 was rolled 1 times
12 was rolled 2 times
```

## Turn in and Grading
Please upload a single file named project1.cpp to the dropbox. Do not zip, archive, or compress your file.

This project is worth 10 points, distributed as follows:

| Task                                                                                                                          | Points |
| ----------------------------------------------------------------------------------------------------------------------------- | ------ |
| Program compiles, runs, and produces correct output                                                                           | 4      |
| Program produces different output each time it is run                                                                         | 1      |
| Program makes correct use of an array to store roll total counts                                                              | 2      |
| Program conforms to coding standards (see CS 3100 Coding Standards in the Content/Handouts section of our class Pilot page)   | 3      |
