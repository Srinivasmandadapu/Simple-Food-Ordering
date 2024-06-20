#include<iostream>
#include<stdlib.h>
using namespace std;
int p_price1=0,p_price2=0,p_price3=0,p_price4=0,b_price1=0,b_price2=0,b_price3=0,b_price4=0,price=0,itemchoice,items, quantity;
int s_price1=0,s_price2=0,s_price3=0,s_price4=0,j_price1=0,j_price2=0,j_price3=0,j_price4=0,o_price1=0,o_price2=0,o_price3=0,o_price4=0;
class pizza
{
	public:
		string pizza1 ="Chicken Fazita" ,pizza2="Chicken BBQ" ,pizza3="Peri Peri" ,pizza4="Creamy Max";
		void get_piz()
		{
			pizza:
			cout<<"\n1) "<<pizza1<<"\n";
			cout<<"2) "<<pizza2<<"\n";
			cout<<"3) "<<pizza3<<"\n";
			cout<<"4) "<<pizza4<<"\n";
			cout<<"\nPlease Enter which Flavour would you like to have?:";
			cin>>itemchoice;
			if(itemchoice>=1 && itemchoice<=4)
			{
				m:
				cout<<"\n1) Small ==== Rs.250\n"<<"2) Regular ==== Rs.500\n"<<"3) Large ==== Rs.700\n";
				cout<<"\nPlease choose the SIZE of your PIZZA : ";
				cin>>items;
				if(items>=1 && items<=3)
				{
					cout<<"\nEnter the Quantity you want to order: ";
					cin>>quantity;
				}
				else
				{
					cout<<"\n\nPlease choose a valid option!!!";
					goto m;	
				}
				switch(items)
				{
					case 1: price = 250*quantity;
					break;

					case 2: price = 500*quantity;
					break;
				
					case 3: price = 700*quantity;
					break;
				}
				system("CLS");
				switch(items)
				{
			 		case 1:
			 			cout<<"\n\n\t\t\t	--------Your Order---------\n";
			 			cout<<"\t\t\t"<<quantity<<" "<<pizza1;
			 			cout<<"\n\t\t\tYour Bill for pizza is Rs."<<price<<"\n\t\t\tYour Order Will be delivered in 25 Minutes";
			 			cout<<"\n\t\t\tThank you For Ordering From M C S S Fast Food\n\n\t\t\tVISIT AGAIN";
			 			break;
			 		case 2:
			 			cout<<"\n\n\t\t		--------Your Order---------\n";
			 			cout<<"\t\t\t"<<quantity<<"  "<<pizza2;
			 			cout<<"\n\t\t\tYour Bill for pizza is Rs."<<price<<"\n\t\t\tYour Order Will be delivered in 25 Minutes";
			 			cout<<"\n\t\t\tThank you For Ordering From M C S S Fast Food\n";
			 			break;
			 		case 3:
			 			cout<<"\n\n\t\t		--------Your Order---------\n";
			 			cout<<"\t\t\t"<<quantity<<" "<<pizza3;
			 			cout<<"\n\t\t\tYour Bill for pizza is Rs."<<price<<"\n\t\t\tYour Order Will be delivered in 25 Minutes";
			 			cout<<"\n\t\t\tThank you For Ordering From M C S S Fast Food\n\n\t\t\tVISIT AGAIN";
			 			break;
			 		case 4:
			 			cout<<"\n\n\t\t		--------Your Order---------\n";
			 			cout<<"\t\t\t"<<quantity<<" "<<pizza4;
			 			cout<<"\n\t\t\tYour Bill for pizza  is Rs."<<price<<"\n\t\t\tYour Order Will be delivered in 25 Minutes";
			 			cout<<"\n\t\t\tThank you For Ordering From M C S S Fast Food\n\n\t\t\tVISIT AGAIN";
				 		break;
				}
			}
			else
			{
				cout<<"Please select a Vailid Option!!!\n\n";
				goto pizza;	
			}
		}
};
class burger: public pizza 
{
	public:
		string bur1="Zinger Burger",bur2="Chicken Burger",bur3="Beef Burger",bur4="Extra Cheese Veg Burger";
		void get_burgers()
		{
			burger:
			cout<<"\n1) "<<bur1<<" ==== Rs.180"<<"\n";
			cout<<"2) "<<bur2<<" ==== Rs.150"<<"\n";
			cout<<"3) "<<bur3<<" ==== Rs.160"<<"\n";
			cout<<"4) "<<bur4<<" ==== Rs.180"<<"\n";
			cout<<"\nPlease Enter which Burger you would like to have?: ";
			cin>>items;
			if(items<=4)
			{
				cout<<"\nPlease Enter Quantity: ";
				cin>>quantity;
				switch(items)
				{
					case 1: b_price1 = 180*quantity;
					break;

					case 2: b_price2 = 150*quantity;
					break;

					case 3: b_price3 = 160*quantity;
					break;
					
					case 4: b_price4 = 180*quantity;
					break;
				}
				system("CLS");
				switch(items)
				{
			 		case 1:
			 			cout<<"\n\n\t\t	--------Your Order---------\n";
			 			cout<<"\t\t\t"<<quantity<<" "<<bur1;
			 			cout<<"\n\t\t\tYour Bill for buger is Rs."<<b_price1<<"\n\t\t\tYour Order Will be delivered in 20 Minutes";
			 			cout<<"\n\t\t\tThank you For Ordering From M C S S Fast Food\n\n\t\t\tVISIT AGAIN";
			 			break;
			 		case 2:
				 		cout<<"\t\t		--------Your Order---------\n";
			 			cout<<"\t\t\t"<<quantity<<"  "<<bur2;
			 			cout<<"\n\t\t\tYour Bill for buger is Rs."<<b_price2<<"\n\t\t\tYour Order Will be delivered in 20 Minutes";
			 			cout<<"\n\t\t\tThank you For Ordering From M C S S Fast Food\n\n\t\t\tVISIT AGAIN";
			 			break;
			 		case 3:
			 			cout<<"\t\t		--------Your Order---------\n";
			 			cout<<"\t\t\t"<<quantity<<" "<<bur3;
			 			cout<<"\n\t\t\tYour Bill for buger is Rs."<<b_price3<<"\n\t\t\tYour Order Will be delivered in 20 Minutes";
			 			cout<<"\n\t\t\tThank you For Ordering From M C S S Fast Food\n\n\t\t\tVISIT AGAIN";
			 			break;
			 		case 4:
			 			cout<<"\t\t		--------Your Order---------\n";
			 			cout<<"\t\t\t"<<quantity<<" "<<bur4;
			 			cout<<"\n\t\t\tYour Bill for buger is Rs."<<b_price4<<"\n\t\t\tYour Order Will be delivered in 20 Minutes";
			 			cout<<"\n\t\t\tThank you For Ordering From M C S S Fast Food\n\n\t\t\tVISIT AGAIN";
			 			break;
				}
 			}
			else
			{
				cout<<"Please select a Vailid Option!!!\n\n";
				goto burger;	
			}	
		}	
};
class sandwich: public burger
{
	public:
		string sand1="Club Sandwich", sand2="Chicken Crispy Sandwich", sand3="Extream Veg Sandwich",sand4="Panner Sandwich";
		void get_sand()
		{
			sandwich:
			cout<<"\n1) "<<sand1<<" ==== Rs.170\n";
			cout<<"2) "<<sand2<<" ==== Rs.160\n";
			cout<<"3) "<<sand3<<" ==== Rs.150\n";
			cout<<"4) "<<sand4<<" ==== Rs.120\n";
			//cout<<"4 "<<pizza4<<"\n";
			cout<<"\nPlease Enter which Sandwich you would like to have?:";
			cin>>items;
			if(items>=1 && items<=4)
			{
				cout<<"\nPlease Enter Quantity: ";
				cin>>quantity;
				switch(items)
				{
					case 1: s_price1 = 170*quantity;
					break;

					case 2: s_price2 = 160*quantity;
					break;

					case 3: s_price3 = 150*quantity;
					break;
					
					case 4: s_price4 = 120*quantity;
					break;
				}
				system("CLS");
				switch (items)
				{
			 		case 1:
			 			cout<<"\t\t		--------Your Order---------\n";
			 			cout<<"\t\t\t"<<quantity<<" "<<sand1;
			 			cout<<"\n\t\t\tYour bill for sandwich is Rs."<<s_price1<<"\n\t\t\tYour Order Will be delivered in 15 Minutes";
			 			cout<<"\n\t\t\tThank you For Ordering From M C S S Fast Food\n\n\t\t\tVISIT AGAIN";
			 			break;
			 		case 2:
			 			cout<<"\t\t		--------Your Order---------\n";
			 			cout<<"\t\t\t"<<quantity<<"  "<<sand2;
			 			cout<<"\n\t\t\tYour bill for sandwich is Rs."<<s_price2<<"\n\t\t\tYour Order Will be delivered in 15 Minutes";
			 			cout<<"\n\t\t\tThank you For Ordering From M C S S Fast Food\n\n\t\t\tVISIT AGAIN";
			 			break;
			 		case 3:
			 			cout<<"\t\t		--------Your Order---------\n";
			 			cout<<"\t\t\t"<<quantity<<" "<<sand3;
			 			cout<<"\n\t\t\tYour bill for sandwich is Rs."<<s_price3<<"\n\t\t\tYour Order Will be delivered in 15 Minutes";
			 			cout<<"\n\t\t\tThank you For Ordering From M C S S Fast Food\n\n\t\t\tVISIT AGAIN";
			 			break;
			 		case 4:
			 			cout<<"\t\t		--------Your Order---------\n";
			 			cout<<"\t\t\t"<<quantity<<" "<<sand4;
			 			cout<<"\n\t\t\tYour bill for sandwich is Rs."<<s_price4<<"\n\t\t\tYour Order Will be delivered in 15 Minutes";
			 			cout<<"\n\t\t\tThank you For Ordering From M C S S Fast Food\n\n\t\t\tVISIT AGAIN";
			 			break;
				}
			}
			else
			{
				cout<<"Please select a Vailid Option!!!\n\n";
				goto sandwich;	
			}	
		}	
};

