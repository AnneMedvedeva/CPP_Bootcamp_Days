#include <Serialization.hpp>

Data	*deserialize(void *raw)
{
	return reinterpret_cast<Data*>(raw);
}

void	*serialize(void)
{
	std::srand(std::time(NULL));

	Data	*data = new Data;

	data->n = rand();
	for (int i = 0; i < 8; i++)
	{ 
		int r;
		r = rand() % 61;
		data->s1 += RAND_ARR[r];
		r = (rand() % 610) / 10;
		data->s2 += RAND_ARR[r];
	}
	return reinterpret_cast<void*>(data);
}

int	main()
{
	void	*test = serialize();
	Data	*data = deserialize(test);

	std::cout << "Rand s1: " << data->s1 << std::endl;
	std::cout << "Rand s2: " << data->s2 << std::endl;
	std::cout << "Rand n : " << data->n << std::endl;
	delete data;
}