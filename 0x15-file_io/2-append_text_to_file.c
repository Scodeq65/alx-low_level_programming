#include "main.h"

/**
 * append_text_to_file - add text to an already existing file
 * @filename: the name of the file to append content to
 * @text_content: content to be appended to the file
 *
 * Return: 1 0n success and -1 if failed.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fld;
	int numlt;
	int rwr;

	if (!filename)
		return (-1);

	fld = open(filename, O_WRONLY | O_APPEND);

		if (fld == -1)
			return (-1);

	if (text_content)
	{
		for (numlt = 0; text_content[numlt]; numlt++)
			;
		rwr = write(fld, text_content, numlt);

		if (rwr == -1)
			return (-1);
	}
	close(fld);

	return (1);
}
