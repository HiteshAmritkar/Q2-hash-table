#include <iostream>
using namespace std;

int main() {
    const int m = 23;
    const int n = 20;

    int values[n];
    int table[m];

    for (int i = 0; i < m; i++)
        table[i] = -1;

    for (int i = 0; i < n; i++) {
        values[i] = (188 + 13 * i) % 100;

        int index = values[i] % m;

        if (table[index] == -1)
            table[index] = values[i];
        else
            cout << "Collision for key: " << values[i] << endl;
    }

    cout << "Basic insertion completed." << endl;

    return 0;
}
