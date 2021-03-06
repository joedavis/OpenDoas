#ifndef INCLUDES_H
#define INCLUDES_H

#ifndef __UNUSED
# define __UNUSED __attribute__ ((unused))
#endif

#ifndef __dead
# define __dead
#endif

#ifndef _PATH_TTY
# define _PATH_TTY "/dev/tty"
#endif

#ifdef HAVE_READPASSPHRASE_H
# include <readpassphrase.h>
#endif

#include "openbsd.h"

#ifdef HAVE_PAM_APPL_H
int pamauth(const char *, const char *, int, int);
#endif

#ifdef PERSIST_TIMESTAMP
int persist_open(int *, int);
int persist_set(int, int);
int persist_clear();
#endif

#endif /* INCLUDES_H */
