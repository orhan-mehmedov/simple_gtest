info how to build from:
http://www.eriksmistad.no/getting-started-with-google-test-on-ubuntu/

#install sources:
sudo apt-get install libgtest-dev

#install cmake
sudo apt-get install cmake 

cd /usr/src/gtest
sudo cmake CMakeLists.txt
sudo make
# copy or symlink libgtest.a and libgtest_main.a to your /usr/lib folder
sudo cp *.a /usr/lib

////////////////////////////////////////////////////////////////////////////////

do not forget to rebuild on compiler change etc.
other option is to rebuild gtest as part of your project build

O.M.
