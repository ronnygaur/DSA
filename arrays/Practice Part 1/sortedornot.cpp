// check wehther array is sorted on not //

#include <iostream>
#include<vector>

using namespace std;

bool check(vector,int>& nums)
[
   int count = 0;

   for(int i = 0 ; i<nums.size() ; i++)
   {
    if(nums[i]<nums[i-1])
    cout++;
   }
   if(nums[nums.size()-1>nums[0]])
   {
    count ++;
   }
   return count<=1;
]

// alternate optimal solution //

/*

bool arraysortedornot(int arr[] , n)
{
    if (n==0|| n==1)
    {
        return ture ;
    }

    for(int i = 1 ; i<n ; i++)
    {
        if (arr[i-1] >arr[i])
        {
            return false ;
        }

        return true ;
    }
}

*/