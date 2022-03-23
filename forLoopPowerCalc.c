#include <stdio.h>
/* for loop to calculate exponent */
int power(int m, int n){
    int i=0, pow=1;
    for(i=1; i<=n; i++){
        pow = pow*m;
    }
    return pow;
}
int main(void) {
    
    int r=0;
    r=power(2,9);
    printf("%d ", r);
    
    return 0;
}