#include "main.h"
/**
 * append_text_to_file - append a text to end of fiel
 * @filename : name of the file
 * @text_content : content of the text
 * Return: (0);
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, s, t;

	s = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[s])
			s++;
		t = write(fd, text_content, s);
	}

	close(fd);
	return (1);
}
