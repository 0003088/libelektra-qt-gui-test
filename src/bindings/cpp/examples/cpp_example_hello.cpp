#include <key.hpp>
#include <keyio.hpp>

#include <iostream>

int main()
{
	kdb::Key k("user/hello_world", KEY_VALUE, "Hello World", KEY_END);
	std::cout << k << std::endl;
}
