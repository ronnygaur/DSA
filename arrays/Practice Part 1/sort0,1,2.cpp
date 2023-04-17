// sort 0 , 1, 2 in given array //

#include<iostream>

using namespace std;

 void sort(vector<int>arr , int n )

 {

   int curr = 0;
   int zero = 0;
   int two = n-1;


   while (curr <= two)
   {
    if ( arr[curr] == 0)
    {
        swap (arr[curr], arr[zero]);
        ++curr;
        ++zero;
    }
    else if(arr[curr]==2) {
      swap(arr[curr], arr[two]);
      --two;
    }
    else{
        ++curr;
    }
   }

 }

 // APPROACH AND  EXPLANATION OF PROBLEM //-------------------------------------------------------

 // here we have to sort 0,1,2 in given array //

 // here we approach a 3 pointer approach //

 // curr , zero , two are pointer . curr and zero points on inital whereas two is point on n-1 //

 // here conditions are follows:: arr curr = 0 -> swap cuur , zero [++curr ++zero] // arr curr=2 -> swap curr , two [ --two]//

 // else  ++ curr//

 