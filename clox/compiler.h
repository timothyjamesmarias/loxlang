#ifndef COMPILER_H
#define COMPILER_H

#include "chunk.h"
#include "vm.h"

bool compile(const char* source, Chunk* chunk);

#endif  // COMPILER_H
