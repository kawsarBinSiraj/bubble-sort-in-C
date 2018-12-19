
#include <stdio.h>
int main() {
    printf("Enter the arrys elements\n");
    int e , i ;
    scanf("%d", &e);

    int items[e];
    printf("Enter the arrys arguments\n");

    for ( i = 0; i < e; i++ ){
        scanf("%d", &items[i]);
    }
    
    int t;
    for ( int k = 0; k < e ; k++ ) {
        for ( int j = 0; j < e-k-1; j++ ) {
            if ( items[j] > items[j+1] ) {
                t = items[j];
                items[j] = items[j+1];
                items[j+1] = t;
            }
        }
    }
    
    for ( int c = 0; c < e; c++) {
        printf("%d\n", items[c]);
    }
    
    return;
}
