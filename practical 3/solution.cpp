#include <iostream>
#include <iomanip>
using namespace std;

void question1(){

	int dayInput;
	cout<<"Enter Number of Days: ";
	cin >> dayInput;

	int weekNum = dayInput / 7;
	int dayNum = dayInput - (weekNum * 7);

	cout<<dayInput<<" days = "<<weekNum<<" weeks, "<<dayNum<<" days."<<endl;

}

void question2(){

	int userInput;
	cout << "Enter a 4-digit integer : ";
	cin >> userInput;

}

void question3(){

	string userInput;
	cout << "Enter a 4-digit integer : ";
	getline(cin,userInput);
	
	cout<<"1st digit : "<< ( (int(userInput[0]) - 48))<< endl
		<<"2nd digit : "<< ( (int(userInput[1]) - 48))<<endl
		<<"3rd digit : "<< ( (int(userInput[2]) - 48))<<endl
		<<"4th digit : "<< ( int(userInput[3]) -48)<<endl;
}

void question4(){

	string userInput;
	cout << "Enter a 4-digit integer : ";
	getline(cin,userInput);
	
	cout<<( (int(userInput[0]) - 48)*1000)<< " + "
		<<( (int(userInput[1]) - 48)*100)<<" + "
		<<( (int(userInput[2]) - 48)*10)<<" + "
		<<( int(userInput[3]) -48)<<endl;
}

void question5(){

	double triHeight,triLength;

	cout <<"Enter the height of the triangle : ";
	cin >> triHeight;

	cout <<"Enter the length of the triangle : ";
	cin >> triLength;

	cout<<"Area of triangle"<<endl
		<<"---------------------------"<<endl
		<<"Height : \t"<< triHeight << " cm"<<endl
		<<"Length : \t"<< triLength << " cm"<<endl
		<<"Area   : \t"<< 0.5 * (triHeight * triLength) << " cm";

}

void question6(){

	double cylinderRadius,cylinderHeight,costPerArea;
	int cylinderAmount;

	cout<<"Please enter the radius of the cylinder (in cm) : ";
	cin>>cylinderRadius;

	cout<<"Please enter the height of the cylinder (in cm) : ";
	cin>>cylinderHeight;

	cout<<"Please enter the cost of the material (in RM/cm2) : ";
	cin>>costPerArea;

	cout<<"Please enter the amount of cylinder : ";
	cin>>cylinderAmount;

	cout<<setprecision(2)<<fixed<<"The total cost for producing "<<cylinderAmount
		<<" containers with "<<cylinderRadius
		<<" cm radius and "<<cylinderHeight
		<<" cm height is RM "<<( (3.142 * (cylinderRadius * cylinderRadius) ) + (2 * 3.142 * cylinderRadius * cylinderHeight)) * costPerArea * cylinderAmount<<endl;

}

int main(){

	bool exit = false;
	string option;
	string placeholder;

	while(!exit){
		cout<<"\n======================\nPractical 3 Solutions\n======================\n\nChoose question you would like to view ( 1 - 6 ), or E to exit:";
		
		getline(cin,option);

		system("CLS");

		cout<<"\n======================\n"
			<<"Executing Question "<<option<<endl
			<<"======================\n"<<endl;

		switch(option[0]){

			case '1': {
				question1();
				break;
			}
			

			case '2':{
				question2();
				break;
			}
				

			case '3':{
				question3();
				break;
			}
				

			case '4':{
				question4();
				break;
			}

			case '5':{
				question5();
				break;
			}			

			case '6':{
				question6();
				break;
			}

			default:{
				system("CLS");
				cout<<endl<<"Please enter a valid option (1 - 6), or press E to exit."<<endl;
				break;
			}

			case 'e':
			case 'E':
				system("CLS");
				cout<<endl<<"Have fun learing programing, goodbye! :D"<<endl;
				exit = true;
				return 0;

		}

		fflush(stdin);	
		cout<<"\n[Complete] Press any key to return to menu.\n";

		getline(cin,placeholder);

		system("CLS");

	}

	return 0;
}