#include <iostream>
using namespace std;

int blob(int n) {
	if (n == 0) {
		return 0;
	}
	else {
		int blub = n + blob(n - 1);
		cout << " + " << n << " = " << blub << "\n";
		return blub;
	}
}
int main() {
	int n;
	cout << "Nhap so n: "; cin >> n;
	blob(n);
}