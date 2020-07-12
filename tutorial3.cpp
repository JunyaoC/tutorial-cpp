#include <iostream>
#include <iomanip>

#define NUM 20 //// declaring for question 5

using namespace std;

int main(){
	
	cout<<"==== Question 1 ====" <<endl;
	
	cout << ('A' < 'B') <<endl;	
	cout << ('a' == 'A') <<endl;
	cout << ('a' < 'B') <<endl;
	
	cout<<endl;
	cout<<"==== Question 2 ====" <<endl;
	
	int int1 = 12, int2 = 18, int3 = 21;
	
	cout << (int1 < int2 && int2 < int3) <<endl;
	cout << (int1 < int3 || int3 < int2) <<endl;
	cout << (int1 <= int2 - 6) <<endl;
	cout << (int2 <= int1 + 5 || int3 >= int2 +5) <<endl;
	cout << (!(int2 == int1 && int3 == int1)) <<endl;
	cout << (!(int1 > 25) && !(int2 <17)) <<endl;
	
	cout<<endl;
	cout<<"==== Question 3 ====" <<endl;
	
	cout << (1 + 2 * 4/2) <<endl;
	cout << ((1 + 2) * 4/2) <<endl;
	cout << (9 % 2 + 1) <<endl;
	cout << ((1 + (10 - (2 + 1)))) <<endl;
	cout << (557%8 * 3 - 9) <<endl;
	cout << ((234/5) * 4 - 7%3) <<endl;
	
	cout<<endl;
	cout<<"==== Question 4 ====" <<endl;
	
	int a, b = 4, c = 0;
	
	//// 5a)
	
	a = ++b - ++c;	
	cout<<"5a) a="<<a<<" b="<<b<<" c="<<c<<endl;
	
	a = NULL;
	b = 4;
	c = 0;
	//// 5b)
//	
	//a = b-- + --c;	
	cout<<"5b) a="<<a<<" b="<<b<<" c="<<c<<endl;
//	
//	a = NULL;
//	b = 4;
//	c = 0;
//
//	//// 5c)
//	a = b++ + ++c;
//	cout<<"5c) a="<<a<<" b="<<b<<" c="<<c<<endl;
//	
//	a = NULL;
//	b = 4;
//	c = 0;
//
//	//// 5d)
//	b = a = c--;
//	cout<<"5d) a="<<a<<" b="<<b<<" c="<<c<<endl;
	
	return 0;
	
}

