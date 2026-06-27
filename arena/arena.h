#include <stdint.h>
#include <assert.h>
#include <stddef.h>

typedef uint8_t  u8;
typedef uint16_t u16;

typedef struct Arena
{
    u8 *buffer;
    size_t capacity;
    size_t offset;
}Arena;
