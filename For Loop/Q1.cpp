#include <iostream>

using namespace std;

int main()
{

   int n ;
   cin>>n;

   int a = 0;
   int b = 1;


    cout << a << " "<< b << " ";

   for ( int i = 1; i<=n ; i++){

      int nextnumber = a+b ;
      cout << nextnumber <<" ";  // here formula cameup with nextnumber = a + b //

      a=b;
      b= nextnumber; // here we put a value 0 to b and then put b value 1 to next number which is added before //

      
   }



}