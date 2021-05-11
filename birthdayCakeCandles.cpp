#include <vector>
#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(vector<int> candles) {
    sort(candles.begin(), candles.end());
    int biggestCandleCount = 0;
    for (int i = 0; i < candles.size(); i++) {
        if (candles[i] == candles.back()) {
            biggestCandleCount++;
        }
    }
    return biggestCandleCount;
}

// Info: TestCases Worked

//int main() {
//    cout << birthdayCakeCandles({3,2,1,3});
//    return 0;
//}



/*
You are in charge of the cake for a child's birthday.
You have decided the cake will have one candle for each year of their total age.
They will only be able to blow out the tallest of the candles. Count how many candles are tallest.
 */