#include <vector>

using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int sumOfPrimaryDiagonal = 0;
    int sumOfSecondaryDiagonal = 0;
    int sum;
    for (int i = 0; i < arr.size(); i++) {
        sumOfPrimaryDiagonal += arr[i][i];
    }
    for (int i = 0; i < arr.size(); i++) {
         sumOfSecondaryDiagonal += arr[i][arr.size() - i - 1];
    }
    if (sumOfSecondaryDiagonal < sumOfPrimaryDiagonal){
        sum = sumOfPrimaryDiagonal - sumOfSecondaryDiagonal;
    }else {
        sum =  sumOfSecondaryDiagonal - sumOfPrimaryDiagonal;
    }
    return sum;
}

//Info: Testcases Worked


//int main() {
//    vector<vector<int>> array =
//            {
//                    {1, 2, 3},
//                    {4, 5, 6},
//                    {7, 8, 9}
//            };
//    diagonalDifference(array);
//    return 0;
//}

/*
1 2 3
4 5 6
9 8 9

 */

/*
Given a square matrix, calculate the absolute difference between the sums of its diagonals.

For example, the square matrix  is shown below:

1 2 3
4 5 6
9 8 9
The left-to-right diagonal = 1 + 5 + 9 = 15.
The right to left diagonal = 2 + 5 + 9 = 17.
Their absolute difference is
 [15 - 17] = 2.
 */