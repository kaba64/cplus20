CC := g++ -std=c++20 -O2 -Wall -fmax-errors=3
TARGET_EXEC := out
SRCS := listing_26_2.cpp Crap_class.cpp
OBJS=$(SRCS:.cpp=.o)

$(TARGET_EXEC): $(OBJS)
	$(CC) $^ -o $@
%.o: %.cpp
	$(CC) -c $< -o $@
$(OBJS): Crap_class.h
clean:
	rm $(OBJS) $(TARGET_EXEC) *~
run:
	@./$(TARGET_EXEC)
