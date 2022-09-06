#include "Matrix.h"

Matrix:: Matrix()
{
    this->row = 3;
    this->column = 3;
    this->arr = new int*[row];

    for(int i=0; i<row; ++i)
    {
        this->arr[i] = new int[column];
    }
}

Matrix:: Matrix(int row, int column)
{
    this->row = row;
    this->column = column;
    this->arr = new int*[row];

    for(int i=0; i<row; ++i)
    {
        this->arr[i] = new int[column];
    }
}

void Matrix:: take_input()
{
    int i, j;
    for(i = 0; i < this->row; ++i)
    {
        for(j = 0; j < this->column; j++)
        {
            cin >> arr[i][j];
        }        
    }
}

void Matrix:: display()
{
    int i, j;

    for(i = 0; i < this->row; ++i)
    {
        for(j = 0; j < this->column; j++)
        {
            cout << arr[i][j] << " ";
        }        
        cout << endl;
    }
}

Matrix Matrix:: add(Matrix temp)
{
    Matrix res;
    int i, j;

    for(i = 0; i < this->row; ++i)
    {
        for(j = 0; j < this->column; j++)
        {
            res.arr[i][j] = this->arr[i][j] + temp.arr[i][j];
        }        
    }    
    return res;
}

Matrix Matrix:: sub(Matrix temp)
{
    Matrix res;
    int i, j;

    for(i = 0; i < this->row; ++i)
    {
        for(j = 0; j < this->column; j++)
        {
            res.arr[i][j] = this->arr[i][j] - temp.arr[i][j];
        }        
    }    
    return res;
}

