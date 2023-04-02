CXX := g++

BIN := bin
OBJDIR := $(BIN)/objects
SRCDIR := source
INCDIR := include

SOURCE := $(wildcard $(SRCDIR)/*.cpp)
INCLUDE := $(wildcard $(INCDIR)/*.h)
OBJECTS := $(addprefix $(OBJDIR)/,$(subst .cpp,.o,$(notdir $(SOURCE))))

example : $(OBJECTS)
	$(CXX) -o $(BIN)/$@.exe $^

$(OBJECTS) : $(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CXX) -c $< -o $@ -I $(INCDIR)

$(OBJDIR): | $(BIN)
	mkdir $(OBJDIR)

$(BIN):
	mkdir $(BIN)

.PHONY : clean
clean :
	-rm -r $(BIN)