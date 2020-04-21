#include <iostream>
#include <conio.h>
using namespace std;

union Nilai
{
      int x;
      int y;
};

int main()
{
      
      Nilai data;
      data.x  = 50 ;

      cout<<"Nilai varibel dengan Union "<<endl;
      cout<<"-------------------------- "<<endl;
      cout<<"Nilai x = "<<data.x<<endl;
      cout<<"Nilai y = "<<data.y<<endl;
    
     
}
