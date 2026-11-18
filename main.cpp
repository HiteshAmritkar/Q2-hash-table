#include <iostream>
using namespace std;

int hashFunction(int key) {
    return key % 23;
}

int main() {
    int key = 88;

    cout << "Key: " << key << endl;
    cout << "Hash Index: " << hashFunction(key) << endl;

    return 0;
}
