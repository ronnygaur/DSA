// left rotate an array by one place //

#include <iostream>
#include <vector>

void rotate(int arr[] , int n )

{
    int i = 0 ; j = n-1;

    while (i!=j)
    {
        swap(arr[i],arr[j])
        i++;
    }
}

int main()

{
    int arr[] = [1,2,3,4,5] , i;
    int n = size[arr]/ sizeof(arr[0]);

    cout<,"given array is \n";

    for(i=0;i<n;i++)
    {
        
        cout<<arr[i]<<" ";

    }
    rotate (arr, n);

    cout<< "\nroated array is \n";
    for(int = 0; i<n ; i++)
    {
        cout<<arr[i]<< " ";
    }
    return 0 ;
}

/* alternate approach */

/*


 int temp = ans[0];

 for(int i = 0 l i<n ; i++)
 {
    arr[i] = arr[i+1] 
 }

 arr [n-1]= temp ;


 for(int i = 1 ; i<n ; i++)
 {
    cout<<arr[i]<< "";
 }
*/
