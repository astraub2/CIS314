#include <stdio.h>

int main() {
	unsigned int rgba = 0x11223344;

	printf("rgba: 0x%X\n", rgba);

	// same as rgba & 0x00000000FF
	unsigned int a = rgba & 0xFF;

	printf("a: 0x%X\n", a);

	unsigned int rgb = rgba >> 8;

	printf("rgb: 0x%X\n", rgb);

	unsigned int argb = (a << 24) | rgb;

	printf("argb: 0x%X\n", argb);
}