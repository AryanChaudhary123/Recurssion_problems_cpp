#include <iostream>
using namespace std;

bool binarysearch(int arr[], int s, int e, int key) {
    if (s > e) {
        return false;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == key) {
        return true;
    }
    if (key > arr[mid]) {
        return binarysearch(arr, mid + 1, e, key);
    } else {
        return binarysearch(arr, s, mid - 1, key);
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int key = 199;
    if (binarysearch(arr, 0, size - 1, key)) {
        cout << "present" << endl;
    } else {
        cout << "not present" << endl;
    }
    return 0;
}
