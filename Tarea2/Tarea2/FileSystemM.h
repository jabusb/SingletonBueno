#pragma once
#include "Filesystem.h"
#include <iostream>

class FileSystemM {
public:
	FileSystemM();
	~FileSystemM();

	void starUp();
	void shutDown();

	void createInstance();
};