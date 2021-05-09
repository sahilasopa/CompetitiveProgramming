#include <iostream>
#include<vector>

using namespace std;

int simpleArraySum(const vector<int> &ar) {
    int sum = 0;
    for (int i : ar) {
        sum += i;
    }
    return sum;
}

// Info: TestCases Worked

/*
complete the simpleArraySum function in the editor below. It must   return the sum of the array elements as an integer.

simpleArraySum has the following parameter(s):

ar: an array of integers
 */
