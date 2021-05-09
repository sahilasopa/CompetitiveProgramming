#include <vector>
#include <iostream>

using namespace std;

void plusMinus(vector<int> arr) {
    auto arraySize = float (arr.size());
    float positiveValues = 0;
    float negativeValues = 0;
    float zeroValues = 0;
    for (int i = 0; i < int (arraySize); i++) {
        if (arr[i] < 0) {
            negativeValues++;
        } else if (arr[i] > 0) {
            positiveValues++;
        } else {
            zeroValues++;
        }
    }
    auto zeroRatio = float(zeroValues / arraySize);
    auto positiveRatio = float(positiveValues / arraySize);
    auto negativeRatio = float(negativeValues / arraySize);
    cout << positiveRatio << endl;
    cout << negativeRatio << endl;
    cout << zeroRatio;
}

// Info: TestCases Worked

/*
Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. Print the decimal value of each fraction on a new line with  places after the decimal.

Note: This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to  are acceptable.
 */