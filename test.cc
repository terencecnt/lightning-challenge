#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <random>
using namespace std;
const int NUMBER_OF_TESTS = 1000;
const int MAX_BUDGET_NUMBER = 500;
const int MAX_MONEY_OR_MILES_PER_INDEX_NUMBER = 300;
const int MAX_LENGTH_OF_ARRAY = 300;

int generate(int n) {

    mt19937 rng;
    rng.seed(n);
    uniform_int_distribution<mt19937::result_type> budgetRand(1,MAX_BUDGET_NUMBER);
    uniform_int_distribution<mt19937::result_type> valueRand(1,MAX_MONEY_OR_MILES_PER_INDEX_NUMBER);
    uniform_int_distribution<mt19937::result_type> lenRand(1, MAX_LENGTH_OF_ARRAY);
    ofstream testFile (to_string(n) + ".in");
    

    testFile << budgetRand(rng) << endl;
    int len = lenRand(rng);
    testFile << len << endl;

    for (int i = 0; i < len * 2; ++i) {
        testFile << valueRand(rng) << endl;
    }
    testFile.close();
}
int main(int argc, const char * argv[]) {
    
    ofstream myfile("suiteFile");
    for (int i = 1; i <= NUMBER_OF_TESTS; ++i) {
        generate(i);
        myfile << to_string(i) << endl;
    }
    myfile.close();
}
