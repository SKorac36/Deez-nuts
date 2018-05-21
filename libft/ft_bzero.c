void	ft_bzero(void *s, size_t n)
{
	unsigned char	*buff;
	size_t			i;

	buff = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		buff[i] = 0;
		i++;
	}
}
