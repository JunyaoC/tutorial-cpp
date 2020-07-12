#include <iostream>
using namespace std;

int main(){
		
	cout<<"Enter any number with decimals: ";
	double yourNum;
	cin>>yourNum;
	
	int integerPart = yourNum;
	
	double fractionalPart = yourNum - integerPart;
	
	cout<<"Your Number: "<<endl;
	cout<<"Integer: "<<integerPart<<endl;
	cout<<"Fractional Part: "<<fractionalPart<<endl;	
	

	return 0;
}
