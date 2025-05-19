//Rotate Array to left by D size
//TC : O(d) + O(n-d)+O(d) = O(n+d)
//SC : O(d)

#include<iostream>
using namespace std;

void rotateArr(int arr[], int n, int d){
  d = d%n;
  int temp[d];

  //copy d elements to temp array
  for(int i=0;i<d;i++){
    temp[i]=arr[i];
  }

  //move elements to left for d positions
  for(int i=d;i<n;i++){
    arr[i-d] = arr[i];
  }

  //copy temp elements to right of the array
  for(int i=n-d,j=0;i<n;i++){
    arr[i] =temp[j];
    j++;
  }
    
}


int main(){

  int arr[] = {1,2,3,4,5,6,7,8};
  int d = 3;
  int size = sizeof(arr)/sizeof(arr[0]);

  rotateArr(arr, size, d);

  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

}
