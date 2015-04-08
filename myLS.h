//
// Created by Lander Brandt on 4/7/15.
//
#ifdef __APPLE__
#include <sys/dirent.h>
#else
#include <dirent.h>
#endif
#include <sys/stat.h>
#include <sys/types.h>

#ifndef HW3_LS_H
#define HW3_LS_H

#define PERMS_COUNT 9
#define MAX 1024

/**
 * Prints a dirent normally (name followed by linefeed)
 */
void printDirentNormal(char *);

/**
 * Print the long format dirent
 */
void printLongFormat(char *, struct stat *);

/**
 * Print the permissions of a dirent
 */
void printPerms(struct stat *);

/**
 * Prints the dirent type (link, regular file, etc.)
 */
void printDirentType(struct stat *);

#endif //HW3_LS_H
