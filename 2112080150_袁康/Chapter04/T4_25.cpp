/*这是一个多行注释
*
*FileName: T4_25.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Output hollow square
*/
#include <iostream>
using namespace std;
int main()
{   int a=0;
    cin>>a;
 if(a>1)   { for(int i=1;i<=a; i++)
       {  cout<<"*";
       }
    cout<<endl;
    for(int j=1;j>=1&&j<a-1;j++)
    {  cout<<"*";
 for(int l=1;l>=1 && l<a-1; l++)
       {  cout<<" ";
       }
       cout<<"*"<<endl;
    }
    for(int m=1;m<=a;m++)
    {  cout<<"*";}
 }
 else
    cout<<"*";
    return 0;
}
