#include <iostream>
#include <vector>

using namespace std;

void printPicked(vector<int>& picked) {
	for(vector<int>::iterator it = picked.begin() ; it != picked.end() ; ++it) {
		cout << *it << " ";
	}
	cout << endl;
}

void pick (int n, vector<int>& picked, int toPick) {
	if ( toPick == 0 ) { printPicked(picked); return; }

	int smallest = picked.empty() ? 0 : picked.back() + 1;

	for (int next = smallest ; next < n ; ++next) {
		picked.push_back(next);
		pick(n, picked, toPick - 1);
		picked.pop_back();
	}
}

int main(){
	vector<int> picked;

	int n, toPick;
	cout << "enter n : ";
	cin >> n;

	cout << "enter number to pick : ";
	cin >> toPick;

	pick(n, picked, toPick);
}
