#include <iostream>
#include <string>

using namespace std;
/*
int main(int argc, char ** argv){
	const char * hello = "¡Hello, World!";
	puts(hello);
	return 0;
}

int main(int argc, char ** argv){
	string hello = "¡Hello, World!";
	puts(hello.c_str());
	return 0;
}*/

int main(int argc, char ** argv){
	BWString hello = "¡Hello, World!";
	puts(hello.c_str());
	return 0;
}
