/*这是一个多行注释
*
*FileName: T4_13.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Calculate miles per gallon
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{   double dr=0,used=0,mag=0,total=0,sum=0;
    double i=0,j=0;
    while(dr != -1)
    { cin>>dr;
      cin>>used;
      mag=dr/used;
       i=dr+i;
       j=used+j;
       total=i/j;
       cout<<"Enter miles driven(-1 to quit): "<<dr<<endl;
       cout<<"Enter gallons used: "<<used<<endl;
       cout<<"MPG this trip: "<<fixed<<setprecision(6)<<mag<<endl;
       cout<<"Total MPG: "<<fixed<<setprecision(6)<<total<<endl;
    }
    return 0;
}