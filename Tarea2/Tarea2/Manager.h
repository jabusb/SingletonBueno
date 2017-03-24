#pragma once
#include "FileSystemM.h"
#include "PlayStation3.h"
#include "PlayStation4.h"
#include "XboxOne.h"

class EngineManager {
private:



	PlayStation4 PlayStation4;
	XboxOne XboxOne;
	FileSystemM fileSystemM;
	PlatStation3 PlayStation3;

public:
	EngineManager();
	~EngineManager();

	void initEngine();
	void initInstance();
	void starUpManager();
	void shutDownManager();
};