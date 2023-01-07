#include <bits/stdc++.h>
using namespace std;

/* Generating Subsets
We first consider the problem of generating all subsets of a set of n elements. For
example, the subsets of {0,1,2} are empty, {0}, {1}, {2}, {0,1}, {0,2}, {1,2} and {0,1,2}.
*/

int n;
int A[100];
vector<int> ans;

// Algo 1
// Time Complexity: nlog(n)
void completeSearch(int k)
{
    if(k>=n)
    {
        //Print the subset
        for(int i=0;i<ans.size();i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        return;
    }
    else
    {
        // Lets not select this element and move forward.
        completeSearch(k+1);
        // Lets select this element
        ans.push_back(A[k]);
        completeSearch(k+1);
        ans.pop_back();
    }
}


int main() {
    // The number of elements
    cin >> n;
    // Input the elements
    for(int i=0;i<n;i++)
    {
        cin >> A[i];
    }
    completeSearch(0);
    return 0;
}