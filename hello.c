#include <stdio.h>

int main() {
    char buf[128];
    fgets(buf, sizeof buf, stdin);
    printf("Goodbye %s.\n", buf);
}