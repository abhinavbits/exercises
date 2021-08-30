#include<bits/stdc++.h>
using namespace std;

map<int, int> fun3(vector<vector<int>> nums){
    //Using a map we keep a track of frequencies
    map<int, int> m;
    for(int i=0; i<nums.size(); i++){
        for(int j=0; j<nums[i].size(); j++){
            m[nums[i][j]]++;
        }
    }
    return m;
}

int main(){
    vector<vector<int>> arr;
    arr.push_back({50});
    arr.push_back({10, 12, 34, 46, 55, 79, 80});
    arr.push_back({12, 22, 33, 44, 45, 60, 70, 80});
    arr.push_back({9,10,120,130,149,55,199});
    arr.push_back({20,23,4,40,50,12,23,44,55});

    map<int, int> m = fun3(arr);

    for(auto p:m){
        cout<<p.first<<"->"<<p.second<<endl;
    }

}