/* Define an enum with SUCCESS, FAILURE, and TIMEOUT, 
   and print messages accordingly. */

#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status s = SUCCESS;

    switch (s) {
        case SUCCESS: printf("Operation successful.\n"); break;
        case FAILURE: printf("Operation failed.\n"); break;
        case TIMEOUT: printf("Operation timed out.\n"); break;
    }

    return 0;
}