char	*ft_strnstr(char const *lrg, char const *sml, size_t len)
{
	if (!*lrg && !*lsml)
		return ("");
	while (*lrg)
	{
		if (len < strlen(sml))
			break ;
		if (ft_strlen(lrg) < ft_strlen(sml))
			break ;
		if (ft_memcmp(lrg, sml, ft_strlen(sml)) == 0)
			return ((char *)lrg);
		len--;
		lrg++;
	}
	return (NULL);
}
