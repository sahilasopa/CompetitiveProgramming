#include <vector>
#include <algorithm>

using namespace std;

int sockMerchant(int n, vector<int> ar) {
    vector<int> arrayOfSocks;
    int noOfPairs = 0;
    for (int i = 0; i < n; ++i) {
        if (std::find(arrayOfSocks.begin(), arrayOfSocks.end(), ar[i]) != arrayOfSocks.end()) {
            arrayOfSocks.erase(remove(arrayOfSocks.begin(), arrayOfSocks.end(), ar[i]), arrayOfSocks.end());
            noOfPairs++;
        } else {
            arrayOfSocks.push_back(ar[i]);
        }
    }
    return noOfPairs;
}

// Info: Testcases Worked

//int main() {
//    vector<int> socks = {1,1,2,2,4,4,5,6,3,1,2};
//    cout << sockMerchant(6 ,socks);
//    return 0;
//}

/*
There is a large pile of socks that must be paired by color. Given an array of integers representing the color of each sock,
determine how many pairs of socks with matching colors there are.
*/