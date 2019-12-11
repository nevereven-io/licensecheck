#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	if (argc == 2){
		printf("Checking license key...\n");
		printf("%s", argv[1]);
		if (strcmp(argv[1], "AAA-123-KEY") == 0){
			printf("License key accepted\n");
		} else {
			fprintf(stderr, "license key is WRONG!\n");
		}
	} else {
		fprintf(stderr, "Usage: %s <KEY>\n", argv[0]);
	}
}
