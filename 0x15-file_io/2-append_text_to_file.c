#include <fcntl.h>
#include <unistd.h>
/**
 *append_text_to_file - Appends text to the end of a file.
 *@filename: Pointer to the name of the file to append to.
 *@text_content: NULL-terminated string to append to the file.
 *
 *Description: This function appends the content of `text_content`
 * to the end of the file specified by `filename`.The file must already exist
 *If `text_content` is NULL, nothing is added to the file
 * but the function will return 1 if the file exists.
 *Return: 1 on success, -1 on failure (if the file cannot be opened,
 * does not exist, or if `text_content`
 * is NULL and the file cannot be accessed).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_written;
	int len;

	len = 0;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
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
