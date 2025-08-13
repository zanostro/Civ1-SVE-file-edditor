# ---- config -----------------------------------------------------
CXX       := g++
CXXFLAGS  := -std=c++20 -Wall -Wextra -Wshadow -Wconversion -Wsign-conversion -Wold-style-cast -Wundef
LDFLAGS   :=
SRC_DIR   := src
SAVE_DIR  := save_files
TARGETDIR := target
OBJDIR    := $(TARGETDIR)/obj
BINARY    := $(TARGETDIR)/SVE_file_edditor
# ----------------------------------------------------------------

# default: nuke target/, restage, compile everything there, link
all: build run

# stage: always delete previous target and copy fresh files in
stage:
	@rm -rf "$(TARGETDIR)"
	@mkdir -p "$(TARGETDIR)"
	@# copy EVERYTHING from src (incl. subdirs & dotfiles)
	@cp -a "$(SRC_DIR)"/. "$(TARGETDIR)"/ 2>/dev/null || true
	@# copy saves if present (incl. subdirs & dotfiles)
	@if [ -d "$(SAVE_DIR)" ]; then cp -a "$(SAVE_DIR)"/. "$(TARGETDIR)"/; fi
	@echo "Staged into $(TARGETDIR)/"
.PHONY: stage

# compile & link entirely after staging
compile: stage
	@set -e; \
	mkdir -p "$(OBJDIR)"; \
	srcs="$$(find "$(TARGETDIR)" -type f -name '*.cpp')"; \
	if [ -z "$$srcs" ]; then echo "No .cpp sources found in $(TARGETDIR)"; exit 1; fi; \
	objs=""; \
	for f in $$srcs; do \
	  o="$(OBJDIR)/$${f#$(TARGETDIR)/}"; \
	  o="$${o%.cpp}.o"; \
	  mkdir -p "$$(dirname "$$o")"; \
	  $(CXX) $(CXXFLAGS) -I"$(TARGETDIR)" -c "$$f" -o "$$o"; \
	  objs="$$objs $$o"; \
	done; \
	$(CXX) $(CXXFLAGS) -o "$(BINARY)" $$objs $(LDFLAGS); \
	echo "Built $(BINARY)"
.PHONY: compile

run:
	@./$(BINARY)
.PHONY: run

clean:
	@rm -rf -- "$(TARGETDIR)"
.PHONY: clean

clobber: clean
.PHONY: clobber
