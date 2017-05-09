
#ifndef _LIMITS_H
#define _LIMITS_H
#endif

#define INT_MAX ((int)((unsigned)~0>>1))
#define INT_MIN (-INT_MAX-1)

#if __WORDSIZE == 64
#define LONG_MAX ((long)((unsigned long)~0>>1))
#else
#define LONG_MAX INT_MAX
#endif

#define LONG_MIN (-LONG_MAX-1)