class juices: public sandwich
{
	public:
		string juice1 ="Apple Juice", juice2="WaterMelon Juice", juice3="MuskMelon Juice",juice4 = "Grape Juice";
		void get_juice()
		{
			juices:
			cout<<"\n1) "<<juice1<<" ==== Rs.90\n";
			cout<<"2) "<<juice2<<" ==== Rs.80\n";
			cout<<"3) "<<juice3<<" ==== Rs.110\n";
			cout<<"4) "<<juice4<<" ==== Rs.100\n";
			cout<<"\nPlease Enter which you would like to drink?: ";
			cin>>items;
				if(items>=1 && items<=4)
				{
					cout<<"\nEnter the quantity of juices that you want : ";
					cin>>quantity;
					switch(items)
					{
						case 1: j_price1 = 90*quantity;
						break;

						case 2: j_price2 = 80*quantity;
						break;

						case 3: j_price3 = 110*quantity;
						break;
						
						case 4: j_price4 = 100*quantity;
						break;
					}
					system("CLS");
					switch(items)
					{
			 			case 1:
			 				cout<<"\t\t		--------Your Order---------\n";
			 				cout<<"\t\t\t"<<quantity<<" "<<juice1;
			 				cout<<"\n\t\t\tYour Bill for juices is Rs."<<j_price1<<"\n\t\t\tYour Order Will be delivered in 10 Minutes";
			 				cout<<"\n\t\t\tThank you For Ordering From M C S S Fast Food\n\n\t\t\tVISIT AGAIN";
			 				break;
			 			case 2:
				 			cout<<"\t\t		--------Your Order---------\n";
			 				cout<<"\t\t\t"<<quantity<<"  "<<juice2;
			 				cout<<"\n\t\t\tYour Bill for juices is Rs."<<j_price2<<"\n\t\t\tYour Order Will be delivered in 10 Minutes";
			 				cout<<"\n\t\t\tThank you For Ordering From M C S S Fast Food\n\n\t\t\tVISIT AGAIN";
			 				break;
			 			case 3:
			 				cout<<"\t\t		--------Your Order---------\n";
			 				cout<<"\t\t\t"<<quantity<<" "<<juice3;
			 				cout<<"\n\t\t\tYour Bill for juices is Rs."<<j_price3<<"\n\t\t\tYour Order Will be delivered in 10 Minutes";
			 				cout<<"\n\t\t\tThank you For Ordering From M C S S Fast Food\n\n\t\t\tVISIT AGAIN";
			 				break;
			 			case 4:
			 				cout<<"\t\t		--------Your Order---------\n";
			 				cout<<"\t\t\t"<<quantity<<" "<<juice4;
			 				cout<<"\n\t\t\tYour Bill for juices is Rs."<<j_price1<<"\n\t\t\tYour Order Will be delivered in 10 Minutes";
			 				cout<<"\n\t\t\tThank you For Ordering From M C S S Fast Food\n\n\t\t\tVISIT AGAIN";
			 				break;	
					}
 				}
 				else
 				{
 					cout<<"Please select a Vailid Option!!!\n\n";
					goto juices;		
				}
		}
};

