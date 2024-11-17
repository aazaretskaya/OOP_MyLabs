# CMake generated Testfile for 
# Source directory: /Users/anastasia/MAI/OOP/Lab_5
# Build directory: /Users/anastasia/MAI/OOP/Lab_5/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(CustomMemoryResourceTest "/Users/anastasia/MAI/OOP/Lab_5/build/tests")
set_tests_properties(CustomMemoryResourceTest PROPERTIES  _BACKTRACE_TRIPLES "/Users/anastasia/MAI/OOP/Lab_5/CMakeLists.txt;51;add_test;/Users/anastasia/MAI/OOP/Lab_5/CMakeLists.txt;0;")
add_test(StackTest "/Users/anastasia/MAI/OOP/Lab_5/build/tests")
set_tests_properties(StackTest PROPERTIES  _BACKTRACE_TRIPLES "/Users/anastasia/MAI/OOP/Lab_5/CMakeLists.txt;52;add_test;/Users/anastasia/MAI/OOP/Lab_5/CMakeLists.txt;0;")
add_test(StackIteratorTest "/Users/anastasia/MAI/OOP/Lab_5/build/tests")
set_tests_properties(StackIteratorTest PROPERTIES  _BACKTRACE_TRIPLES "/Users/anastasia/MAI/OOP/Lab_5/CMakeLists.txt;53;add_test;/Users/anastasia/MAI/OOP/Lab_5/CMakeLists.txt;0;")
subdirs("googletest")
