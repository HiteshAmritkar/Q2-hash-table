#include <iostream>
using namespace std;

int main() {
    const int m = 23;
    const int n = 20;

    int values[n];
    int table[m];
    int collisions = 0;

    for (int i = 0; i < m; i++)
        table[i] = -1;

    for (int i = 0; i < n; i++) {
        values[i] = (188 + 13 * i) % 100;

        int index = values[i] % m;
        int probes = 0;

        while (table[index] != -1 && probes < m) {
            collisions++;
            probes++;
            index = (index + 1) % m;
        }

        if (probes < m)
            table[index] = values[i];
    }

    cout << "Linear Probing Completed." << endl;
    cout << "Total Collisions: " << collisions << endl;

    return 0;
}
