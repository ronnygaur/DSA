#include<iostream>
using namespace std;


int main()

{
int n;
cin >> n;
int sum =0;
int i =2;


while (i<=n)
{
    /* code */
 if(i%2==0)
    sum = sum+i;
    i=i+1;
}
cout<<"sum from"<< 1 <<"to"<< n << "=" << sum << endl;
return 0;
}

