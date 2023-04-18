// FIND THE UNIQUE ELEMENT IN THE GIVEN ARRAY //

#include <iostream>
#include <vector>

using namespace std;

vector<int> intersection(vector<int>&num1 , vector<int>&num2)
{
    sort(num1.begin() , num1.end());

    sort(num2.begin() , num2.end());

    vector<int>ans;

    int i = 0;
    int j = 0;

    while( i < nums.size() && j<nums.size())

{
    if(num1[i]=num2[i])
    {
        ans.push_back(nums1[i]);
        i++;
        j++;
    }

    else if (numms1[i]>nums2[j])

    {
      j++;
    }
    else if (nums[i]<nums[j])
    {
        i++;
    }

    while(i>0 && i<num1.size() && nums1[i]==nums1[i-1])
    {
        i++;
    }
    while(j>0 && j<num2.size() && nums2[j]==nums2[j-1])
    {
        j++;
    }

    return ans;
}
}

// 2 pointer approach as i traverse on arr1 and j traverse on arr2 , comparing i and j and making cases:-- //