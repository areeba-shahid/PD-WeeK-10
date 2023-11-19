#include<iostream>
using namespace std;
bool repeating(int n , int arr[] , int length){
for(int i = 0 ;  i < n ; i++){
    if(length > n){return true;}
    if(arr[i] == arr[i+length]){
        return true;
    }
}
return false;

}
main(){
    int n;
    cout<<"Enter the length of the array: ";
cin>>n;
int arr[n];
cout<<"Enter the elements of the array: "<<endl;
for(int i = 0 ;  i < n ; i++){
cin>>arr[i];

}
int length;
cout<<"Enter the length of cycle: ";
cin>>length;
cout<<"Output: "<<repeating(n,arr,length);

}