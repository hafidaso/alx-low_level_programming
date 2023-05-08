#include "main.h"

/**
 *append_text_to_file - appends text at the end of file
 *@filename: the name of the file
 *@text_content: the text to add at the end of the file
 *Return: 1 on success else -1 is returned
 */

int append_text_to_file(const char *filename, char *text_content)
{
    int fd, res;
    ssize_t length = 0;

    if (filename == NULL)
        return (-1);

    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return (-1);

    if (text_content != NULL)
    {
        while (text_content[length])
            length++;

        res = write(fd, text_content, length);
        if (res == -1)
        {
            close(fd);
            return (-1);
        }
    }

    close(fd);
    return (1);
}
