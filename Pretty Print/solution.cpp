#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
		/* Enter your code here */
        cout << left << hex << showbase << nouppercase;
        cout << (long long) A << endl;
        cout << right << dec << setw(15) << setfill('_') << showpos << fixed << setprecision(2);
        cout << B << endl;
        cout << scientific << setprecision(9) << noshowpos <<uppercase;
        cout << C << endl;
        
	}
	return 0;

}