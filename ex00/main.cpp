#include "BitcoinExchange.hpp"

int main(int ac , char *av[])
{
	(void)av;
	if (ac != 2)
	{
		std::cerr << "File Not Open" << std::endl;
		return (EXIT_FAILURE);
	}
	Btc btc;

	btc.readInput(av[1]);
}