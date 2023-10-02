#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The text content to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, file_exists;

	if (filename == NULL)
		return (-1);

	/* Open the file for appending (if it exists) */
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		/* Check if the file exists */
		fd = open(filename, O_CREAT | O_EXCL, 0600);

		if (fd == -1)
			return (-1);

		file_exists = 0;
	}
	else
	{
		file_exists = 1;
	}

	if (text_content != NULL)
	{
		/* Write the text content to the file */
		bytes_written = write(fd, text_content, strlen(text_content));

		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	/* Close the file */
	close(fd);

	if (file_exists)
		return (1);
	else
		return (-1);
}
