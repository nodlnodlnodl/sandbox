#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int a1 = 0;
    int a2 = 1;
    int n;

    cout << "Enter number: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        a1 = a1 + a2;
        a2 = a1 - a2;
    }
    cout << a1 << endl;
}
