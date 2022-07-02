#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
class rooms{
public:
	int NormalRooms=0;
	int SuperiorRooms=0;
	int DeluxeRooms=0;
};
class pizza{
public:
	int RegularPizzas=0;
	int MediumPizzas=0;
	int LargePizza=0;
};
class pasta{
public:
	int redSaucePasta=0;
	int whiteSaucePasta=0;
	int pinkSaucePasta=0;
};
class vegThali{
public:
	int NormalThali=0;
	int SuperiorThali=0;
	int DeluxeThali=0;
};
class NonvegThali{
public:
	int NormalThali=0;
	int SuperiorThali=0;
	int DeluxeThali=0;
};
class Burger{
public:
	int vegBurger=0;
	int nonVegBurger=0;
};
class Noodles{
public:
	int VegNoodles=0;
	int HakkaNoodles=0;
	int NonVegNoodles=0;
};
class Rolls{
public:
	int VegRoll=0;
	int ChickenRoll=0;
	int PaneerRoll=0;
};
class Shakes{
public:
	int OreoShake=0;
	int StrawberryShake=0;
	int PineAppleShake=0;
};

int main(){
	int quantity;
	int choice;
	string email_id;
    string password;
    int option;
    char YesNo;
    char YesNoCoupon;
    string CouponCode;
	rooms Qrooms,Srooms;
	pizza Qpizza,Spizza;
	pasta Qpasta,Spasta;
	vegThali QvegThali,SvegThali;
	NonvegThali QNonvegThali,SNonvegThali;
	Burger QBurger,SBurger;
	Noodles QNoodles,SNoodles;
	Rolls QRolls,SRolls;
	Shakes QShakes,SShakes;
	int Total_rooms=0,Total_pizza=0,Total_pasta=0,Total_VegThali=0,Total_NonvegThali=0,Total_burger=0,Total_noodles=0,Total_rolls=0,Total_shakes=0,Total_desterts=0,Total_discount=0;
	cout<<"\n\t Amount of items we have";
	cout<<"\n Number 3 type of rooms available : ";
	cin>>Qrooms.NormalRooms>>Qrooms.SuperiorRooms>>Qrooms.DeluxeRooms;
	cout<<"\n Quantity of 3 type of pasta : ";
	cin>>Qpasta.redSaucePasta>>Qpasta.whiteSaucePasta>>Qpasta.pinkSaucePasta;
	cout<<"\n Quantity of 3 type of pizza : ";
	cin>>Qpizza.RegularPizzas>>Qpizza.MediumPizzas>>Qpizza.LargePizza;
	cout<<"\n Quantity of 3 type of vegthali : ";
	cin>>QvegThali.NormalThali>>QvegThali.SuperiorThali>>QvegThali.DeluxeThali;
	cout<<"\n Quantity of 3 type of nonvegThali : ";
	cin>>QNonvegThali.NormalThali>>QNonvegThali.SuperiorThali>>QNonvegThali.DeluxeThali;
	cout<<"\n Quantity of 2 type of burger : ";
	cin>>QBurger.vegBurger>>QBurger.nonVegBurger;
	cout<<"\n Quantity of 3 type of pasta : ";
	cin>>Qpasta.redSaucePasta>>Qpasta.whiteSaucePasta>>Qpasta.pinkSaucePasta;
	cout<<"\n Quantity of 3 type of nooddles : ";
	cin>>QNoodles.VegNoodles>>QNoodles.HakkaNoodles>>QNoodles.NonVegNoodles;
	cout<<"\n Quantity of 3 type of rolls : ";
	cin>>QRolls.VegRoll>>QRolls.ChickenRoll>>QRolls.PaneerRoll;
	cout<<"\n Quantity of 3 type of shakes : ";
	cin>>QShakes.OreoShake>>QShakes.StrawberryShake>>QShakes.PineAppleShake;
    b:
    int amount=0;
    cout<<"\n\n\t\t\t\t WELCOME TO THE HOTEL GRAND";
    m:
     cout<<"\n\t\t\t\t Please select the option which you want ";
     cout<<"\n\n1.Rooms";
     cout<<"\n2.Pizza";
     cout<<"\n3.Pasta";
     cout<<"\n4.VegThali";
     cout<<"\n5.NonVegThali";
     cout<<"\n6.Burgers";
     cout<<"\n7.Noodles";
     cout<<"\n8.Rolls";
     cout<<"\n9.Shakes";
     cout<<"\n10.Information regarding sales and collection";
     cout<<"\n11.Exit";

     cout<<"\n\n Please Enter your choice : ";
     cin>>choice;
     switch(choice){
     	case 1:
     	cout<<"\n\n Please select the type of Room you want : ";

     	cout<<"\n\n1.NormalRooms";
     	cout<<"\n\n2.SuperiorRooms";
     	cout<<"\n\n3.DeluxeRooms";

     	 cout<<"\n\n Please Enter your choice : ";
     	 cin>>option;

     	 switch(option)
     	 {
     	 	case 1:
     	 	cout<<"\n\n Enter the number of NormalRooms you want : ";
     	 	cin>>quantity;
     	 	if(Qrooms.NormalRooms-Srooms.NormalRooms>=quantity){
     	 		Srooms.NormalRooms+= quantity;
     	 		Total_rooms+=quantity*1000;
     	 		amount+=quantity*1000;
     	 		cout<<"\n\n\t\t"<<quantity<<"rooms have been alloted to you.";
     	 	}
     	 	else{
     	 		cout<<"\n\tOnly"<<Qrooms.NormalRooms-Srooms.NormalRooms<<" NormalRooms remaining in the hotel";
     	 	}
     	 	break;

     	 	case 2:
     	 	cout<<"\n\n Enter the number of SuperiorRooms you want : ";
     	 	cin>>quantity;
     	 	if(Qrooms.SuperiorRooms-Srooms.SuperiorRooms>=quantity){
     	 		Srooms.SuperiorRooms+= quantity;
     	 		Total_rooms+=quantity*3000;
     	 		amount+=quantity*3000;
     	 		cout<<"\n\n\t\t"<<quantity<<" rooms have been alloted to you.";
     	 	}
     	 	else{
     	 		cout<<"\n\tOnly"<<Qrooms.SuperiorRooms-Srooms.SuperiorRooms<<" SuperiorRooms remaining in the hotel";
     	 	}
     	 	break;

     	 	case 3:
     	 	cout<<"\n\n Enter the number of DeluxeRooms you want : ";
     	 	cin>>quantity;
     	 	if(Qrooms.DeluxeRooms-Srooms.DeluxeRooms>=quantity){
     	 		Srooms.DeluxeRooms+= quantity;
     	 		Total_rooms+=quantity*5000;
     	 		amount+=quantity*5000;
     	 		cout<<"\n\n\t\t"<<quantity<<" rooms have been alloted to you.";
     	 	}
     	 	else{
     	 		cout<<"\n\tOnly"<<Qrooms.DeluxeRooms-Srooms.DeluxeRooms<<" DeluxeRooms remaining in the hotel";
     	 	}
     	 	break;
     	 }
     	 cout<<"\n\nDo you want anything else Sir?(Y/N) : ";
     	 cin>>YesNo;
     	 if(YesNo=='Y' || YesNo=='y'){
     	 	goto m;
     	 }
     	 else if(YesNo=='N' || YesNo=='n'){
            if(amount!=0){
     	 	cout<<"\n\nDo you have any coupon Code for getting 20% disxount?(Y/N) : ";
     	 	cin>>YesNoCoupon;
     	 	if(YesNoCoupon=='Y' || YesNoCoupon=='y'){
     	 	cout<<"\nEnter the code : ";
     	 	cin>>CouponCode;
     	 	if(CouponCode=="GRANDHOTEL20"){
     	 		Total_discount+=0.2*(amount);
     	 		cout<<"\n\n\t\t\tCONGRATULATIONS FOR GETTING 20 PERCENT discount";
     	 		cout<<"\n\nYour Total discount"<<0.2*(amount);
     	 	cout<<"\n\nYour Total bill is Rs."<<0.8*amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
     	 	}
     	 	else{
     	 		cout<<"\n\n\t\t\tINVALID CODE";
     	 		cout<<"\n\nYour Total bill is Rs."<<amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";

     	 	}
     	 	
     	 	}
     	 	else{
     	 		cout<<"\n\nYour Total bill is Rs."<<amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
     	 	}
     	 }
         else{
            cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
         }
         }
     	 break;

     	 case 2:
    
     	cout<<"\n\n Please select the type of Pizza you want";

     	cout<<"\n\n1.RegularPizzas";
     	cout<<"\n\n2.MediumPizzas";
     	cout<<"\n\n3.LargePizza";

     	 cout<<"\n\n Please Enter your choice : ";
     	 cin>>option;

     	 switch(option)
     	 {
     	 	case 1:
     	 	cout<<"\n\n Enter the number of RegularPizzas you want : ";
     	 	cin>>quantity;
     	 	if(Qpizza.RegularPizzas-Spizza.RegularPizzas>=quantity){
     	 		Spizza.RegularPizzas+= quantity;
     	 		Total_pizza+=quantity*100;
     	 		amount+=quantity*100;
     	 		cout<<"\n\n\t\t"<<quantity<<" pasta is the order!";
     	 	}
     	 	else{
     	 		cout<<"\n\tOnly"<<Qpizza.RegularPizzas-Spizza.RegularPizzas<<" RegularPizzas remaining in the hotel";
     	 	}
     	 	break;

     	 	case 2:
     	 	cout<<"\n\n Enter the number of MediumPizzas you want : ";
     	 	cin>>quantity;
     	 	if(Qpizza.MediumPizzas-Spizza.MediumPizzas>=quantity){
     	 		Spizza.MediumPizzas+= quantity;
     	 		Total_pizza+=quantity*300;
     	 		amount+=quantity*300;
     	 		cout<<"\n\n\t\t"<<quantity<<" pasta is the order!";
     	 	}
     	 	else{
     	 		cout<<"\n\tOnly"<<Qpizza.MediumPizzas-Spizza.MediumPizzas<<" MediumPizzas remaining in the hotel";
     	 	}
     	 	break;

     	 	case 3:
     	 	cout<<"\n\n Enter the number of LargePizza you want : ";
     	 	cin>>quantity;
     	 	if(Qpizza.LargePizza-Spizza.LargePizza>=quantity){
     	 		Spizza.LargePizza+= quantity;
     	 		Total_pizza+=quantity*500;
     	 		amount+=quantity*500;
     	 		cout<<"\n\n\t\t"<<quantity<<" LargePizza is the order!";
     	 	}
     	 	else{
     	 		cout<<"\n\tOnly"<<Qpizza.LargePizza-Spizza.LargePizza<<" LargePizza remaining in the hotel";
     	 	}
     	 	break;
     	 }
          	 cout<<"\n\nDo you want anything else Sir?(Y/N) : ";
     	 cin>>YesNo;
     	 if(YesNo=='Y' || YesNo=='y'){
     	 	goto m;
     	 }
     	 else if(YesNo=='N' || YesNo=='n'){
            if(amount!=0){
     	 	cout<<"\n\nDo you have any coupon Code for getting 20% disxount?(Y/N) : ";
     	 	cin>>YesNoCoupon;
     	 	if(YesNoCoupon=='Y' || YesNoCoupon=='y'){
     	 	cout<<"\nEnter the code : ";
     	 	cin>>CouponCode;
     	 	if(CouponCode=="GRANDHOTEL20"){
     	 		Total_discount+=0.2*(amount);
     	 		cout<<"\n\n\t\t\tCONGRATULATIONS FOR GETTING 20 PERCENT discount";
     	 		cout<<"\n\nYour Total discount"<<0.2*(amount);
     	 	cout<<"\n\nYour Total bill is Rs."<<0.8*amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
     	 	}
     	 	else{
     	 		cout<<"\n\n\t\t\tINVALID CODE";
     	 		cout<<"\n\nYour Total bill is Rs."<<amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";

     	 	}
     	 	
     	 	}
     	 	else{
     	 		cout<<"\n\nYour Total bill is Rs."<<amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
     	 	}
     	 }
         else{
            cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
         }
         }
     	 break;

     	 case 3:
     	
     	cout<<"\n\n Please select the type of Pasta you want : ";

     	cout<<"\n\n1.RedSaucePasta";
     	cout<<"\n\n2.WhiteSaucePasta";
     	cout<<"\n\n3.PinkSaucePasta";

     	 cout<<"\n\n Please Enter your choice : ";
     	 cin>>option;

     	 switch(option)
     	 {
     	 	case 1:
     	 	cout<<"\n\n Enter the number of RedSaucePasta you want : ";
     	 	cin>>quantity;
     	 	if(Qpasta.redSaucePasta-Spasta.redSaucePasta>=quantity){
     	 		Spasta.redSaucePasta+= quantity;
     	 		Total_pasta+=quantity*150;
     	 		amount+=quantity*150;
     	 		cout<<"\n\n\t\t"<<quantity<<" RedSaucePasta is the order!";
     	 	}
     	 	else{
     	 		cout<<"\n\tOnly"<<Qpasta.redSaucePasta-Spasta.redSaucePasta<<" RedSaucePasta remaining in the hotel";
     	 	}
     	 	break;

     	 	case 2:
     	 	cout<<"\n\n Enter the number of WhiteSaucePasta you want : ";
     	 	cin>>quantity;
     	 	if(Qpasta.whiteSaucePasta-Spasta.whiteSaucePasta>=quantity){
     	 		Spasta.whiteSaucePasta+= quantity;
     	 		Total_pasta+=quantity*250;
     	 		amount+=quantity*250;
     	 		cout<<"\n\n\t\t"<<quantity<<" WhiteSaucePasta is the order!";
     	 	}
     	 	else{
     	 		cout<<"\n\tOnly"<<Qpasta.whiteSaucePasta-Spasta.whiteSaucePasta<<" WhiteSaucePasta remaining in the hotel";
     	 	}
     	 	break;

     	 	case 3:
     	 	cout<<"\n\n Enter the number of PinkSaucePasta you want : ";
     	 	cin>>quantity;
     	 	if(Qpasta.pinkSaucePasta-Spasta.pinkSaucePasta>=quantity){
     	 		Qpasta.pinkSaucePasta+= quantity;
     	 		Total_pasta+=quantity*350;
     	 		amount+=quantity*350;
     	 		cout<<"\n\n\t\t"<<quantity<<" PinkSaucePasta is the order!";
     	 	}
     	 	else{
     	 		cout<<"\n\tOnly"<<Qpasta.pinkSaucePasta-Spasta.pinkSaucePasta<<" PinkSaucePasta remaining in the hotel";
     	 	}
     	 	break;
     	 }
     	 
     	 cout<<"\n\nDo you want anything else Sir?(Y/N) : ";
     	 cin>>YesNo;
     	 if(YesNo=='Y' || YesNo=='y'){
     	 	goto m;
     	 }
     	 else if(YesNo=='N' || YesNo=='n'){
            if(amount!=0){
     	 	cout<<"\n\nDo you have any coupon Code for getting 20% disxount?(Y/N) : ";
     	 	cin>>YesNoCoupon;
     	 	if(YesNoCoupon=='Y' || YesNoCoupon=='y'){
     	 	cout<<"\nEnter the code : ";
     	 	cin>>CouponCode;
     	 	if(CouponCode=="GRANDHOTEL20"){
     	 		Total_discount+=0.2*(amount);
     	 		cout<<"\n\n\t\t\tCONGRATULATIONS FOR GETTING 20 PERCENT discount";
     	 		cout<<"\n\nYour Total discount"<<0.2*(amount);
     	 	cout<<"\n\nYour Total bill is Rs."<<0.8*amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
     	 	}
     	 	else{
     	 		cout<<"\n\n\t\t\tINVALID CODE";
     	 		cout<<"\n\nYour Total bill is Rs."<<amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";

     	 	}
     	 	
     	 	}
     	 	else{
     	 		cout<<"\n\nYour Total bill is Rs."<<amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
     	 	}
     	 }
         else{
            cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
         }
         }
     	 break;

     	 case 4:
     	
     	cout<<"\n\n Please select the type of VegThali you want";

     	cout<<"\n\n1.NormalThali";
     	cout<<"\n\n2.SuperiorThali";
     	cout<<"\n\n3.DeluxeThali";

     	 cout<<"\n\n Please Enter your choice : ";
     	 cin>>option;

     	 switch(option)
     	 {
     	 	case 1:
     	 	cout<<"\n\n Enter the number of NormalThali you want : ";
     	 	cin>>quantity;
     	 	if(QvegThali.NormalThali-SvegThali.NormalThali>=quantity){
     	 		SvegThali.NormalThali+= quantity;
     	 		Total_VegThali+=quantity*100;
     	 		amount+=quantity*100;
     	 		cout<<"\n\n\t\t"<<quantity<<" NormalThali is the order!";
     	 	}
     	 	else{
     	 		cout<<"\n\tOnly"<<QvegThali.NormalThali-SvegThali.NormalThali<<"NormalThali remaining in the hotel";
     	 	}
     	 	break;

     	 	case 2:
     	 	cout<<"\n\n Enter the number of SuperiorThali you want : ";
     	 	cin>>quantity;
     	 	if(QvegThali.SuperiorThali-SvegThali.SuperiorThali>=quantity){
     	 		SvegThali.SuperiorThali+= quantity;
     	 		Total_VegThali+=quantity*140;
     	 		amount+=quantity*140;
     	 		cout<<"\n\n\t\t"<<quantity<<" SuperiorThali is the order!";
     	 	}
     	 	else{
     	 		cout<<"\n\tOnly"<<QvegThali.SuperiorThali-SvegThali.SuperiorThali<<" SuperiorThali remaining in the hotel";
     	 	}
     	 	break;

     	 	case 3:
     	 	cout<<"\n\n Enter the number of DeluxeThali you want : ";
     	 	cin>>quantity;
     	 	if(QvegThali.DeluxeThali-SvegThali.DeluxeThali>=quantity){
     	 		SvegThali.DeluxeThali+= quantity;
     	 		Total_VegThali+=quantity*180;
     	 		amount+=quantity*180;
     	 		cout<<"\n\n\t\t"<<quantity<<" DeluxeThali is the order!";
     	 	}
     	 	else{
     	 		cout<<"\n\tOnly"<<QvegThali.DeluxeThali-SvegThali.DeluxeThali<<" DeluxeThali remaining in the hotel";
     	 	}
     	 	break;
     	 }
     	 cout<<"\n\nDo you want anything else Sir?(Y/N) : ";
     	 cin>>YesNo;
     	 if(YesNo=='Y' || YesNo=='y'){
     	 	goto m;
     	 }
     	 else if(YesNo=='N' || YesNo=='n'){
            if(amount!=0){
     	 	cout<<"\n\nDo you have any coupon Code for getting 20% disxount?(Y/N) : ";
     	 	cin>>YesNoCoupon;
     	 	if(YesNoCoupon=='Y' || YesNoCoupon=='y'){
     	 	cout<<"\nEnter the code : ";
     	 	cin>>CouponCode;
     	 	if(CouponCode=="GRANDHOTEL20"){
     	 		Total_discount+=0.2*(amount);
     	 		cout<<"\n\n\t\t\tCONGRATULATIONS FOR GETTING 20 PERCENT discount";
     	 		cout<<"\n\nYour Total discount"<<0.2*(amount);
     	 	cout<<"\n\nYour Total bill is Rs."<<0.8*amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
     	 	}
     	 	else{
     	 		cout<<"\n\n\t\t\tINVALID CODE";
     	 		cout<<"\n\nYour Total bill is Rs."<<amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";

     	 	}
     	 	
     	 	}
     	 	else{
     	 		cout<<"\n\nYour Total bill is Rs."<<amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
     	 	}
     	 }
         else{
            cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
         }
         }
     	 break;

     	  case 5:
     	cout<<"\n\n Please select the type of NonvegThali you want : ";

     	cout<<"\n\n1.NormalThali";
     	cout<<"\n\n2.SuperiorThali";
     	cout<<"\n\n3.DeluxeThali";

     	 cout<<"\n\n Please Enter your choice : ";
     	 cin>>option;

     	 switch(option)
     	 {
     	 	case 1:
     	 	cout<<"\n\n Enter the number of NormalThali you want : ";
     	 	cin>>quantity;
     	 	if(QNonvegThali.NormalThali-SNonvegThali.NormalThali>=quantity){
     	 		SNonvegThali.NormalThali+= quantity;
     	 		Total_NonvegThali+=quantity*200;
     	 		amount+=quantity*200;
     	 		cout<<"\n\n\t\t"<<quantity<<" NormalThali is the order!";
     	 	}
     	 	else{
     	 		cout<<"\n\tOnly"<<QNonvegThali.NormalThali-SNonvegThali.NormalThali<<"NormalThali remaining in the hotel";
     	 	}
     	 	break;

     	 	case 2:
     	 	cout<<"\n\n Enter the number of SuperiorThali you want : ";
     	 	cin>>quantity;
     	 	if(QNonvegThali.SuperiorThali-SNonvegThali.SuperiorThali>=quantity){
     	 		SNonvegThali.SuperiorThali+= quantity;
     	 		Total_NonvegThali+=quantity*260;
     	 		amount+=quantity*260;
     	 		cout<<"\n\n\t\t"<<quantity<<" SuperiorThali is the order!";
     	 	}
     	 	else{
     	 		cout<<"\n\tOnly"<<QNonvegThali.SuperiorThali-SNonvegThali.SuperiorThali<<" SuperiorThali remaining in the hotel";
     	 	}
     	 	break;

     	 	case 3:
     	 	cout<<"\n\n Enter the number of DeluxeThali you want : ";
     	 	cin>>quantity;
     	 	if(QNonvegThali.DeluxeThali-SNonvegThali.DeluxeThali>=quantity){
     	 		SNonvegThali.DeluxeThali+= quantity;
     	 		Total_NonvegThali+=quantity*320;
     	 		amount+=quantity*320;
     	 		cout<<"\n\n\t\t"<<quantity<<" DeluxeThali is the order!";
     	 	}
     	 	else{
     	 		cout<<"\n\tOnly"<<QNonvegThali.DeluxeThali-SNonvegThali.DeluxeThali<<" DeluxeThali remaining in the hotel";
     	 	}
     	 	break;
     	 }
     	
     	  cout<<"\n\nDo you want anything else Sir?(Y/N) : ";
     	 cin>>YesNo;
     	 if(YesNo=='Y' || YesNo=='y'){
     	 	goto m;
     	 }
     	 else if(YesNo=='N' || YesNo=='n'){
            if(amount!=0){
     	 	cout<<"\n\nDo you have any coupon Code for getting 20% disxount?(Y/N) : ";
     	 	cin>>YesNoCoupon;
     	 	if(YesNoCoupon=='Y' || YesNoCoupon=='y'){
     	 	cout<<"\nEnter the code : ";
     	 	cin>>CouponCode;
     	 	if(CouponCode=="GRANDHOTEL20"){
     	 		Total_discount+=0.2*(amount);
     	 		cout<<"\n\n\t\t\tCONGRATULATIONS FOR GETTING 20 PERCENT discount";
     	 		cout<<"\n\nYour Total discount"<<0.2*(amount);
     	 	cout<<"\n\nYour Total bill is Rs."<<0.8*amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
     	 	}
     	 	else{
     	 		cout<<"\n\n\t\t\tINVALID CODE";
     	 		cout<<"\n\nYour Total bill is Rs."<<amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";

     	 	}
     	 	
     	 	}
     	 	else{
     	 		cout<<"\n\nYour Total bill is Rs."<<amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
     	 	}
     	 }
         else{
            cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
         }
         }
     	 break;

     	  case 6:
     
     	cout<<"\n\n Please select the type of Burgers you want : ";

     	cout<<"\n\n1.VegBurger";
     	cout<<"\n\n2.NonVegBurger";

     	 cout<<"\n\n Please Enter your choice : ";
     	 cin>>option;

     	 switch(option)
     	 {
     	 	case 1:
     	 	cout<<"\n\n Enter the number of VegBurger you want : ";
     	 	cin>>quantity;
     	 	if(QBurger.vegBurger-SBurger.vegBurger>=quantity){
     	 		SBurger.vegBurger+= quantity;
     	 		Total_burger+=quantity*80;
     	 		amount+=quantity*80;
     	 		cout<<"\n\n\t\t"<<quantity<<" VegBurger is the order!";
     	 	}
     	 	else{
     	 		cout<<"\n\tOnly"<<QBurger.vegBurger-SBurger.vegBurger<<" VegBurger remaining in the hotel";
     	 	}
     	 	break;

     	 	case 2:
     	 	cout<<"\n\n Enter the number of NonVegBurger you want : ";
     	 	cin>>quantity;
     	 	if(QBurger.nonVegBurger-SBurger.nonVegBurger>=quantity){
     	 		SBurger.nonVegBurger+= quantity;
     	 		Total_burger+=quantity*120;
     	 		amount+=quantity*120;
     	 		cout<<"\n\n\t\t"<<quantity<<" NonVegBurger is the order!";
     	 	}
     	 	else{
     	 		cout<<"\n\tOnly"<<QBurger.nonVegBurger-SBurger.nonVegBurger<<" NonVegBurger remaining in the hotel";
     	 	}
     	 	break;
     	 }

     	
     	  cout<<"\n\nDo you want anything else Sir?(Y/N) : ";
     	 cin>>YesNo;
     	 if(YesNo=='Y' || YesNo=='y'){
     	 	goto m;
     	 }
     	 else if(YesNo=='N' || YesNo=='n'){
            if(amount!=0){
     	 	cout<<"\n\nDo you have any coupon Code for getting 20% disxount?(Y/N) : ";
     	 	cin>>YesNoCoupon;
     	 	if(YesNoCoupon=='Y' || YesNoCoupon=='y'){
     	 	cout<<"\nEnter the code : ";
     	 	cin>>CouponCode;
     	 	if(CouponCode=="GRANDHOTEL20"){
     	 		Total_discount+=0.2*(amount);
     	 		cout<<"\n\n\t\t\tCONGRATULATIONS FOR GETTING 20 PERCENT discount";
     	 		cout<<"\n\nYour Total discount"<<0.2*(amount);
     	 	cout<<"\n\nYour Total bill is Rs."<<0.8*amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
     	 	}
     	 	else{
     	 		cout<<"\n\n\t\t\tINVALID CODE";
     	 		cout<<"\n\nYour Total bill is Rs."<<amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";

     	 	}
     	 	
     	 	}
     	 	else{
     	 		cout<<"\n\nYour Total bill is Rs."<<amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
     	 	}
     	 }
         else{
            cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
         }
         }
     	 break;
     	 case 7:

     	cout<<"\n\n Please select the type of Noodles you want : ";

     	cout<<"\n\n1.VegNoodles";
     	cout<<"\n\n2.HakkaNoodles";
     	cout<<"\n\n3.NonVegNoodles";

     	 cout<<"\n\n Please Enter your choice : ";
     	 cin>>option;

     	 switch(option)
     	 {
     	 	case 1:
     	 	cout<<"\n\n Enter the number of VegNoodles you want : ";
     	 	cin>>quantity;
     	 	if(QNoodles.VegNoodles-SNoodles.VegNoodles>=quantity){
     	 		SNoodles.VegNoodles+= quantity;
     	 		Total_noodles+=quantity*110;
     	 		amount+=quantity*110;
     	 		cout<<"\n\n\t\t"<<quantity<<" VegNoodles is the order!";
     	 	}
     	 	else{
     	 		cout<<"\n\tOnly"<<QNoodles.VegNoodles-SNoodles.VegNoodles<<" VegNoodles remaining in the hotel";
     	 	}
     	 	break;

     	 	case 2:
     	 	cout<<"\n\n Enter the number of HakkaNoodles you want : ";
     	 	cin>>quantity;
     	 	if(QNoodles.HakkaNoodles-SNoodles.HakkaNoodles>=quantity){
     	 		SNoodles.HakkaNoodles+= quantity;
     	 		Total_noodles+=quantity*160;
     	 		amount+=quantity*160;
     	 		cout<<"\n\n\t\t"<<quantity<<" HakkaNoodles is the order!";
     	 	}
     	 	else{
     	 		cout<<"\n\tOnly"<<QNoodles.HakkaNoodles-SNoodles.HakkaNoodles<<" HakkaNoodles remaining in the hotel";
     	 	}
     	 	break;

     	 	case 3:
     	 	cout<<"\n\n Enter the number of NonVegNoodles you want : ";
     	 	cin>>quantity;
     	 	if(QNoodles.NonVegNoodles-SNoodles.NonVegNoodles>=quantity){
     	 		SNoodles.NonVegNoodles+= quantity;
     	 		Total_noodles+=quantity*210;
     	 		amount+=quantity*210;
     	 		cout<<"\n\n\t\t"<<quantity<<" NonVegNoodles is the order!";
     	 	}
     	 	else{
     	 		cout<<"\n\tOnly"<<QNoodles.NonVegNoodles-SNoodles.NonVegNoodles<<" NonVegNoodles remaining in the hotel";
     	 	}
     	 	break;
     	 }
  cout<<"\n\nDo you want anything else Sir?(Y/N) : ";
     	 cin>>YesNo;
     	 if(YesNo=='Y' || YesNo=='y'){
     	 	goto m;
     	 }
     	 else if(YesNo=='N' || YesNo=='n'){
            if(amount!=0){
     	 	cout<<"\n\nDo you have any coupon Code for getting 20% disxount?(Y/N) : ";
     	 	cin>>YesNoCoupon;
     	 	if(YesNoCoupon=='Y' || YesNoCoupon=='y'){
     	 	cout<<"\nEnter the code : ";
     	 	cin>>CouponCode;
     	 	if(CouponCode=="GRANDHOTEL20"){
     	 		Total_discount+=0.2*(amount);
     	 		cout<<"\n\n\t\t\tCONGRATULATIONS FOR GETTING 20 PERCENT discount";
     	 		cout<<"\n\nYour Total discount"<<0.2*(amount);
     	 	cout<<"\n\nYour Total bill is Rs."<<0.8*amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
     	 	}
     	 	else{
     	 		cout<<"\n\n\t\t\tINVALID CODE";
     	 		cout<<"\n\nYour Total bill is Rs."<<amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";

     	 	}
     	 	
     	 	}
     	 	else{
     	 		cout<<"\n\nYour Total bill is Rs."<<amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
     	 	}
     	 }
         else{
            cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
         }
         }
     	 break;
     	  case 8:

     	cout<<"\n\n Please select the type of Rolls you want : ";

     	cout<<"\n\n1.VegRoll";
     	cout<<"\n\n2.ChickenRoll";
     	cout<<"\n\n3.PaneerRoll";

     	 cout<<"\n\n Please Enter your choice : ";
     	 cin>>option;

     	 switch(option)
     	 {
     	 	case 1:
     	 	cout<<"\n\n Enter the number of VegRoll you want : ";
     	 	cin>>quantity;
     	 	if(QRolls.VegRoll-SRolls.VegRoll>=quantity){
     	 		SRolls.VegRoll+= quantity;
     	 		Total_rolls+=quantity*40;
     	 		amount+=quantity*40;
     	 		cout<<"\n\n\t\t"<<quantity<<" VegRoll is the order!";
     	 	}
     	 	else{
     	 		cout<<"\n\tOnly"<<QRolls.VegRoll-SRolls.VegRoll<<" VegRoll remaining in the hotel";
     	 	}
     	 	break;

     	 	case 2:
     	 	cout<<"\n\n Enter the number of ChickenRoll you want : ";
     	 	cin>>quantity;
     	 	if(QRolls.ChickenRoll-SRolls.ChickenRoll>=quantity){
     	 		SRolls.ChickenRoll+= quantity;
     	 		Total_rolls+=quantity*100;
     	 		amount+=quantity*100;
     	 		cout<<"\n\n\t\t"<<quantity<<" ChickenRoll is the order!";
     	 	}
     	 	else{
     	 		cout<<"\n\tOnly"<<QRolls.ChickenRoll-SRolls.ChickenRoll<<" ChickenRoll remaining in the hotel";
     	 	}
     	 	break;

     	 	case 3:
     	 	cout<<"\n\n Enter the number of PaneerRoll you want : ";
     	 	cin>>quantity;
     	 	if(QRolls.PaneerRoll-SRolls.PaneerRoll>=quantity){
     	 		SRolls.PaneerRoll+= quantity;
     	 		Total_rolls+=quantity*75;
     	 		amount+=quantity*75;
     	 		cout<<"\n\n\t\t"<<quantity<<" PaneerRoll is the order!";
     	 	}
     	 	else{
     	 		cout<<"\n\tOnly"<<QRolls.PaneerRoll-SRolls.PaneerRoll<<" PaneerRoll remaining in the hotel";
     	 	}
     	 	break;
     	 }
     	 cout<<"\n\nDo you want anything else Sir?(Y/N) : ";
     	 cin>>YesNo;
     	 if(YesNo=='Y' || YesNo=='y'){
     	 	goto m;
     	 }
     	 else if(YesNo=='N' || YesNo=='n'){
            if(amount!=0){
     	 	cout<<"\n\nDo you have any coupon Code for getting 20% disxount?(Y/N) : ";
     	 	cin>>YesNoCoupon;
     	 	if(YesNoCoupon=='Y' || YesNoCoupon=='y'){
     	 	cout<<"\nEnter the code : ";
     	 	cin>>CouponCode;
     	 	if(CouponCode=="GRANDHOTEL20"){
     	 		Total_discount+=0.2*(amount);
     	 		cout<<"\n\n\t\t\tCONGRATULATIONS FOR GETTING 20 PERCENT discount";
     	 		cout<<"\n\nYour Total discount"<<0.2*(amount);
     	 	cout<<"\n\nYour Total bill is Rs."<<0.8*amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
     	 	}
     	 	else{
     	 		cout<<"\n\n\t\t\tINVALID CODE";
     	 		cout<<"\n\nYour Total bill is Rs."<<amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";

     	 	}
     	 	
     	 	}
     	 	else{
     	 		cout<<"\n\nYour Total bill is Rs."<<amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
     	 	}
     	 }
         else{
            cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
         }
         }
     	 break;

     	   case 9:
     	int option;
     	cout<<"\n\n Please select the type of Shake you want : ";

     	cout<<"\n\n1.OreoShake";
     	cout<<"\n\n2.StrawberryShake";
     	cout<<"\n\n3.PineAppleShake";

     	 cout<<"\n\n Please Enter your choice : ";
     	 cin>>option;

     	 switch(option)
     	 {
     	 	case 1:
     	 	cout<<"\n\n Enter the number of OreoShake you want : ";
     	 	cin>>quantity;
     	 	if(QShakes.OreoShake-SShakes.OreoShake>=quantity){
     	 		SShakes.OreoShake+= quantity;
     	 		Total_shakes+=quantity*80;
     	 		amount+=quantity*80;
     	 		cout<<"\n\n\t\t"<<quantity<<" OreoShake is the order!";
     	 	}
     	 	else{
     	 		cout<<"\n\tOnly"<<QShakes.OreoShake-SShakes.OreoShake<<" OreoShake remaining in the hotel";
     	 	}
     	 	break;

     	 	case 2:
     	 	cout<<"\n\n Enter the number of StrawberryShake you want : ";
     	 	cin>>quantity;
     	 	if(QShakes.StrawberryShake-SShakes.StrawberryShake>=quantity){
     	 		SShakes.StrawberryShake+= quantity;
     	 		Total_shakes+=quantity*120;
     	 		amount+=quantity*120;
     	 		cout<<"\n\n\t\t"<<quantity<<" StrawberryShake is the order!";
     	 	}
     	 	else{
     	 		cout<<"\n\tOnly"<<QShakes.StrawberryShake-SShakes.StrawberryShake<<" StrawberryShake remaining in the hotel";
     	 	}
     	 	break;

            case 3:
     	 	cout<<"\n\n Enter the number of PineAppleShake you want : ";
     	 	cin>>quantity;
     	 	if(QShakes.PineAppleShake-SShakes.PineAppleShake>=quantity){
     	 		SShakes.PineAppleShake+= quantity;
     	 		Total_shakes+=quantity*100;
     	 		amount+=quantity*100;
     	 		cout<<"\n\n\t\t"<<quantity<<" PineAppleShake is the order!";
     	 	}
     	 	else{
     	 		cout<<"\n\tOnly"<<QShakes.PineAppleShake-SShakes.PineAppleShake<<" PineAppleShake remaining in the hotel";
     	 	}
     	 	break;
     	 }
     	 cout<<"\n\nDo you want anything else Sir?(Y/N) : ";
     	 cin>>YesNo;
     	 if(YesNo=='Y' || YesNo=='y'){
     	 	goto m;
     	 }
     	 else if(YesNo=='N' || YesNo=='n'){
            if(amount!=0){
     	 	cout<<"\n\nDo you have any coupon Code for getting 20% disxount?(Y/N) : ";
     	 	cin>>YesNoCoupon;
     	 	if(YesNoCoupon=='Y' || YesNoCoupon=='y'){
     	 	cout<<"\nEnter the code : ";
     	 	cin>>CouponCode;
     	 	if(CouponCode=="GRANDHOTEL20"){
     	 		Total_discount+=0.2*(amount);
     	 		cout<<"\n\n\t\t\tCONGRATULATIONS FOR GETTING 20 PERCENT discount";
     	 		cout<<"\n\nYour Total discount"<<0.2*(amount);
     	 	cout<<"\n\nYour Total bill is Rs."<<0.8*amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
     	 	}
     	 	else{
     	 		cout<<"\n\n\t\t\tINVALID CODE";
     	 		cout<<"\n\nYour Total bill is Rs."<<amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";

     	 	}
     	 	
     	 	}
     	 	else{
     	 		cout<<"\n\nYour Total bill is Rs."<<amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
     	 	}
     	 }
         else{
            cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
         }
         }
     	 break;


     	 case 10:
     	 a:
     	 cout<<"\n\nPlease Enter your Email-id and Password to know about sales and collection : ";
     	 cout<<"\nEnter your Email-id: ";
     	 getline(cin,email_id);
     	 cout<<"\nEnter your password: ";
     	  getline(cin,password);
     	  if(email_id=="hotelgrand01@gmail.com" && password=="GRANDHOTEL987"){
     	  	cout<<"\n\n\t\tDetails of sales and collection";
     	  	cout<<"\n\nNumber of NormalRooms we had : "<<Qrooms.NormalRooms;
     	  	cout<<"\n\nNumber of SuperiorRooms we had : "<<Qrooms.SuperiorRooms;
     	  	cout<<"\n\nNumber of DeluxeRooms we had : "<<Qrooms.DeluxeRooms;
     	  	cout<<"\n\nNumber of NormalRooms we gave for rent : "<<Srooms.NormalRooms;
     	  	cout<<"\n\nNumber of SuperiorRooms we gave for rent : "<<Srooms.SuperiorRooms;
     	  	cout<<"\n\nNumber of DeluxeRooms we gave for rent : "<<Srooms.DeluxeRooms;
     	  	cout<<"\n\nRemaining NormalRooms : "<<Qrooms.NormalRooms-Srooms.NormalRooms;
     	  	cout<<"\n\nRemaining SuperiorRooms : "<<Qrooms.SuperiorRooms-Srooms.SuperiorRooms;
     	  	cout<<"\n\nRemaining DeluxeRooms : "<<Qrooms.DeluxeRooms-Srooms.DeluxeRooms;
     	  	cout<<"\n\nTotal room collection for the day: "<<Total_rooms;


     	  	cout<<"\n\nNumber of redSaucePasta we had : "<<Qpasta.redSaucePasta;
     	  	cout<<"\n\nNumber of whiteSaucePasta we had : "<<Qpasta.whiteSaucePasta;
     	  	cout<<"\n\nNumber of pinkSaucePasta we had : "<<Qpasta.pinkSaucePasta;
     	  	cout<<"\n\nNumber of redSaucePasta we sold : "<<Spasta.redSaucePasta;
     	  	cout<<"\n\nNumber of whiteSaucePasta we sold : "<<Spasta.whiteSaucePasta;
     	  	cout<<"\n\nNumber of pinkSaucePasta we sold : "<<Spasta.pinkSaucePasta;
     	  	cout<<"\n\nRemaining redSaucePasta : "<<Qpasta.redSaucePasta-Spasta.redSaucePasta;
     	  	cout<<"\n\nRemaining whiteSaucePasta : "<<Qpasta.whiteSaucePasta-Spasta.whiteSaucePasta;
     	  	cout<<"\n\nRemaining pinkSaucePasta : "<<Qpasta.pinkSaucePasta-Spasta.pinkSaucePasta;
     	  	cout<<"\n\nTotal pasta collection for the day: "<<Total_pasta;


     	  	cout<<"\n\nNumber of RegularPizzas we had : "<<Qpizza.RegularPizzas;
     	  	cout<<"\n\nNumber of MediumPizzas we had : "<<Qpizza.MediumPizzas;
     	  	cout<<"\n\nNumber of LargePizza we had : "<<Qpizza.LargePizza;
     	  	cout<<"\n\nNumber of RegularPizzas we sold : "<<Spizza.RegularPizzas;
     	  	cout<<"\n\nNumber of MediumPizzas we sold : "<<Spizza.MediumPizzas;
     	  	cout<<"\n\nNumber of LargePizza we sold : "<<Spizza.LargePizza;
     	  	cout<<"\n\nRemaining RegularPizzas : "<<Qpizza.RegularPizzas-Spizza.RegularPizzas;
     	  	cout<<"\n\nRemaining MediumPizzas : "<<Qpizza.MediumPizzas-Spizza.MediumPizzas;
     	  	cout<<"\n\nRemaining LargePizza : "<<Qpizza.LargePizza-Spizza.LargePizza;
     	  	cout<<"\n\nTotal pizza collection for the day: "<<Total_pizza;


     	  	cout<<"\n\nNumber of NormalVegThali we had : "<<QvegThali.NormalThali;
     	  	cout<<"\n\nNumber of SuperiorVegThali we had : "<<QvegThali.SuperiorThali;
     	  	cout<<"\n\nNumber of DeluxeVegThali we had : "<<QvegThali.DeluxeThali;
     	  	cout<<"\n\nNumber of NormalVegThali we sold : "<<SvegThali.NormalThali;
     	  	cout<<"\n\nNumber of SuperiorVegThali we sold : "<<SvegThali.SuperiorThali;
     	  	cout<<"\n\nNumber of DeluxeVegThali we sold : "<<SvegThali.DeluxeThali;
     	  	cout<<"\n\nRemaining NormalVegThali : "<<QvegThali.NormalThali-SvegThali.NormalThali;
     	  	cout<<"\n\nRemaining SuperiorVegThali : "<<QvegThali.SuperiorThali-SvegThali.SuperiorThali;
     	  	cout<<"\n\nRemaining DeluxeVegThali : "<<QvegThali.DeluxeThali-SvegThali.DeluxeThali;
     	  	cout<<"\n\nTotal VegThali collection for the day: "<<Total_VegThali;


     	  	cout<<"\n\nNumber of NormalNonVegThali we had : "<<QNonvegThali.NormalThali;
     	  	cout<<"\n\nNumber of SuperiorNonVegThali we had : "<<QNonvegThali.SuperiorThali;
     	  	cout<<"\n\nNumber of DeluxeNonVegThali we had : "<<QNonvegThali.DeluxeThali;
     	  	cout<<"\n\nNumber of NormalNonVegThali we sold : "<<SNonvegThali.NormalThali;
     	  	cout<<"\n\nNumber of SuperiorNonVegThali we sold : "<<SNonvegThali.SuperiorThali;
     	  	cout<<"\n\nNumber of DeluxeNonVegThali we sold : "<<SNonvegThali.DeluxeThali;
     	  	cout<<"\n\nRemaining NormalNonVegThali : "<<QNonvegThali.NormalThali-SNonvegThali.NormalThali;
     	  	cout<<"\n\nRemaining SuperiorNonVegThali : "<<QNonvegThali.SuperiorThali-SNonvegThali.SuperiorThali;
     	  	cout<<"\n\nRemaining DeluxeNonVegThali : "<<QNonvegThali.DeluxeThali-SNonvegThali.DeluxeThali;
     	  	cout<<"\n\nTotal NonVegThali collection for the day: "<<Total_NonvegThali;


     	  	cout<<"\n\nNumber of VegBurger we had : "<<QBurger.vegBurger;
     	  	cout<<"\n\nNumber of NonVegBurger we had : "<<QBurger.nonVegBurger;
     	  	cout<<"\n\nNumber of VegBurger we sold : "<<SBurger.vegBurger;
     	  	cout<<"\n\nNumber of NonVegBurger we sold : "<<SBurger.nonVegBurger;
     	  	cout<<"\n\nRemaining VegBurger : "<<QBurger.vegBurger-SBurger.vegBurger;
     	  	cout<<"\n\nRemaining NonVegBurger : "<<QBurger.nonVegBurger-SBurger.nonVegBurger;
     	  	cout<<"\n\nTotal Burger collection for the day: "<<Total_burger;


     	  	cout<<"\n\nNumber of VegNoodles we had : "<<QNoodles.VegNoodles;
     	  	cout<<"\n\nNumber of HakkaNoodles we had : "<<QNoodles.HakkaNoodles;
     	  	cout<<"\n\nNumber of NonVegNoodles we had : "<<QNoodles.NonVegNoodles;
     	  	cout<<"\n\nNumber of VegNoodles we sold : "<<SNoodles.VegNoodles;
     	  	cout<<"\n\nNumber of HakkaNoodles we sold : "<<SNoodles.HakkaNoodles;
     	  	cout<<"\n\nNumber of NonVegNoodles we sold : "<<SNoodles.NonVegNoodles;
     	  	cout<<"\n\nRemaining VegNoodles : "<<QNoodles.VegNoodles-SNoodles.VegNoodles;
     	  	cout<<"\n\nRemaining HakkaNoodles : "<<QNoodles.HakkaNoodles-SNoodles.HakkaNoodles;
     	  	cout<<"\n\nRemaining NonVegNoodles : "<<QNoodles.NonVegNoodles-SNoodles.NonVegNoodles;
     	  	cout<<"\n\nTotal Noodles collection for the day: "<<Total_noodles;


     	  	cout<<"\n\nNumber of VegRoll we had : "<<QRolls.VegRoll;
     	  	cout<<"\n\nNumber of ChickenRoll we had : "<<QRolls.ChickenRoll;
     	  	cout<<"\n\nNumber of PaneerRoll we had : "<<QRolls.PaneerRoll;
     	  	cout<<"\n\nNumber of VegRoll we sold : "<<SRolls.VegRoll;
     	  	cout<<"\n\nNumber of ChickenRoll we sold : "<<SRolls.ChickenRoll;
     	  	cout<<"\n\nNumber of PaneerRoll we sold : "<<SRolls.PaneerRoll;
     	  	cout<<"\n\nRemaining VegRoll : "<<QRolls.VegRoll-SRolls.VegRoll;
     	  	cout<<"\n\nRemaining ChickenRoll : "<<QRolls.ChickenRoll-SRolls.ChickenRoll;
     	  	cout<<"\n\nRemaining PaneerRoll : "<<QRolls.PaneerRoll-SRolls.PaneerRoll;
     	  	cout<<"\n\nTotal Rolls collection for the day: "<<Total_rolls;


     	  	cout<<"\n\nNumber of OreoShake we had : "<<QShakes.OreoShake;
     	  	cout<<"\n\nNumber of StrawberryShake we had : "<<QShakes.StrawberryShake;
     	  	cout<<"\n\nNumber of PineAppleShake we had : "<<QShakes.PineAppleShake;
     	  	cout<<"\n\nNumber of OreoShake we sold : "<<SShakes.OreoShake;
     	  	cout<<"\n\nNumber of StrawberryShake we sold : "<<SShakes.StrawberryShake;
     	  	cout<<"\n\nNumber of PineAppleShake we sold : "<<SShakes.PineAppleShake;
     	  	cout<<"\n\nRemaining OreoShake : "<<QShakes.OreoShake-SShakes.OreoShake;
     	  	cout<<"\n\nRemaining StrawberryShake : "<<QShakes.StrawberryShake-SShakes.StrawberryShake;
     	  	cout<<"\n\nRemaining PineAppleShake : "<<QShakes.PineAppleShake-SShakes.PineAppleShake;
     	  	cout<<"\n\nTotal Shakes collection for the day: "<<Total_shakes;
          	  }
     	  else{
     	  	cout<<"\n\n\t\t INVALID CREDINTALS!";
     	  	cout<<"\nPlease enter correct Email-id and Password";
     	  	goto a;
     	  }
     	  break;


      case 11:
     	  if(amount!=0){
     	 	cout<<"\n\nDo you have any coupon Code for getting 20% disxount?(Y/N) : ";
     	 	cin>>YesNoCoupon;
     	 	if(YesNoCoupon=='Y' || YesNoCoupon=='y'){
     	 	cout<<"\nEnter the code : ";
     	 	cin>>CouponCode;
     	 	if(CouponCode=="GRANDHOTEL20"){
     	 		Total_discount+=0.2*(amount);
     	 		cout<<"\n\n\t\t\tCONGRATULATIONS FOR GETTING 20 PERCENT discount";
     	 		cout<<"\n\nYour Total discount"<<0.2*(amount);
     	 	cout<<"\n\nYour Total bill is Rs."<<0.8*amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
     	 	}
     	 	else{
     	 		cout<<"\n\n\t\t\tINVALID CODE";
     	 		cout<<"\n\nYour Total bill is Rs."<<amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";

     	 	}
     	 	
     	 	} 
     	 	else{
     	 		cout<<"\n\nYour Total bill is Rs."<<amount;
     	 	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
     	 	}
     	 }
     	  else{
     	  	cout<<"\n\t\t\t\t Thanks for visiting THE HOTEL GRAND";
     	 	cout<<"\n\t\t\t\t Have a great day ahead";
     	  }
     	  break;

     	  default:
     	  cout<<"\nPlease select the number mentioned above";
     	  goto m;
     	  break;

     }
     goto b;
     return 0;
}