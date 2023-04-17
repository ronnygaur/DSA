//check sorted rotated array //

#include<iostream>

#include<vector>

using namespace std;

bool check(vector<int>  &nums )
{   
    

  int count = 0;

  for (int i =0 ; i< nums.size() , i++)
  {
    if (num[i]<num[i-1])
    count++;
  }
  if (num[num.size()-1]>num[0])
  {
    count ++;
  }


 return count<=1;


}

// QUESTOIN EXPLANANTION AND APPROACH //-----

// here we have to check wheather given array is sorted roatated array  //

// here we check the elements in cyclic way means 0th-1th , 1th to 2th , and so on //

// we check that ahead elements is greater than previous one or not ( agae wala uss element s bada h ya nhi )

// aur agar bada hua toh count ++ kar denge woh 1 pair ban jaega //


