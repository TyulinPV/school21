int		ft_antidote(int i, int j, int k)
{
	if ((j <= i && i <= k) || (k <= i && i <= j))
		return (i);
	if ((i <= j && j <= k) || (k <= j && j <= i))
		return (j);
	return (k);
}
