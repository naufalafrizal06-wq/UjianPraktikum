#include <iostream>
using namespace std;
int main () {
    int y = 6;
    
    for (int i = 1; i <= y; i++) {
        for (int s = 0; s < y - i; s++) {
            cout << " ";
            }
            
    for (int k = 1; k <= (2 * i - 1); k++) {
        cout << "'";
        }
        cout << endl;
    }
    return 0;
    }