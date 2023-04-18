// FIND THE NUMBER THAT APPEAR ONCE //
#include <iostream>
#include<iostream>

using namespace std ;

int GetElement(vector<int>&arr)
{
    int n = arr.size();
   
   int xor = 0 ;

    for(int i = 0 ; i<n ; i++)
    {
        xor = xor^arr[i];
    }
    return xor;
}

int main ()

{
    vector<int>arr = {4,1,2,1,2};

    int arr = GetElement(arr);

    count << " the element " << ans << endl ;

    return 0 ;
}

// XOR approach is carried out on this problem -- same element cancel out and only unique element print //