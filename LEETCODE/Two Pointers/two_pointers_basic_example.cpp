//
// Created by nribe on 08/01/2023.
//

// C++ Program Illustrating Naive Approach to
// Find if There is a Pair in A[0..N-1] with Given Sum

// Importing all libraries
#include <bits/stdc++.h>

using namespace std;

bool isPairSum(int A[], int N, int X)
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // as equal i and j means same element
            if (i == j)
                continue;

            // pair exists
            if (A[i] + A[j] == X)
                return true;

            // as the array is sorted
            if (A[i] + A[j] > X)
                break;
        }
    }

    // No pair found with given sum.
    return false;
}

// Two pointer technique based solution to find
// if there is a pair in A[0..N-1] with a given sum.
//int isPairSum(int A[], int N, int X)
//{
//    // represents first pointer
//    int i = 0;
//
//    // represents second pointer
//    int j = N - 1;
//
//    while (i < j) {
//
//        // If we find a pair
//        if (A[i] + A[j] == X)
//            return 1;
//
//            // If sum of elements at current
//            // pointers is less, we move towards
//            // higher values by doing i++
//        else if (A[i] + A[j] < X)
//            i++;
//
//            // If sum of elements at current
//            // pointers is more, we move towards
//            // lower values by doing j--
//        else
//            j--;
//    }
//    return 0;
//}

// Driver code
int main()
{
    int arr[] = { 2, 3, 5, 8, 9, 10, 11 };
    int val = 17;
    int arrSize = *(&arr + 1) - arr;
    sort(arr, arr + arrSize); // Sort the array
    // Function call
    cout << isPairSum(arr, arrSize, val);

    return 0;
}