#include <iostream>
#include "koder.h"
#include <cstring>
#include <cstdlib>
#include <ctime>

int main() {
	srand(time(NULL));

	packet test((uint16_t)16, (uint16_t)1, (uint16_t)strlen("Hello"), "Hello");

	const auto& p = test.get_packet();
	const auto len = p.header.len;

	for (uint16_t i = 0; i < p.header.len; ++i) {
		std::cout << p.data[i] << " ";
	}

	std::cout << std::endl;

	coder c(0x04 | 0x02);
	
	const auto& cp = c.get_coded_packet(test.get_packet());

	for (uint16_t i = 0; i < len; ++i) {
		std::cout <<cp.data[i] << " ";
	}

	return 0;
}