#include <iostream>
#include <cmath>
using namespace std;
 
int FindDivisor(int num){
 	int ans = 2;
 	while(num%ans>0){
 			ans++;
	 	}
 		return ans;
}
 	
 	
int main()
	{
	int integer;
	cout << "Enter integer : ";
	cin >> integer ;
		
	if(integer>1){
			cout << "Output is : " << FindDivisor(integer);
	}
	
	return 0;
}
