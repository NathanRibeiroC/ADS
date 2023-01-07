#include <bits/stdc++.h>
using namespace std;
// Algo 1
// time complex: O(n^3)
// a
// b
// 1, 2, 3, 4, 5
// move a --> move b --> perform sum from a to b
int maxSubSumAlgo1(int array[]) {
    int best = 0;
    int n = 8;
    for (int a = 0; a < n; a++) {
        for (int b = a; b < n; b++) {
            int sum = 0;
            for (int k = a; k <= b; k++) {
                sum += array[k];
            }
            best = max(best,sum);
        }
    }
    return best;
}

// Algo 2
// time complex: O(n^2)
// a
// b
// move a --> perform sum in b
int maxSubSumAlgo2(int array[]) {
    int best = 0;
    int n = 8;
    for (int a = 0; a < n; a++) {
        int sum = 0;
        for (int b = a; b < n; b++) {
            sum += array[b];
            best = max(best,sum);
        }
    }
    return best;
}

// Algo 3 (Kadane's Algorithm)
// time complex: O(n)
// a
// b
int maxSubSumAlgo3(int array[]) {
    int best = 0;
    int n = 8;
    int sum = 0;
    for (int k = 0; k < n; k++) {
        sum = max(array[k],sum+array[k]);
        best = max(best,sum);
    }
    return best;
}

int main() {

    int myArray[8] = {-1,2,4,-3,5,2,-5,2};

    int maxSum = maxSubSumAlgo1(myArray);

    maxSum = maxSubSumAlgo2(myArray);

    maxSum = maxSubSumAlgo3(myArray);

    cout << maxSum << endl;
}