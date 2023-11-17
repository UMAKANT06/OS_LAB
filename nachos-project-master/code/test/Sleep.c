#include "syscall.h"

int main() {
    int i, j;
    Exec("Sleep2");
    while (1) {
        ThreadSleep(10000);
        for (i = 0; i < 1000; i++) {
            for (j = 0; j < 500; j++) {
            }
        }
        PrintString(" currently operating TestSleep1\n");
    }
}