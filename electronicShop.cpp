#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int getMoneySpent(const vector<int> &keyboards, const vector<int> &drives, int b) {
    vector<int> sumPrices;
    for (int keyboard : keyboards) {
        for (int drive : drives) {
            int price = keyboard + drive;
            if (price <= b) {
                sumPrices.push_back(keyboard + drive);
            }

        }
    }
    if (sumPrices.empty()) {
        return -1;
    }
    return *max_element(sumPrices.begin(), sumPrices.end());
}

//  Info: TestCases Worked

/*
A person wants to determine the most expensive computer keyboard and USB drive that can be purchased with a give budget.
Given price lists for keyboards and USB drives and a budget,
find the cost to buy them. If it is not possible to buy both items, return -1.
 */