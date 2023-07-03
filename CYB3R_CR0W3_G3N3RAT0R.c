#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define flag ""

static char *rand_string(char *str, int size) {
    if (size) {
        --size;
        for (int n = 0; n < size; n++) {
            str[n] =  rand() %  (122 - 33 + 1) + 33;
        }
        str[size] = '\0';
    }
    return str;
}

// SECRET XOR FUNCTION
char* encryption(char* data, char* key, int dataLen, int keyLen) {
	char* output = (char*)malloc(sizeof(char) * dataLen);
	for (int i = 0; i < dataLen; ++i) {
		output[i] = data[i] ^ key[i % keyLen];
	}
	return output;
}

int main() {
    char sec[49] = "> Give us an input and we will give you the flag";

    printf("%s\n", ascii_art);
    printf("%s%s\n", text,sec);

    int keyLen = strlen(text);
    srand(time(NULL));
    char string[5], string2[5],string3[5];

    int count = 0;
    while(1){
        printf("c̲r̲3 >");
        while(getchar()!='\n');
            printf("\nFlag: cybersoc{%s_%s_%s}\n\n", rand_string(string,5),rand_string(string2,5),rand_string(string3,5));
        count++;
    }

    return 0;
}