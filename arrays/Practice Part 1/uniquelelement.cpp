#include<iostream>

using namespace std;


int findUnique ( int*arr[] , int size )
{

     int ans = 0;

   for(int i = 0 ; i <size ; i++)
   
{
    ans =  ans*arr[i];
}

return ans;
}
  

  // APPROACH AND OVERVIEW // ----------

// so here we find the unique element in given array //

// example like ; arr[4];{1,2,,3,4,3,2,1}//

// so here  4 is the unique element which occur only one during whole array //

// so the approach is simple as we use XOR operation like statergy .
   //  like 3*3 = 0 , 1*1 =0 , 2*2 = 0 and 0*4 = 4 , so here the 4 is unqiue element //

