#include<iostream>
#include<cmath>
using namespace std;

 void sort(int arr[]){
  cout<<"[";
  int store;
   for(int i = 0 ; i < 10 ; i++){
    for(int j = i ; j < 10 ; j++){
      if(arr[i] > arr[j+1]){
store = arr[i];
arr[i] = arr[j+1];
arr[j+1] = store;

      }
      
    }
    
   if(i == 9){cout<<arr[i] <<"]";}
   else
    cout<<arr[i]<<"; ";}
    
   }
main(){
   int n = 10 ;
    int arr[n];
    cout<<"Enter the weight of 10 packages: "<<endl;
  for(int i = 0 ; i < 10 ; i++){
        cin>>arr[i];
  }
    cout<<"Sorted array in ascending order is: ";

    sort(arr);

}