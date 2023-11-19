#include<iostream>
using namespace std;
int count;
int progress(int days, int arr[])
{
   
    for (int i = 0; i < days; i++)
    {
        if (arr[i + 1] > arr[i])
        count++;
    }
    return count;
}
 main()
{

 
    int days;
      int arr[days];
     cout<<"Enter the number of saturdays: ";
     cin>>days;
     for(int i = 0 ; i < days ;i++){
         cout<<"Enter miles run for saturday "<<i+1;
     cin>>arr[i];
    }
     cout<<"Total progress days: "<<progress(days,arr);
   
}