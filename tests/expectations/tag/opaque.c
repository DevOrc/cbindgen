#ifdef __cplusplus
// These could be added as opaque types I guess.
template <typename T>
struct BuildHasherDefault;

struct DefaultHasher;
#endif


#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

struct HashMap_i32__i32__BuildHasherDefault_DefaultHasher;

struct Result_Foo;

/**
 * Fast hash map used internally.
 */
typedef struct HashMap_i32__i32__BuildHasherDefault_DefaultHasher FastHashMap_i32__i32;

typedef FastHashMap_i32__i32 Foo;

typedef struct Result_Foo Bar;

void root(const Foo *a, const Bar *b);
