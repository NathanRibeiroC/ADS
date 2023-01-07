#include <bits/stdc++.h>
using namespace std;
int main() {
    set<int> s;
    s.insert(3);
    s.insert(2);
    s.insert(5);

    //SETTING ITERATORS
    int x = 5;
    auto it = s.lower_bound(x);
    if (it == s.begin()) {
        cout << *it << "\n";
    } else if (it == s.end()) {
        it--;
        cout << *it << "\n";
    } else {
        int a = *it; it--;
        int b = *it;
        if (x-b < a-x) cout << b << "\n";
        else cout << a << "\n";
    }

    //REPRESENTING SETS AS BITS
    /*
     The bit representation of the set {1,3,4,8} is
    00000000000000000000000100011010,
    which corresponds to the number 282.
     */
    int b = 0;
    b |= (1<<1);
    b |= (1<<3);
    b |= (1<<4);
    b |= (1<<8);
    cout << __builtin_popcount(b) << "\n"; // 4

    for (int i = 0; i < 32; i++) {
        if (b&(1<<i)) cout << i << " ";
    }
}