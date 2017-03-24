#include "Manager.h"

EngineManager::EngineManager() {

}

EngineManager::~EngineManager() {

}

void EngineManager::initEngine() {
	puts("Engine\n");
}

void EngineManager::initInstance() {
	fileSystemM.createInstance();
}

void EngineManager::starUpManager() {
	
	XboxOne.starUp();
	PlayStation3.starUp();
	PlayStation4.starUp();
	fileSystemM.starUp();
}

void EngineManager::shutDownManager() {
	XboxOne.shutDown();
	PlayStation4.shutDown();
	PlayStation3.shutDown();
	fileSystemM.shutDown();
}