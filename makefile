#makefile pour compilation et reliure

#variables
RM = rm
COMP = g++
EDL = g++

INT = Empreinte.h EmpreinteMaladie.h Mesure.h 

REAL=$(INT:.h=.cpp)
OBJ=$(REAL:.cpp=.o)

EXE = executable

RMFLAGS = -f
COMPFLAGS = -ansi -pedantic -Wall -std=c++11
EDLFLAGS = 
CLEAN = clean

#useless
#$(REAL) : $(INT)
#$(OBJ) : $(REAL)

#realisation de l'executable
$(EXE) : $(OBJ)
	$(EDL) -o $(EXE) $(OBJ)

#pattern pour la reliure
%.o:%.cpp
	$(COMP) -g $(COMPFLAGS) -c $<

# Explicit compilation rules


# Compilation of main
main.o : Mesure.h Empreinte.h EmpreinteMaladie.h 

# Compilation of Mesure
Mesure.o : Mesure.cpp Mesure.h

# Compilation of Empreinte
Empreinte.o : Empreinte.cpp Empreinte.h Mesure.h

# Compilation of EmpreinteMaladie
EmpreinteMaladie.o : EmpreinteMaladie.cpp EmpreinteMaladie.h Empreinte.h Mesure.h

# Compilation of Maladie
#Maladie.o : Maladie.cpp Maladie.h Empreinte.h Catalogue.h

# Compilation of ChargerFichier
#FileParser.o : FileParser.cpp FileParser.h Attribut.h Empreinte.h \
Catalogue.h Maladie.h


# ------ end of Explicit compilation rules



$(CLEAN):
	$(RM) $(RMFLAGS) $(EXE) $(OBJ) core




	

