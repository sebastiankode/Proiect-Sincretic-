#include <iostream>

using namespace std;

int Euclid(int a, int b)
{
    if (b == 0)
    {
        return b = a;
    }
    else
    {
        return Euclid(b, a % b);
    }
}

int main()
{
    int a, b;
    cout << "Dati a: "; cin >> a;
    cout << "Dati b: "; cin >> b;
    cout << "CMMDC: " << Euclid(a, b) << endl;
    system("pause");
    return 0;
}