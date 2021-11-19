#include "src/control.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.0/vendor/unity/src/unity.h"














void setUp(void)

{

}



void tearDown(void)

{

}





void test_Basic_Validity(void)

{

    do {if ((0==0)) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(21)));}} while(0);

 do {if (!(0==1)) {} else {UnityFail( ((" Expected FALSE Was TRUE")), (UNITY_UINT)((UNITY_UINT)(22)));}} while(0);

 do {if ((1==1)) {} else {UnityFail( ((" Expression Evaluated To FALSE")), (UNITY_UINT)((UNITY_UINT)(23)));}} while(0);

 do {if (!(0==1)) {} else {UnityFail( ((" Expression Evaluated To TRUE")), (UNITY_UINT)((UNITY_UINT)(24)));}} while(0);

}



void test_Fail(void)

{

 UnityFail( (("Fail occured")), (UNITY_UINT)(29));

    UnityFail( (

   ((void *)0)

   ), (UNITY_UINT)(30));

}



void test_signedIteger_Validity(void)

{

    UnityAssertEqualNumber((UNITY_INT)((-5)), (UNITY_INT)((-5)), (

   ((void *)0)

   ), (UNITY_UINT)(35), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT8 )((5)), (UNITY_INT)(UNITY_INT8 )((5)), (

   ((void *)0)

   ), (UNITY_UINT)(36), UNITY_DISPLAY_STYLE_INT8);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((500)), (UNITY_INT)(UNITY_INT16)((500)), (

   ((void *)0)

   ), (UNITY_UINT)(37), UNITY_DISPLAY_STYLE_INT16);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT32)((-5000)), (UNITY_INT)(UNITY_INT32)((-5000)), (

   ((void *)0)

   ), (UNITY_UINT)(38), UNITY_DISPLAY_STYLE_INT32);

    UnityAssertEqualNumber((UNITY_INT)((500000)), (UNITY_INT)((500000)), (

   ((void *)0)

   ), (UNITY_UINT)(47), UNITY_DISPLAY_STYLE_INT64);

}



void test_unsignedIteger_Validity(void)

{

   UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((2)), (

  ((void *)0)

  ), (UNITY_UINT)(52), UNITY_DISPLAY_STYLE_UINT);

   UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((2)), (UNITY_INT)(UNITY_UINT8 )((2)), (

  ((void *)0)

  ), (UNITY_UINT)(53), UNITY_DISPLAY_STYLE_UINT8);

   UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT16)((400)), (UNITY_INT)(UNITY_UINT16)((400)), (

  ((void *)0)

  ), (UNITY_UINT)(54), UNITY_DISPLAY_STYLE_UINT16);

   UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((40000)), (UNITY_INT)(UNITY_UINT32)((40000)), (

  ((void *)0)

  ), (UNITY_UINT)(55), UNITY_DISPLAY_STYLE_UINT32);

   UnityAssertEqualNumber((UNITY_INT)((400000)), (UNITY_INT)((400000)), (

  ((void *)0)

  ), (UNITY_UINT)(56), UNITY_DISPLAY_STYLE_UINT64);

}



void test_Hex_Validity(void)

{

   UnityAssertEqualNumber((UNITY_INT)(UNITY_INT32)((0x10)), (UNITY_INT)(UNITY_INT32)((0x10)), (

  ((void *)0)

  ), (UNITY_UINT)(61), UNITY_DISPLAY_STYLE_HEX32);

   UnityAssertEqualNumber((UNITY_INT)(UNITY_INT8 )((0xFF)), (UNITY_INT)(UNITY_INT8 )((0xFF)), (

  ((void *)0)

  ), (UNITY_UINT)(62), UNITY_DISPLAY_STYLE_HEX8);

   UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0xFFFF)), (UNITY_INT)(UNITY_INT16)((0xFFFF)), (

  ((void *)0)

  ), (UNITY_UINT)(63), UNITY_DISPLAY_STYLE_HEX16);

   UnityAssertEqualNumber((UNITY_INT)(UNITY_INT32)((0xFFFFFFFF)), (UNITY_INT)(UNITY_INT32)((0xFFFFFFFF)), (

  ((void *)0)

  ), (UNITY_UINT)(64), UNITY_DISPLAY_STYLE_HEX32);

   UnityAssertEqualNumber((UNITY_INT)((0xFFFFFFFFFFFFFFFF)), (UNITY_INT)((0xFFFFFFFFFFFFFFFF)), (

  ((void *)0)

  ), (UNITY_UINT)(65), UNITY_DISPLAY_STYLE_HEX64);

}



