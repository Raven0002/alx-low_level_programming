#include "main.h"

/**
 * create_file - function that creates file
 * @filename: name of file
 *
 * @text_content: content to write into file
 *
 * Return: 1, -1 if error
 */


int create_file(const char *filename, char *text_content)
{
	int i, j, fp;

	if (!filename)
		return (-1);
	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fp < 0)
		return (-1);
	if (!text_content)
	{
		close(fp);
		return (1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
		;
	j = write(fp, text_content, i);
	if (j < 0)
		return (-1);
	close(fp);
	return (1);
}
