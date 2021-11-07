#include <stdio.h>
#include <conio.h>

int arraySum(int arr[], int size){
    int total = 0;
    int i;
    for(i=0; i<size; i++){

    total = total + arr[i];
    }
    
    return total;

}
int main(){
      int arr[] ={5, 6, 1};
      int size = sizeof(arr) / sizeof(arr[0]);
      int result = arraySum(arr, size);
      printf("Sum of array is %d \n", result);


      
}