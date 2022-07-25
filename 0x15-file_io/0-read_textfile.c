#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: a pointer.
 * @letters: the number of letters it should read and print.
 *
 * Return: returns the actual number of letters it could read and print,
 * 0 if: -the file can not be opened or read,
 * -filename is NULL,
 *  -write fails or does not write the expected amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, fd_read, fd_write;
char *buff;

if (filename == NULL)
return (0);
buff = malloc(sizeof(char) * letters);
if (buff == NULL)
return (0);
fd = open(filename, O_RDWR);
if (fd == -1)
{
free(buff);
return (0);
}
fd_read = read(fd, buff, letters);
if (fd_read == -1)
return (0);
fd_write = write(STDOUT_FILENO, buff, fd_read);
if (fd_write == -1)
{
free(buff);
return (0);
}
if (fd_read != fd_write)
return (0);
free(buff);
close(fd);
return (fd_write);
}
