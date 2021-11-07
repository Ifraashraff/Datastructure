#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

void bubble_sort(int a[], size_t size) {
    for(int i = 0; i < size; i++) {
        bool already_sorted = true;
        for(int j = 0;j < size - i- 1; j++) {
            if(a[j] > a[j + 1]) {
                int temp = a[j];
                a[j + 1] = temp;
                already_sorted = false;
            }
        }

        if(already_sorted) return;
    }
}

bool array_equal(int xs[], int ys[], size_t size) {
    bool equal = true;

    for ( int i = 0; i < size; i++) {
        if(xs[i] != ys[i]) {
            equal = false;
            break;
        }
    }
    return equal;
}

void print_array(int xs[], size_t size) {
    for (int i = 0; i < size; i++) {
        printf("%d", xs[i]);
    }
    printf("\n");
}


int main() {

    int arr[] = {2, 1, 3, 5, 6, 9};
    int sorted[] = {1, 2, 3, 5, 6, 9};

    size_t size = sizeof arr / sizeof arr[0];

    bubble_sort(arr, size);
    assert(array_equal(arr,sorted,size));

    return 0;
}