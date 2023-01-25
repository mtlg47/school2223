BUILD_DIR := build
OBJ_DIR := obj
SRC_DIR := Src/main.c
INC_DIR := Inc/main.h

test: main.o
		gcc main.o -o $(BUILD_DIR)/test_ex
test.o: $(SRC_DIR) $(INC_DIR)
		gcc $(SRC_DIR) -c $(OBJ_DIR)
clean: 
		rm -rf test_ex *.o
