/*
#include <stdio.h>
int main(){
    for (int i = 0, j = 10; i < j; i++, j--)
    {
        printf("%d , %d\n", i,j);
    }
    return 0 ;
}

*/


#include <stdio.h>
 
int main() {
    for (int i = 0; i < 100; i += (i % 2 == 0) ? 1 : 2) {
        printf("%d ", i);
    }
    return 0;
}