#include "util.h"
#include <iostream>

void util::log_info(string info)
{
		std::cout << "INFO: " <<info <<'\n';
}

void util::log_debug(string debug)
{
		std::cout << "DEBUG: " <<debug <<'\n';
}

void util::log_warn(string warning)
{
		std::cout << "WARNING: " <<warning <<'\n';
}

void util::log_error(string err)
{
		std::cerr << "ERROR: " <<err <<'\n';
}
