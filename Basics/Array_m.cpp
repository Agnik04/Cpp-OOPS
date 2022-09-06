#include "Array.h"

int main()
{
    int size;

    cout << "Give the size of Array: ";
    cin >> size;

    Array a1(size);
    Array a2(size);
    Array res(size);

    cin >> a1;
    cout << "A1 INPUT OVER" << endl;
    cin >> a2;
    cout << "A2 INTPUT OVER" << endl;

    res = a1 + a2;

    cout << "The resultant array is " << endl;
    cout << res;

    return 0;
}