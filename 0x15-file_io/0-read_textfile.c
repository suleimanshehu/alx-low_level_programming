#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters) {
int fd;
ssize_t nr, nw;
char buffer[letters];

if (!filename)
return 0;

fd = open(filename, O_RDONLY);
if (fd == -1)
return 0;

nr = read(fd, buffer, letters);
if (nr == -1)
return 0;

nw = write(STDOUT_FILENO, buffer, nr);
if (nw == -1 || nw != nr)
return 0;

close(fd);
return nw;
}
