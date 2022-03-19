/*这是一个多行注释
*
*FileName: T4_19.cpp
*Author: YuanKang
*E-mail: 2116962428@qq.com
*Date: Mar 5th,2022
*College: School of College Science and information Engineering
*Function: Computes the largest two values out of ten
*/
#include <iostream>
using namespace std;
int main()
{   int number;
    int counter=1;
     int largest=-2147483647,last=-2147483648;
     cin>>number;
     while(counter<10)
     {  if(number>largest)
         {last=largest;
         largest=number;}

         else { if(number<last)
               {last=last;largest=largest;}
               else
               {
                   last=number;largest=largest;
               }
         }
         cin>>number;
         counter++;
     }
     cout<<largest<<" "<<last;
    return 0;
}
