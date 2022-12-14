#include "main.h"
/**
 * create_file - create a file
 * @filename : name of file
 * @text_content: content in text
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int s, t;

	s = 0;

	if (!filename)
		return (-1);


	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[s])
			s++;
		t = write(fd, text_content, s);
		if (t != s)
			return (-1);
	}

	close(fd);
	return (1);
}
