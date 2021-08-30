#include <bits/stdc++.h>
using namespace std;

int example2(int k, vector<vector<int>> func){
        //input splitting

        //for every array
        int n = arr.size();
        arr.sort(arr[0],arr[n]);

        int low=0,high =n-1,mid;
        while(low<high){
            mid = low + (high-low)/2

            if(arr[mid]>=k){
                high = mid;
            } else{
                low = mid+1;
            }
        }
        return low;

        //filter array
        for(int i=0; i<=low;i++){
            arr_filter.push_back(arr[i]);
        }

        //removing duplicates

        if(arr_filter.size()==0){
            return 0;
        }
        int p1=0,p2=1;
        while(p2<arr_filter.size()){
            if(arr_filter[p2]== arr_filter[p1]){
                p2++;
            }
            else{
                p1++;
                swap(arr_filter[p2],arr_filter[p1]);
                p2++
            }
        }
        for(int i=0;i<=p1;i++){
            arr_new.push_back(arr_filter[i])
        }

        // Sum array

        int sum_array = arr_new[0];
        for(int i=0;i<n;i++){
            sum_array += arr_new[i];
        }
        return sum_array;
    }