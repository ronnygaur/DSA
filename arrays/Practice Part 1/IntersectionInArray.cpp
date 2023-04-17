#include<iostream>
#include <vector>

using namespace std;

vector<int> FindtheUniqueElement(vector<int>&arr1 , int n , vector<int>&arr2 , int m)

{
    int i = 0; j= 0;

    vector<int> ans;

    while(i<n &&& j<m)
    {
        if(arr[i]=arr[j])
        {
            ans.push_back(arr[i]);
            i++;
            j++
        }
        elseif(arr[i]<arr[j]) {
              i++
        }
        else 
        {
            j++;
        }
    }

    return ans;
}




//APPROCH OVERVIEW AND EXPLAINATION //------

// here we have to find the intersectiion over 2 arrays in elements //

// we use an approach as : here 2 arrays  arr[i]= {1,2,3,4} and arr[j] { 2,3,5} //

// so here we match ith arr and jth arr elements if common found then we print it  aur i++ and j++ kardenge //

// if arr[i]<arr[j] , then i++ kardenge , ith element agae badh ajaega //

// else j++ kardenge , jth element agae badh ajaega {agar ith element jth element s badha h toh }