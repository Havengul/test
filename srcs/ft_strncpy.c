#include "../includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && len > 0)
	{
		dst[i] = src[i];
		i++;
		len--;
	}
	if (len > 0)
	{
		while (len > 0)
		{
			dst[i] = '\0';
			i++;
			len--;
		}
	}
	return (dst);
}
