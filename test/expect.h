/* This code is part of oreo project, all rights reserved (See LICENSE)
 * Wrote by: "Gabriel Correia"
 * Created at: 2022/04/27
*/

#ifndef TEST_EXPECT_H
#define TEST_EXPECT_H

#include "libc/stddef.h"
#include "libc/branch.h"

#include "fatal.h"

__attribute__((unused)) extern const int8 unexpectedStr[];

#define EXPECT(expr)\
  do {\
    unlikely (!(expr)) {\
    fatalError(unexpectedStr, #expr, __FILE__, __LINE__);\
    __builtin_unreachable();\
    }\
  } while (0)

#define EXPECT_EQ(a, b)\
  EXPECT(a == b)

#define EXPECT_EQ_CHAR(a, b)\
  EXPECT(a == b)

#define EXPECT_EQ_PTR(a, b)\
  EXPECT(a == b)

#endif

