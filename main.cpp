#include <iostream> 
using namespace std;
int main()
{  // print outs do not need an input. print outs are also called :cin waka waka the other way. 
 for(int i = 1; i <= 100 ; i++ )  
  { 
        if ( (i%3 == 0) && (i%5==0) ) 
         //lets include some modulus division;
         {
            cout<<"FixeBiscuits\n";
         }
        else if(i%3 == 0)
         {
             cout<<"Fixe\n";
         }
        else if(i%5 == 0)
         {
            cout<<"Biscuits\n";
         }
        else
        {
        
            cout<<i<<"\n"; 
        }
   } 
    return 0;
    
    
    }