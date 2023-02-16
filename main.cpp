#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
FILE* y;
FILE x;
int z;
long a;
int* b;
long* c;
int main () {
    ifstream MyReadFile("input.txt");
    printf("wielkość typu zmiennej FILE wynosi");
    cout << sizeof(x) << endl;
    printf("wielkość typu zmiennej *FILE wynosi");
    cout << sizeof(y) << endl;
    printf("wielkość typu zmiennej int wynosi");
    cout << sizeof(z) << endl;
    printf("wielkość typu zmiennej long wynosi");
    cout << sizeof(a) << endl;
    printf("wielkość typu zmiennej int* wynosi");
    cout << sizeof(b) << endl;
    printf("wielkość typu zmiennej long* wynosi");
    cout << sizeof(c) << endl;
    return 0;
}
