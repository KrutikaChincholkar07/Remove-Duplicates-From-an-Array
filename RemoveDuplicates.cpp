#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    int unique[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int index = 0;

    for (int i = 0; i < n; i++) {
        bool found = false;

        for (int j = 0; j < index; j++) {
            if (arr[i] == unique[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            unique[index] = arr[i];
            index++;
        }
    }

    cout << "Array after removing duplicates:\n";
    for (int i = 0; i < index; i++) {
        cout << unique[i] << " ";
    }

    return 0;
}
