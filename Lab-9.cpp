#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::hex;

int main()
{
    long long n;
    cin >> n;
    unsigned char* c = (unsigned char *)&n;
    for (int i = 0; i < sizeof(n); ++i) {
        cout << "Byte " << i << ": " << hex << (int)c[i] << endl;
    }
}