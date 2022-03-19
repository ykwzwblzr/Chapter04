/*这是一个多行注释
*
*FileName: T4_27.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Binary to decimal
*/ 
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	long int i,n,x=0,a;
	cin>>n;
                for(i=0;n!=0;++i)
	{
		a=n%10;
		x=(a)*(pow(2,i))+x;
		n=n/10;
	}

	cout<<x;

	return 0;
}
