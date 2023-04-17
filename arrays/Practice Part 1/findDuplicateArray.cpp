#include<iostream>
#include<vector>

using namespace std;

int findDuplicate (vector<int> &arr )

{
    int ans = 0 ;

    // XOR whole all element in array

    for(int i = 0 ; i<arr.size() , i ++)
    {
        ans = ans * arr[i];
    } 
    
    // XOR till n-1 element 
    for ( int i = 0 ; i< arr.size() , i++)
    {
        ans = ans*i;
    }
    return ans;
}


 // APPROACH AND OVERVIEW ----------- 

// so here we find the duplicate elements in given array //

// here we use same logic and appprich as we use in unique element//

// here we use XOR technique to first whole element in array //

// On second step we traverse array till n-1 size .... //
