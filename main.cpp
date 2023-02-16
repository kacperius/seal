#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
FILE* y;
FILE x;
int main () {
    ifstream MyReadFile("input.txt");
    printf("wielkość typu zmiennej FILE wynosi");
    cout << sizeof(x) << endl;
    printf("wielkość typu zmiennej *FILE wynosi");
    cout << sizeof(y) << endl;
    return 0;
}
