//
// Created by Lander Brandt on 4/7/15.
//

#include <stdio.h>
#include <string.h>

#define MAX 100

int main(int argc, char **argv) {
    FILE *fin = fopen("test.txt", "r");

    if (!fin) {
        perror("Invalid file");
        return -1;
    }

    char temp[MAX];

    while (!feof(fin)) {
        fgets(temp, MAX, fin);
        printf("%s", temp);
        temp[0] = '\0';
    }

    fclose(fin);

    return 0;
}
