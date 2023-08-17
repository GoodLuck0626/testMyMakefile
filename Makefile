CC := gcc  
CFLAGS := -g  
TARGET := test  
SRCS := $(wildcard src/*.c)  
OBJS := $(patsubst %c,%o,$(SRCS))  

# all:$(TARGET)  

test:$(OBJS)  
	$(CC)  $^ -o $@ 

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@ 



.PONNY:clean
clean:  
	rm -rf $(TARGET) $(OBJS) 

