#include "libft.h"

void static		print(char c, int fd)
{
	write(fd, &c, 1);
}

void			ft_putchar_fd(wchar_t c, int fd)
{
	if (c <= 0x7F)
		print(c, fd);
	else if (c <= 0x7FF)
	{
		print(((c >> 6) + 0xC0), fd);
		print(((c & 0x3F) + 0x80), fd);
	}
	else if (c <= 0xFFFF)
	{
		print(((c >> 12) + 0xE0), fd);
		print((((c >> 6) & 0x3F) + 0x80), fd);
		print(((c & 0x3F) + 0x80), fd);
	}
	else if (c <= 0x10FFFF)
	{
		print(((c >> 18) + 0xF0), fd);
		print((((c >> 12) & 0x3F) + 0x80), fd);
		print((((c >> 6) & 0x3F) + 0x80), fd);
		print(((c & 0x3F) + 0x80), fd);
	}
}
