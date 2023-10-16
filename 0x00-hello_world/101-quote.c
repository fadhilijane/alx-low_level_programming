#include <unistd.h>
#include <string.h>

/**
 * main - prints a sentence
 * Return: 1 to sstd error
 */

int main(void)
{
	const char *sentence = "and that piece of art is \
useful\" - Dora Korpar, 2015-10-19";
	size_t len = strlen(sentence);

	write(1, sentence, len);
	return (1);
}
