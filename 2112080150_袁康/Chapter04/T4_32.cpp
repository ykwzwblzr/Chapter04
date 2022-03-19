/*这是一个多行注释
*
*FileName: T4_32.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: See if you can form a triangle
*/ 
#include <iostream>
using namespace std;
int main()
{ double a=0,b=0,c=0;
  cin>>a>>b>>c;
  if(a>0 && b>0 &&c >0)
  {if(a+b>c && b+c>a)
    cout<<"能组成三角形"<<endl;
  else
    cout<<"不能组成三角形"<<endl;
   } else
    cout<<"不能组成三角形"<<endl;
    return 0;
  }
