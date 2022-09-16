#include<iostream>
#include <string.h>
using namespace std;

struct student
{
    int rno;
    char nm[25];
    char cls[10];
    int m[4];
    int tot;
    double per;
};

typedef struct student stud;

int main()
{
    stud s[16];
    int i, j;

    
    for (i=1; i<16; i++)
    { 
        s[i].tot=0;
        fflush(stdin);
        cout<<endl<<"Enter roll no of student "<<i<<" : ";
        cin>>s[i].rno;
        fflush(stdin);

      cout<<endl<<"Enter name of student "<<i<<"  :" ;
        gets(s[i].nm);



    for(j=1; j<4; j++)
    {
        cout<<endl<<"Enter the marks in subject "<<j<<" : ";
        cin>>(s[i].m[j]);
        fflush(stdin);
        s[i].tot = s[i].tot + s[i].m[j];
       
    }
     

      s[i].per = s[i].tot/3.0;
      if (s[i].per>=70)
        strcpy(s[i].cls,"dist");
      else if (s[i].per>=60)
          strcpy(s[i].cls, "first");
      else if (s[i].per>=50)
           strcpy (s[i].cls, "second");
      else if (s[i].per>=40)
             strcpy (s[i].cls, "pass");
      else
           strcpy (s[i].cls, "fail");             


      
    
    

     cout<<endl;

      
    }

    

    cout<<endl<<endl<<"RESULT OF STUDENT"<<endl;


    for(i=1; i<16; i++)
    {
        cout<<"Name of student "<<i<<" is : " <<s[i].nm<<endl;
        cout<<"Roll no of student "<<i<<" is : " <<s[i].rno<<endl;
        for(j=1; j<4; j++)

        {
            cout<<"Marks of subject "<<j<<" is :" <<(s[i].m[j])<<endl;

        }

        cout<<"Total percentage of student "<<i<<" is :" <<s[i].per<<endl;

     
       cout<<endl<<"Class of student "<<i<<" is : "<<s[i].cls<<endl;

        
        
           
             
     




      

       
             

    }    

    return 0;
    
}
