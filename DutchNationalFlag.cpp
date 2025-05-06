//Dutch National Flag Problem – Sort 0s, 1s, and 2s.

#include <iostream>
#include<vector>

#include<bits/stdc++.h>
using namespace std;

void SortArr(vector<int> &v, int n){
    int low =0, mid =0, high = n-1;
    
    while(mid<=high){
        if(v[mid] == 0){
            swap(v[low], v[mid]);
            low++;
            mid++;
        }
        else if(v[mid] == 1){
            mid++;
        }
        else {
           swap(v[mid], v[high]);
           high--;
        }
    }
    
}

int main()
{
    vector<int> v = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    SortArr(v, v.size());
    for(int i:v){
        cout<<i<< " ";
    }
    cout<<endl;

    return 0;
}
