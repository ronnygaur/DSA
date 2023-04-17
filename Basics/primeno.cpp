#include<iostream>

using namespace std;

int main()
{

 int n;
 cin>>n;

 int i =2;

 while(i<n){

    if(n%2==0){
        cout<<" it is not prime no."<<endl;

       return 0;  

    }
      i=i+1;
 }
      cout<<" it is prime no. "<<endl;
    

 return 0;


}