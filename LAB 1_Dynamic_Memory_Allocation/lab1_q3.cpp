#include <iostream>

using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    int* row_sizes = new int[rows];
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        cout << "Enter the number of elements in row " << i+1 << ": ";
        cin >> row_sizes[i];
        arr[i] = new int[row_sizes[i]];
        cout << "Enter the elements in row " << i+1 << " separated by spaces: ";
        for (int j = 0; j < row_sizes[i]; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "The array is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < row_sizes[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    delete[] row_sizes;
    return 0;
}
