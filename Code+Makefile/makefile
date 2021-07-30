LDFLAGS = -lGL -lGLU -lglut
CFLAGS = -g -Wall -std=c++11
CC = g++
EXEEXT =
RM = rm

PROGRAM_NAME= Paint


paint: $(PROGRAM_NAME)
	./$(PROGRAM_NAME)$(EXEEXT)

$(PROGRAM_NAME): main.o point.o line.o shapes.o polygon.o curve.o
	$(CC) -o $@ $^ $(CFLAGS) $(LDFLAGS)

clean:
	$(RM) *.o $(PROGRAM_NAME)$(EXEEXT)
