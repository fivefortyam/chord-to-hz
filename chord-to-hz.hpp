//chord-to-hz
#include <iostream>
#include <math.h>
#define MINOR_SECOND_TET 1.05946309436
#define MINOR_SECOND_JI 1.06666666667
#define MAJOR_SECOND_TET 1.12246204831
#define MAJOR_SECOND_JI 1.125
#define MINOR_THIRD_TET 1.189207115
#define MINOR_THIRD_JI 1.18518518519
#define MAJOR_THIRD_TET 1.25992104989
#define MAJOR_THIRD_JI 1.265625
#define FOURTH_TET 1.33483985417
#define FOURTH_JI 1.33333333333
#define TRITONE_TET 1.41421356237
#define TRITONE_JI 1.40466392318
#define FIFTH_TET 1.49830707688
#define FIFTH_JI 1.5
#define MINOR_SIXTH_TET 1.58740105197
#define MINOR_SIXTH_JI 1.58024691358
#define MAJOR_SIXTH_TET 1.68179283051
#define MAJOR_SIXTH_JI 1.6875
#define MINOR_SEVENTH_TET 1.78179743628
#define MINOR_SEVENTH_JI 1.77777777778
#define MAJOR_SEVENTH_TET 1.88774862536
#define MAJOR_SEVENTH_JI 1.8984375
double* maj(double root, bool tet) {
	double chord[3];
	chord[0] = root;
	if (tet == true) {
		chord[1] = root * MAJOR_THIRD_TET;
		chord[2] = root * FIFTH_TET;
	}
	if (tet == false) {
		chord[1] = root * MAJOR_THIRD_JI;
		chord[2] = root * FIFTH_JI;
	}
}

double* min(double root, bool tet) {
	double chord[3];
	chord[0] = root;
	if (tet == true) {
		chord[1] = root * MINOR_THIRD_TET;
		chord[2] = root * FIFTH_TET;
	}
	if (tet == false) {
		chord[1] = root * MINOR_THIRD_JI;
		chord[2] = root * FIFTH_JI;
	}
}

double* dim(double root, bool tet) {
	double chord[3];
	chord[0] = root;
	if (tet == true) {
		chord[1] = root * MINOR_THIRD_TET;
		chord[2] = root * TRITONE_TET;
	}
	if (tet == false) {
		chord[1] = root * MINOR_THIRD_JI;
		chord[2] = root * TRITONE_JI;
	}
}

double* aug(double root, bool tet) {
	double chord[3];
	chord[0] = root;
	if (tet == true) {
		chord[1] = root * MAJOR_THIRD_TET;
		chord[2] = root * MINOR_SIXTH_TET;
	}
	if (tet == false) {
		chord[1] = root * MINOR_THIRD_JI;
		chord[2] = root * MINOR_SIXTH_JI;
	}
}
