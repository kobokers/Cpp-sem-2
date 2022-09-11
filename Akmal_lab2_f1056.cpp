#include <iostream>
using namespace std;
int main()
{
	string name,matrix_number,kelas;
	float sub_1,sub_2,sub_3,sub_4,TotalMarks,AverageMarks;
	
	//input
	cout<<"Please enter the following information: "<<endl;
	cout<<"Name: ";
	getline(cin,name);
	cout<<"Registration Number: ";
	getline( cin, matrix_number);
	cout<<"Class: ";
	getline(cin,kelas);
	
	//input
	cout<<"\n\nEnter marks for the each subject: ";
	cout<<"\nDFC20113 Programming Fundamentals: ";
	cin>>sub_1;
	cout<<"DFC20203 Database Design: ";
	cin>>sub_2;
	cout<<"DFC20143 Introduction to Network: ";
	cin>>sub_3;
	cout<<"DFC20083 Security Basic and IT Professional: ";
	cin>>sub_4;
	
	cout<<"*******************************************************"<<endl;
	cout<<"Name                :"<<name<<endl;
	cout<<"Registration_Number :"<<matrix_number<<endl;
	cout<<"Class               :"<<kelas<<endl;
	cout<<"***********************************************************"<<endl;
	
	
	cout<<"\n\nResult Examination:"<<endl;
	cout<<"DFC20113 Programming Fundamentals                            "<<sub_1<<endl;
	cout<<"DFC20203 Database Design                                     "<<sub_2<<endl;
	cout<<"DFC20143 Introduction to Network                             "<<sub_3<<endl;
	cout<<"DFC20083 Security Basic and IT Professional                  "<<sub_4<<endl;
	
	//MATH THINGY
	TotalMarks=sub_1+sub_2+sub_3+sub_4;
	AverageMarks=TotalMarks/4;
	
	//OUTPUT
	cout<<"\n\nTotal Marks:"<<TotalMarks;
	cout<<"\nAverage Marks:"<<AverageMarks;
}
