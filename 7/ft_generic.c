#include <unistd.h>

#define STRNSIZE(s) (s), (sizeof(s)-1)

void	ft_generic(void)
{
	write(1, STRNSIZE("Tut tut ; Tut tut\n"));
}
