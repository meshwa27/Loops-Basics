

#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the value of n: ";
    cin >> n;

    int i = n; 

    while (i >= 1) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
        i--; 
    }

    return 0;
}

