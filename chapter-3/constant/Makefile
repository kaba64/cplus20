CC := g++ -std=c++20
TARGET_EXEC = out
CFLAGS := -Wall
SRCS := constexpr.cpp
OBJCS = $(SRCS:.cpp=.o)

$(TARGET_EXEC): $(OBJCS)
	$(CC) $^ -o $@
$(OBJCS): $(SRCS)
	$(CC) -c $<
clean:
	rm $(OBJCS) $(TARGET_EXEC) *~
run:
	@./$(TARGET_EXEC)
