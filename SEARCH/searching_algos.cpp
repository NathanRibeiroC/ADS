#include <bits/stdc++.h>
using namespace std;

// Algo 1
// time complex: O(log(n))
void binarySearch(int array[],int x) {
    int n = 8;
    int a = 0, b = n-1;
    while (a <= b) {
        int k = (a+b)/2;
        if (array[k] == x) {
            cout << "Element " << x << " found at index " << k << endl;
        }
        if (array[k] > x){
            b = k-1;
        }
        else{
            a = k+1;
        }
    }
}

// Algo 2
// time complex: O(log(n))
void binarySearch2Implementation(int array[],int x) {
    int n = 8;
    int a = 0, b = n-1;
    int k = 0;
    for (int b = n/2; b >= 1; b /= 2) {
        while (k+b < n && array[k+b] <= x){
            k += b;
        }
    }
    if (array[k] == x) {
        cout << "Element " << x << " found at index " << k << endl;
    }
}

int main() {
    // solution comes here
    int myArray[8] = {1,2,3,4,5,6,7,8};
    binarySearch(myArray,2);
    binarySearch2Implementation(myArray, 9);

    // BUILT IN FUNCTIONS
    /**
     * • lower_bound returns a pointer to the first array element whose value is at least x.
     * • upper_bound returns a pointer to the first array element whose value is larger than x.
     * • equal_range returns both above pointers.
     */
    int n = 8;
    int x = 2;
    auto k = lower_bound(myArray,myArray+n,x)-myArray;
    if (k < n && myArray[k] == x) {
        cout << "Element " << x << " found at index " << k << endl;
    }

    auto a = lower_bound(myArray, myArray+n, x)-myArray;
    auto b = upper_bound(myArray, myArray+n, x)-myArray;
    cout << (b-a) << "\n";

    auto r = equal_range(myArray, myArray+n, x);
    cout << (r.second-r.first) << "\n";
    return 0;
}