#include <iostream>
using namespace std;
int main()
{

    int s ;
    cout<<endl<<"Enter the size of array :" ;
    cin>>s;
    

    int a[s], i, j, r[s];
    j=s-1;
   

    for(i=0; i<s ; i++)
    {
      cout<<endl<<"Enter the elements of array : ";
       cin>>a[i];

       r[j--] = a[i];

       

    }

    for(i=0;i<s;i++)
    
     cout<<endl<<a[i]<<"   "<<r[i];
   
    

 return 0;

}