#include "main.h"

/**
 * read_textfile - writing a function that reads a text file
 * @filename : the filename
 * @size_t : size of the letters in file
 * Return: number of letters 
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	int s, t;

	if (filename == NULL)
	{
		return (0);
	}
	
	fd = open(filename, O_RDONLY);
	
	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);

	if (!buf)
	{
		return (0);
	}

	s = read(fd, buf, letters);
	if (s < 0)
	{
		free(buf);
		return (0);
	}
	buf[s] = '\0';
	close(fd);

	t = write(STDOUT_FILENO, buf, s);
	if (t < 0)
	{
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);
	return(t);
}