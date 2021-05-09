#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;


void miniMaxSum(vector<int> arr) {
    sort(arr.begin(), arr.end());
    long int maxSum = 0;
    long int minSum = 0;
    for (int i = 1; i < arr.size(); ++i) {
        maxSum += arr[i];
    }
    for (int i = 0; i < arr.size() - 1; ++i) {
        minSum += arr[i];
    }
    cout << minSum << " " << maxSum;
}

// Info: Testcases Worked


/*
Given five positive integers, find the minimum and maximum values that can be calculated by summing
exactly four of the five integers. Then print the respective minimum and maximum values
as a single line of two space-separated long integers.
 */
