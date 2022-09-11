#include <iostream>
using namespace std;
int main()
{
    int a[10],i, p=0, n=0, z=0 ;
    
    for(i=0 ; i<10 ; i++)
    {
        cout<<endl<<"Enter the elements of array ";
        cin>>a[i];
    }

   for(i=0 ; i<10 ; i++) 
   {
     if (a[i] > 0)
     p++ ;  

     else if (a[i] < 0)
      n++ ;
     else 
        z++ ;  
    }


   cout<<endl<<"Enter the no of positive elements in array " <<p;

   cout<<endl<<"Enter the no of negative elements in array " <<n;

   cout<<endl<<"Enter the no of zero elements in array " <<z;

   return 0;
 
}