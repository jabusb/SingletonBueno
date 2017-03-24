#pragma once
#include "Filesystem.h"
#include <iostream>

using namespace std;

class XboxOne : public Filesystem {
public:
	string read(const std::string &filename) { return filename; };
	void write(const std::string &filename, const std::string &content) { };
	void test() { printf("\nSoy un XboxOne\n"); }

	XboxOne();
	~XboxOne();
	void starUp();
	void shutDown();
};

