CC := g++ -std=c++20 -Wall
TARGET_EXEC := out
CFLAGS  := -Wall
SRCS := overflow-error.cpp
OBJS = $(SRCS:.cpp=.o)


$(TARGET_EXEC): $(OBJS)
	$(CC) $^ -o $@
%.o: %.cpp
        $(CC) -c $< -o $@
clean:
	rm $(OBJS) $(TARGET_EXEC) *~
run:
	@./$(TARGET_EXEC)
