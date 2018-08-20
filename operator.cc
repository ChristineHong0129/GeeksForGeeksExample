#include <iostream>
using namespace std;

void addition(int x, int y);
void subtract(int x, int y);
void dividing(int x, int y);
void multiple(int x, int y);

int main(){
	
	int T, A1, B1, A2, B2;

	//input constraints
	try{
		cin >> T;
		if(T < 1 || T >100) throw 0;
	}catch(int e){
		cout << "An exception occureed. Exception - input T Range Wrong :" << e << endl;
		return 0;
	}

	//input constraints
	try{
		cin >> A1 >> B1;
		if(A1 < 1 || A1 >100 || B1 <1 || B1 >100) throw 1;
	}catch(int e){
		cout << "An exception occureed. Exception - input A1 or B1 Range Wrong :" << e << endl;
		return 0;
	}

	try{
		cin >> A2 >> B2;
		if(A2 < 1|| A2 > 100 || B2 < 1 || B2 > 100) throw 2;
	}catch(int e){
		cout << "An exception occureed. Exception - input A2 or B2 Range Wrong :" << e << endl;
		return 0;
	}

	addition(A1, B1);
	subtract(A1, B1);
	dividing(A1, B1);
	multiple(A1, B1);
	addition(A2, B2);
	subtract(A2, B2);
	dividing(A2, B2);
	multiple(A2, B2);
	
}




void addition(int x, int y){
	cout << x + y << endl;
}
void subtract(int x, int y){
	int big, small;
	if(x >= y){
		big = x; small = y;
		cout << x - y << endl;
	}else{
		big = y; small = x;
		cout << y - x << endl;
	}

}
void dividing(int x, int y){
	int res;
	if(x >= y){
		res = x / y;
		cout << res << endl;
	}else{
		res = y / x;
		cout << res << endl;
	}
}
void multiple(int x, int y){
	cout << x * y << endl;
}