#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <random>
using namespace std;

int generate(int n) {

    mt19937 rng;
    rng.seed(n);
    uniform_int_distribution<mt19937::result_type> budgetRand(1,500);
    uniform_int_distribution<mt19937::result_type> valueRand(1,300);
    uniform_int_distribution<mt19937::result_type> lenRand(1,300);
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
    for (int i = 1; i <= 1000; ++i) {
        generate(i);
        myfile << to_string(i) << endl;
    }
    myfile.close();
}
