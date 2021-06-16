
int pntr = 0; /* change later */


typedef enum {
	LNE, 
	ADD, /* addition */
	PRN, /* on call print out */
	SET,
	STP /* stopping */
} InstrSet;

const int prgmm[] = {
	 LNE, 3,
	 LNE, 5,
	 ADD,
	 PRN,
	 STP
};


int main() {
        int inst = prgmm[pntr];
        return 0;
}

int fetch() {
        return prgmm[pntr];
}
