#include <iostream>

using namespace std;

void staircase(int n) {
    int height;
    height = n;

    for (int i = 1; i <= height; i++) {
        for (int j = 0; j < i; j++) {
            if (j == 0) {
                //Printing spaces
                for (int t = 0; t < height - i; t++) cout << " ";
            }
            //Print hashes
            cout << "#";
        }
        cout << endl;
    }
}
// Info: TestCases Worked

//int main() {
//    staircase(6);
//    return 0;
//}