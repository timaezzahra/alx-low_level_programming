#include "main.h"

/**
  * create_file - a function that creates a file.
  * @filename: the file name
  * @text_content: the txt content
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int let, nlet, wr;

	if (!filename)
		return (-1);
	let = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0700);
	if (let == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (nlet = 0; text_content[nlet]; nlet++)
		;
	wr = write(let, text_content, nlet);
	if (wr == -1)
		return (-1);
	close(let);
	return (1);
}
