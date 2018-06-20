CXX=g++
RM=rm -f
CPPFLAGS= -std=c++11 
LDLIBS= -lsqlite3 

all: 
	$(CXX) $(CPPFLAGS) $(LDLIBS) main.cpp -o Generatore_Schede

clean:
	$(RM) Generatore_Schede
