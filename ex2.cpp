#include<bits/stdc++.h>
using namespace std;

void fun2(vector<vector<int>> nums){
    unordered_set<int> s;
    vector<int> arr;
    vector<int> new_arr;

    //The first element 
    int x = nums[0][0];

    //All the elements passing the criteria are pushed
    for(int i=1; i<nums.size(); i++){
        for(int j=0; j<nums[i].size(); j++){
            if(nums[i][j]>x){
                arr.push_back(nums[i][j]);
            }
        }
    }

    //To remove duplicates we have used Set
    cout<<"new_array: "<<endl;
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
        if(!s.count(arr[i])){
            new_arr.push_back(arr[i]);
        }
        s.insert(arr[i]);
    }
    cout<<endl;

    //Finally we compute the sum of the set
    int sum=0;
    cout<<"rem_duplicates_array: "<<endl;
    for(int i=0; i<new_arr.size(); i++){
        cout<<new_arr[i]<<" ";
        sum+=new_arr[i];
    }
    cout<<endl;
    cout<<"sum:"<<sum<<endl;

}

int main(){
    vector<vector<int>> arr;
    arr.push_back({50});
    arr.push_back({10, 12, 34, 46, 55, 79, 80});
    arr.push_back({12, 22, 33, 44, 45, 60, 70, 80});
    arr.push_back({9,10,120,130,149,55,199});
    arr.push_back({20,23,4,40,50,12,23,44,55});


    fun2(arr);


}