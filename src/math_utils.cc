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

namespace gtestUsage {

int Add(int a, int b) {
  return a + b;
}

int Subtract(int a, int b) {
  return a - b;
}

int Multiply(int a, int b) {
  return a * b;
}

int Divide(int a, int b) {
  if (b == 0) {
    return 0;
  }
  return a / b;
}

long long Factorial(int n) {
  if (n < 0) {
    return 0;
  }
  if (n == 0 || n == 1) {
    return 1;
  }
  long long result = 1;
  for (int i = 2; i <= n; ++i) {
    result *= i;
  }
  return result;
}

bool IsPrime(int n) {
  if (n < 2) {
    return false;
  }
  if (n == 2) {
    return true;
  }
  if (n % 2 == 0) {
    return false;
  }
  for (int i = 3; i * i <= n; i += 2) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int GCD(int a, int b) {
  if (a < 0) a = -a;
  if (b < 0) b = -b;
  if (a == 0) return b;
  if (b == 0) return a;
  
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

int LCM(int a, int b) {
  if (a == 0 || b == 0) {
    return 0;
  }
  int gcd = GCD(a, b);
  return (a / gcd) * b;
}

}  // namespace gtestUsage

