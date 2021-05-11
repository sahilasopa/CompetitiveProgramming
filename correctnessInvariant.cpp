#include <iostream>
#include <vector>

using namespace std;

void insertionSort(int N, int arr[]) {
    int i, j;
    int value;
    for (i = 1; i < N; i++) {
        value = arr[i];
        j = i - 1;
        while (j >= 0 && value < arr[j]) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = value;
    }
    for (j = 0; j < N; j++) {
        printf("%d", arr[j]);
        printf(" ");
    }
}

// Info: Testcases Worked

//int main() {
//    int arrayToSort[] = {45,53,53,2,5,1,56,7,4,3,56,6,5,4,5,6,4};
//    insertionSort(17, arrayToSort);
//    return 0;
//}

/*
In computer science, you could prove it formally with a loop invariant, where you state that a desired property is maintained in your loop. Such a proof is broken down into the following parts:

 Initialization: It is true (in a limited sense) before the loop runs.
 Maintenance: If it's true before an iteration of a loop, it remains true before the next iteration.
 Termination: It will terminate in a useful way once it is finished.
*/