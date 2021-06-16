#include <stdbool.h>
int pntr = 0; /* change later */

bool running = true;
typedef enum {
	LNE, 
	ADD, /* addition */
	PRN, /* on call print out */
	SET,
	STP /* stopping */
} InstrSet;

const int prgmm[] = {
	 LNE, 6,
	 LNE, 5,
	 ADD,
	 PRN,
	 STP
};

int fetch() {
	        return prgmm[pntr];
}

int main() {
	while (running) {
        	int inst = prgmm[pntr];
       		int a = fetch();
		pntr++;
		int b = fetch();
		if (a == STP) running = false;
		pntr++;
		
	}
}

