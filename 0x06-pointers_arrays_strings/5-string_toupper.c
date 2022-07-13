# include "main.h"
# include <ctype.h>

/**
 * *string_toupper - changes all lowercase letters to uppercase
 *
 * @*: String
 * Return: (none);
 */

char *string_toupper(char *)
{
	int i;
	int length = strlen(*);

	for (i = 0; i < length; i++)
		*[i] = toupper(*[i]);
}
