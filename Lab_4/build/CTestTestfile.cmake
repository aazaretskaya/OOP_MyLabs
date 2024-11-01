# CMake generated Testfile for 
# Source directory: /Users/anastasia/MAI/OOP/Lab_4
# Build directory: /Users/anastasia/MAI/OOP/Lab_4/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(Rhombus_test "/Users/anastasia/MAI/OOP/Lab_4/build/tests")
set_tests_properties(Rhombus_test PROPERTIES  _BACKTRACE_TRIPLES "/Users/anastasia/MAI/OOP/Lab_4/CMakeLists.txt;77;add_test;/Users/anastasia/MAI/OOP/Lab_4/CMakeLists.txt;0;")
add_test(Pentagon_test "/Users/anastasia/MAI/OOP/Lab_4/build/tests")
set_tests_properties(Pentagon_test PROPERTIES  _BACKTRACE_TRIPLES "/Users/anastasia/MAI/OOP/Lab_4/CMakeLists.txt;78;add_test;/Users/anastasia/MAI/OOP/Lab_4/CMakeLists.txt;0;")
add_test(Trapezoid_test "/Users/anastasia/MAI/OOP/Lab_4/build/tests")
set_tests_properties(Trapezoid_test PROPERTIES  _BACKTRACE_TRIPLES "/Users/anastasia/MAI/OOP/Lab_4/CMakeLists.txt;79;add_test;/Users/anastasia/MAI/OOP/Lab_4/CMakeLists.txt;0;")
add_test(common_test "/Users/anastasia/MAI/OOP/Lab_4/build/tests")
set_tests_properties(common_test PROPERTIES  _BACKTRACE_TRIPLES "/Users/anastasia/MAI/OOP/Lab_4/CMakeLists.txt;80;add_test;/Users/anastasia/MAI/OOP/Lab_4/CMakeLists.txt;0;")
add_test(FigureTest "/Users/anastasia/MAI/OOP/Lab_4/build/tests")
set_tests_properties(FigureTest PROPERTIES  _BACKTRACE_TRIPLES "/Users/anastasia/MAI/OOP/Lab_4/CMakeLists.txt;81;add_test;/Users/anastasia/MAI/OOP/Lab_4/CMakeLists.txt;0;")
subdirs("googletest")
