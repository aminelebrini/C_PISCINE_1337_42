char	*ft_strcpy(char *dest, char *src)
{
	int	j;

	j = 0;
	while (src[j] != '\0')
	{
		dest[j] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
