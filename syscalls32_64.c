//
// Created by Lander Brandt on 4/7/15.
//

#include <stdlib.h>
#include <unistd.h>

int write(int fd, char *str, int len) {
/* do nothing */
    return 0;
}

int main() {
    write(1, "hello\n", 6);
    syscall(1, 1, "goodbye\n", 8);
    exit(0);
}
