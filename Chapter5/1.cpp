#include<iostream>
using namespace std;
int main()
{
    int min;
    int max;
    cout << "Plz enter two integers\n";
    cout << "min: ";
    cin >> min;
    cout << "max: ";
    cin >> max;
    int r = 0;
    for (int i = min; i <= max; i++)
    {
        r = r + i;
    }
    cout << "Result bettween the numbers: " << r;
    return 0;
}
       