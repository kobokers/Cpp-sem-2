#include<iostream>
#include<string>
using namespace std;

int main(){
	
	int num,n,i,big;
	string name,dept;
	char yn;
	
	cout << "*********************************************\n";
	cout << "             PMJ CAMPUS ELECTION           \n\n";
	cout << "*********************************************\n";
	
	do{
		cout <<"\nEnter number of student : ";
		cin >>n;
		
		if(n<=0)
		{
				cout <<"invalid number\n";			
	 }
		else
		{
			for (int i = 1 ;i <=n;i++){
				cout << "\nEnter Candidates's information :-\n";
				cout << "Name :";cin >> name;
				cout << "Department:";cin >>dept;
				cout << "Total Highest votes :";cin >> num;
			
				if(num > big || i== 1)
				{
					big = num;
				}
			}
			//output
			cout << "*****************************************";
			cout << "\nResult";
			cout << "\nTotal votes : "<<big;
			cout << "\nCONGRATULATION\n";
			cout << "*****************************************\n";
				
			}
			cout<<"\nDo you want to continue:(Y/N) :";
			cin >>yn;
						
	}while(yn=='y'||yn=='Y');
	return 0;
}
	
