1 #include <unistd.h>
  2 
  3 /**
  4  * _putchar - writes the character c to stdout
  5  * @c: char to be printed 
  6  * Return: 1 on succes
  7  */
  8 
  9 int _putchar(char c)
 10 {
 11         return (write(1, &c, 1));
 12 }
