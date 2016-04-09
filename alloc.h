
#ifndef __ALLOC_H__
#define __ALLOC_H__

#include <iostream>
using namespace std;

#define MEASURE(T, text) {	           	\
        cout << text << "\t";   		\   
        cout << sizeof(T) << "\t"; 		\   
        long lastp = 0;  				\
        for (int i = 0; i < 11; i++) {  \
                T *p = new T;   		\   
                long thisp = (long) p;    \   
                if (lastp != 0) {       \   
                        cout << " " << thisp - lastp;   \   
                }       				\   
                lastp = thisp;  		\
        }   							\
        cout << "\n";   				\   
}

struct dc { double d; char c; };
struct c12 { char c[12]; };
struct ip { int i; ip *p; };
struct ms { long l; long other; int i; };

#endif //__ALLOC_H__
