#include <stdio.h>
#include <ctype.h>
#include <assert.h>
#include <stdbool.h>

void q1_1(char ch);
void q1_2(char ch);
void q3(char ch);
void q4();
void q5();
char* numToDay(int n);
bool isSorted(int *a, int n);

int main(void) {
    
}

void q1_1(char ch) {
    switch (ch) {
        case 'a': printf("eh? "); break;
        case 'e': printf("eee "); break;
        case 'i': printf("eye "); break;
        case 'o': printf("ohh "); break;
        case 'u': printf("you "); break;
    }
    printf("\n");
}

void q1_2(char ch) {
    switch (ch) {
        case 'a': printf("eh? ");
        case 'e': printf("eee ");
        case 'i': printf("eye ");
        case 'o': printf("ohh ");
        case 'u': printf("you ");
    }
    printf("\n");
}

char* numToDay(int n) {
	assert(0 <= n && n <= 6);
	char *day;
	if (n == 0) {
		day = "Sun";
	} else if (n == 1) {
		day = "Mon";
	} else if (n == 2) {
		day = "Tue";
	} else if (n == 3) {
		day = "Wed";
	} else if (n == 4) {
		day = "Thu";
	} else if (n == 5) {
		day = "Fri";
	} else if (n == 6) {
		day = "Sat";
	}
	return day;
}

void q3(char ch) {
    switch (ch) {
    	case 'a':
    	case 'e':
    	case 'i':
    	case 'o':
    	case 'u':
    		printf("vowel"); break;
    	default:
    		printf("consonant"); break;
    }
}

void q4() {
    int ch = getchar();
    char *type;
    if (isdigit(ch)) {
        type = "digit";
    } else {
        type = "non-digit";
    }
    
    printf("'%c' is a %s\n", ch, type);
}

void q5() {
    for (char ch = getchar(); ch != EOF; ch = getchar()) {
        putchar(ch);
    }
}

bool isSorted(int *a, int n) {
    
    return true;
}