#include <iostream>

using namespace std;

int recursiveSum(int n){
	if (n == 1) return 1;
	return n + recursiveSum(n-1);
}

int main(){
	int n;
	cout << "Enter N : ";
	cin >> n;
	int sum = recursiveSum(n);
	cout << "Sum : " << sum << endl;
	return 0;
}
