#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * Do not create the file if it does not exist.If text_content is NULL,
 * do not add anything to the file. Return 1 if the file exists and
 * -1 if the file does not exist or if you do not have the required
 *   permissions to write the file.
 *   @filename: is the name of the file.
 *   @text_content: is the NULL terminated string to add at the end of the file.
 *
 *   Return: 1 on success and -1 on failure.
 *   If filename is NULL return -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, len, ch;

if (!filename)
return (-1);
if (filename && !text_content)
return (1);
if (!filename && !text_content)
return (-1);
fd = open(filename, O_APPEND | O_WRONLY);
if (fd == -1)
return (-1);
for (len = 0; text_content[len]; len++)
;
ch = write(fd, text_content, len);
if (ch == -1)
return (-1);
close(fd);
return (1);
}
