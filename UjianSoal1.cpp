#include <iostream>
using namespace std;
int main() {
	int x = 5;
    cout <<"masukan nilai :";
    cin >> x;

	for (int t = 0; t < x; t++) {
		for (int g = 0; g < x - t; g++) {
			cout << " ";
		}
		int	val = 1;
		for (int v = 0; v <= t; v++) {
			cout << val << " ";
			val = val * (t - v) / (v + 1);
		}
		cout << endl;
	}
	
	return 0;
}