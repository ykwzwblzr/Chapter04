/*这是一个多行注释
*
*FileName: T4_16.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Employee income
*/ 
#include <iostream>
using namespace std;
int main()
{  double a,b,c;
   cin>>a>>b;
   while(a!= -1)
   {  cout<<"Enter hours worked(-1 to end): "<<a<<endl;
      cout<<"Enter hourly rate of the employee($00.00): "<<b<<endl;
      if(a>40)
      {  c=40*b+(a-40)*1.5*b;
         cout<<"Salary is:$"<<c<<endl;
      }
      else
      {  c=a*b;
         cout<<"Salary is:$"<<c<<endl;
      }
      cin>>a>>b;
   }
   return 0;
}
