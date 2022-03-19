/*这是一个多行注释
*
*FileName: T4_37.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Calculation of population growth
*/
#include <iostream>
using namespace std;
int main()
{   double a,b,f;
 cin>>a>>b;
int i=1,j=1;
   for(;i<=75;i++)
   {  cout<<"第"<<i<<"年"<<"\t";}
   cout<<endl;
  double k=1;
   double o=1;
 double m=a;
   double c=a,d=a;
   for(;j<=75;j++)
     {  while(k<=j)
       {    c=c*(1+b);
            k++;
            }
         cout<<c<<"\t";
         c=a;
         k=1;
     }
     cout<<endl;
    for(double p=1;p<=75;p++)
    {   while(o<=p)
        {d=d*(1+b);
        o++;}
        f=d-m;
       m=d;
       d=a;
       cout<<f<<"\t";
       o=1;
    }

    return 0;
}