void test_Equal_Validity(void)

{

   UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((1)), (

  ((void *)0)

  ), (UNITY_UINT)(70), UNITY_DISPLAY_STYLE_INT);

}



void test_Int_WithIn_Validity(void)

{

   UnityAssertNumbersWithin( ((1)), (UNITY_INT) ((10)), (UNITY_INT) ((9)), (

  ((void *)0)

  ), (UNITY_UINT)(75), UNITY_DISPLAY_STYLE_INT);

}



void test_Boundary_Validity(void)

{

   UnityAssertGreaterOrLessOrEqualNumber((UNITY_INT)((10)), (UNITY_INT)((11)), UNITY_GREATER_THAN, (

  ((void *)0)

  ), (UNITY_UINT)(80), UNITY_DISPLAY_STYLE_INT);

   UnityAssertGreaterOrLessOrEqualNumber((UNITY_INT)((10)), (UNITY_INT)((8)), UNITY_SMALLER_THAN, (

  ((void *)0)

  ), (UNITY_UINT)(81), UNITY_DISPLAY_STYLE_INT);

}



void test_String_Validity(void)

{

  UnityAssertEqualString((const char*)(("aliozan")), (const char*)(("aliozan")), (

 ((void *)0)

 ), (UNITY_UINT)(86));

  UnityAssertEqualStringLen((const char*)(("aliozan")), (const char*)(("ali")), (UNITY_UINT32)((3)), (

 ((void *)0)

 ), (UNITY_UINT)(87));

  UnityAssertEqualStringLen((const char*)(("aliozan")), (const char*)(("aliozan")), (UNITY_UINT32)((0)), (

 ((void *)0)

 ), (UNITY_UINT)(88));

}



void test_Float_WithIn_Validity(void)

{

   UnityAssertFloatsWithin((UNITY_FLOAT)((0.1f)), (UNITY_FLOAT)((2.2f)), (UNITY_FLOAT)((2.23f)), (

  ((void *)0)

  ), (UNITY_UINT)(93));

}



void test_Float_Equal_Validity(void)

{

   UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((0.1f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((0.1f))), (UNITY_FLOAT)((UNITY_FLOAT)((0.1f))), ((

  ((void *)0)

  )), (UNITY_UINT)((UNITY_UINT)(98)));

}



void test_Double_WithIn_Validity(void)

{

   UnityAssertDoublesWithin((UNITY_DOUBLE)((0.1)), (UNITY_DOUBLE)((2.2)), (UNITY_DOUBLE)((2.23)), (

  ((void *)0)

  ), (UNITY_UINT)(111));

}



void test_Double_Equal_Validity(void)

{

   UnityAssertDoublesWithin((UNITY_DOUBLE)((UNITY_DOUBLE)((0.1)) * (UNITY_DOUBLE)(1e-12)), (UNITY_DOUBLE)((UNITY_DOUBLE)((0.1))), (UNITY_DOUBLE)((UNITY_DOUBLE)((0.1))), ((

  ((void *)0)

  )), (UNITY_UINT)((UNITY_UINT)(116)));

}



void test_Pointer_Validity(void)

