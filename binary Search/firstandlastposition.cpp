// find thr first and last position in the given array ( binary search)//

#include <vector>

using namespace std;

int firstOcc (vector<int>& arr, int n , int key ){


    int s = 0 , e=n-1 ;
    int mid = s+(e-s)/2;
    int ans = -1;


    if ( s<=e){

        if (arr[mid]==key)
        {
            ans = mid - 1;

        }
        else if (key > arr[mid])
        {
            s=mid+1;
        }
        else if (key< arr[mid])
        {
            e=mid -1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int lastOcc (vector<int>& arr, int n , int key ){


    int s =0 , e=n-1 ;
    int mid = s+(e-s)/2;
    int ans = -1;


    if ( s<=e){

        if (arr[mid]==key)
        {
            ans = mid + 1;

        }
        else if (key > arr[mid])
        {
            s=mid+1;
        }
        else if (key< arr[mid])
        {
            e=mid -1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

pair<int, int >firstandlastposition(vector<int> & arr , int n , int k )
 {
    pair<int , int > p;
    p.first = firstOcc(arr , n , k);
    p.second = lastOcc(arr , n ,k);

    return p ;
 }