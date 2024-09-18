#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>

#define DISK_FILE_PATH "/tmp/heartyfs"
#define BLOCK_SIZE (1 << 9)
#define DISK_SIZE (1 << 20)
#define NUM_BLOCK (DISK_SIZE / BLOCK_SIZE)
