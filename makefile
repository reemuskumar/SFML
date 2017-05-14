CC := g++
CFLAGS := -Wall -O2
C11FLAGS := -std=c++11
#LIBFLAGS :=  -lsfml-graphics -lsfml-window -lsfml-system -lGL -lGLU  -lglut
LIBFLAGS :=  -lsfml-graphics -lsfml-window -lsfml-system

%:%.c++
	$(CC) $(CFLAGS) -o $@ $^ $(LIBFLAGS)
	
