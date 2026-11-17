#include <iostream.h>
using namespace std;

template <typename T>
void compare (T a, T b) 
{
    
    if (a>b)
        cout<<"Greater : "<<a<<endl;
    else 
        cout<<"Greater : "<<b<<endl;
        
}
int main() 
{
    
    cout << "Higher marks : " << compare(78, 92) << endl;

    
    cout << "Higher price : " <<  compare(499.99, 349.50) << endl;

   
    cout << "Higher readings : " << compare(36,37) << endl;

   
    
    return 0;
}