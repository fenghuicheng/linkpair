
CXXFLAGS:=$(CXXFLAGS) -DDEBUG_SUPPORT -g3
OBJECTS=test.o template.o
IMPLEMENTS=visitor.imp linkpair.imp
INCLUDES=include.h visitor.h linkpair.h

.PHONY:all
all: include.gch test
include.gch: $(INCLUDES)
	gcc -o $@ -x c++-header -c include.h

test: $(OBJECTS) $(IMPLEMENTS) 
	g++ -o $@ $(CXXFLAGS) $(OBJECTS)

test.o: test.cpp include.gch

*.o: *.cpp include.gch *.imp

.PHONY:clean
clean:
	@rm -f include.gch
	@rm -f *.o
	@rm -f test
