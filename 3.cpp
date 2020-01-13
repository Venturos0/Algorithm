#include <iostream>
#include<cmath>
using namespace std;
bool prime(int num){
	if(num <= 1){
		return false;
	}
	for(int i = 2; i < sqrt(num); i++){
		if(num % i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int a;
	cin >> a;
	if(prime(a)){
		cout << "Prime";
	}
	else{
		cout << "Composite";
	}
}
