#include <stdio.h>
int main() {
void ingiatricacphantu (int arr[], int size) ;
    int arr[] = {6, 7, 9, 11, 17};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Cac phan tu chinh trong mang la:\n");
    for (int i = 0; i < size; i++) {
        printf("%d \n ", arr[i]);
    }
    return 0;
}

