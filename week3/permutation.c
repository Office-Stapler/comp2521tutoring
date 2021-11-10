#include <stdio.h>
#include <stdlib.h>

int permute(char* strings[], int indexes[], int s1, int s2);

int main(void) {
    char* words[3] = {"cat", "dog", "mouse"};
    int indexes[3] = {2,3,1};
    permute(words, indexes, 3,3);
}

int permute(char* strings[], int indexes[], int s1, int s2) {
    /*     	
        for i = 1 up to n do // for each position i
    		for j = 0 up to n - 1 do // find the item that belongs at position i
    			if P[j] = i then
    				print A[j]
    				breal
    			end if
    		end for
    	end for 
    */
    char** temp = malloc(sizeof(char*) * s1);
    for (int i = 0; i < s2; ++i) {
        temp[indexes[i] - 1] = strings[i];
    }
    for (int i = 0; i < s2; ++i) {
        printf("%s\n", temp[i]);
    }
    free(temp);
}


