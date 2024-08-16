#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
/**
 *create_file - create a file with specified permissions and write a string to
 *it
 *@filename: Pointer to the name of the file to create
 *@text_content: NULL-terminated string to write to the file
 *
 *Description: This function creates a file with the name specified by
 * `filename` and writes the content of `text_content` to it.
 *Return:
 * 1 on success. -1 on failure (if the file cannot be created,
 * written to, or any other errors occur).
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_written;
	int len;

	len = 0;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		n_written = write(fd, text_content, len);
		if (n_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
