#include "libft.h"
#include "get_next_line.h"

static char	*readed(const int fd, char *buff, int *ret)
{
	char tmp;
	char tmp2;

	*ret = read(fd, tmp, BUFF_SIZE);
	tmp[*ret] = '\0';
	tmp2 = buff;
	if (!(buff = ft_strjoin(buff, tmp)))
		return (NULL);
	ft_strdel (&tmp2);
	return (buff); 
}

int		ended(char **line, char **buff)
{	
	
	if (!(*line = ft_strdup(*buff)))
		return (-1);
	ft_memset(*buff, 48, ft_strlen(*buff));
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char	*buff;
	int		ret;
	char		*str;

	buff = "";
	ret = 1;
	if (fd < 0 || !line)
		return (-1);
	while (ret > 0)
	{
		if ((str = ft_strchr(buff, '\n')) != NULL)
		{
			*str = '\0';
			if (*line = buff)
				return (-1);
			ft_memmove(buff, str + 1, ft_strlen(str + 1) + 1);
			return (1);
		}
		if (!(buff = readed(fd, buff, &ret)))
			return (-1);
	}
	ft_strdel(str);
	if (ret == 0  && ft_strlen(buff))
		ret = ended(&(*line), *buff);
	return (ret);	
}

int	main()
{
	return (0);
}

