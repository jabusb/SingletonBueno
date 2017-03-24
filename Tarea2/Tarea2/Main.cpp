#include "stdafx.h"
#include <vector>
#include <stdio.h>


#include "FileSystemM.h"
#include "PlayStation3.h"
#include "PlayStation4.h"
#include "XboxOne.h"

PlayStation4 PlayStation4;
XboxOne XboxOne;
FileSystemM fileSystemM;
PlatStation3 PlayStation3;

bool isExit;

int main() {
	XboxOne.starUp();
	PlayStation3.starUp();
	PlayStation4.starUp();
	fileSystemM.starUp();

	isExit = true;
	while (!isExit) {
}

	XboxOne.shutDown();
	PlayStation4.shutDown();
	PlayStation3.shutDown();
	fileSystemM.shutDown();
	getchar();
    return 0;
}