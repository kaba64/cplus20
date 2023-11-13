CC := g++ -std=c++20
TARGET_EXEC := out
CFLAGS  := -Wall
SRCS := bitwise-operation.cpp
OBJS=$(SRCS:.cpp=.o)


$(TARGET_EXEC): $(OBJS)
	$(CC) $^ -o $@
bitwise-operation.o: bitwise-operation.cpp
	$(CC) -c $<
clean:
	rm $(OBJS) $(TARGET_EXEC) *~
run:
	@./$(TARGET_EXEC)
