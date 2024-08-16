#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 *read_textfile - Reads a text file and prints it to the POSIX standard output
 *@filename: Pointer to the name of the file to read
 *@letters: Number of letters(characters) to read and printed
 *
 *Description: The function reads a specified number of characters from a file,
 *and writes them to thr standard output. If any step fails, teh function
 *returns 0, indicating an error. Proper error handling ensures resource
 *management, preventing memory leaks and file descriptor issues
 *Return: The actual number letters read and printed
 *Return 0, if the file cannot be opened or read, if the filename is NULL,
 *write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_written;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	n_written = write(STDOUT_FILENO, buffer, n_read);
	if (n_written == -1 || n_written != n_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (n_written);
}
