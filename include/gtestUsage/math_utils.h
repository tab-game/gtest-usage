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

#ifndef GTESTUSAGE_MATH_UTILS_H_
#define GTESTUSAGE_MATH_UTILS_H_

namespace gtestUsage {

// 加法函数
int Add(int a, int b);

// 减法函数
int Subtract(int a, int b);

// 乘法函数
int Multiply(int a, int b);

// 除法函数（如果除数为0，返回0）
int Divide(int a, int b);

// 计算阶乘
long long Factorial(int n);

// 判断是否为质数
bool IsPrime(int n);

// 计算最大公约数
int GCD(int a, int b);

// 计算最小公倍数
int LCM(int a, int b);

}  // namespace gtestUsage

#endif  // GTESTUSAGE_MATH_UTILS_H_

