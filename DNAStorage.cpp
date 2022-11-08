#include <iostream>
#include <bitset>
using namespace std;
int main() {
	int n;
	cin >> n;
	while (n--) {
		string sol = "";
		int l;
		cin >> l;
		string a;
		cin >> a;
		for (int z = 0; z < l; z+=2) {
			if (a[z] == '0') {
				if (a[z + 1] == '0') {
					sol += "a";
				}
				else {
					sol += "t";
				}


			}
			else {
				if (a[z + 1] == '0') {
					sol += "c";
				}else{
					sol += "g";

				}
			}
		}
		cout << sol << endl;

	}

	

	
	return 0;
}
