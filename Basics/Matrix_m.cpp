#include "Matrix.h"

int main()
{
    int row, column;

    cout << "Give the size of row : ";
    cin >> row; 

    cout << "Give the size of column : ";
    cin >> column; 

    Matrix a1(row, column);
    Matrix a2(row, column);
    Matrix res(row, column);

    cout << "A1 INPUT" << endl;
    a1.take_input();
    cout << "A2 INPUT" << endl;
    a2.take_input();

    res = a1.add(a2);

    cout << "The addition of matrix is :" << endl;
    res.display();

    res = a1.sub(a2);

    cout << "The subtraction of matrix is :" << endl;
    res.display();

    return 0;
}