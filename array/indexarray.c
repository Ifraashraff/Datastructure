#include <stdio.h>
int findIndexArray(int *ptr, int num, int size) {

    int i;

    for(i = 0; i < size; i++){
        if(ptr[i] == num)
        return i;
    }
    return -1;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};

    int size = sizeof arr / sizeof arr[0];
    int num = 5;

    int result = findIndexArray(arr, num, size);
    printf("%d is present at index %d in an array\n",num, result);
    return 0;
}