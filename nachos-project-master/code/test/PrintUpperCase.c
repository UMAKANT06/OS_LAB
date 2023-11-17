#include "syscall.h"

char buffer[100];
int main(){
    
    ReadString(buffer,ReadNum());
    PrintUpperCase(buffer);
}