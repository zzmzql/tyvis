#ifndef FILE_OPEN_KIND_TEST_HH
#define FILE_OPEN_KIND_TEST_HH

#include <cppunit/extensions/HelperMacros.h>
#include "VHDLDataTest.hh"
#include "tyvis/_savant_file_open_kind.hh"

typedef _savant_file_open_kind FileOpenKind;

class FileOpenKindTest : public VHDLDataTest {
  CPPUNIT_TEST_SUITE( FileOpenKindTest);
  CPPUNIT_TEST(testGetUniversalKind);
  CPPUNIT_TEST(testSize);
  CPPUNIT_TEST(testPrint);
  CPPUNIT_TEST(testEqual);
  CPPUNIT_TEST(testNotEqual);
  CPPUNIT_TEST(testGreater);
  CPPUNIT_TEST(testGreaterEqual);
  CPPUNIT_TEST(testLess);
  CPPUNIT_TEST(testLessEqual);
  CPPUNIT_TEST(testClone);
  CPPUNIT_TEST(testSerialization);
  CPPUNIT_TEST_SUITE_END();

private:
  FileOpenKind *toTest;

  static int getDefaultValue();

public:
  void setUp();
  void tearDown();

  void testGetUniversalKind();
  void testSize();
  void testPrint();
  void testEqual();
  void testNotEqual();
  void testGreater();
  void testGreaterEqual();
  void testLess();
  void testLessEqual();
  void testClone();
  void testSerialization();
};

#endif
