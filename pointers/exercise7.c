#include <stdio.h>
void sort(int* arr, int size) {
    int* end = arr + size;
    for (int* i = arr; i < end - 1; i++) {
        for (int* j = i + 1; j < end; j++) {
            if (*i > *j) {
                int temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 8, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }
    return 0;
}
