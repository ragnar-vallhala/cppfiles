//Just some practice here

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main() {

    int n;
    cin >> n;
    vector <int> l;
    l.push_back(2);
    int m{ 2 };
    while (size(l) < n) {
        int flag{};
        for (int j{}; j < size(l); j++) {
            if (m % l[j] == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            l.push_back(m);
        }
        m++;

    }
    int p{};
    cout << l[size(l)-1] << endl;
    for (int i{}; i < size(l); i++) {
        if (p < 10) { cout << setw(7) << l[i]; p++; }
        else { p = 1; cout << endl<<setw(7)<<l[i]; }
       
    }
    return 0;
}
