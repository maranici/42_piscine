#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// #include "stdio.h"
// int main(int ac, char **av){
// 	if (ac == 2){
// 		ft_putchar(*av[1]);
// 	}
// 	else {
// 		printf("%s", "Please enter one argument.");
// 	}
// }