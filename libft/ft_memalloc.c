#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*str;
	str = (void*)malloc(sizeof(void*) *size);
	if (str == NULL)
		return(NULL);
	ft_bzero(str, size);
	return(str);
}
int		main(int argc, const char *argv[])
{
	char	*str;

	alarm(5);
	if (argc == 1)
		return (0);
	else if (atoi(argv[1]) == 1)
	{
		str = (char *)ft_memalloc(30);
		if (!str)
			write(1, "NULL", 4);
		else
			write(1, str, 30);
	}
	return (0);
}

