#pragma once
template <typename T>
T Minimum(T First, T Second)
{
	return (First < Second) ? First : Second;
}

template<typename T>
int Minimum(int First, int Second)
{
	std::cout << "Dla typow int \n";
	return (First < Second) ? First : Second;
}


