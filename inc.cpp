#include "wasm-tricks.hpp"


import void console_log(uint32_t value);


private uint32_t dec(uint32_t x) {
	return x - 1;
}


public uint32_t inc(uint32_t x) {
	return dec(x) + 2;
}


public void test(uint32_t value) {
	console_log(value);
}