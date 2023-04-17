// Rotate an Array by given K //

#include<iostream>
#include<vector>

using namespace std;


void rotateArray(vector<int>& num , int k )
{    
      int n = num.size();
      vector<int> temp(n);


      for(int i = 0 ; i<n ; i++)
      {
        temp((i+k)%n) = num[i];

      }

      for(int i=0 ; i<num.size() , i++)
      {
        num[i]= temp[i];
      }

};


// QUESTION EXPLANATION AND APPROACH //


// here we  given an arry ehich has to been rotate about it given element at given kth value //

// like arr = {1,2,3,4,5} , k =2 , so here we have to rotate each element  2 space ahead //

// MEANS 1->4 , 3->1, 5->3 , 2->4 and so on //

// here we make an formula temp(i+k%2)=num[i]//

// here formaula as  store to temp and forward //

