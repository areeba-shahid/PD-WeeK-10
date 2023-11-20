#include<iostream>
using namespace std;
int rotation(int n , string arr[]){
    int sum = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == "right"){
            sum = sum + 90;

        }
        if(arr[i] == "left"){
            sum = sum - 90;
        }
    
    }
    if(sum < 0){
        sum = sum * (-1);}
return sum/360;
}
main(){
    int n ;
    cout<<"Enter the length of array: ";
    cin>>n;
    cout<<"Enter the elements of the array (left or right): "<<endl;
    string arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cout<<"Number of full rotations: "<<rotation(n,arr);
}