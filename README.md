*Compile the source code :


    -execute cmake .. under build repositorie :

aliak@aliak-Vostro-3500:~/MYWORKSPACE/TemperatureController/build$ cmake ..

-- The C compiler identification is GNU 9.4.0
-- The CXX compiler identification is GNU 9.4.0
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /home/aliak/MYWORKSPACE/TemperatureController/build


    -execute make : 

aliak@aliak-Vostro-3500:~/MYWORKSPACE/TemperatureController/build$ make

Scanning dependencies of target TemperatureController
[ 25%] Building CXX object CMakeFiles/TemperatureController.dir/src/temperaturecontroller.cpp.o
[ 50%] Linking CXX shared library lib/libTemperatureController.so
[ 50%] Built target TemperatureController
Scanning dependencies of target TempController
[ 75%] Building CXX object CMakeFiles/TempController.dir/src/main.cpp.o
[100%] Linking CXX executable TempController
[100%] Built target TempController
aliak@aliak-Vostro-3500:~/MYWORKSPACE/TemperatureController/build$

 
    -execute the  generated binary :

aliak@aliak-Vostro-3500:~/MYWORKSPACE/TemperatureController/build$ ./TempController

enter the minTemp...
10
enter the maxTemp...
20
Starting cooling...
aliak@aliak-Vostro-3500:~/MYWORKSPACE/TemperatureController/build$


*Compile mock test:


    -execute cmake under test repositorie : 

aliak@aliak-Vostro-3500:~/MYWORKSPACE/TemperatureController/test$ cmake .

-- The C compiler identification is GNU 9.4.0
-- The CXX compiler identification is GNU 9.4.0
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Found GTest: /usr/local/lib/cmake/GTest/GTestConfig.cmake (found version "1.13.0")  
-- Configuring done
-- Generating done
-- Build files have been written to: /home/aliak/MYWORKSPACE/TemperatureController/test
aliak@aliak-Vostro-3500:~/MYWORKSPACE/TemperatureController/test$


    -execute make :

aliak@aliak-Vostro-3500:~/MYWORKSPACE/TemperatureController/test$ make 
Scanning dependencies of target TempControllerTest
[ 50%] Building CXX object CMakeFiles/TempControllerTest.dir/temperaturecontroller_test.cpp.o
[100%] Linking CXX executable TempControllerTest
[100%] Built target TempControllerTest
aliak@aliak-Vostro-3500:~/MYWORKSPACE/TemperatureController/test$


    -run the genrated binary : 

aliak@aliak-Vostro-3500:~/MYWORKSPACE/TemperatureController/test$ ./TempControllerTest 
[==========] Running 3 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 3 tests from TemperatureControllerAPITest
[ RUN      ] TemperatureControllerAPITest.HeatingStartsWhenTooCold
[       OK ] TemperatureControllerAPITest.HeatingStartsWhenTooCold (0 ms)
[ RUN      ] TemperatureControllerAPITest.CoolingStartsWhenTooHot
[       OK ] TemperatureControllerAPITest.CoolingStartsWhenTooHot (0 ms)
[ RUN      ] TemperatureControllerAPITest.NoActionTakenWhenInRange
[       OK ] TemperatureControllerAPITest.NoActionTakenWhenInRange (0 ms)
[----------] 3 tests from TemperatureControllerAPITest (0 ms total)

[----------] Global test environment tear-down
[==========] 3 tests from 1 test suite ran. (0 ms total)
[  PASSED  ] 3 tests.
aliak@aliak-Vostro-3500:~/MYWORKSPACE/TemperatureController/test$ 
