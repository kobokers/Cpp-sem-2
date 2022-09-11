#include<iostream>
using namespace std;

int main()
{
	int hours;
	float payment;
	float price1 = 2;
	
	cout<<"Enter hours :";
	cin>>hours;
	payment = hours * price1;
	cout<<"Your fee is: RM"<<payment<<endl<<"please come again!"<<endl;
	return 0;
}

