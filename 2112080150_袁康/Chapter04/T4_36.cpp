/*这是一个多行注释
*
*FileName: T4_36.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: encryption
*/
#include <iostream>
using namespace std;
int main()
{
   	int x;
    int sum=0;
	cin >> x;
	int a = x % 10;
	int b = x / 10 % 10;
	int c = x / 100 % 10;
	int d = x / 1000;
	a=a+7-10;
	b=(b+7)-10;
	c=(c+7)-10;
	d=(d+7)-10;
    cout<<b<<a<<d<<c;

	return 0;
}
