#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename
 *
 * @text_content: text content
 *
 * Return: result
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, fp;

	if (!filename)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
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
