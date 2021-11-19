#ifdef TEST

#include "unity.h"

#include "control.h"

#include <stdio.h>
#include <string.h>

void setUp(void)
{
}

void tearDown(void)
{
}


void test_Basic_Validity(void)
{
    TEST_ASSERT_TRUE(0==0);
	TEST_ASSERT_FALSE(0==1);
	TEST_ASSERT(1==1);
	TEST_ASSERT_UNLESS(0==1);
}

void test_Fail(void)
{
	TEST_FAIL_MESSAGE("Fail occured");
    TEST_FAIL();
}

void test_signedIteger_Validity(void)
{
    TEST_ASSERT_EQUAL_INT(-5, -5);
    TEST_ASSERT_EQUAL_INT8(5, 5);
    TEST_ASSERT_EQUAL_INT16(500, 500);
    TEST_ASSERT_EQUAL_INT32(-5000, -5000);
	/*
	Varsayılan olarak desteklenmiyor. project.yml dosyasına aşağıdaki kod parçacığı eklenerek
	64 bit desteği aktifleştirildi.
	
	:unity:
       :defines:
          - UNITY_SUPPORT_64
	*/
    TEST_ASSERT_EQUAL_INT64(500000, 500000); 
}

void test_unsignedIteger_Validity(void)
{
   TEST_ASSERT_EQUAL_UINT(2, 2);
   TEST_ASSERT_EQUAL_UINT8(2, 2);
   TEST_ASSERT_EQUAL_UINT16(400, 400);
   TEST_ASSERT_EQUAL_UINT32(40000, 40000);
   TEST_ASSERT_EQUAL_UINT64(400000, 400000); 
}

void test_Hex_Validity(void)
{
   TEST_ASSERT_EQUAL_HEX(0x10, 0x10);
   TEST_ASSERT_EQUAL_HEX8(0xFF, 0xFF);
   TEST_ASSERT_EQUAL_HEX16(0xFFFF, 0xFFFF);
   TEST_ASSERT_EQUAL_HEX32(0xFFFFFFFF, 0xFFFFFFFF);
   TEST_ASSERT_EQUAL_HEX64(0xFFFFFFFFFFFFFFFF, 0xFFFFFFFFFFFFFFFF); 
}

void test_Equal_Validity(void)
{
   TEST_ASSERT_EQUAL(1, 1);
}

void test_Int_WithIn_Validity(void)
{
   TEST_ASSERT_INT_WITHIN(1, 10, 9);
}

void test_Boundary_Validity(void)
{
   TEST_ASSERT_GREATER_THAN(10, 11);
   TEST_ASSERT_LESS_THAN(10, 8);
}

void test_String_Validity(void)
{
  TEST_ASSERT_EQUAL_STRING("aliozan", "aliozan");
  TEST_ASSERT_EQUAL_STRING_LEN("aliozan", "ali", 3);
  TEST_ASSERT_EQUAL_STRING_LEN("aliozan", "aliozan", 0);
}

void test_Float_WithIn_Validity(void)
{
   TEST_ASSERT_FLOAT_WITHIN(0.1f, 2.2f, 2.23f);
}

void test_Float_Equal_Validity(void)
{
   TEST_ASSERT_EQUAL_FLOAT(0.1f, 0.1f);
}

void test_Double_WithIn_Validity(void)
{
	/*
	Varsayılan olarak desteklenmiyor. project.yml dosyasına aşağıdaki kod parçacığı eklenerek
	Double desteği aktifleştirildi.
	
	:unity:
       :defines:
          - UNITY_INCLUDE_DOUBLE
	*/
   TEST_ASSERT_DOUBLE_WITHIN(0.1, 2.2, 2.23);
}

void test_Double_Equal_Validity(void)
{
   TEST_ASSERT_EQUAL_DOUBLE(0.1, 0.1);
}

void test_Pointer_Validity(void)
{
	int x;
	int* xptr = &x;
    TEST_ASSERT_NULL(NULL);
	TEST_ASSERT_NOT_NULL(xptr);
	TEST_ASSERT_EQUAL_PTR(&x,xptr);
}

void test_Memory_Validity(void)
{
	uint8_t ones[] = {1,1,1,1,1};
	uint8_t buffer[5];
	
	memset(buffer,1,5);
	TEST_ASSERT_EQUAL_MEMORY(ones,buffer,5);
	
}

typedef struct
{
	int x;
	int y;
}myStruct;

void clearStruct(myStruct *data)
{
	data->x=0;
	data->y=0;
}

void test_Struct_Validity(void)
{
	myStruct my;
	myStruct yours;
	myStruct *others;
	clearStruct(&my);
	clearStruct(&yours);
	
	others = &my;
	
	TEST_ASSERT_EQUAL_INT(0,my.x);
	TEST_ASSERT_EQUAL_INT(0,my.y);
	TEST_ASSERT_EQUAL_MEMORY(&my,&yours,sizeof(myStruct));
	TEST_ASSERT_EQUAL_PTR(&my,others);
}

void test_Array_Validity(void)
{
	uint8_t expected[] = {1,2,3,4,5};
	uint8_t actual[] = {1,2,3,4,5};
	
	TEST_ASSERT_EQUAL_UINT8_ARRAY(expected, actual, sizeof(expected));
	TEST_ASSERT_EQUAL_MEMORY_ARRAY(expected, actual, sizeof(expected), 1);
}

void test_Bitwise_Validity(void)
{
     TEST_ASSERT_BITS(0x10, 0x30, 0x15);
	 TEST_ASSERT_BITS_HIGH(0b10000001, 0b10000001);
	 TEST_ASSERT_BITS_LOW(0b10000001, 0b00000000);
	 TEST_ASSERT_BIT_HIGH(0, 0b00000001);
	 TEST_ASSERT_BIT_LOW(0, 0b00000000);
}

void test_Ignore_Validity(void)
{
    TEST_IGNORE_MESSAGE("TEST IGNORE");
	TEST_IGNORE();
}

void test_ExtraMessage_Validity(void)
{
    TEST_ASSERT_EQUAL_HEX_MESSAGE(0x10, 0x11, "Error");
}



#endif // TEST
