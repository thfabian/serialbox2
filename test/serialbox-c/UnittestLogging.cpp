//===-- serialbox-c/UnittestLogging.cpp ---------------------------------------------*- C++ -*-===//
//
//                                    S E R I A L B O X
//
// This file is distributed under terms of BSD license.
// See LICENSE.txt for more information
//
//===------------------------------------------------------------------------------------------===//
//
/// \file
/// This file implements the unittests of C Interface Logger.
///
//===------------------------------------------------------------------------------------------===//

#include "serialbox-c/Logging.h"
#include <gtest/gtest.h>

TEST(CLoggingTest, EnableAndDisable) {
  serialboxLoggingEnable();
  ASSERT_TRUE(serialboxLoggingIsEnabled());

  serialboxLoggingDisable();
  ASSERT_FALSE(serialboxLoggingIsEnabled());
}
