#include <vector>

using namespace std;


long aVeryBigSum(vector<long> ar) {
    long int sum = 0;
    for (int i = 0; i < ar.size(); i++){
        sum += ar[i];
    }
    return sum;
}

// Info: TestCases Worked

/*
Complete the aVeryBigSum function in the editor below. It must return the sum of all array elements.

aVeryBigSum has the following parameter(s):

int ar[n]: an array of integers .
 */