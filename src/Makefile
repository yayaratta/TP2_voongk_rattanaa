TESTS = test_constructeur_parametre.t testConstructorCopy.t test_constructor_defaut.t test_fillRandomly.t test_lecture_fichier.t test_q1.t test_operator_plus.t test_accesseur.t test_op_reels.t test_op_vect.t test_affectation.t
OBJS = Dvector.o
CXX = g++
CXXFLAGS = -Wall -Wextra -g


.PHONY : all clean check

all : $(TESTS)

%.o : %cpp %h
	$(CXX) $(CXXFLAGS) -c $<

%.t : %.o $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS) $<

clean : 
	-rm -f *.o $(TESTS)

check : 
	./test.sh
