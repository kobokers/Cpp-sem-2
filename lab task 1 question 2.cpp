#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name;
	string address;
	string matrixnumber;
	string department;
	
	cout<<"Input your data please	:"<<endl<<endl;
	cout<<"Name	:";
	getline (cin, name);
	
	cout<<"Address	:";
	getline (cin, address);
	
	cout<<"Matrix Number	:";
	getline (cin, matrixnumber);
	
	cout<<"Department:";
	getline (cin, department);
	
	cout<<endl;
	cout<<"PMJ STUDENT DATA"<<endl;
	cout<<"==============================="<<endl;
	
	cout<<"Name:"<<name<<endl;
	cout<<"Address:"<<address<<endl;
	cout<<"Matrix number:"<<matrixnumber<<endl;
	cout<<"Department:"<<department<<endl;
	cout<<"==============================="<<endl;
	
	return 0;
}
