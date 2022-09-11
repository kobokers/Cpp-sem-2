#include<iostream> //LINE 1 AND 2 FILE HEADER
#include<string> 
using namespace std;

int main(){       //START FROM LINE 6 TO 11 IS DECLARATION AND VARIABLES
	float priceA = 755, priceB = 588,priceC = 105, priceD = 232, priceE = 200;
	float total=0,totala=0,totalb=0,totalc=0,totald=0,totale=0;
	float cash,balance,balance1,discount=0.10,pricediscount;
	int days;
	string place;
	char packageid,yn;
	
	cout<<"\t\t HOLIDAY PACKAGES IN AMNA TRAVLE AGENCY\n"; // LINE 13 TO 21 IS FIXED OUTPUT IT WILL STAY UNTIL END OPERATION
	cout<<"\t\t **************************************\n\n";
	cout<<"Package ID\t\t Accomodation Place    \t\t\t\t Price Per Night\n"
			  "----------\t\t-----------------------\t\t\t\t ----------------\n"
			  "  A\t\t\tPelangi Beach Resort, Langkawi\t\t\t RM 755\n"
			  "  B\t\t\tImpiana KLCC Hotel,KL\t\t\t\t RM 588\n"
			  "  C\t\t\tBayview Hotel,Melaka\t\t\t\t RM 105\n"
			  "  D\t\t\tPulai Spring Resort, JB\t\t\t\t RM 232\n"
			  "  E\t\t\tKinta Riverfront Hotel, Perak\t\t\t RM 200\n\n";
	do{													  //BY USING DO....WHILE AND IF ELSE IF, USER CAN INPUT MULTIPLE CHOICE BY USING YES OR NO AND ENTER PACAKAGE ID
		cout<<"Enter Package ID : ";cin >> packageid;    //LINE 22 UNTIL 65
		if (packageid == 'A'||packageid == 'a') {
	    cout << "Enter number of night : ";cin >>days;
	    totala=days*priceA;
	    total=totala+totalb+totalc+totald+totale;;
	    cout<<"Total for package A : "<<totala<<endl;
		cout<<"Total price now is : "<<total<<endl;   
	} 
	else if (packageid == 'B'||packageid == 'b') { //USING IF ELSE IF METHOD
	   cout << "Enter number of night : ";cin >>days;
	    totalb=days*priceB;
	    total=totala+totalb+totalc+totald+totale;
	    cout<<"Total for package B : "<<totalb<<endl;
		cout<<"Total price now is : "<<total<<endl;
	}
	else if (packageid == 'C'||packageid == 'c'){
		cout << "Enter number of night : ";cin >>days;
	    totalc=days*priceC;
	    total=totala+totalb+totalc+totald+totale;
	    cout<<"Total for package C : "<<totalc<<endl;
		cout<<"Total price now is : "<<total<<endl;
			}
	else if (packageid == 'D'||packageid == 'd'){
		cout << "Enter number of night : ";cin >>days;
	    totald=days*priceD;
	    total=totala+totalb+totalc+totald+totale;
	    cout<<"Total for package D : "<<totald<<endl;
		cout<<"Total price now is : "<<total<<endl;
	}
	else if (packageid == 'E'||packageid == 'e'){
		cout << "Enter number of night : ";cin >>days;
	    totale=days*priceE;
	    total=totala+totalb+totalc+totald+totale;
	    cout<<"Total for package E : "<<totale<<endl;
		cout<<"Total price now is : "<<total<<endl;
	}			  
	else{
		cout<<"******************* Invalid Package ! **********************\n";
	}		
		cout<<"\nAdd new package? (Y/N) :"; // IF THE USER DIDNT INPUT CORRECT INPUT IT WILL TRIGGER THIS INVALID AND STRAIGHT GO TO ADD NEW PACKAGE INPUT
		cin >>yn;							//IF Y THE LOOP WILL CONTINUE , IF N IT WILL END ITS PROGRAM IN RETURN 0
			
	}while(yn=='y'||yn=='Y');
		if(total>=1000){ 					//IF ALL CODITION ARE MET THE PROGRAM WILL OUTPUT TOTAL PRICE OF THE PACKAGE , DEPENDS ON USER IF PRICE IS MORE THAN RM1000 , THE PROGRAM WILL TRIGGER DISCOUNT 10% 
			cout<<"Total Price\t\t\t\t: RM "<<total<<endl;
			cout<<"Discout (10%)\t\t\t\t: RM "<<total*discount<<endl;
			pricediscount=total-total*discount;
			cout<<"Total Price After Discount\t\t: RM "<<pricediscount<<endl;
			cout<<"Cash Received\t\t\t\t: RM ";cin>>cash;
			balance=cash-pricediscount;
			do
			{
			 if(cash<pricediscount){	   // IF USER ENTER LESS AMOUNT OF THE TOTAL PRICE IT WILL TRIGGER LOOP TO MAKE USER ADD MORE MONEY UNTIL TOTAL PRICE IS REACHED
			 	balance=pricediscount-cash;
				    cout<<"*************************************************************"<<endl;
					cout<<"********** Your cash is short of RM ("<<balance<<") ******************"<<endl;
					cout<<"*************************************************************"<<endl;
				    cout<<"Cash Received\t\t\t\t: RM ";cin>>cash;
				}
			}while(pricediscount>cash);
				cout<<"Balance\t\t\t\t\t: RM "<<balance<<endl<<endl; //IF NO ISSUE THEN IT WILL SKIP THE LOOP STRAIGHT GO TO BALANCE OUTPUT
				cout<<"THANK YOU, COME AGAIN..";
	return 0;
		}
		else							//IF TOTAL PRICE IS LESS THAN 1000 IT WILL GO TO THIS LINE WHERE NO DISCOUNT WILL BE GIVEN
			cout<<"Total Price\t\t\t\t: RM "<<total<<endl;
			cout<<"Cash Received\t\t\t\t: RM ";cin>>cash;
			balance1=cash-total;
			do{
		 		if(cash<total){
		 			balance1=total-cash;
		 			cout<<"*************************************************************"<<endl;
					cout<<"********** Your cash is short of RM ("<<balance1<<") ********"<<endl;
					cout<<"*************************************************************"<<endl;
					cout<<"Cash Received\t\t\t\t: RM ";cin>>cash;
				}
			}while(total>cash);
				cout<<"Balance\t\t\t\t\t: RM "<<balance1<<endl<<endl;
				cout<<"THANK YOU, COME AGAIN..";
	return 0;
}









