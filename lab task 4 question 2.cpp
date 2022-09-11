#include <iostream>
#include <string>
using namespace std;
struct Student //structor
{
char matrix[50]; //datd types
string phone;
char Name[50];
char kelas[50];
};
int main(){ //main fucntion
	int i;
	Student stu[3]; 
	for(i=0;i<3;i++){ //input looping
		cout << "\nEnter details of " << i+1 << " Student";
		cout << "\n\tEnter Student Name : ";
		cin >> stu[i].Name;
		cout << "\n\tEnter Student Class : ";
		cin >> stu[i].kelas;
		cout << "\n\tEnter Student Matrix : ";
		cin >> stu[i].matrix;
		cout << "\n\tEnter Student Phone : ";
		cin >> stu[i].phone;
	}
	cout << "\n================================";
	cout << "\nDetails of Students";
	cout << "\n================================";
		for(i=0;i<3;i++){	//output looping
	cout << "\n"<< stu[i].matrix <<"\t\t"<< stu[i].Name <<"\t\t"<< stu[i].phone <<"\t\t"<< stu[i].kelas;
	}
	return 0;
}
