#include <bits/stdc++.h>
using namespace std;

map storeFrequency(vector<int> arr)
{
    map<int, int> M;
 
    for (int i = 0; arr[i]; i++) {
 
       
        if (M.find(arr[i]) == M.end()) {
            M[arr[i]] = 1;
        }
 
        
        else {
            M[arr[i]]++;
        }
    }

    return M;
 
}

int main() {

    return 0;
}