// ==========================================================================================
// ==========================================================================================
// - File:    test.c
// - Purpose: Describe the file purpose here
//
// Source Metadata
// - Author:  Jonathan A. Webb
// - Date:    August 31, 2022
// - Version: 1.0
// - Copyright: Copyright 2022, Jon Webb Inc.
// ==========================================================================================
// ==========================================================================================
// Include modules here

#include "test_swap.h"

void test_swap_int8(void **state)
{
	(void) state;
	int8_t a = 5;
	int8_t b = 2;
	swap_int8(&a, &b);
	assert_int_equal(b, (int8_t)5);
	assert_int_equal(a, (int8_t)2);
}
// ------------------------------------------------------------------------------------------

void test_swap_uint8(void **state)
{
	(void) state;
	uint8_t a = 5;
	uint8_t b = 2;
	swap_uint8(&a, &b);
	assert_int_equal(b, (uint8_t)5);
	assert_int_equal(a, (uint8_t)2);
}
// ------------------------------------------------------------------------------------------

void test_swap_int16(void **state)
{
	(void) state;
	int16_t a = 5;
	int16_t b = 2;
	swap_int16(&a, &b);
	assert_int_equal(b, (int16_t)5);
	assert_int_equal(a, (int16_t)2);
}
// ------------------------------------------------------------------------------------------

void test_swap_uint16(void **state)
{
	(void) state;
	uint16_t a = 5;
	uint16_t b = 2;
	swap_uint16(&a, &b);
	assert_int_equal(b, (uint16_t)5);
	assert_int_equal(a, (uint16_t)2);
}
// ------------------------------------------------------------------------------------------

void test_swap_int32(void **state)
{
	(void) state;
	int32_t a = 5;
	int32_t b = 2;
	swap_int32(&a, &b);
	assert_int_equal(b, (int32_t)5);
	assert_int_equal(a, (int32_t)2);
}
// ------------------------------------------------------------------------------------------

void test_swap_uint32(void **state)
{
	(void) state;
	uint32_t a = 5;
	uint32_t b = 2;
	swap_uint32(&a, &b);
	assert_int_equal(b, (uint32_t)5);
	assert_int_equal(a, (uint32_t)2);
}
// ------------------------------------------------------------------------------------------

void test_swap_int64(void **state)
{
	(void) state;
	int64_t a = 5;
	int64_t b = 2;
	swap_int64(&a, &b);
	assert_int_equal(b, (int64_t)5);
	assert_int_equal(a, (int64_t)2);
}
// ------------------------------------------------------------------------------------------

void test_swap_uint64(void **state)
{
	(void) state;
	uint64_t a = 5;
	uint64_t b = 2;
	swap_uint64(&a, &b);
	assert_int_equal(b, (uint64_t)5);
	assert_int_equal(a, (uint64_t)2);
}
// ------------------------------------------------------------------------------------------

void test_swap_short(void **state)
{
	(void) state;
	short int a = 5;
	short int b = 2;
	SWAP(a, b);
	assert_int_equal(b, (short int)5);
	assert_int_equal(a, (short int)2);
}
// ------------------------------------------------------------------------------------------

void test_swap_ushort(void **state)
{
	(void) state;
	unsigned short int a = 5;
	unsigned short int b = 2;
	SWAP(a, b);
	assert_int_equal(b, (unsigned short int)5);
	assert_int_equal(a, (unsigned short int)2);
}
// ------------------------------------------------------------------------------------------

void test_swap_int(void **state)
{
	(void) state;
	int a = 5;
	int b = 2;
	SWAP(a, b);
	assert_int_equal(b, (int)5);
	assert_int_equal(a, (int)2);
}
// ------------------------------------------------------------------------------------------

void test_swap_uint(void **state)
{
	(void) state;
	unsigned int a = 5;
	unsigned int b = 2;
	SWAP(a, b);
	assert_int_equal(b, (unsigned int)5);
	assert_int_equal(a, (unsigned int)2);
}
// ------------------------------------------------------------------------------------------

void test_swap_long(void **state)
{
	(void) state;
	long int a = 5;
	long int b = 2;
	SWAP(a, b);
	assert_int_equal(b, (long int)5);
	assert_int_equal(a, (long int)2);
}
// ------------------------------------------------------------------------------------------

void test_swap_ulong(void **state)
{
	(void) state;
	unsigned long int a = 5;
	unsigned long int b = 2;
	SWAP(a, b);
	assert_int_equal(b, (unsigned long int)5);
	assert_int_equal(a, (unsigned long int)2);
}
// ------------------------------------------------------------------------------------------

void test_swap_llong(void **state)
{
	(void) state;
	long long int a = 5;
	long long int b = 2;
	SWAP(a, b);
	assert_int_equal(b, (long long int)5);
	assert_int_equal(a, (long long int)2);
}
// ------------------------------------------------------------------------------------------

void test_swap_ullong(void **state)
{
	(void) state;
	unsigned long long int a = 5;
	unsigned long long int b = 2;
	SWAP(a, b);
	assert_int_equal(b, (unsigned long long int)5);
	assert_int_equal(a, (unsigned long long int)2);
}
// ------------------------------------------------------------------------------------------

void test_swap_float(void **state)
{
	(void) state;
	float a = 5.2;
	float b = 2.2;
	SWAP(a, b);
	assert_float_equal(b, 5.2f, 1.0e-4);
	assert_float_equal(a, 2.2f, 1.0e-4);
}
// ------------------------------------------------------------------------------------------

void test_swap_double(void **state)
{
	(void) state;
	double a = 5.2;
	double b = 2.2;
	SWAP(a, b);
	assert_float_equal(b, 5.2, 1.0e-4);
	assert_float_equal(a, 2.2, 1.0e-4);
}
// ------------------------------------------------------------------------------------------

void test_swap_ldouble(void **state)
{
	(void) state;
	long double a = 5.2;
	long double b = 2.2;
	SWAP(a, b);
	assert_float_equal(b, (long double)5.2, 1.0e-4);
	assert_float_equal(a, (long double)2.2, 1.0e-4);
}
// ------------------------------------------------------------------------------------------

void test_swap_char(void **state)
{
	(void) state;
	char a = 'a';
	char b = 'b';
	SWAP(a, b);
	assert_int_equal(b, 'a');
	assert_int_equal(a, 'b');
}
// ------------------------------------------------------------------------------------------

void test_swap_bool(void **state)
{
	(void) state;
	bool a = true;
	bool b = false;
	SWAP(a, b);
	assert_int_equal(b, true);
	assert_int_equal(a, false);
}
// ==========================================================================================
// ==========================================================================================
// eof
