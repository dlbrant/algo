
#include <iostream>

#define MEASURE(T, text) {
	cout << text << "\t";	\
	cout << sizeof(T) << "\t";	\
	int lastp = 0;	\
	for (int i = 0; i < 11; i++) { 	\
		T *p = new T;	\
		int thisp = (int) p;	\
		if (lastp != 0) {	\
			cout << " " << thisp - lastp;	\
		}	\
		lastp = thisp;	\
	}
	cout << "\n";	\
}

void main() {
	MEASURE(int, "int");
	MEASURE(long, "long");
}

