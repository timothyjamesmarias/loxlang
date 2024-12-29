#ifndef DEBUG_H
#define DEBUG_H

#include "chunk.h"

void disassembleChunk(Chunk* chunk, char* name);
int disassembleInstruction(Chunk* chunk, int offset);
int simpleInstruction(char* name, int offset);

#endif //DEBUG_H
