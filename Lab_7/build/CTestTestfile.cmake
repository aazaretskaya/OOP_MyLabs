# CMake generated Testfile for 
# Source directory: /Users/anastasia/MAI/OOP_LABS/Lab_7
# Build directory: /Users/anastasia/MAI/OOP_LABS/Lab_7/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(DragonTest "/Users/anastasia/MAI/OOP_LABS/Lab_7/build/tests")
set_tests_properties(DragonTest PROPERTIES  _BACKTRACE_TRIPLES "/Users/anastasia/MAI/OOP_LABS/Lab_7/CMakeLists.txt;60;add_test;/Users/anastasia/MAI/OOP_LABS/Lab_7/CMakeLists.txt;0;")
add_test(KnightTest "/Users/anastasia/MAI/OOP_LABS/Lab_7/build/tests")
set_tests_properties(KnightTest PROPERTIES  _BACKTRACE_TRIPLES "/Users/anastasia/MAI/OOP_LABS/Lab_7/CMakeLists.txt;61;add_test;/Users/anastasia/MAI/OOP_LABS/Lab_7/CMakeLists.txt;0;")
add_test(NPCTest "/Users/anastasia/MAI/OOP_LABS/Lab_7/build/tests")
set_tests_properties(NPCTest PROPERTIES  _BACKTRACE_TRIPLES "/Users/anastasia/MAI/OOP_LABS/Lab_7/CMakeLists.txt;62;add_test;/Users/anastasia/MAI/OOP_LABS/Lab_7/CMakeLists.txt;0;")
add_test(PrincessTest "/Users/anastasia/MAI/OOP_LABS/Lab_7/build/tests")
set_tests_properties(PrincessTest PROPERTIES  _BACKTRACE_TRIPLES "/Users/anastasia/MAI/OOP_LABS/Lab_7/CMakeLists.txt;63;add_test;/Users/anastasia/MAI/OOP_LABS/Lab_7/CMakeLists.txt;0;")
subdirs("googletest")
