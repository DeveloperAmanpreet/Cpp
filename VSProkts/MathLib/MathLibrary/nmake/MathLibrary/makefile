#macros for easy read and changes
# https://w3.cs.jmu.edu/bernstdh/Web/common/help/msc_nmake.php

# LINK echoes the contents of command files, unless the /NOLOGO option is specified.
LD=LINK /NODEFAULTLIB /OPT:NOREF /NXCOMPAT
#what to build
all:  MathLibrary.dll

#how to build

# Output Files
# The default output file from LINK is an .exe file. If the /DLL option is specified, LINK builds a .dll file. 
# You can control the output file name with the Output File Name (/OUT) option.
# When LINK creates a program that contains exports (usually a DLL), it also builds a .lib file, unless an .exp file was used in the build. You can control the import library file name with the /IMPLIB option.
# If the Generate Mapfile (/MAP) option is specified, LINK creates a mapfile.
# If the Generate Debug Info (/DEBUG) option is specified, LINK creates a PDB to contain debugging information for the program.


# this means MathLibrary.exe depends on  the forementioned file (MathLibrary.obj)
# if the dependencies have a more recent time stamp, then MathLibrary.exe is to be rebuilt
MathLibrary.exe :  MathLibrary.c 
#create the exe using this file
	cl -c MathLibrary.c 
	$(LD) /IMPLIB:MathLibrary.lib \
		  /OUT:MathLibrary.dll	MathLibrary.obj

#begin NEW----------------------------------------------------

MathLibrary.dll: MathLibrary.c 
	cl -c MathLibrary.c 
	$(LD) /IMPLIB:MathLibrary.lib \
		  /OUT:MathLibrary.dll	MathLibrary.obj /dll
			


#end NEW  ----------------------------------------------------

clean:;
	if exist MathLibrary.obj del MathLibrary.obj MathLibrary.exe
	if exist MathLibrary.exe del MathLibrary.exe
	if exist MathLibrary.lib del MathLibrary.lib
	if exist MathLibrary.exp del MathLibrary.exp