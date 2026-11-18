#include <iostream>
using namespace std;

int main() {
    const int n = 20;
    int values[n];

    cout << "PRN: 202501100188" << endl;
    cout << "Scenario: Mango varieties" << endl;

    cout << "Generated Dataset: ";

    for (int i = 0; i < n; i++) {
        values[i] = (188 + 13 * i) % 100;
        cout << values[i] << " ";
    }

    return 0;
}
