#define OUTCOME_TRY_GLUE2(x, y) x##y
#define OUTCOME_TRY_GLUE(x, y) OUTCOME_TRY_GLUE2(x, y)
#define OUTCOME_TRY_UNIQUE_NAME OUTCOME_TRY_GLUE(_outcome_try_unique_name_temporary, __LINE__)

OUTCOME_TRY_UNIQUE_NAME __LINE__
OUTCOME_TRY_UNIQUE_NAME __LINE__
OUTCOME_TRY_UNIQUE_NAME __LINE__

#include "inc.h"
OUTCOME_TRY_UNIQUE_NAME __LINE__
#include "inc.h"
OUTCOME_TRY_UNIQUE_NAME __LINE__
