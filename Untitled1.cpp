#include <iostream>
#include <cmath>
using namespace std;


double FindEuler(double x){
		
	double y = 3*pow(x,3)+(2*2.71828)+(pow(2,2*x+1))+(sqrt(pow(x,2)+1));
	return y;
	
	}

int main()
{
	float x,y;
	cout << "Enter x = ";
	cin >> x;
	cout << "Result y = " << FindEuler(x);
	
}

