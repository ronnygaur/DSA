#include <iostream>

using namespace std;

int main()
{

 int n;

 cin >>n ;
 int i=2;
 int sum =0;

 while (i<=n)
 {
    if(n%2==0){
        sum = sum+1;

        
    i=i+1; 

    }

 }

 cout<< "from "<< 1 << " to "<< n << sum << endl;



}