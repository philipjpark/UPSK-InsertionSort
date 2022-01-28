#include <iostream>
using namespace std;

void insertionSort(int arr[]) {

int pivot;

  for (int i = 1; i < 10; i++){
  pivot = arr[i];
  int j = i -1;

    while (j >= 0 && pivot < arr[j]){
      arr[j+1] = arr[j];
      j--;
    }
  arr[j+1] = pivot;
  }
}

int main() {

int sortIt[9] = {1,3,0,4,10,2,3,5,6};
cout<<"This is the original array: "<<endl;

for (int i = 0; i < 10; i++) 
cout<<sortIt[i]<<" ";
cout<<endl;

insertionSort(sortIt);
cout<<"This is the sorted array (ascending order): "<<endl;

for (int i = 0; i < 10; i++)
cout<<sortIt[i]<<" ";
cout<<endl;
}


 

