/*这是一个多行注释
*
*FileName: T4_28.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Output of symbol
*/
#include <iostream>
using namespace std;
int main()
{   int i=1,j=1;
while(j<=8)
{  if(j %2==0)
{   cout<<" ";
   while(i<=8)
   {
       cout<<"* ";
       i++;
   }
   {   cout<<endl;
    i=1;j++;
   }
   }
   else{   while(i<=8)
   {
       cout<<"* ";
       i++;
   }
{   cout<<endl;
    i=1;j++;
   }

   }
}
    return 0;
}
