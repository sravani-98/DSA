//Left rotate the array by one place
//Time complexity: O(n)
//space complexity: O(1)
#include <iostream>
using namespace std;

void leftRotateArr(int arr[], int n){
  int temp =arr[0];
  for(int i=1;i<n;i++){
    arr[i-1] = arr[i];
  }
  arr[n-1] = temp;

}

int main(){
  int arr[] = {1,2,3,4,5};
  int size = sizeof(arr)/sizeof(arr[0]);
  leftRotateArr(arr, size);
  for(int i=0;i<size;i++){
      cout<<arr[i]<< " ";
      
  }
  cout<<endl;
}