class Biryani: public juices
{
	public:
		string name,bir1="Chicken Dum Biryani", bir2="Mutton Dum Biryani", bir3="Veg Biryani",bir4 ="Panner Biriyani";
		void get_biryani()
		{
			biriyani:
			cout<<"\n1) "<<bir1<<" ==== Rs.280\n";
			cout<<"2) "<<bir2<<" ==== Rs.300\n";
			cout<<"3) "<<bir3<<" ==== Rs.220\n";
			cout<<"4) "<<bir4<<" ==== Rs.240\n";
			cout<<"\nPlease Enter which Biryani you would like to have?:";
			cin>>items;
			if(items>=1 && items<=4)
			{
				cout<<"\nPlease Enter Quantity: ";
				cin>>quantity;
				switch(items)
				{
					case 1: o_price1 = 280*quantity;
					break;

					case 2: o_price2 = 300*quantity;
					break;

					case 3: o_price3 = 220*quantity;
					break;
					
					case 4: o_price4 = 240*quantity;
					break;
				}
				system("CLS");
				switch(items)
				{
			 		case 1:
			 			cout<<"\t\t		--------Your Order---------\n";
			 			cout<<"\t\t\t"<<quantity<<" "<<bir1;
			 			cout<<"\n\t\t\tYour Bill for biyani is Rs."<<o_price1<<"\n\t\t\tYour Order Will be delivered in 30 Minutes";
			 			cout<<"\n\t\t\tThank you For Ordering From M C S S Fast Food\n\n\t\t\tVISIT AGAIN";
			 			break;
			 		case 2:
			 			cout<<"\t\t		--------Your Order---------\n";
			 			cout<<"\t\t\t"<<quantity<<"  "<<bir2;
			 			cout<<"\n\t\t\tYour Bill for biyani is Rs."<<o_price2<<"\n\t\t\tYour Order Will be delivered in 30 Minutes";
			 			cout<<"\n\t\t\tThank you For Ordering From M C S S Fast Food\n\n\t\t\tVISIT AGAIN";
			 			break;
			 		case 3:
			 			cout<<"\t\t		--------Your Order---------\n";
			 			cout<<"\t\t\t"<<quantity<<" "<<bir3;
			 			cout<<"\n\t\t\tYour Bill for biyani is Rs."<<o_price3<<"\n\t\t\tYour Order Will be delivered in 30 Minutes";
			 			cout<<"\n\t\t\tThank you For Ordering From M C S S Fast Food\n\n\t\t\tVISIT AGAIN";
			 			break;
			 		case 4:
			 			cout<<"\t\		--------Your Order---------\n";
			 			cout<<"\t\t\t"<<quantity<<" "<<bir4;
			 			cout<<"\n\t\t\tYour Bill for biyani is Rs."<<o_price4<<"\n\t\t\tYour Order Will be delivered in 30 Minutes";
			 			cout<<"\n\t\t\tThank you For Ordering From M C S S Fast Food\n\n\t\t\tVISIT AGAIN";
			 			break;
				}
			}
			else
			{
				cout<<"Please select a Vailid Option!!!\n\n";
				goto biriyani;
			}
		}
};
class bill: public pizza, public burger, public sandwich, public juices, public Biryani
{
	float total;
	public:
		void total_bill()
		{
			total=price+b_price1+b_price2+b_price3+b_price4+s_price1+s_price2+s_price3+s_price4+j_price1+j_price2+j_price3+j_price4+o_price1+o_price2+o_price3+o_price4;
		}
		void displayx()
		{
			cout<<"Your total bill for selected items is:"<<total;
		}
};

