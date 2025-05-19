#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Rotate Array – By k or d steps (reverse approach is popular).
//Algo:
  //1. reverse 0 to d elements
  //2. reverse d+1 to n elements
  //3. reverse 0 to n elements
//TC: O(d), O(n-d), O(n) = O(2n)
//SC: O(1)
void Reverse(int arr[], int start, int end){
  while(start<=end){
    int temp =arr[start];
    arr[start]= arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

void RotateArray(int arr[], int n, int k){
  k=k%n;
  Reverse(arr, 0, k);
  Reverse(arr, k+1, n);
  Reverse(arr, 0, n);

}
 
// using standrad reverse function
void rotateArray(int arr[], int n, int d){
  d= d%n;
  reverse(arr, arr+d);
  reverse(arr+(d+1), arr+n);
  reverse(arr, arr+n);
  
}

int main(){
int arr[]={1,2,3,4,5,6,7,8};
  int k=3;
  int size = sizeof(arr)/sizeof(arr[0]);
//rotateArray(arr, size, k);
  RotateArray(arr, size, k);
  for(int i : arr)
    {
      cout<<i<<" ";
    }
  cout<<endl;
  
}
