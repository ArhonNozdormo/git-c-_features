#include <iostream>

#define cin		std::cin
#define cout	std::cout
#define endl	std::endl

template <typename T, size_t Len>
constexpr size_t lenght(T(&)[Len]) noexcept;

int main() {
	
	int x[5];
	double y[12];

	cout << "Array x lenght: " << lenght(x) << endl;

	cout << "Array y lenght: " << lenght(y) << endl;

	cin.get();
	return EXIT_SUCCESS;
}

template <typename T, size_t Len>
constexpr size_t lenght(T(&)[Len]) noexcept {
	return Len;
}
