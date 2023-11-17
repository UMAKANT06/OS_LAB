#include "syscall.h"

int main() {
    int i, j;

    while (1) {
        for (i = 1; i <= 1000; i++) {
            for (j = 1; j <= 200; j++)
                ;
        }
        PrintString(" currently operating TestSleep2\n");
    }
}