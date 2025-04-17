# Nom de l'exécutable
TARGET = main

# Compilateur
CXX = g++

# Options de compilation
CXXFLAGS = -Wall -Wextra -std=c++17 -Ilibs

# Répertoire des sources
SRC_DIR = src
BUILD_DIR = build

# Trouver tous les fichiers .cpp dans SRC_DIR et ses sous-dossiers
SRCS = $(shell find $(SRC_DIR) -name '*.cpp')

# Générer les fichiers objets correspondants dans BUILD_DIR
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SRCS))

# Bibliothèques SFML
SFML_LIBS = -lsfml-graphics -lsfml-window -lsfml-system

# Règle par défaut
all: $(TARGET)

# Règle pour créer l'exécutable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS) $(SFML_LIBS)

# Règle pour compiler les fichiers objets
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
# Crée les sous-dossiers dans build/ si nécessaire
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Nettoyage des fichiers générés
clean:
	rm -f $(OBJS) $(TARGET)