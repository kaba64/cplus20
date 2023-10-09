CC := g++ -std=c++20
TARGET_EXEC := out
CFLAGS  = -Wall
SRCS := main.cpp
OBJS=$(SRCS:.cpp=.o)

$(TARGET_EXEC): $(OBJS)
	$(CC) $^ -o $@ $(CFLAGS)
%.o:%.cpp
	$(CC) -c $< -o $@
clean:
	rm $(OBJS) $(TARGET_EXEC) *~
run:
	@./$(TARGET_EXEC)
