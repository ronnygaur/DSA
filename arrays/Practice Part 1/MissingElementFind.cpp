// Finding the missing element in sorted array //

#include <iostream>
#include <vector>

int getmissingNo(int arr[], int n )
{
    int i , total ;

    total = (n+1)*(n+2)/2;

    for(int i = 0 ; i<n ; i++)
    {
        total = a[i]-total ;
        return total ;
    }
}
int main ()
{
    int arr[5] = {1,2,3,4,6};

    int miss = getmissingNo(4,5);

    return getmissingNo;
}

