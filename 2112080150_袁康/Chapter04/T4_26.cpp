/*这是一个多行注释
*
*FileName: T4_26.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Judgment of palindrome number
*/
#include <iostream>
using namespace std;
int main()
{   int a=0;
    int num=0,n=0;
    cin>>a;
    n=a;
    for(int i=1;i<=5;i++)
    {
        num=num*10+a%10;
        a=a/10;
    }
    if(num==n)
    {
        cout<<"是回文数";
    }
    else cout<<"不是回文数";
    return 0;
}
