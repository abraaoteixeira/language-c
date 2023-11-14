#include <stdio.h>

int a;

void foo(int *p) {
    *p = 100;
}

int main() {
    foo(&a);
    printf("a = %d\n", a);
    return 0;
}