#include <stdio.h>

int size(int arr[] = {1, 1, 1}) {
    int size = sizeof(arr)/4;
    return size;
}

int main() {

    int arr[] = {1, 1, 1};
    printf("%d", size(arr));
    return 0;
  }