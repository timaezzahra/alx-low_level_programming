#include "main.h"

/**
  * error_file - if files can be opened
  * @file_from: file from
  * @file_to: file to
  * @argv: arg
  * Return: void
  */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
  * main - to check the code
  * @argc: nbr of arg
  * @argv: arg vector
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	int file_from, file_to, err;
	ssize_t nr, wr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);
	nr = 1024;
	while (nr == 1024)
	{
		nr = read(file_from, buf, 1024);
		if (nr == -1)
			error_file(-1, 0, argv);
		wr = write(file_to, buf, nr);
		if (wr == -1)
			error_file(0, -1, argv);
	}
	err = close(file_from);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}

