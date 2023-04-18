// move all zeros to the end of an array //

#include <iostream>
#include<vector>

using namespace std;

void PushZeroToEnd(int arr[],  int n )
{
    int j = 0 ;

    for(int i = 0 ; i<arr.lenght ; i++)
    {
          if (arr[i]!=0)
          {
            temp = arr[i];
            arr[i]=arr[j];
            arr[j]= temp ;
          }
          i++;
    }
    j++;
}

// alternate approach //

/*

void zeropushtoend(int arr[], n)
{
    int k = 0 ;

    while (k<n)
    {
        if(arr[k]!=0)
        {
            break;
        }
        else 
        {
            k= k +1;
        }
    }
    
    int i = k , j = k+1;

    while (i<n&&j<n)
    {
        if(arr[i]!=0)
        {
            int temp = arr[i];
            arr[i]= arr[j];
            arr[j]=temp;
        }
        i++;
    }
    j++;
}




*/