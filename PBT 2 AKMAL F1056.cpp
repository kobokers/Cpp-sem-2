#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

void inputData(string name,string phone, string address) //inputdata funtion 
{
	cout<<"Name\t\t : "<<name<<endl;
	cout<<"Address\t\t : "<<address<<endl;
	cout<<"Phone\t\t : "<<phone<<endl;
}

void calculatePrice(string prod, int quantity){ //calculate funtion
	double price ;
	
	if(prod == "T001"){
		price = 30.00 * quantity;
		cout<<"Total Price (RM) : "<<price<<endl;
	}
	else if(prod == "T002"){
		price = 35.50 * quantity;
		cout<<"Total Price (RM) : "<<price<<endl;
	}
	else if(prod == "T003"){
		price = 40.00 * quantity;
		cout<<"Total Price (RM) : "<<price<<endl;
	}
}
void calculateDiscount(){//calculate discount funtion
	double discount;
	double price;
	
	if(price <=100){
		cout<<"Price : "<<price;
	}
	else
	{
		discount = (price - price * 0.10);
		cout<<"Discount 10%(RM) : "<<discount<<endl;
		cout <<"+++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl ;
		cout<<"\t\t THANK YOU COME AGAIN";
	}
}

void outputDisplay(string p){ //output display funtion
	
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl ;
	cout << "\t\tORDER DETAILS" << endl ;
	cout << endl ;
	cout << "Product Details" << endl ;
	cout << "Product Code\t : " << p<< endl ;

}

int main(){ //main funtion
	string x , y , z , p;
	int qua;
	double dis,price,totaldis;
	char yn;
	
	cout<<"############################################################\n";
	cout<<"#\t\tWELCOME TO TS ONLINE STORE                 #\n";
	cout<<"# Product Code\t\tTshirt Type \t\tPrice (RM) #\n";
	cout<<"# ------------\t\t----------- \t\t---------- #\n";
	cout<<"# T001        \t\tShort Sleeve\t\t30.00      #\n";
	cout<<"# T002        \t\tLong Sleeve \t\t35.50      #\n";
	cout<<"# T003        \t\tMuslimah    \t\t40.00      #\n";
	cout<<"############################################################\n\n";
	do{
		cout << "Enter Name         : " ;
		getline (cin , x) ;
		cout << "Enter Address      : ";
		getline (cin , z) ;
		cout << "Enter Phone Number : ";
		cin >> y ;
		cout <<"\n";
		cout << "Enter Product Code : " ;
		cin >> p;
		cout << "Enter Quantity     : " ;
		cin >> qua ;
		cout <<"\n" ;
	
		outputDisplay(p); //call funtion
		inputData(x,y, z);
		calculatePrice(p, qua );
		calculateDiscount();
		
		cout<<"\nAdd New Customer? (Y/N) :";
		cin >>yn;
		cout<<"\n";
	}while(yn=='Y'); //do while loop
	return 0;
}
