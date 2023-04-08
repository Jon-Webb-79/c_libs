// ================================================================================
// ================================================================================
// - File:    print.c
// - Purpose: Describe the file purpose here
//
// Source Metadata
// - Author:  Jonathan A. Webb
// - Date:    April 08, 2023
// - Version: 1.0
// - Copyright: Copyright 2022, Jon Webb Inc.
// ================================================================================
// ================================================================================
// Include modules here

#include "print.h"

// Scalar print functions
void print_short(short x) { printf("%hd", x); }
void print_ushort(unsigned short x) { printf("%hu", x); }
void print_int(int x) { printf("%d", x); }
void print_uint(unsigned int x) { printf("%u", x); }
void print_long(long int x) { printf("%ld", x); }
void print_ulong(unsigned long int x) { printf("%lu", x); }
void print_llong(long long int x) { printf("%lld", x); }
void print_ullong(unsigned long long int x) { printf("%llu", x); }
void print_float(float x) { printf("%f", x); }
void print_double(double x) { printf("%lf", x); }
void print_longdouble(long double x) { printf("%Lf", x); }
void print_char(char x) { printf("%c", x); }
void print_uchar(unsigned char x) { printf("%hhu", x); }
void print_bool(bool x) { printf(x ? "true" : "false"); }
void print_string(char *x) { printf("%s", x); }
// ================================================================================
// ================================================================================
// Stack data structure functions

void print_vshort(Short x) {
	if (x.active_length == 0) {
		printf("[ NULL ]");
		return;
	}
	printf("[ ");
	size_t j = 0;
	for(size_t i = 0; i < x.active_length - 1; i++) {
		print_short(x.array[i]);
		printf(", ");
		j++;
		if (j == PRNT_LENGTH) {
			printf("\n");
			printf("  ");
			j = 0;
		}
	}
	print_short(x.array[x.active_length - 1]);
	printf(" ]");
}
// --------------------------------------------------------------------------------

void print_vushort(UShort x) {
	if (x.active_length == 0) {
		printf("[ NULL ]");
		return;
	}
	printf("[ ");
	size_t j = 0;
	for(size_t i = 0; i < x.active_length - 1; i++) {
		print_ushort(x.array[i]);
		printf(", ");
		j++;
		if (j == PRNT_LENGTH) {
			printf("\n");
			printf("  ");
			j = 0;
		}
	}
	print_ushort(x.array[x.active_length - 1]);
	printf(" ]");
}
// --------------------------------------------------------------------------------

void print_vint(Int x) {
	if (x.active_length == 0) {
		printf("[ NULL ]");
		return;
	}
	printf("[ ");
	size_t j = 0;
	for(size_t i = 0; i < x.active_length - 1; i++) {
		print_int(x.array[i]);
		printf(", ");
		j++;
		if (j == PRNT_LENGTH) {
			printf("\n");
			printf("  ");
			j = 0;
		}
	}
	print_int(x.array[x.active_length - 1]);
	printf(" ]");
}
// --------------------------------------------------------------------------------

void print_vuint(UInt x) {
	printf("[ ");
	size_t j = 0;
	for(size_t i = 0; i < x.active_length - 1; i++) {
		print_uint(x.array[i]);
		printf(", ");
		j++;
		if (j == PRNT_LENGTH) {
			printf("\n");
			printf("  ");
			j = 0;
		}
	}
	print_uint(x.array[x.active_length - 1]);
	printf(" ]");
}
// --------------------------------------------------------------------------------

void print_vlint(LInt x) {
	if (x.active_length == 0) {
		printf("[ NULL ]");
		return;
	}
	printf("[ ");
	size_t j = 0;
	for(size_t i = 0; i < x.active_length - 1; i++) {
		print_long(x.array[i]);
		printf(", ");
		j++;
		if (j == PRNT_LENGTH) {
			printf("\n");
			printf("  ");
			j = 0;
		}
	}
	print_long(x.array[x.active_length - 1]);
	printf(" ]");
}
// --------------------------------------------------------------------------------

void print_vulint(ULInt x) {
	if (x.active_length == 0) {
		printf("[ NULL ]");
		return;
	}
	printf("[ ");
	size_t j = 0;
	for(size_t i = 0; i < x.active_length - 1; i++) {
		print_ulong(x.array[i]);
		printf(", ");
		j++;
		if (j == PRNT_LENGTH) {
			printf("\n");
			printf("  ");
			j = 0;
		}
	}
	print_ulong(x.array[x.active_length - 1]);
	printf(" ]");
}
// --------------------------------------------------------------------------------

