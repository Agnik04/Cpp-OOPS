#include <iostream>
using namespace std;

class Matrix
{
    int **arr;
    int row, column;

    public:
        Matrix();
        Matrix(int row, int column);
        void take_input();
        void display();
        Matrix add(Matrix temp);
        Matrix sub(Matrix temp);
        friend ostream& operator<<(ostream& out, Matrix& ob);
};