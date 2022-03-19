/*这是一个多行注释
*
*FileName: T4_18.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Calculate the integer multiple of ten of a number
*/ 
#include <iostream>
using namespace std;
int main()
{   int n=1;
    cout<<"N"<<"\t"<<"10*N"<<"\t"<<"100*N"<<"\t"<<"1000*N"<<endl;
    int i=1;
    int a=0,b=0,c=0;
    while(n<=5)
    {  a=n*10;
       b=n*100;
       c=n*1000;
       cout<<n<<"\t"<<a<<"\t"<<b<<"\t"<<c<<endl;
       n++;
    }
    return 0;
}
