// Copyright 2024 The Tablog Authors. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "gtestUsage/math_utils.h"

#include "gtest/gtest.h"

namespace gtestUsage {

// 测试 Add 函数
TEST(MathUtilsTest, Add) {
  EXPECT_EQ(Add(2, 3), 5);
  EXPECT_EQ(Add(-1, 1), 0);
  EXPECT_EQ(Add(0, 0), 0);
  EXPECT_EQ(Add(-5, -3), -8);
}

// 测试 Subtract 函数
TEST(MathUtilsTest, Subtract) {
  EXPECT_EQ(Subtract(5, 3), 2);
  EXPECT_EQ(Subtract(0, 5), -5);
  EXPECT_EQ(Subtract(-1, -1), 0);
  EXPECT_EQ(Subtract(10, 10), 0);
}

// 测试 Multiply 函数
TEST(MathUtilsTest, Multiply) {
  EXPECT_EQ(Multiply(2, 3), 6);
  EXPECT_EQ(Multiply(-2, 3), -6);
  EXPECT_EQ(Multiply(0, 100), 0);
  EXPECT_EQ(Multiply(-5, -5), 25);
}

// 测试 Divide 函数
TEST(MathUtilsTest, Divide) {
  EXPECT_EQ(Divide(6, 3), 2);
  EXPECT_EQ(Divide(10, 2), 5);
  EXPECT_EQ(Divide(5, 0), 0);  // 除数为0，返回0
  EXPECT_EQ(Divide(-10, 2), -5);
  EXPECT_EQ(Divide(7, 2), 3);  // 整数除法
}

// 测试 Factorial 函数
TEST(MathUtilsTest, Factorial) {
  EXPECT_EQ(Factorial(0), 1);
  EXPECT_EQ(Factorial(1), 1);
  EXPECT_EQ(Factorial(5), 120);
  EXPECT_EQ(Factorial(10), 3628800);
  EXPECT_EQ(Factorial(-1), 0);  // 负数返回0
}

// 测试 IsPrime 函数
TEST(MathUtilsTest, IsPrime) {
  EXPECT_FALSE(IsPrime(0));
  EXPECT_FALSE(IsPrime(1));
  EXPECT_TRUE(IsPrime(2));
  EXPECT_TRUE(IsPrime(3));
  EXPECT_FALSE(IsPrime(4));
  EXPECT_TRUE(IsPrime(5));
  EXPECT_TRUE(IsPrime(7));
  EXPECT_FALSE(IsPrime(9));
  EXPECT_TRUE(IsPrime(11));
  EXPECT_FALSE(IsPrime(15));
  EXPECT_TRUE(IsPrime(17));
  EXPECT_TRUE(IsPrime(19));
  EXPECT_FALSE(IsPrime(21));
}

// 测试 GCD 函数
TEST(MathUtilsTest, GCD) {
  EXPECT_EQ(GCD(48, 18), 6);
  EXPECT_EQ(GCD(17, 13), 1);
  EXPECT_EQ(GCD(100, 25), 25);
  EXPECT_EQ(GCD(0, 5), 5);
  EXPECT_EQ(GCD(5, 0), 5);
  EXPECT_EQ(GCD(-48, 18), 6);  // 负数取绝对值
  EXPECT_EQ(GCD(48, -18), 6);
}

// 测试 LCM 函数
TEST(MathUtilsTest, LCM) {
  EXPECT_EQ(LCM(4, 6), 12);
  EXPECT_EQ(LCM(5, 7), 35);
  EXPECT_EQ(LCM(12, 18), 36);
  EXPECT_EQ(LCM(0, 5), 0);  // 包含0时返回0
  EXPECT_EQ(LCM(5, 0), 0);
}

}  // namespace gtestUsage
