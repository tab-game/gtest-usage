# 只有在启用测试构建时才编译测试
if(gtestUsage_BUILD_TESTS)

# 包含通用的测试配置函数
include(add_gtest)

# 使用通用函数添加测试用例
add_gtest(
  TEST_NAME math_utils_test
  SOURCES math_utils_test.cc
  LIBRARIES math_utils
  INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/../include
)

endif()  # gtestUsage_BUILD_TESTS

