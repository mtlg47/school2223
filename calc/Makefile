.PHONY: clean

TARGET :=		main
BUILD_DIR := 	build
OBJ_DIR :=		obj
SRC_DIR	:=		Src
SRC_FILE :=		Src/main.c \
				Src/string_lib.c \
				Src/math_lib.c
INC_DIR :=		Inc/main.h \
 				Inc/string_lib.h \
				Inc/math_lib.h
LIB_DIR :=		lib
LIB_NAME :=		calc

all: $(SRC_FILE) $(INC_DIR) $(OBJ_DIR) $(LIB_DIR)
	gcc $(SRC_FILE) -c
	ar rc lib$(LIB_NAME).a *.o
	mv *.o $(OBJ_DIR)
	mv *.a $(LIB_DIR)
	make binary

binary: $(BUILD_DIR)
#	$(LIB_DIR)/$(LIB_NAME).a
#	gcc $(OBJ_DIR)/*.o -o $(BUILD_DIR)/$(TARGET)_ex
	gcc $(SRC_FILE) -o $(TARGET)_ex -L. -I$(LIB_DIR)/$(LIB_NAME)
	mv $(TARGET)_ex $(BUILD_DIR)
clean: 
	rm -rf $(OBJ_DIR) $(BUILD_DIR) *.o $(LIB_DIR)

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

$(LIB_DIR):
	mkdir $(LIB_DIR)