void print_vllint(LLInt x) {
	if (x.active_length == 0) {
		printf("[ NULL ]");
		return;
	}
	printf("[ ");
	size_t j = 0;
	for(size_t i = 0; i < x.active_length - 1; i++) {
		print_llong(x.array[i]);
		printf(", ");
		j++;
		if (j == PRNT_LENGTH) {
			printf("\n");
			printf("  ");
			j = 0;
		}
	}
	print_llong(x.array[x.active_length - 1]);
	printf(" ]");
}
// --------------------------------------------------------------------------------

void print_vullint(ULLInt x) {
	if (x.active_length == 0) {
		printf("[ NULL ]");
		return;
	}
	printf("[ ");
	size_t j = 0;
	for(size_t i = 0; i < x.active_length - 1; i++) {
		print_ullong(x.array[i]);
		printf(", ");
		j++;
		if (j == PRNT_LENGTH) {
			printf("\n");
			printf("  ");
			j = 0;
		}
	}
	print_ullong(x.array[x.active_length - 1]);
	printf(" ]");
}
// --------------------------------------------------------------------------------

void print_vfloat(Flt x) {
	if (x.active_length == 0) {
		printf("[ NULL ]");
		return;
	}
	printf("[ ");
	size_t j = 0;
	for(size_t i = 0; i < x.active_length - 1; i++) {
		print_float(x.array[i]);
		printf(", ");
		j++;
		if (j == PRNT_LENGTH) {
			printf("\n");
			printf("  ");
			j = 0;
		}
	}
	print_float(x.array[x.active_length - 1]);
	printf(" ]");
}
// --------------------------------------------------------------------------------

void print_vdble(Dble x) {
	if (x.active_length == 0) {
		printf("[ NULL ]");
		return;
	}
	printf("[ ");
	size_t j = 0;
	for(size_t i = 0; i < x.active_length - 1; i++) {
		print_double(x.array[i]);
		printf(", ");
		j++;
		if (j == PRNT_LENGTH) {
			printf("\n");
			printf("  ");
			j = 0;
		}
	}
	print_double(x.array[x.active_length - 1]);
	printf(" ]");
}
// --------------------------------------------------------------------------------

void print_vldble(LDble x) {
	if (x.active_length == 0) {
		printf("[ NULL ]");
		return;
	}
	printf("[ ");
	size_t j = 0;
	for(size_t i = 0; i < x.active_length - 1; i++) {
		print_longdouble(x.array[i]);
		printf(", ");
		j++;
		if (j == PRNT_LENGTH) {
			printf("\n");
			printf("  ");
			j = 0;
		}
	}
	print_longdouble(x.array[x.active_length - 1]);
	printf(" ]");
}
// --------------------------------------------------------------------------------

void print_achar(Char x) {
	if (x.active_length == 0) {
		printf("[ NULL ]");
		return;
	}
	printf("[ ");
	size_t j = 0;
	for(size_t i = 0; i < x.active_length - 1; i++) {
		print_char(x.array[i]);
		printf(", ");
		j++;
		if (j == PRNT_LENGTH) {
			printf("\n");
			printf("  ");
			j = 0;
		}
	}
	print_char(x.array[x.active_length - 1]);
	printf(" ]");
}
// --------------------------------------------------------------------------------

void print_vbool(Bool x) {
	if (x.active_length == 0) {
		printf("[ NULL ]");
		return;
	}
	printf("[ ");
	size_t j = 0;
	for(size_t i = 0; i < x.active_length - 1; i++) {
		print_bool(x.array[i]);
		printf(", ");
		j++;
		if (j == PRNT_LENGTH) {
			printf("\n");
			printf("  ");
			j = 0;
		}
	}
	print_bool(x.array[x.active_length - 1]);
	printf(" ]");
}
// --------------------------------------------------------------------------------

void print_vstring(String x) {
	if (x.active_length == 0) {
		printf("[ NULL ]");
		return;
	}
	printf("[ ");
	size_t j = 0;
	for(size_t i = 0; i < x.active_length - 1; i++) {
		print_string(x.array[i]);
		printf(", ");
		j++;
		if (j == PRNT_LENGTH) {
			printf("\n");
			printf("  ");
			j = 0;
		}
	}
	print_string(x.array[x.active_length - 1]);
	printf(" ]");
}
// ================================================================================
// ================================================================================
// eof
