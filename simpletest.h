#include <stdio.h>
#include <stdlib.h>

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

void DESCRIBE(char* text);
void WHEN(char* text);
void IF(char* text);
void THEN(char* text);

void DESCRIBE(char* text) {
	printf("%s-- %s --%s\n",KCYN, text, KNRM);
}

void WHEN(char* text) {
	printf("%s  when:%s %s\n",KYEL, KNRM, text);
}

void IF(char* text) {
	printf("%s    if:%s %s\n",KYEL, KNRM, text);
}

void THEN(char* text) {
	printf("%s      then:%s %s\n",KYEL, KNRM, text);
}

void isNull(void* ptr) {
	if (ptr == NULL) {
		printf("%s        PASSED!\n%s", KGRN, KNRM);
	} else {
		printf("%s        NOT PASSED!\n        pointer is not null%s\n", KRED, KNRM);
	}
}

void isNotNull(void * ptr) {
	if (ptr != NULL) {
                printf("%s        PASSED!\n%s", KGRN, KNRM);
        } else {
                printf("%s        NOT PASSED!\n        pointer is not null%s\n", KRED, KNRM);
        }
}

void isGreaterThan(int num, int value) {

	if (num > value) {
		printf("%s        PASSED!\n%s", KGRN, KNRM);
	} else {
		printf("%s        NOT PASSED!\n        got: %d > %d %s\n", KRED, num, value, KNRM);
	}
}

void isEqual(int num, int value) {
	if (num == value) {
		printf("%s        PASSED!\n%s", KGRN, KNRM);
	} else {
		printf("%s        NOT PASSED!\n        got: %d == %d %s\n", KRED, num, value, KNRM);
	}
}

void isNotEqual(int num, int value) {
	if (num != value) {
		printf("%s        PASSED!\n%s", KGRN, KNRM);
	} else {
		printf("%s        NOT PASSED!\n        got: %d != %d %s\n",KRED, num, value, KNRM);
	}
}

void isLesserThan(int num, int value) {
	if (num < value) {
		printf("%s        PASSED!\n%s", KGRN, KNRM);
	} else {
		printf("%s        NOT PASSED!\n        got: %d < %d %s\n",KRED, num, value, KNRM);
	}
}
