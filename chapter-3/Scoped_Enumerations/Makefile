CC := g++ -std=c++20
TARGET_EXEC = out
CFLAGS := -Wall
SRCS := scoped-enumerate.cpp
OBJCS = $(SRCS:.cpp=.o)

$(TARGET_EXEC): $(OBJCS)
	$(CC) $^ -o $@
%.o: %.cpp
        $(CC) -c $< -o $@
clean:
	rm $(OBJCS) $(TARGET_EXEC) *~
run:
	@./$(TARGET_EXEC)
