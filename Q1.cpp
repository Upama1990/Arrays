#include <iostream>
using namespace std;
int main()
{

    int s , i;
    cout<<endl<<"Enter the size of array :" ;
    cin>>s;

    int a[s];

    for(i=0; i<s ; i++)
    {
      cout<<endl<<"Enter the elements of array : ";
       cin>>a[i];
    }
       
    for(i=(s-1) ; i >= 0 ; i--)   
    {
       cout<<endl<<"a ["<<i<<"] = " <<a[i];
      
        
    }

 return 0;

}