CC = /usr/bin/g++

TARGETS = explicit_return_type \
		  function_template \
		  simple_function_template \
		  overloaded_templates

SRC = explicit_return_type.cpp \
	  function_template.cpp \
	  simple_function_template.cpp \
	  overloaded_templates.cpp
	  		  
all : $(TARGETS)
		  
$(TARGETS): $(SRC)
	$(CC) $@.cpp -o $@

clean:
	rm -rf $(TARGETS)
