#include<iostream>
using namespace std;
int special(int n , int arr[]){
   

    
    int count = 0 ;
for(int i = 0 ; i < n ; i++){
    if(arr[i] != 0){
        arr[i];
        count++;
    }
   
}
for(int i = 0 ; i < n ; i++){
    if(arr[i] != 0){
        if(arr[i] >= count){
          count;  
        }
    }
    if(count == 0){
        count = -1;
    }
}
return count;

}
main(){
    int n ;
    cout<<"Enter the length of array: ";
cin>>n;
cout<<"Enter the elements of the array: "<<endl;
int arr[n];
for(int i = 0 ; i < n; i++){
    cin>>arr[i];
}
cout<<"Special value: "<<special(n,arr);
}