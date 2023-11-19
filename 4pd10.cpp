#include<iostream>
using namespace std;
int sum;
int volume(int box, int arr[]){
  
int m ;
    for(int i = 0 ; i < box*3 ;i = i+3){
         m = arr[i]*arr[i+1]*arr[i+2];
  sum = sum + m ;
    }
    return sum;
}




main(){
    int box;
    cout<<"Enter the number of boxes: ";
    cin>>box;
    int arr[box];
    cout<<"Enter the dimensions of boxes(length,width,height)"<<endl;
    for(int i = 0 ; i < box*3 ; i++){
        cin>>arr[i];

    }
    cout<<"Total volume of all boxes: "<<
    volume( box, arr);
}