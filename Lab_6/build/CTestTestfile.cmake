# CMake generated Testfile for 
# Source directory: /Users/anastasia/MAI/OOP_LABS/Lab_6
# Build directory: /Users/anastasia/MAI/OOP_LABS/Lab_6/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(BattleVisitorTest "/Users/anastasia/MAI/OOP_LABS/Lab_6/build/tests")
set_tests_properties(BattleVisitorTest PROPERTIES  _BACKTRACE_TRIPLES "/Users/anastasia/MAI/OOP_LABS/Lab_6/CMakeLists.txt;58;add_test;/Users/anastasia/MAI/OOP_LABS/Lab_6/CMakeLists.txt;0;")
add_test(NPCFactoryTest "/Users/anastasia/MAI/OOP_LABS/Lab_6/build/tests")
set_tests_properties(NPCFactoryTest PROPERTIES  _BACKTRACE_TRIPLES "/Users/anastasia/MAI/OOP_LABS/Lab_6/CMakeLists.txt;59;add_test;/Users/anastasia/MAI/OOP_LABS/Lab_6/CMakeLists.txt;0;")
add_test(NPCTest "/Users/anastasia/MAI/OOP_LABS/Lab_6/build/tests")
set_tests_properties(NPCTest PROPERTIES  _BACKTRACE_TRIPLES "/Users/anastasia/MAI/OOP_LABS/Lab_6/CMakeLists.txt;60;add_test;/Users/anastasia/MAI/OOP_LABS/Lab_6/CMakeLists.txt;0;")
subdirs("googletest")
