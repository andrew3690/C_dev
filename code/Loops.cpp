#include <iostream>
using namespace std;

int main() {
	//Prime Number
	int n, count = 0;
	for (int i = 0; i <= n; i++) {
		if (n % i == 0) {
			count++;
		}
	}
	if (count == 2) {
		cout<<"prime";
	}
	else {
		cout << "not prime";
	}
	// Getting final digits
	int n = 1724, r;
	while (n > 0) {
		r = n % 10;
		n = n / 10;
		cout << r << endl;
	}

	// Armstrong Numbers
	int r, sum = 0, n = 153, m;
	m = n;
	while (n > 0) {
		r = n % 10;
		n = n / 10;
		sum = sum + (r * r * r);
	}

	if (sum == m)
		cout << "Armstrong";
	else
		cout << "Not Armstrong";

	// Reversing a number
	int r, sum;
	while (int n > 0) {
		r = n % 10;
		n = n / 10;
		rev = rev * 10 + r;
		cout << rev<<"";
	}

	// Palindrom of a number
	int n, r, rev;
	while (n > 0) {
		r = n % 10;
		n = n / 10;
		rev = rev * 10 + r;
	}

	if (m == rev) {
		cout << "palindrom";
	}
	else {
		cout << "not a palindrom";
	}

	// GCD(MDC)

	int greater = 169, sub = 17;
	while (greater != sub) {
		if (greater > sub)
			greater = greater - sub;
		else if (sub > greater)
			sub = sub - greater;
	}
	cout << greater;
}