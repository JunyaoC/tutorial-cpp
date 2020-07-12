#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	cout<<"==== Question 1 ===="<<endl<<endl;
	
	// a)
	
	int x = 7;
	int y = 3;
	
	cout << x/y << " and " << x%y;
	
	cout<<endl;
	// b)
	
	double b = 5;
	cout << b/2 << (int) b%2;
	
	cout<<endl;
	// c)
	
	
	int x2 = 2;
	double y2 = 3.0;
	cout << setprecision(2);
	cout << x2 * y2 << " and " << x2 / y2;
	
	cout<<endl;
	// d)
		
	double a = 5.5;
	cout << (int) a / 2 << "\n";
	cout << setprecision(2) << a;
	
	cout<<endl;
	
	
	cout<<"==== Question 2 ===="<<endl<<endl;
	
	// a) notes: double is a reserved keyword
	
	int a2 = 5;
	int doubleVar = 2*a2;
	int triple = 3*a2; //triple is just fine
	cout << "Doubling 5 gives " << doubleVar << " and tripling gives "
	<< triple;
	
	cout<<endl;
	//b)
	
	int x3, y3;
	cout<<"Please enter 2 number"<<endl; /// give a bit of a hint to the user
	cin >> x3 >> y3; //be careful for the arrow
	cout << "x = " << x3 << "\ny = " << y3;
	
	cout<<endl;
	cout<<"==== Question 3 ===="<<endl<<endl;
	
	int x4 = 2, y4 = 5, z4 = 6;
	
	cout<<"x = "<<x4<<", y = "<<y4<<", z = "<<z4<<endl;
	cout<<"x + y = "<<x4 + y4<<endl;
	cout<<"Sum of "<<x4<<" and "<<z4<<" is "<<x4+z4<<endl;
	cout<<"z / y = "<<z4 / y4<<endl;
	cout<<"2 times "<<x4<<" = "<<2*x4<<endl;
	
	cout<<endl;
	cout<<"==== Question 4 ===="<<endl<<endl;
	
	cout<<"Krodo says:"<<endl;
	cout<<"I \3 YOU!"<<endl;
	
	cout<<endl;
	cout<<"==== Question 7 ===="<<endl<<endl;
	
	int int1,int2,int3,int4;
	
	cout<<"Enter 4 intergers > ";
	cin>>int1>>int2>>int3>>int4;
	cout<<"\nSum Of All  : "<<(int1+int2+int3+int4)<<endl;
	cout<<"\nProduct Of All  : "<<(int1*int2*int3*int4)<<endl;
		
	return 0;
}
