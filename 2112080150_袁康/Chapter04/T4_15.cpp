/*这是一个多行注释
*
*FileName: T4_15.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Salesman's income
*/ 
#include <iostream>
using namespace std;
int main()
{   double a,b;
  cin>>a>>b;
    while(a!= -1)
    {  cout<<"Enter sales in dollars (-1 to end): "<<a<<endl;
       b=200+0.09*a;
       cout<<"Salary is: $"<<b<<endl;
       cin>>a>>b;
    }
    return 0;
}
