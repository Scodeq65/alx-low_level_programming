#include "main.h"

/**
 * create_file - a function that create
 * and write to a file
 *
 * @filename: the file name to be created.
 * @text_content: the content to be copied into the file
 * Return: 1 if successful or -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int fld;
	int numlt;
	int rwr;

	if (!filename)
		return (-1);

	fld = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);

	if (fld == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (numlt = 0; text_content[numlt]; numlt++)
		;
	rwr = write(fld, text_content, numlt);

	if (rwr == -1)
		return (-1);
	close(fld);

	return (1);
}
