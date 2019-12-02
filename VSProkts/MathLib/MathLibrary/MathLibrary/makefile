SRC = MathLibrary.cpp
DLLMAIN = dllmain.cpp
OUTFILE = bin\MathLibrary.dll
LIBFILE = bin\MathLibrary.lib
EXPFILE = bin\MathLibrary.exp
OBJ = MathLibrary.obj dllmain.obj
INC= -I MathLibrary.h
CC=cl
#all: bin/MathLibrary.dll

OUTFILE: $(SRC) pch.cpp $(DLLMAIN)
     $(CC) $(INC) -c $(SRC) $(DLLMAIN) /D MATHLIBRARY_EXPORTS
	 LINK /out:$(OUTFILE) $(OBJ)

clean:
	if exist $(EXPFILE) del $(EXPFILE)
	if exist $(LIBFILE) del $(LIBFILE)
	if exist $(OUTFILE) del $(OUTFILE)
	if exist $(OBJ) del $(OBJ)
	
	

