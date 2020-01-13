#include <iostream>
using namespace std;
int minRec(int arr[], int n){
	if(n==1) return arr[0];
	else return min(arr[n-1], minrec(arr,n-1));
}
int maxRec(int arr[], int n){
	if(n==1) return arr[0];
	else return max(arr[n-1], maxRec(arr,n-1));
}
int main(){
	int arr[100],n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Min:"<<minRec(arr,n)<<endl;
	cout<<"Max:"<<maxRec(arr,n)<<endl;
}

