#include<iostream>
using namespace std;

void printArray(int arr[], int n) {

  for(int i = 0;  i<n; i++ ) {
    cout<< arr[i] <<" ";
    cout<<endl;
  }
}

void swapAlternate(int arr[], int size){

  for(int i = 0; i<size; i+=2 ) {
    if(i+1 < size){
      swap(arr[i], arr[i+1]);
    }
  }
  
}

int main() {

  int even[8] = {5, 3, 2 ,9 ,2, 0};
  int odd[5] = {43, 11, 34, 99, 6,};

  swapAlternate(even, 8);
  printArray(even, 8);

  cout << endl;

  swapAlternate(odd, 5);
  printArray(odd, 5);

 
}
