#include <iostream>
using namespace std;

template <typename T>

void swap(T a,T b)
{
    cout<<"Values Before Swap : "<<endl;
    cout<<"value of A : "<<a<<endl;
    cout<<"value of B : "<<b<<endl;
    T c;
    c=a;
    a=b;
    b=c;
    cout<<"Values After Swap : "<<endl;
    cout<<"value of A : "<<a<<endl;
    cout<<"value of B : "<<b<<endl;
    
}

int main()
{
    swap(3,6);
    cout<<endl;
    swap(6.9,9.8);
 
}