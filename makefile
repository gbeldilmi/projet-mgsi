#------------------------------------------------------------------------------#
# Project name and binary file name                                            #
#------------------------------------------------------------------------------#
PROJECT_NAME        := mgsi
BIN_FILE            := $(PROJECT_NAME)

#------------------------------------------------------------------------------#
# Source files                                                                 #
#------------------------------------------------------------------------------#
SOURCE_DIR          := source
INCLUDE_DIR         := include
OBJECT_DIR          := object
BUILD_DIR           := build
C_FILES             := $(wildcard $(SOURCE_DIR)/*.c) \
                       $(wildcard $(SOURCE_DIR)/*/*.c)
CPP_FILES           := $(wildcard $(SOURCE_DIR)/*.cpp) \
                       $(wildcard $(SOURCE_DIR)/*/*.cpp) 
H_FILES             := $(wildcard $(INCLUDE_DIR)/*.h)
HPP_FILES           := $(wildcard $(INCLUDE_DIR)/*.hpp)
O_FILES             := $(C_FILES:$(SOURCE_DIR)/%.c=$(OBJECT_DIR)/%.o) \
                       $(CPP_FILES:$(SOURCE_DIR)/%.cpp=$(OBJECT_DIR)/%.o)

#------------------------------------------------------------------------------#
# Options for code generation                                                  #
#------------------------------------------------------------------------------#
INCLUDES_FLAGS      := -I $(INCLUDE_DIR)/
LIBRARIES_FLAGS     := -lGL -lGLEW -lGLU -lglut  -lm
C_FLAGS             := -Wall -Werror -Wextra -O3
CXX_FLAGS           := $(C_FLAGS)
LD_FLAGS            :=

#------------------------------------------------------------------------------#
# Commands                                                                     #
#------------------------------------------------------------------------------#
.PHONY : all, clean, clear, run
all : $(BUILD_DIR)/$(BIN_FILE)
clean : all
	rm -rv $(OBJECT_DIR)
clear : clean
	rm -rv $(BUILD_DIR)
run : all
	./$(BUILD_DIR)/$(BIN_FILE)

#------------------------------------------------------------------------------#
# Dependencies                                                                 #
#------------------------------------------------------------------------------#
$(OBJECT_DIR)/%.o : $(SOURCE_DIR)/%.c
	mkdir -pv $(dir $@)
	gcc -v $(C_FLAGS) -c $< -o $@ $(INCLUDES_FLAGS)
$(OBJECT_DIR)/%.o : $(SOURCE_DIR)/%.cpp
	mkdir -pv $(dir $@)
	g++ -v $(CXX_FLAGS) -c $< -o $@ $(INCLUDES_FLAGS)
$(BUILD_DIR)/$(BIN_FILE) : $(O_FILES)
	mkdir -pv $(dir $@)
	g++ -v $(LD_FLAGS) $^ -o $@ $(LIBRARIES_FLAGS)
