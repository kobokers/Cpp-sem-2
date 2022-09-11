// NAME :AKMAL SYAZWAN
//REG NUM : 25DDT21F1056
//CLASS : DDT2B
//ASSESMENT : LAB TASK 5
#include <iostream> // file header
using namespace std;

void choice () //funtion choice
{
	cout << "Please choose your food delivery platform :" << endl; //body of function
	cout << "1 - GrabFood"      << endl;
	cout << "2 - FoodPanda"     << endl;
	cout << "3 - ShopeeFood"    << endl;
	cout << "4 - EASI (Hungry)" << endl;
	cout << "5 - Bungkusit"     << endl;
	cout << "6 - DeliverEat"    << endl;
	cout << "7 - Tapau"         << endl;
};

double food () // funtion food
{
	double fp;
	cout << "\nPlease insert the food price  (MYR) : ";
	cin >> fp;
	return fp; 
};

double drink () // funtion drink
{
	double dp;
	cout << "Please insert the drink price (RM) : ";
	cin >> dp;
	return dp;
};

void delivery (double fp, double dp) //funtion delivery
{
	cout << "Platform Delivery Food Price  (RM): " << fp << endl;
	cout << "Platform Delivery Drink Price (RM) : " << dp << endl;
};

int main () //main funtion
{
	int menu;
	double fp, dp;
	double ftotal, dtotal;
	
    choice ();
    cout << "\nChoose number : ";cin >> menu; 
	
	cout << "\n*********************** Data Collection *****************"<< endl;
	ftotal = food ();
	dtotal = drink ();
	cout << "\n********************* Food Delivery Price Calculator ******************" << endl;
	
	cout << "Food Price  RM : " << ftotal  << endl;
	cout << "Drink Price RM : " << dtotal << endl;
	cout << "Platform       : " << menu << endl;
	
	if (menu == 1) // calculation
	{
		fp = ftotal * 1.90;
		dp = dtotal * 1.90;
	}
	else if (menu == 2)
	{
		fp = ftotal * 2.20;
		dp = dtotal * 2.20;
	}
	else if (menu == 3)
	{
		fp = ftotal * 2.50;
		dp = dtotal * 2.50;
	}
	else if (menu == 4)
	{
		fp = ftotal * 2.80;
		dp = dtotal * 2.80;
	}
	else if (menu == 5)
	{
		fp = ftotal*3.00;
		dp = dtotal*3.00;
	}
	else if (menu == 6)
	{
		fp = ftotal * 3.20;
		dp = dtotal * 3.20;
	}
	else if (menu == 7)
	{
		fp = ftotal * 3.40;
		dp = dtotal * 3.40;
	}
	else 
	{
		fp = 0;
		dp = 0;
	}
	
	delivery (fp, dp); //call funtion delivery
	
	return 0;
}








