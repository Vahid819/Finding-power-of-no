#include <stdio.h>
#include <math.h>

int main() {
    float b, a, ans = 0, result = 0;
    printf("Enter a base: ");
    scanf("%f", &b);
    printf("Enter an answer: ");
    scanf("%f", &a);

    for (int i = 1;; i++) {
        result = pow(b, i);  // Using the provided base 'b' instead of 'a'
        {
        if (result == a) {
        ans=i;
            printf("Correct%.4f\n",ans);
           }
    }
    }
    return 0;
}
    