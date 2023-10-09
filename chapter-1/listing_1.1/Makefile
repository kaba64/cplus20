CC := g++ -std=c++20 -Wall
TARGET_EXEC := out
CFLAGS  := -Wall
SRCS := hello.cpp
OBJS=$(SRCS:.cpp=.o)


$(TARGET_EXEC): $(OBJS)
	$(CC) $^ -o $@
hello.o: hello.cpp
	$(CC) -c $< -o $@
clean:
	rm $(OBJS) $(TARGET_EXEC) *~
run:
	@./$(TARGET_EXEC)
