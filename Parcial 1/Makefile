CXX=g++
CXXFLAGS=-std=c++17 -fsanitize=undefined -fsanitize=signed-integer-overflow -fsanitize=address -g

EXECUTABLES := $(patsubst %.cpp,%.x,$(wildcard *.cpp))

all : $(EXECUTABLES)
%.x : %.cpp
	$(CXX)  $(CXXFLAGS) $< -o $@

fmttest.x: fmttest.cpp
	spack load fmt
	g++ -I $CMAKE_PREFIX_PATH -L $LD_LIBRARY_PATH -std=c++11 tmp.cpp -lfmt
	./$@
	spack unload fmt





clean:
	rm -rf *.x a.out *.x.*
