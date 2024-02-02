CC := g++ -std=c++20
TARGET_EXEC = out
FLAGS = -Wall
SRCS := main.cpp
OBJS = $(SRCS:.cpp=.o)

$(TARGET_EXEC): $(OBJS)
	$(CC) $^ -o $@ $(FLAGS)
%.o: %.cpp
	$(CC) -c $< -o $@
clean:
	rm $(OBJS) $(TARGET_EXEC) *~
make run:
	@./$(TARGET_EXEC)
