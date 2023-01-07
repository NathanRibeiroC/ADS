#include <bits/stdc++.h>
using namespace std;

/**
 * Curiosities:
 * Merge Sort O(nlog(n))
 * Count sort O(n) - this one only sorts integer sentence between 0 and c (c must be smaller enough)
 */
// Algo 1
// time complex: O(n^2)
// works swapping elements on consecutive order
int * bubbleSort(int array[]){
    int n = 8;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            if (array[j] > array[j+1]) {
                swap(array[j],array[j+1]);
            }
        }
    }
    return array;
}

void printPointerArray(int * arr){
    for (int i=0;i<8;i++){
        cout << arr[i] << endl;
    }
}

//Comparison function
//Sorts first by size and second by alphabetic order
bool comp(string a, string b) {
    if (a.size() != b.size()) return a.size() < b.size();
    return a < b;
}

int main() {
    // solution comes here
    int myArray[8] = {1,2,3,4,8,6,7,8};

    int * pointer;

    pointer = bubbleSort(myArray);

    printPointerArray(pointer);

    //BUILT IN FUNCTIONS
    //SORTING VECTOR
    vector<int> v = {4,2,5,3,5,8,3};
    sort(v.begin(),v.end());
    sort(v.rbegin(),v.rend());

    //SORTING COMMON ARRAY
    int n = 7; // array size
    int a[] = {4,2,5,3,5,8,3};
    sort(a,a+n); //passing address

    //SORTING STRING
    string s = "monkey";
    sort(s.begin(), s.end());

    //SORTING PAIR
    vector<pair<int,int>> myVectorPair;
    myVectorPair.push_back({1,5});
    myVectorPair.push_back({2,3});
    myVectorPair.push_back({1,2});
    sort(myVectorPair.begin(), myVectorPair.end());

    //SORTING TUPLE
    vector<tuple<int,int,int>> myVectorTuple;
    myVectorTuple.push_back({2,1,4});
    myVectorTuple.push_back({1,5,3});
    myVectorTuple.push_back({2,1,3});
    sort(myVectorTuple.begin(), myVectorTuple.end());

    //Comparison function
    //Use a function as callback for sort method
    vector<string> myStringVector;
    myStringVector.push_back("First");
    myStringVector.push_back("Second");
    myStringVector.push_back("Third");
    sort(myStringVector.begin(), myStringVector.end(), comp);
}