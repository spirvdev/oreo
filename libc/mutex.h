/* This code is part of oreo project, all rights reserved (See LICENSE)
 * Wrote by: "Gabriel Correia"
 * Created at: 2022/04/28
*/

#ifndef LIBC_MUTEX_H
#define LIBC_MUTEX_H

/* This mutex implementation is based on Test-and-set */

#include "libc/stddef.h"

#define MUTEX_INIT 0

typedef volatile _Atomic i32 mutex_t;

extern u0 mutexLock(mutex_t *lockAddress);

extern u0 mutexUnlock(mutex_t *lockAddress);

#define MUTEX_LOCK(mutex)\
  mutexLock(mutex)

#define MUTEX_UNLOCK(mutex)\
  mutexUnlock(mutex)

#endif


