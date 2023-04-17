#include<iostream>
using namespace std;


 void printArray(int arr[] , int n )
 {
    for (int i= i , i < n  i++)
          
          {
            cout<<arr[i]<<" ";
          }
          cout<<endl;
 }


 void sortone(int arr[] , int n )
 {
    int left = 0 ; int right = n-1 ;

    while (left<right)
    {
        while ( arr[left]==0&& left<right)
        {
            left++;
        }
        while(arr[right==1 && right>left])
        {
            right -- ;
        }

        if(left<right)
        {
            swap(arr[left], arr[right]);

            left++;
            right--;
        }


    }
 }



int main()

{
    int arr[8] = {1,1,0,0,0,0,1,0};

    sortOne(arr, 8);
    printArray(arr, 8);


    return 0;
}
 

 // APPROACH AND LOGIC OVERVIEW //--------------

// here we had a array given in which 0s, 1s are present , now in this problem we have to sort them in manner //

// In mannner like all zeros are left and all ones are in right //

// the approch is that we put a condition that " agar left arr 0 h or left < right toh i++(incrememt kardo)"//

// " agar right wala arr[right] == 1 h aur right>left toh right -- kardo "//

// " agar left<right h toh swap kardo arr[left] , arr[right] s  aur left ++ , right -- kardo "//