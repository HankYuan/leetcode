#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char a[100];
    char* b[3] = {NULL, NULL, NULL};

    for (int i = 0; i < 3; i++) {
        printf("%li %li %p %p %s\n",sizeof(b), sizeof(b[i]), &b[i], b[i], b[i]);
    }
    
    int k = 10;
    printf("%i\n", k);
    int c[k];
    for (int i = 0; i < k; i++) {
        c[i] = 0;
    }
    for (int i = 0; i < k; i++) {
        printf("%p ", &c[i]);
    }
    printf("\n");
    return 0;
    

}
