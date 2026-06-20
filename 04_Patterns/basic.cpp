#include<iostream>
using namespace std;
int main()
{
    int count= 1;
     for(int row = 1; row<= 5; row = row+1 )
       {
         for(int col = 1; col<=5; col=col+1)
           {
             cout<<count<<"  ";
             count = count+1;
           }
         cout<<endl;
       }
 return 0;
//      for(int row = 1; row<= 5; row = row+1 )
//        {
//         char name= 'a'+row-1;
//          for(int col = 1; col<=5; col=col+1)
//            {
//              cout<<name<<" ";
//            }
//          cout<<endl;
//        }
//  return 0;
}