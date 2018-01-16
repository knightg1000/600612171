#include <iostream>
#include <cmath>
using namespace std;
 
 double FindDistance(double u,double a,double t){
 	double s = (u*t)+(0.5*a)*(pow(t,2));
 	return s;
 	
 	
 }
	int main()
	{
		float u,a,t;
		cout << "u : ";
		cin >> u;
		cout << "a : ";
		cin >> a;
		cout << "t : ";
		cin >> t;
		cout << "s = " << FindDistance(u,a,t);
	
	return 0;
}
