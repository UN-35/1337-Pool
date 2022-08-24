#include<unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 0;
	while (a < 8)
	{
		b = a + 1;
		while (b < 9)
		{
			c = b + 1;
			while (c < 10)
			{
				write (1, &a, 1);
				write (1, &b, 1);
				write (1, &c, 1);
				
				c++;
			}
			b++;
		}
		a++;
	}
}

int main(){
	ft_print_comb();
}
