#include <iostream>
using namespace std;

int main() {
	int A[5] = { 3,4 };
	for (int i = 0; i < 5; i++) {
		cout << A[i] << endl;
	}

	//for each loops
	for (int x : A)
		cout << x << endl;

	float B[] = { 2.5f,5.6f,9,8,7 };
	for (auto x : B) {
		cout << x << endl;
	}

	//for sum loops
	int sum = 0, A[7] = { 1,2,3,4,5,6,7 };
	for (int i = 0; i < 7; i++) {
		sum = A[i] + sum;
	}
	cout << "Sum is " << sum;

	//Maximum number
	int A[7] = { 1,2,3,4,5,6,7 },max;
	max = A[0];
	for (int i = 0; i < 8; i++) {
		if (A[i] > max)
			max = A[i];
	}
	cout << max;

	// Minimum number
	int A[7] = { 1,2,3,4,5,6,7 }, max;
	int min = A[0];
	for (int i = 0; i < 8; i++) {
		if (A[i] < min)
			min = A[i];
	}
	cout << min;

	//Couting positive and negative numbers
	int A[7] = { 1,2,3,4,5,6,7 }, contp = 0, contn = 0;
	for (int i = 0; i < 8; i++) {
		if (A[i] < 0)
			contp++;
		else
			contn++;
	}
	
	// Linear Search time = n;
	int A[10]= { 1,2,3,4,5,6,7 }, n = 10, i,key;

	cout << "getting numbers";
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	cout << "getting index:";
	cin >> key;
	for (int i = 0; i < n; i++) {
		if (key == A[i]) {
			cout << "found key";
		}
	}
	cout << "key not found";

	//Binary Search time = logn
	int l = 0, h, key, mid;

	return 0;
}