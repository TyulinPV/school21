static inline int	max(int l, int r)
{
	return (l > r ? l : r);
}

int					ft_max(int *tab, int length)
{
	int i;
	int result;

	if (tab && length > 0)
	{
		result = tab[0];
		i = -1;
		while ((i += 2) < length - 1)
			result = max(
				result, i + 1 < length ? max(tab[i], tab[i + 1]) : tab[i]);
	}
	else
		result = 0;
	return (result);
}
