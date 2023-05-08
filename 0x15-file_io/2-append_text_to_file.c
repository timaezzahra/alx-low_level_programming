#include "main.h"
/**
  * append_text_to_file - appends text at the end of a file.
  * @filename: the file name
  * @text_content: the txt content
  * Return: 1 on success and -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int let, nlet, wr;

	if (!filename)
		return (-1);
	let = open(filename, O_WRONLY | O_APPEND);
	if (let == -1)
		return (-1);
	if (text_content)
	{
		for (nlet = 0; text_content[nlet]; nlet++)
			wr = write(let, text_content, nlet);
		if (wr == -1)
			return (-1);
	}
	close(let);
	return (1);
}
