#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Prompt user for input
    cout << "Enter the value of n: ";
    cin >> n;


    // Loop to print numbers from 1 to n
    for (int i = n; i >=1; i--) {
        if(i%2==0)
        {
        	cout<<i<<endl;
		}
    }

    return 0;
}
