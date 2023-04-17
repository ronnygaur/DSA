#include<iostream>
#include<vector>

using namespace std;


vector<vector<int> > pairSum(vector<int> &arr, int s)
{
     vector< vector<int> > ans;

     for(int i = 0 ; i<arr.size ; i++)
     {
        for(int j = i+1 ; j <arr.size ; j++)

        {
            if (arr[i]+arr[j]=s)
            {
                vector<int>temp;
                temp.push_back(min(arr[i],[j]));
                temp.push_back(max(arr[i],arr[j]);)
                 ans.push_back(temp);
            }
        }
     }

     sort(ans.begin() , ans.end());
     return ans;
}



// APPROCH AND LOGIC EXPLANATION //---------


// here we have to find the pair sum in array of elements //

// for an example arr[n]= { 1,2,3,5} so here s = 5 , now we have to find the pair sum that make 5 //

// like 1+4 =5 , 2+3 = 5 and 5 //

// for that we are traverse the loop ith to n and another i+1 to n , after that condition is that [arr[i]+arr[j]] ==sum;//

//if adding both array is eqaul to sum than print it else go out of the loop //

// here we use STL like vectors , push_back and sort //