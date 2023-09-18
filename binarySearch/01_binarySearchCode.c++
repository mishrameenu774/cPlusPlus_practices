#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
  int start = 0;
  int end = size-1;

  //calculate mid value
  int mid = (start+end)/2;

  while(start<=end){
    int element = arr[mid];
    if(target == element){
      return mid;
    }

    else if(target > element){
      start = mid+1;
    }

    else{
      end = mid-1;
    }

    mid = (start+end)/2;
  }

  return -1;


}

int main() {
  int arr[] = {4,8,12,18,20,35,38,45,50};
  int size = sizeof(arr)/sizeof(arr[0]);
  int target = 35;
  cout<<"Enter the finding element: ";
  cin>>target;

  int indexOfElement = binarySearch(arr, size, target);
  if(indexOfElement == -1){
    cout<<"Target Not Found"<<endl;
  }

  else{
    cout<<"Target Found at "<<indexOfElement<<" index"<<endl;
  }
  return 0;
}