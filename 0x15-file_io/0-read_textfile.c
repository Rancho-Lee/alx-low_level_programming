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
	char buf;

	fd = open(filename, O_RDONLY);
	
	if (fd == -1)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}

	read(fd, buf, letters);
	buf[letters + 1] = '\0';
	
	close(fd);
}
