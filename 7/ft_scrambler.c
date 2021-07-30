void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int e;
	int f;

	e = *******c;
	*******c = ***a;
	f = ****d;
	****d = e;
	e = *b;
	*b = f;
	***a = e;
}
