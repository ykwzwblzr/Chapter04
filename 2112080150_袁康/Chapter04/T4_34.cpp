/*����һ������ע��
*
*FileName: T4_34.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: E to the x
*/
#include<iostream>
using namespace std;
int main()
{    int Y;
	cin >> Y;
	int su = 1;
	while (Y > 0)
	{
		su = su * Y;
		Y = Y - 1;
	}
	cout << su << endl;

double N;
	cin >> N;
	double S = 1;
    double J=1;
	double B = 1;
	for (double I = 1; I <=N; I++)
	{
		 J = I;
		while (J > 0)
		{
			B = B * J;
			J=J-1;
		}
		S = S + 1 / B;
		B=1;

	}
	cout << "�����e��ֵΪ" << S << " e�ľ���Ϊ" << N+1<<endl;

	double n, x;
	cin >> x >> n;
	double sum = 1;
    double c=x;
    double j=1;
	double b = 1;
	for (double i = 1; i <=n; i++)
	{
		 j = i;
		while (j > 0)
		{
			b = b * j;
			j=j-1;
		}
		sum = sum + c / b;
		b=1;
        c=c*x;
	}
	cout << "�����e��x�η���ֵΪ" << sum << " e�ľ���Ϊ" << n+1 << endl;

	return 0;

}
