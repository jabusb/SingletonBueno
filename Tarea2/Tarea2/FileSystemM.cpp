#include "FileSystemM.h"

FileSystemM::FileSystemM() {

}

FileSystemM::~FileSystemM() {

}

void FileSystemM::starUp() {
	puts("Se ha ejecutado FileSystemManager correctamente");
}

void FileSystemM::shutDown() {
	puts("Se ha cerrado FileSystemManager");
}

void FileSystemM::createInstance() {
	Filesystem *myFile = Filesystem::Instance(); 
	myFile->test();
	printf("\n%s\n", myFile->read("Holis\n").c_str()); 
}
