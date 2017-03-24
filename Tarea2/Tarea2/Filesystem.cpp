#include "Filesystem.h"
#include "PlayStation3.h"
#include "PlayStation4.h"
#include "XboxOne.h"

#define XBOXONE

Filesystem *Filesystem::Instance() {


	#ifdef XBOXONE
	static Filesystem* _instance = (Filesystem*)new XboxOne();
#endif


	return _instance;
}