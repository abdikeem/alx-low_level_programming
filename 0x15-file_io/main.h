#ifndef MAIN_H_
#define MAIN_H_

// header functions
#include <elf.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

// Prototypes
ssize_t read_textfile(const char *filename, size_t letters);

#endif // MAIN_H_