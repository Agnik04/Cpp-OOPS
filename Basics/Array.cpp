#include "Array.h"

Array:: Array()
{
    size = 5;
    arr = new int[size];
}

Array:: Array(int size)
{
    arr = new int[size];
    this->size = size;
}

void Array:: take_input()
{
    int i;
    for(i = 0; i < size; ++i)
    {
        cout << "Enter the value at " << i << "th position : " ;
        cin >> arr[i];
    }
}

istream& operator>>(istream& in, Array& ob)
{
    int i;
    for(i = 0; i < ob.size; ++i)
    {
        cout << "Enter the value at " << i << "th position : " ;
        in >> ob.arr[i];
    }
    return in;
}

/*void Array:: display()
{
    int i;
    for(i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";
    }
}

Array Array:: add(Array temp)
{
    Array res;
    int i;
    for(i = 0; i < 5; ++i)
    {
        res.arr[i] = this->arr[i] + temp.arr[i];
    }
    return res;
}*/

Array Array::operator+(Array temp)
{
    Array temp2(this->size);

    for (int i = 0; i < temp.size; i++)
    {
        temp2.arr[i] = this->arr[i] + temp.arr[i];
    }

    return temp2;
}

Array Array::operator-(Array temp)
{
    Array temp2(this->size);

    for (int i = 0; i < temp.size; i++)
    {
        temp2.arr[i] = this->arr[i] - temp.arr[i];
    }

    return temp2;
}

Array Array::operator*(Array temp)
{
    Array temp2(this->size);

    for (int i = 0; i < temp.size; i++)
    {
        temp2.arr[i] = this->arr[i] * temp.arr[i];
    }

    return temp2;
}

ostream& operator<<(ostream& out, Array& ob)
{
    out << "The elements of Array are: " << endl;
    for (int i = 0; i < ob.size; i++)
    {
        out << ob.arr[i] << " ";
    }

    return out;
}