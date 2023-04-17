// merge 2 sort array //

#include <iostream>
#include <vector>

using namespace std ;

void merge(int arr[] , int n , int arr2[], int m , int arr3[ ])
{
    int i = 0 ; j = 0;
    k = 0;

    while (i<n&&i<m)
    {
        if(arr[i]<arr[j])
        {
            arr3[k++]=arr[i++];
        }
        else{
            arr3[k++]= arr2[j++];
        }
    }

    while (i<n)
      
      {
        arr3[k++] = arr[i++];
      }
      while(i<n)
      {
        arr3[k++] = arr[j++];
      }

}

void print(int ans[] , int n)
{
    for(int i = 0 ; i<n ; i++)
    {
        cout<< ans[] << " ";
    }
    cout<< endl;
}



int main ()

{

  int arr [5] = {1,3,5,7,9};
  int arr [3] = { 2,4,6};

  merge(arr[] , 5 , arr2[] , 3 , arr3[]);

  print(arr 5,3);

  return 0 ;



}

// APPROACH AND LOGIC TO SOLVE PROBLEM //-------------

// Here we have to merge 2 sort array //

// here the   different arrays are given in which we have to compare them and store it on another array in sorted manner//

// So we approch as i from arr1 and j form arr2 , are been compare and store at arr3//

// conditions are like -- if , i<j  , then store i to arr3 and i++ , else store j to arr3 and j++//

// here we compare them and sort and then store them in third empty array and form complete sorted array//