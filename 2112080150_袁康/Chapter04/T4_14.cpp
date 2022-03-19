/*这是一个多行注释
*
*FileName: T4_14.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Arrears and credit lines
*/ 
#include <iostream>
using namespace std;
int main()
{  double a,b,c,d,e,f;
   cin>>a>>b>>c>>d>>e;
   while(a != -1)
   { f=b+c-d;
   if(f>e)
   { cout<<"Enter account number (or -1 to quit): "<<a<<endl;
     cout<<"Enter beginning balance: "<<b<<endl;
     cout<<"Enter total charges: "<<c<<endl;
     cout<<"Enter total credits: "<<d<<endl;
     cout<<"Enter credits limit: "<<e<<endl;
      cout<<"New balance is: "<<f<<endl;
      cout<<"Account: "<<a<<endl;
      cout<<"Credits limit: "<<e<<endl;
      cout<<"Balance:    "<<f<<endl;
     cout<<"Credit Limit Exceeded."<<endl;
   }
   else{
    cout<<"Enter account number (or -1 to quit): "<<a<<endl;
     cout<<"Enter beginning balance: "<<b<<endl;
     cout<<"Enter total charges: "<<c<<endl;
     cout<<"Enter total credits: "<<d<<endl;
     cout<<"Enter credits limit: "<<e<<endl;
      cout<<"New balance is: "<<f<<endl;
   }   cin>>a>>b>>c>>d>>e;
   }
   return 0;
}
