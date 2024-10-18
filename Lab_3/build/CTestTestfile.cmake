# CMake generated Testfile for 
# Source directory: /Users/anastasia/MAI/OOP/Lab_3
# Build directory: /Users/anastasia/MAI/OOP/Lab_3/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(Rhombus_test "/Users/anastasia/MAI/OOP/Lab_3/build/tests")
set_tests_properties(Rhombus_test PROPERTIES  _BACKTRACE_TRIPLES "/Users/anastasia/MAI/OOP/Lab_3/CMakeLists.txt;49;add_test;/Users/anastasia/MAI/OOP/Lab_3/CMakeLists.txt;0;")
add_test(Pentagon_test "/Users/anastasia/MAI/OOP/Lab_3/build/tests")
set_tests_properties(Pentagon_test PROPERTIES  _BACKTRACE_TRIPLES "/Users/anastasia/MAI/OOP/Lab_3/CMakeLists.txt;50;add_test;/Users/anastasia/MAI/OOP/Lab_3/CMakeLists.txt;0;")
add_test(Trapezoid_test "/Users/anastasia/MAI/OOP/Lab_3/build/tests")
set_tests_properties(Trapezoid_test PROPERTIES  _BACKTRACE_TRIPLES "/Users/anastasia/MAI/OOP/Lab_3/CMakeLists.txt;51;add_test;/Users/anastasia/MAI/OOP/Lab_3/CMakeLists.txt;0;")
add_test(FigureTest "/Users/anastasia/MAI/OOP/Lab_3/build/tests")
set_tests_properties(FigureTest PROPERTIES  _BACKTRACE_TRIPLES "/Users/anastasia/MAI/OOP/Lab_3/CMakeLists.txt;52;add_test;/Users/anastasia/MAI/OOP/Lab_3/CMakeLists.txt;0;")
subdirs("googletest")
