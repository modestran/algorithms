// Binary search
#include <iostream>
#include <math.h>

int sort(int list[99], int item) {
    int low = 0, high = 99;

    while (low <= high) {
        float mid = floor((high - low)/2);
        int temp = list[mid];

        if (temp = item) {
            return mid;
        } else if (temp < item) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << sort(arr, 2) << "\n";
    std::cout << sort(arr, -2) << "\n";
    std::cout << sort(arr, 8) << "\n";
    std::cout << sort(arr, 10) << "\n";

    return 0;
}