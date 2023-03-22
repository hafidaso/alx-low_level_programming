#include <stdio.h>

int largest_number() {
    int a, b, c, max;
    
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // find the maximum value among the three integers
    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    
    printf("The largest integer is %d\n", max);
    
    return 0;
}
