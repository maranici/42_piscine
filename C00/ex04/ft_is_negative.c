#include "unistd.h"

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}

// #include "stdlib.h"
// #include "stdio.h"
// int main(int ac, char **av){
//     if (ac == 2) {
//         ft_is_negative(atoi(av[1]));
//     }
//     else {
//         printf("%s", "Please enter one argument.");
//     }
// }