.PHONY: clean

TARGET :=		main
BUILD_DIR := 	build
OBJ_DIR :=		obj
SRC_DIR :=		Src/main.c \
				Src/string_lib.c \
				Src/math_lib.c
INC_DIR :=		Inc/main.h \
 				Inc/string_lib.h \
				Inc/math_lib.h

all: $(SRC_DIR) $(INC_DIR) $(OBJ_DIR)
	gcc $(SRC_DIR) -c
	mv *.o $(OBJ_DIR)
	make binary

binary: $(OBJ_DIR)/$(TARGET).o $(BUILD_DIR)
	gcc $(OBJ_DIR)/*.o -o $(BUILD_DIR)/$(TARGET)_ex

clean: 
	rm -rf $(OBJ_DIR) $(BUILD_DIR) *.o

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

$(BUILD_DIR):
	mkdir $(BUILD_DIR)