int main()
{
	Biryani B;
	bill x;
	string name;
	char ch;
	int c;
	start:
	system("CLS");
	system("Color 3");
	cout<<"\n\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n";
    cout<<"\t\t\t\t\xdb                                               \xdb\n";
    cout<<"\t\t\t\t\xdb       =============================           \xdb\n";
    cout<<"\t\t\t\t\xdb             M C S S FAST FOOD 		\xdb\n";
    cout<<"\t\t\t\t\xdb       =============================           \xdb\n";
	cout<<"\t\t\t\t\xdb                                               \xdb\n";
    cout<<"\t\t\t\t\xdb                                               \xdb\n";
    cout<<"\t\t\t\t\xdb                                               \xdb";
    cout<<"\n\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n";
	cout<<"Please Enter Your Name: ";
	getline(cin,name);
	cout<<"Hello "<<name<<"\n\nWhat would you like to order?\n\n";

	cout<<"\t\t\t\t--------Menu--------\n\n";

	cout<<"1) Pizzas\n";
	cout<<"2) Burgers\n";
	cout<<"3) Sandwich\n";
	cout<<"4) Juices\n";
	cout<<"5) Biryani\n";
	cout<<"6) Exit\n\n";
	cout<<"\nPlease Enter your Choice: ";
	cin>>c;

	if(c==1)
	{
		B.get_piz();
		cout<<"\n\nWould You like to order anything again? Y / N: ";
		cin>>ch;
		if(ch=='Y' || ch=='y')
		{
			goto start;
		}
		else
		{
			x.total_bill();
			x.displayx();
		}
	}
	else if(c==2)
	{
		B.get_burgers();
		cout<<"\n\nWould You like to order anything again? Y / N: ";
		cin>>ch;
		if(ch=='Y' || ch=='y')
		{
		  goto start;
		}
		else
		{
			x.total_bill();
			x.displayx();
		}			
	}
	else if(c==3)
	{
		B.get_sand();
		cout<<"\n\nWould You like to order anything again? Y / N: ";
		cin>>ch;
		if(ch=='Y' || ch=='y')
		{
			goto start;
		}
		else
		{
			x.total_bill();
			x.displayx();
		}
	}
	else if(c==4)
	{
		B.get_juice();
		cout<<"\n\nWould You like to order anything again? Y / N: ";
		cin>>ch;
		if(ch=='Y' || ch=='y')
		{
			goto start;
		}
		else
		{
			x.total_bill();
			x.displayx();
		}
	}
	else if(c==5)
	{
		B.get_biryani();
		cout<<"\n\nWould You like to order anything again? Y / N: ";
		cin>>ch;
		if(ch=='Y' || ch=='y')
		{
			goto start;
		}
		else
		{
			x.total_bill();
			x.displayx();
		}
	}
	
	else if(c==6)
	{
		cout<<"\n\nTHANK YOU VISIT AGAIN";
		exit(0);
	}
	else
	{
		system("CLS");
		cout<<"Please Select Right Option: \n";
		cout<<"\n\nWould You like to order anything again? Y / N: ";
		cin>>ch;
		if(ch=='Y' || ch=='y')
		{
			goto start;
		}
		else
		{
			x.displayx();
		}
	}
	return 0;
}
