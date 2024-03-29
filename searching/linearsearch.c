#include <stdio.h>
#include <stdbool.h>

bool linear_search(int arr[], int size, int x){
   bool match_found = false;

   for(int i = 0; i < size; i++){
       if(arr[i] == x){
           match_found = true;
           break;
       }
   }

   return match_found;
}

int main(){
    int elements[] = {2,3,4,6,8,9};
    int size = sizeof elements / sizeof elements[0];
    int x = 7;

    if(linear_search(elements, size, x))
       printf("Elements found number %d is present in the array\n", x);
    else 
       printf("Element not found %d is not in the array\n", x);

    return 0;   
}