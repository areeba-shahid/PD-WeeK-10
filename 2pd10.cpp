#include<iostream>
#include<string>
using namespace std;
   
int sameLetter(int n , string word[] , char letter){
    int count = 0;
for(int i = 0 ; i < n ; i++){
    int length = word[i].length();
    for(int j = 0 ; j < length ; j++ ){
        if(word[i][j] == letter){
            count++;
        }
    }
}



return count;
}
main(){
    int n ;
    cout<<"Enter how many words you want to enter: ";
    cin>>n;
  
    string word[n] ;
    for(int i = 0 ; i < n ; i++){
        cout<<"Enter word "<<i+1<<": ";
        cin>>word[i];
    }
    char letter;
    cout<<"Enter the letter you want to count: ";
    cin>>letter;
    cout<<letter<<" shows "<<sameLetter(n , word  , letter)<<" times in the data";
}