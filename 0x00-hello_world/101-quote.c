#include <unistd.h>
#include <string.h>

/**
 * main - prints a sentence
 * Return: 1 to sstd error
 */

int main(void)
{
	const char *sentence;
	size_t len;

	sentence = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	len = strlen(sentence);
	write(STDOUT_FILENO, sentence, len);
	return (1);
}
