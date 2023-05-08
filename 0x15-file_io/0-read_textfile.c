#include "main.h"

/**
  * read_textfile - reads a text file
  * and prints it to the POSIX standard output.
  * @filename: the file name
  * @letters: letters printed
  * Return: the actual number of letters it could read and print
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int let;
	char *bfr;
	ssize_t rd, wr;

	if (!filename)
		return (0);
	let = open(filename, O_RDONLY);
	if (let == -1)
		return (0);
	bfr = malloc(sizeof(char) * (letters));
	if (!bfr)
		return (0);
	rd = read(let, bfr, letters);
	wr = write(STDOUT_FILENO, bfr, rd);
	close(let);
	free(bfr);
	return (wr);
}





