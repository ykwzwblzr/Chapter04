/*����һ������ע��
*
*FileName: T4_33.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: See if you can form a right triangle
*/
#include <iostream>
using namespace std;
int main()
{
   int a=0,b=0,c=0;
   cin>> a>>b>>c;
  if(a>0 && b>0 && c>0)
  { if(a+b>c && a+c>b)
    {
       if(c*c==a*a+b*b || a*a==b*b+c*c ||b*b==a*a+c*c)
       cout<<"�ܹ���ֱ��������";
  else cout<<"���ܹ���ֱ��������";}
  else cout<<"���ܹ���ֱ��������";}

  else
  cout<<"���ܹ���ֱ��������";

    return 0;
}

