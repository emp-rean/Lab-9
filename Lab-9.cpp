/*Дано целое число типа long long, выведите на экран содержимое каждого из его байтов, используя знания по указателям.*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::hex;

int main()
{
    long long n; // (8 байт = 64 бита)
    cout << "Enter number: ";
    cin >> n;
    unsigned char* c = (unsigned char *)&n; // адрес переменной n в чар массив из 8 байт
    for (int i = 0; i < sizeof(n); ++i) //8 раз для каждого байта
    {
        cout << "Byte " << i << ": " << hex << (int)c[i] << endl;
    }
}