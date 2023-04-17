// reverse the array //

#include <iostream>
#include <vector>

using namespace std;

vector<int> reverse(vector<int> v)

{
    int s = 0, e = v.size - 1;

    while (s <= e)
    {
        swap(v[s], v[e]);

        s++;
        e--;
    }
    void print(vector<int> v)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()

{
    vector<int> v;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    vector<int> ans = revrse(v);

    cout << " printing reverse array " << endl;

    print(ans);

    return 0;
}


// APPROACH AND CONCLUSION AND ROUTE TO SOLVE THE PROBLEM // -------------

// Here we have to reverse the array //

//  So here 2 pointer appraoch is used , In which 2 pointer are placed( one is indicate the start position and another one indiacte end position)//

// here start pointer = 0 ; end pointer = v.size-1 (total size of array -1 )//

// The loop and condition is applied as (s<=e) then swap v[s],v[e]//

// pushing the elements in arry is by using stack STL v.push_back(..) //