/**
 * The above function prints all even numbers from 250 to 0.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
int main() {
    for (int i = 250;i >= 0;i--) {
        if (i % 2 == 0) printf("\\%d\n", i);
    }
    return 0;
}

