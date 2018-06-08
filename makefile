# définition des variables
EXEC = main.x
SRC = main.cpp Empreinte.cpp EmpreinteMaladie.cpp EmpreintePatient.cpp Mesure.cpp ChargerFichier.cpp
OBJ = $(SRC:.cpp=.o)
COMPFLAGS = -ansi -pedantic -Wall -std=c++11
EDL = g++
COMP = @g++
ECHO = @echo
RM = rm
CD = cd
RMFLAGS = -f
REP_BIN = bin/
REP_TEST = Tests/
EXEC_MKTEST = ./mktest.sh
CLEAN = efface

$(EXEC): $(OBJ)
	$(ECHO) "Edition des liens de test: "
	$(EDL) -o $(EXEC) $^ 

%.o: %.cpp
	$(ECHO) "Compilation de <$<>: "
	$(COMP) -c $< $(COMPFLAGS)  

test:	
	$(MAKE)
	$(ECHO) "Lancement des tests:"
	$(ECHO) ""
	($(CD) $(REP_TEST) && bash $(EXEC_MKTEST) )

#Suppression

$(CLEAN):
	$(RM) $(RMFLAGS) *.gch $(OBJ) $(EXEC) core


# $^ toutes les dependances
# $< première dépendance
