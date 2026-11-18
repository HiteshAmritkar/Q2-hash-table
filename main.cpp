#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int m = 23;
    const int n = 20;

    int values[n];
    int table[m];
    int totalCollisions = 0;

    for (int i = 0; i < m; i++)
        table[i] = -1;

    cout << "PRN: 202501100188\n";
    cout << "Scenario: Mango varieties\n";
    cout << "Hash Method: Division (key % 23)\n";
    cout << "Collision Handling: Linear Probing\n\n";

    cout << "Generated Dataset: ";

    for (int i = 0; i < n; i++) {
        values[i] = (188 + 13 * i) % 100;
        cout << values[i] << " ";
    }

    cout << "\n\nInsertion Details:\n";

    for (int i = 0; i < n; i++) {
        int key = values[i];
        int hashIndex = key % m;
        int index = hashIndex;
        int probes = 0;

        while (table[index] != -1 && probes < m) {
            totalCollisions++;
            probes++;
            index = (hashIndex + probes) % m;
        }

        if (probes == m) {
            cout << "Table full. Could not insert " << key << endl;
            continue;
        }

        table[index] = key;

        cout << "Key " << setw(2) << key
             << " | Hash Index " << setw(2) << hashIndex
             << " | Inserted At " << setw(2) << index;

        if (probes > 0)
            cout << " | Probes: " << probes;

        cout << endl;
    }

    cout << "\nFinal Hash Table:\n";

    cout << "Index : ";
    for (int i = 0; i < m; i++)
        cout << setw(4) << i;

    cout << "\nValue : ";
    for (int i = 0; i < m; i++) {
        if (table[i] == -1)
            cout << setw(4) << "-";
        else
            cout << setw(4) << table[i];
    }

    cout << "\n\nTotal Collisions: "
         << totalCollisions << endl;

    return 0;
}
