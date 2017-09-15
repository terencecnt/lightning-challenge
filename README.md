# lightning-challenge

Given an array of money, an array of miles, a budget value, maximize the amount of miles that can be achieved while keeping the budget > 0 from the money spent. Choosing an index earns the amount of miles on that index and loses the amount of money also on that index. No consecutive indexes can be chosen.

This can be reduced 0/1 knapsack problem with an additional constraint of no consecutive indexes being selected. The budget would be the weight that the bag can handle, the money would be the weight, and the miles would be the value.

main.cc is a C++ implementation to solve this problem, g++ compiler is used  - e.g. g++ main.cc -o main

test.cc creates all the tests, change the constant variables at the top of the file to tweak the number of tests and the different factors of the test cases

run ./InputToOutput suiteFile ./main in the testFolder to generate all the output of the tests

run time ./runSuite suiteFile ./main in the testFolder to check the program by the tests and prints out the time required, main would be replaced by people's submission of any language

a Test Case's structure is inputting
budget Number
Length of Array
Money at index 0
Money at index 1
.
.
.
Money at index Length of Array - 1
Miles at index 0
Miles at index 1
Miles at index 2
.
.
.
Miles at index Length of Array - 1

and the user would require to print out the solution
My C++ implementation demonstrates this concept 