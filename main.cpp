#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
int a, b;
cin >> a >> b;
cout << "A + B = " << a + b << '\n';
cout << "A / B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n';
cout << "max(A,B)="<<max(a,b);
    return 0;
}
