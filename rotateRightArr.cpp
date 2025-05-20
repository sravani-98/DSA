/*
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

Example 1:
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
*/

//Algo:
  //1. reverse 0 to n elements
  //2. reverse 0 to k elements
  //3. reverse k to n elements

//TC: O(d), O(n-d), O(n) = O(2n)
//SC: O(1)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Reverse(int arr[], int start, int end){
  while(start<=end){
    int temp =arr[start];
    arr[start]= arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

void RotateArrayRight(int arr[], int n, int k){
  k=k%n;
  Reverse(arr, 0, n-1);
  Reverse(arr, 0, k-1);
  Reverse(arr, k-1, n-1);

}
 
// using standrad reverse function
void rotateArray(int arr[], int n, int d){
  d= d%n;
  reverse(arr, arr+n);
  reverse(arr, arr+d);
  reverse(arr+(d+1), arr+n);
  
  
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
