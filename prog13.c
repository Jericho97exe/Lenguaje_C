#include <stdio.h>
#include <sys/stat.h>
int main() {
	const char *filename = "example.txt";
	// Change permissions to rw-r--r-- (644)
	if (chmod(filename, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH) == -1) {
		perror("Error changing file permissions");
		return 1;
	}
	printf("File permissions changed successfully.\n");
	return 0;
}
