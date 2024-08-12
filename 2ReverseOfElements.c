#include <stdio.h>

void reverse(int a[], size_t size) {
    int temp;
    for (int i = 0, j = size; i < j; ++i, --j) {
        temp = a[i], a[i] = a[j], a[j] = temp;
    }
}

int main () {
    int a[5] = {1,2,3,4,5};
    size_t asize = sizeof(a)/sizeof(*a);
    reverse(a, asize);

    putchar('[');
    for (int i = 0; i < asize; i++) {
       printf("%d%s",a[i], (i < asize - 1) ? ", " : "]\n");
    }
   return 0;
}
