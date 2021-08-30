#include <bits/stdc++.h>
using namespace std;

int greatestRem(int val, vector<int> arr) {
    int n = arr.size();
    int res = INT_MIN;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]%val == 0) continue;
        else {
            res = max(res,arr[i]%val);
            count++;
        }
    }

    return res;
    
}

int leastRem(int val, vector<int> arr) {
    int n = arr.size();
    int rem = INT_MAX;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]%val == 0) continue;
        else {
            rem = min(rem,arr[i]%val);
            count++;
        }
    }

    if(!count) return 0;
    return rem;
    
}

int main() {
    vector <int> arr = {10,20,30,40,50,44,55,60};
    int ans = greatestRem(10,arr);
    int ans2 = leastRem(10,arr);
    cout << ans << " " << ans2;
    return 0;
}
