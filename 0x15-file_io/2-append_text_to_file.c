#include "main.h"

/**
 * Append_texte_to_file - Append texte at The end of  file.
 * @filename: A pointer to the name The File.
 * @text_content: The string to add at  the end of the file.
 *
 * Return: if  The Function fails or filename is NULL - -1.
 *         if  The File does not exist The user lack write permission - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
