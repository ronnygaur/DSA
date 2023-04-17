#include<iostream>
#include<vector>

using namespace std;

vector<int> triplet(vector<int>arr[] , int n , int k)
{
    vector<int>ans;


    for(int i = 0 ; i<n ; i++)
    {
        int target = k- arr[i];
        int front = i+1;
        int back = n-1;


        while (front<back)
        {
            int sum = arr[front+back];

            if(sum<target)
            {
                front++;
            }

            else if(sum>back)
            {
                back--;
            }
        }

        else{

            int x = arr[front];
            int y = arr[back];

            ans.push_back({arr[i] , arr[front],arr[back]});
        }


        while(front<back && arr[front]==x)
        {
            front ++;
        }
        while ( front<back && arr[back]==y)
        {
            back --;
        }

        while(i+1<n && arr[i]==arr[i+1])
        {
            i++;
        }
    } 

    return ans;
}

// HERE IS THE QUESTON EXPLANATIONA AND APPROACH //

// here we have given an array , in which we have to find out the triplet over given targert sum k //

// so here we set a ith on the initial element and j on i+1 element and k on n-1 element //

// we use 2 pointer mehtod to solve this problem //

// hence here is the criteria = i+j+k= target sum (TS) ,so j+k=i-TS// {TS-i} = gojo

// here we put int x = arr[j] , y = arr[k]//

// there are some cases if -- j+k < gojo , then j++ , if -- j+k>gojo , then k--//

// here we have to check weather elements are reapeating or not so we use below cosnditions//

// while( j<k && arrj== x ) , then j++ , while ( j<k && arr k == y) , then k -- //

// here we have to clarify that intital i not equal to i+1 so , while(i+1<n&& arri==arri+1), then i++//

