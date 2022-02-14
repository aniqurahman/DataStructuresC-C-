#include <stdio.h>
#include <stdlib.h>

struct Array {
    int ar[20];
    int size;
    int length;
};

void display(struct Array arr) {
    printf("Displaying Array Elements: \t {");
    for(int i=0; i<arr.length; i++) {
        printf("%d,",arr.ar[i]);
    }
    printf("}\n");
}

void append(struct Array *arr, int val) {
    arr->ar[arr->length++] = val;
}

void insert(struct Array *arr, int val, int index) {
    if(index >= 0 && index <= arr->length) {
        for ( int i=arr->length; i>index; i--) {
            arr->ar[i] = arr->ar[i-1];
        }
        arr->ar[index] = val;
        arr->length++;
    }
}

int main() {
    struct Array arr = {{1,2,3,4,5},10,5};
    display(arr);

    append(&arr,10);
    display(arr);

    insert(&arr,3,0);
    display(arr);

    return 0;
}