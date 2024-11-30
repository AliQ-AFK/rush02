#include "rush.h"

void	ft_putstr(char *s)
{
	int	i;

	i = 1;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

void	ft_putstr1(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

#include "rush.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*dest_ptr;

	dest_ptr = dest;
	while (*src && n-- > 0)
		*dest++ = *src++;
	while (n-- > 0)
		*dest++ = '\0';
	return (dest_ptr);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (start);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	char	*dup_ptr;

	dup = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dup == NULL)
		return (NULL);
	dup_ptr = dup;
	while (*src) 
		*dup++ = *src++;
	*dup = '\0';
	return (dup_ptr);
}

char	*ft_strchr(char *delim, char c)
{
	while (*delim)
	{
		if (c == *delim)
			return (delim);
		delim++;
	}
	return (NULL);
}

char	*ft_strtok(char *str, char *delim)
{
	static char	*saved_str;
	char		*token_start;

	if (str != NULL)
		saved_str = str;
	if (saved_str == NULL)
		return (NULL);
	while (*saved_str && ft_strchr(delim, *saved_str)) 
		saved_str++;
	if (*saved_str == '\0')
		return (NULL);
	token_start = saved_str;
	while (*saved_str && !ft_strchr(delim, *saved_str))
		saved_str++;
	if (*saved_str)
		*saved_str++ = '\0';
	return (token_start);
}

