#include <iostream>//istream + ostream
using namespace std;


class Array
{
    int* arr;
    int size;

    public:
        Array();
        Array(int size);
        void take_input();
        //void display();
        //Array add(Array temp);
        Array operator+(Array temp);
        Array operator-(Array temp);
        Array operator*(Array temp);
        friend ostream& operator<<(ostream &out, Array& ob);
        friend istream& operator>>(istream& in, Array& ob);
};

