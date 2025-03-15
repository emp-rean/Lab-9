/*Дано целое число типа long long, выведите на экран содержимое каждого из его байтов, используя знания по указателям.*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::hex;

int main()
{
    long long n;
    cout << "Enter number: ";
    cin >> n;
    unsigned char* c = (unsigned char *)&n;
    for (int i = 0; i < sizeof(n); ++i) {
        cout << "Byte " << i << ": " << hex << (int)c[i] << endl;
    }
}