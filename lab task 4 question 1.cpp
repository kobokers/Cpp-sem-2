#include<iostream> //file header
using namespace std;

int main(){
	double mark[50], numstudent,sum=0; //data type
	int i;
	double *ptr; //pointer
	cout<<"Enter the number of student : ";cin >>numstudent;
	cout<<"\n======================================"<<endl;
	cout<<"Enter the mark for each student : "<<endl;
	cout<<"======================================"<<endl;
	for(i=0;i<numstudent;i++)//looping
	{
		cout<<"Enter student mark ["<<i+1<<"]=";cin>>mark[i];
	}
	cout<<"\n======================================\n";
	cout<<"Display student mark using pointer"<<endl; //display output
	cout<<"======================================\n";
	
	for(int i=0; i<numstudent; i++)
	{ 
		ptr = mark;
		sum = sum + *(ptr+i); //sum for all total marks
			{
				cout<<"Student "<<i+1<<" : "<<mark[i]<<endl;
			}
	}
    cout<<"\nTotal marks for all students are : "<<sum;
	return 0;
}
