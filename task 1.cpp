//Task # 1 Write a program in C++ to compute the total and average of four numbers.  
#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3,num4;
	cout<<"enter first number :";
	cin>>num1;
	cout<<"enter second  number :";
	cin>>num2;
	cout<<"enter third number :";
	cin>>num3;
	cout<<"enter fourth number :";
	cin>>num4;
	int total=num1+num2+num3+num4;
	cout<<"Total :"<<total<<endl;
	cout<<"Average :"<<total/4;
	return 0;
}

