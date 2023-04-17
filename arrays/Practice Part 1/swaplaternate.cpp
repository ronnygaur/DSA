#include<iostream>

using namespace std;



void printarray(int arr[], int n )
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void swapalternate(int arr[], int size){


   for(int i= 0 ; i<size ; i+=2 )
   {
    if(i+1<size)
    {
        swap (arr[i] , arr[i+1]);
    }
   }

}


int main ()

{


int even[8]={5,2,9,4,7,6,1,0};

int odd[5]={11,33,9,76,45};

 swapalternate(even,8);
 printarray (even , 8);


 swapalternate(odd, 5);
 printarray(odd,5);


return 0;

}


// APPROACH AND OVERVIEW //--------


// swap alternate mean's like for an example  , there is an arr[8]={5,7,8,3,2,0,1,3}, 

    // so here we swap the ith element to i+1 near to its elememt and after swap , ith element goes to the 
     //i+2 element over it . so the final output is like {7,5,3,8,0,2,3,1} //  

// condition is followed until i+1 < size , means jab taak conditon chalega , jab taak i+1 ( next ith elememnt to intial one )
// less than size ( size of an whole array ).