{

 int x;

 int* xptr = &x;

    do {if ((((

   ((void *)0)

   )) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(123))));}} while(0);

 do {if ((((xptr)) != 

((void *)0)

)) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(124))));}} while(0);

 UnityAssertEqualNumber((UNITY_INT32)((&x)), (UNITY_INT32)((xptr)), (

((void *)0)

), (UNITY_UINT)(125), UNITY_DISPLAY_STYLE_HEX32);

}



void test_Memory_Validity(void)

{

 uint8_t ones[] = {1,1,1,1,1};

 uint8_t buffer[5];



 memset(buffer,1,5);

 UnityAssertEqualMemory(( const void*)((ones)), ( const void*)((buffer)), (UNITY_UINT32)((5)), 1, (

((void *)0)

), (UNITY_UINT)(134), UNITY_ARRAY_TO_ARRAY);



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



 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((my.x)), (

((void *)0)

), (UNITY_UINT)(160), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((my.y)), (

((void *)0)

), (UNITY_UINT)(161), UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualMemory(( const void*)((&my)), ( const void*)((&yours)), (UNITY_UINT32)((sizeof(myStruct))), 1, (

((void *)0)

), (UNITY_UINT)(162), UNITY_ARRAY_TO_ARRAY);

 UnityAssertEqualNumber((UNITY_INT32)((&my)), (UNITY_INT32)((others)), (

((void *)0)

), (UNITY_UINT)(163), UNITY_DISPLAY_STYLE_HEX32);

}



void test_Array_Validity(void)

{

 uint8_t expected[] = {1,2,3,4,5};

 uint8_t actual[] = {1,2,3,4,5};



 UnityAssertEqualIntArray(( const void*)((expected)), ( const void*)((actual)), (UNITY_UINT32)((sizeof(expected))), (

((void *)0)

), (UNITY_UINT)(171), UNITY_DISPLAY_STYLE_UINT8, UNITY_ARRAY_TO_ARRAY);

 UnityAssertEqualMemory(( const void*)((expected)), ( const void*)((actual)), (UNITY_UINT32)((sizeof(expected))), (UNITY_UINT32)((1)), (

((void *)0)

), (UNITY_UINT)(172), UNITY_ARRAY_TO_ARRAY);

}



void test_Bitwise_Validity(void)

{

     UnityAssertBits((UNITY_INT)((0x10)), (UNITY_INT)((0x30)), (UNITY_INT)((0x15)), (

    ((void *)0)

    ), (UNITY_UINT)(177));

  UnityAssertBits((UNITY_INT)((0b10000001)), (UNITY_INT)((UNITY_UINT)(-1)), (UNITY_INT)((0b10000001)), (

 ((void *)0)

 ), (UNITY_UINT)(178));

  UnityAssertBits((UNITY_INT)((0b10000001)), (UNITY_INT)((UNITY_UINT)(0)), (UNITY_INT)((0b00000000)), (

 ((void *)0)

 ), (UNITY_UINT)(179));

  UnityAssertBits((UNITY_INT)(((UNITY_UINT)1 << (0))), (UNITY_INT)((UNITY_UINT)(-1)), (UNITY_INT)((0b00000001)), (

 ((void *)0)

 ), (UNITY_UINT)(180));

  UnityAssertBits((UNITY_INT)(((UNITY_UINT)1 << (0))), (UNITY_INT)((UNITY_UINT)(0)), (UNITY_INT)((0b00000000)), (

 ((void *)0)

 ), (UNITY_UINT)(181));

}



void test_Ignore_Validity(void)

{

    UnityIgnore( (("TEST IGNORE")), (UNITY_UINT)(186));

 UnityIgnore( (

((void *)0)

), (UNITY_UINT)(187));

}



void test_ExtraMessage_Validity(void)

{

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT32)((0x10)), (UNITY_INT)(UNITY_INT32)((0x11)), (("Error")), (UNITY_UINT)(192), UNITY_DISPLAY_STYLE_HEX32);

}
