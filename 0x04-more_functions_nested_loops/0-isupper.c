#include "main.h"

/**
 * _isupper - Check if a letter is upper
 * @l: The number to be checked
 * Return: 1 for upper letter or 0 for any else
 */

int _isupper(int l)
{
  if (l >= 65 && l <= 90)
  {
    return (1);
  }
  return (0);
}
