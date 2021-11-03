#ifdef LAVA_LOGGING
#define LAVALOG(bugid, x, trigger)  ({(trigger && fprintf(stderr, "\nLAVALOG: %d: %s:%d\n", bugid, __FILE__, __LINE__)), (x);})
#endif
#ifdef FULL_LAVA_LOGGING
#define LAVALOG(bugid, x, trigger)  ({(trigger && fprintf(stderr, "\nLAVALOG: %d: %s:%d\n", bugid, __FILE__, __LINE__), (!trigger && fprintf(stderr, "\nLAVALOG_MISS: %d: %s:%d\n", bugid, __FILE__, __LINE__))) && fflush(0), (x);})
#endif
#ifndef LAVALOG
#define LAVALOG(y,x,z)  (x)
#endif
#ifdef DUA_LOGGING
#define DFLOG(idx, val)  ({fprintf(stderr, "\nDFLOG:%d=%d: %s:%d\n", idx, val, __FILE__, __LINE__) && fflush(0), data_flow[idx]=val;})
#else
#define DFLOG(idx, val) {data_flow[idx]=val;}
#endif







typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;



__extension__
typedef long long int int64_t;




typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;





__extension__
typedef unsigned long long int uint64_t;






typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;



__extension__
typedef long long int int_least64_t;



typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;



__extension__
typedef unsigned long long int uint_least64_t;






typedef signed char int_fast8_t;





typedef int int_fast16_t;
typedef int int_fast32_t;
__extension__
typedef long long int int_fast64_t;



typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
__extension__
typedef unsigned long long int uint_fast64_t;
typedef int intptr_t;


typedef unsigned int uintptr_t;
__extension__
typedef long long int intmax_t;
__extension__
typedef unsigned long long int uintmax_t;
typedef unsigned int size_t;
typedef long int wchar_t;








typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;








typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;




__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;







__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;


__extension__ typedef __u_quad_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __u_quad_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __quad_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct { int __val[2]; } __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __u_quad_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;

__extension__ typedef int __daddr_t;
__extension__ typedef int __key_t;


__extension__ typedef int __clockid_t;


__extension__ typedef void * __timer_t;


__extension__ typedef long int __blksize_t;




__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;


__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;


__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;


__extension__ typedef int __fsword_t;

__extension__ typedef int __ssize_t;


__extension__ typedef long int __syscall_slong_t;

__extension__ typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ typedef int __intptr_t;


__extension__ typedef unsigned int __socklen_t;



typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;


typedef __clock_t clock_t;





typedef __time_t time_t;



typedef __clockid_t clockid_t;
typedef __timer_t timer_t;



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));






static __inline unsigned int
__bswap_32 (int *data_flow, unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
static __inline __uint64_t
__bswap_64 (int *data_flow, __uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}




typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;



typedef __sigset_t sigset_t;







struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };

struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;

extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);





__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[36];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;
typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;





typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;





    int __kind;
    unsigned int __nusers;
    __extension__ union
    {
      struct
      {
 short __espins;
 short __elision;



      } __elision_data;
      __pthread_slist_t __list;
    };

  } __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{
  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;


    unsigned char __flags;
    unsigned char __shared;
    signed char __rwelision;

    unsigned char __pad2;
    int __writer;
  } __data;

  char __size[32];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[20];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;









extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));










extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));











extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;


extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (int *data_flowvoid)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int on_exit (void (*__func) (int *data_flow, int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));













extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;

extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;





extern int system (const char *__command) ;

extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (int *data_flow, const void *, const void *);



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;

extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));








extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



typedef struct {
    int major;
    int minor;
    int patch;
} Lib60870VersionInfo;




typedef enum {
    IEC60870_LINK_LAYER_BALANCED = 0,
    IEC60870_LINK_LAYER_UNBALANCED = 1
} IEC60870_LinkLayerMode;


typedef enum {

    LL_STATE_IDLE,


    LL_STATE_ERROR,


    LL_STATE_BUSY,


    LL_STATE_AVAILABLE
} LinkLayerState;
typedef void (*IEC60870_LinkLayerStateChangedHandler) (int *data_flow, void* parameter, int address, LinkLayerState newState);
typedef void (*IEC60870_RawMessageHandler) (int *data_flow, void* parameter, uint8_t* msg, int msgSize, 
                                                                                       _Bool 
                                                                                            sent);




typedef struct sCS101_AppLayerParameters* CS101_AppLayerParameters;

struct sCS101_AppLayerParameters {
    int sizeOfTypeId;
    int sizeOfVSQ;
    int sizeOfCOT;
    int originatorAddress;
    int sizeOfCA;
    int sizeOfIOA;
    int maxSizeOfASDU;
};




typedef struct sCS101_ASDU* CS101_ASDU;

typedef struct {
    CS101_AppLayerParameters parameters;
    uint8_t* asdu;
    int asduHeaderLength;
    uint8_t* payload;
    int payloadSize;
    uint8_t encodedData[256];
} sCS101_StaticASDU;

typedef sCS101_StaticASDU* CS101_StaticASDU;

typedef struct sCP16Time2a* CP16Time2a;

struct sCP16Time2a {
    uint8_t encodedValue[2];
};

typedef struct sCP24Time2a* CP24Time2a;

struct sCP24Time2a {
    uint8_t encodedValue[3];
};

typedef struct sCP32Time2a* CP32Time2a;




struct sCP32Time2a {
    uint8_t encodedValue[4];
};




typedef struct sCP56Time2a* CP56Time2a;

struct sCP56Time2a {
    uint8_t encodedValue[7];
};




typedef struct sBinaryCounterReading* BinaryCounterReading;

struct sBinaryCounterReading {
    uint8_t encodedValue[5];
};




typedef struct sCS104_APCIParameters* CS104_APCIParameters;

struct sCS104_APCIParameters {
    int k;
    int w;
    int t0;
    int t1;
    int t2;
    int t3;
};

typedef enum {
    M_SP_NA_1 = 1,
    M_SP_TA_1 = 2,
    M_DP_NA_1 = 3,
    M_DP_TA_1 = 4,
    M_ST_NA_1 = 5,
    M_ST_TA_1 = 6,
    M_BO_NA_1 = 7,
    M_BO_TA_1 = 8,
    M_ME_NA_1 = 9,
    M_ME_TA_1 = 10,
    M_ME_NB_1 = 11,
    M_ME_TB_1 = 12,
    M_ME_NC_1 = 13,
    M_ME_TC_1 = 14,
    M_IT_NA_1 = 15,
    M_IT_TA_1 = 16,
    M_EP_TA_1 = 17,
    M_EP_TB_1 = 18,
    M_EP_TC_1 = 19,
    M_PS_NA_1 = 20,
    M_ME_ND_1 = 21,
    M_SP_TB_1 = 30,
    M_DP_TB_1 = 31,
    M_ST_TB_1 = 32,
    M_BO_TB_1 = 33,
    M_ME_TD_1 = 34,
    M_ME_TE_1 = 35,
    M_ME_TF_1 = 36,
    M_IT_TB_1 = 37,
    M_EP_TD_1 = 38,
    M_EP_TE_1 = 39,
    M_EP_TF_1 = 40,
    C_SC_NA_1 = 45,
    C_DC_NA_1 = 46,
    C_RC_NA_1 = 47,
    C_SE_NA_1 = 48,
    C_SE_NB_1 = 49,
    C_SE_NC_1 = 50,
    C_BO_NA_1 = 51,
    C_SC_TA_1 = 58,
    C_DC_TA_1 = 59,
    C_RC_TA_1 = 60,
    C_SE_TA_1 = 61,
    C_SE_TB_1 = 62,
    C_SE_TC_1 = 63,
    C_BO_TA_1 = 64,
    M_EI_NA_1 = 70,
    C_IC_NA_1 = 100,
    C_CI_NA_1 = 101,
    C_RD_NA_1 = 102,
    C_CS_NA_1 = 103,
    C_TS_NA_1 = 104,
    C_RP_NA_1 = 105,
    C_CD_NA_1 = 106,
    C_TS_TA_1 = 107,
    P_ME_NA_1 = 110,
    P_ME_NB_1 = 111,
    P_ME_NC_1 = 112,
    P_AC_NA_1 = 113,
    F_FR_NA_1 = 120,
    F_SR_NA_1 = 121,
    F_SC_NA_1 = 122,
    F_LS_NA_1 = 123,
    F_AF_NA_1 = 124,
    F_SG_NA_1 = 125,
    F_DR_TA_1 = 126,
    F_SC_NB_1 = 127
} IEC60870_5_TypeID;

typedef IEC60870_5_TypeID TypeID;

const char*
TypeID_toString(int *data_flow, TypeID self);

typedef uint8_t QualityDescriptor;




typedef uint8_t QualityDescriptorP;
typedef uint8_t StartEvent;
typedef uint8_t OutputCircuitInfo;
typedef uint8_t QualifierOfParameterMV;
typedef uint8_t CauseOfInitialization;
typedef uint8_t QualifierOfCommand;
typedef uint8_t SelectAndCallQualifier;
typedef uint8_t QualifierOfInterrogation;
typedef uint8_t QualifierOfCIC;
typedef uint8_t QualifierOfRPC;
typedef uint8_t QualifierOfParameterActivation;







typedef uint8_t SetpointCommandQualifier;

typedef enum {
    IEC60870_DOUBLE_POINT_INTERMEDIATE = 0,
    IEC60870_DOUBLE_POINT_OFF = 1,
    IEC60870_DOUBLE_POINT_ON = 2,
    IEC60870_DOUBLE_POINT_INDETERMINATE = 3
} DoublePointValue;

typedef enum {
    IEC60870_EVENTSTATE_INDETERMINATE_0 = 0,
    IEC60870_EVENTSTATE_OFF = 1,
    IEC60870_EVENTSTATE_ON = 2,
    IEC60870_EVENTSTATE_INDETERMINATE_3 = 3
} EventState;




typedef enum {
    IEC60870_STEP_INVALID_0 = 0,
    IEC60870_STEP_LOWER = 1,
    IEC60870_STEP_HIGHER = 2,
    IEC60870_STEP_INVALID_3 = 3
} StepCommandValue;

typedef uint8_t tSingleEvent;

typedef tSingleEvent* SingleEvent;

void
SingleEvent_setEventState(int *data_flow, SingleEvent self, EventState eventState);

EventState
SingleEvent_getEventState(int *data_flow, SingleEvent self);

void
SingleEvent_setQDP(int *data_flow, SingleEvent self, QualityDescriptorP qdp);

QualityDescriptorP
SingleEvent_getQDP(int *data_flow, SingleEvent self);


typedef struct sStatusAndStatusChangeDetection tStatusAndStatusChangeDetection;

typedef tStatusAndStatusChangeDetection* StatusAndStatusChangeDetection;

struct sStatusAndStatusChangeDetection {
    uint8_t encodedValue[4];
};

uint16_t
StatusAndStatusChangeDetection_getSTn(int *data_flow, StatusAndStatusChangeDetection self);

uint16_t
StatusAndStatusChangeDetection_getCDn(int *data_flow, StatusAndStatusChangeDetection self);

void
StatusAndStatusChangeDetection_setSTn(int *data_flow, StatusAndStatusChangeDetection self, uint16_t value);


_Bool

StatusAndStatusChangeDetection_getST(int *data_flow, StatusAndStatusChangeDetection self, int index);


_Bool

StatusAndStatusChangeDetection_getCD(int *data_flow, StatusAndStatusChangeDetection self, int index);






typedef struct sInformationObject* InformationObject;






int
InformationObject_getMaxSizeInMemory(int *data_flowvoid);

int
InformationObject_getObjectAddress(int *data_flow, InformationObject self);

TypeID
InformationObject_getType(int *data_flow, InformationObject self);
void
InformationObject_destroy(int *data_flow, InformationObject self);





typedef struct sSinglePointInformation* SinglePointInformation;

SinglePointInformation
SinglePointInformation_create(int *data_flow, SinglePointInformation self, int ioa, 
                                                                   _Bool 
                                                                        value,
        QualityDescriptor quality);


_Bool

SinglePointInformation_getValue(int *data_flow, SinglePointInformation self);

QualityDescriptor
SinglePointInformation_getQuality(int *data_flow, SinglePointInformation self);

void
SinglePointInformation_destroy(int *data_flow, SinglePointInformation self);





typedef struct sSinglePointWithCP24Time2a* SinglePointWithCP24Time2a;

SinglePointWithCP24Time2a
SinglePointWithCP24Time2a_create(int *data_flow, SinglePointWithCP24Time2a self, int ioa, 
                                                                         _Bool 
                                                                              value,
        QualityDescriptor quality, CP24Time2a timestamp);

void
SinglePointWithCP24Time2a_destroy(int *data_flow, SinglePointWithCP24Time2a self);

CP24Time2a
SinglePointWithCP24Time2a_getTimestamp(int *data_flow, SinglePointWithCP24Time2a self);





typedef struct sSinglePointWithCP56Time2a* SinglePointWithCP56Time2a;

SinglePointWithCP56Time2a
SinglePointWithCP56Time2a_create(int *data_flow, SinglePointWithCP56Time2a self, int ioa, 
                                                                         _Bool 
                                                                              value,
        QualityDescriptor quality, CP56Time2a timestamp);

void
SinglePointWithCP56Time2a_destroy(int *data_flow, SinglePointWithCP56Time2a self);

CP56Time2a
SinglePointWithCP56Time2a_getTimestamp(int *data_flow, SinglePointWithCP56Time2a self);






typedef struct sDoublePointInformation* DoublePointInformation;

void
DoublePointInformation_destroy(int *data_flow, DoublePointInformation self);

DoublePointInformation
DoublePointInformation_create(int *data_flow, DoublePointInformation self, int ioa, DoublePointValue value,
        QualityDescriptor quality);

DoublePointValue
DoublePointInformation_getValue(int *data_flow, DoublePointInformation self);

QualityDescriptor
DoublePointInformation_getQuality(int *data_flow, DoublePointInformation self);





typedef struct sDoublePointWithCP24Time2a* DoublePointWithCP24Time2a;

void
DoublePointWithCP24Time2a_destroy(int *data_flow, DoublePointWithCP24Time2a self);

DoublePointWithCP24Time2a
DoublePointWithCP24Time2a_create(int *data_flow, DoublePointWithCP24Time2a self, int ioa, DoublePointValue value,
        QualityDescriptor quality, CP24Time2a timestamp);

CP24Time2a
DoublePointWithCP24Time2a_getTimestamp(int *data_flow, DoublePointWithCP24Time2a self);





typedef struct sDoublePointWithCP56Time2a* DoublePointWithCP56Time2a;

DoublePointWithCP56Time2a
DoublePointWithCP56Time2a_create(int *data_flow, DoublePointWithCP56Time2a self, int ioa, DoublePointValue value,
        QualityDescriptor quality, CP56Time2a timestamp);

void
DoublePointWithCP56Time2a_destroy(int *data_flow, DoublePointWithCP56Time2a self);

CP56Time2a
DoublePointWithCP56Time2a_getTimestamp(int *data_flow, DoublePointWithCP56Time2a self);





typedef struct sStepPositionInformation* StepPositionInformation;
StepPositionInformation
StepPositionInformation_create(int *data_flow, StepPositionInformation self, int ioa, int value, 
                                                                                _Bool 
                                                                                     isTransient,
        QualityDescriptor quality);

void
StepPositionInformation_destroy(int *data_flow, StepPositionInformation self);

int
StepPositionInformation_getObjectAddress(int *data_flow, StepPositionInformation self);




int
StepPositionInformation_getValue(int *data_flow, StepPositionInformation self);


_Bool

StepPositionInformation_isTransient(int *data_flow, StepPositionInformation self);

QualityDescriptor
StepPositionInformation_getQuality(int *data_flow, StepPositionInformation self);





typedef struct sStepPositionWithCP24Time2a* StepPositionWithCP24Time2a;

void
StepPositionWithCP24Time2a_destroy(int *data_flow, StepPositionWithCP24Time2a self);

StepPositionWithCP24Time2a
StepPositionWithCP24Time2a_create(int *data_flow, StepPositionWithCP24Time2a self, int ioa, int value, 
                                                                                      _Bool 
                                                                                           isTransient,
        QualityDescriptor quality, CP24Time2a timestamp);

CP24Time2a
StepPositionWithCP24Time2a_getTimestamp(int *data_flow, StepPositionWithCP24Time2a self);






typedef struct sStepPositionWithCP56Time2a* StepPositionWithCP56Time2a;

void
StepPositionWithCP56Time2a_destroy(int *data_flow, StepPositionWithCP56Time2a self);

StepPositionWithCP56Time2a
StepPositionWithCP56Time2a_create(int *data_flow, StepPositionWithCP56Time2a self, int ioa, int value, 
                                                                                      _Bool 
                                                                                           isTransient,
        QualityDescriptor quality, CP56Time2a timestamp);

CP56Time2a
StepPositionWithCP56Time2a_getTimestamp(int *data_flow, StepPositionWithCP56Time2a self);





typedef struct sBitString32* BitString32;

void
BitString32_destroy(int *data_flow, BitString32 self);

BitString32
BitString32_create(int *data_flow, BitString32 self, int ioa, uint32_t value);

uint32_t
BitString32_getValue(int *data_flow, BitString32 self);

QualityDescriptor
BitString32_getQuality(int *data_flow, BitString32 self);





typedef struct sBitstring32WithCP24Time2a* Bitstring32WithCP24Time2a;

void
Bitstring32WithCP24Time2a_destroy(int *data_flow, Bitstring32WithCP24Time2a self);

Bitstring32WithCP24Time2a
Bitstring32WithCP24Time2a_create(int *data_flow, Bitstring32WithCP24Time2a self, int ioa, uint32_t value, CP24Time2a timestamp);

CP24Time2a
Bitstring32WithCP24Time2a_getTimestamp(int *data_flow, Bitstring32WithCP24Time2a self);





typedef struct sBitstring32WithCP56Time2a* Bitstring32WithCP56Time2a;

void
Bitstring32WithCP56Time2a_destroy(int *data_flow, Bitstring32WithCP56Time2a self);

Bitstring32WithCP56Time2a
Bitstring32WithCP56Time2a_create(int *data_flow, Bitstring32WithCP56Time2a self, int ioa, uint32_t value, CP56Time2a timestamp);

CP56Time2a
Bitstring32WithCP56Time2a_getTimestamp(int *data_flow, Bitstring32WithCP56Time2a self);





typedef struct sMeasuredValueNormalizedWithoutQuality* MeasuredValueNormalizedWithoutQuality;

void
MeasuredValueNormalizedWithoutQuality_destroy(int *data_flow, MeasuredValueNormalizedWithoutQuality self);

MeasuredValueNormalizedWithoutQuality
MeasuredValueNormalizedWithoutQuality_create(int *data_flow, MeasuredValueNormalizedWithoutQuality self, int ioa, float value);

float
MeasuredValueNormalizedWithoutQuality_getValue(int *data_flow, MeasuredValueNormalizedWithoutQuality self);

void
MeasuredValueNormalizedWithoutQuality_setValue(int *data_flow, MeasuredValueNormalizedWithoutQuality self, float value);





typedef struct sMeasuredValueNormalized* MeasuredValueNormalized;

void
MeasuredValueNormalized_destroy(int *data_flow, MeasuredValueNormalized self);

MeasuredValueNormalized
MeasuredValueNormalized_create(int *data_flow, MeasuredValueNormalized self, int ioa, float value, QualityDescriptor quality);

float
MeasuredValueNormalized_getValue(int *data_flow, MeasuredValueNormalized self);

void
MeasuredValueNormalized_setValue(int *data_flow, MeasuredValueNormalized self, float value);

QualityDescriptor
MeasuredValueNormalized_getQuality(int *data_flow, MeasuredValueNormalized self);





typedef struct sMeasuredValueNormalizedWithCP24Time2a* MeasuredValueNormalizedWithCP24Time2a;

void
MeasuredValueNormalizedWithCP24Time2a_destroy(int *data_flow, MeasuredValueNormalizedWithCP24Time2a self);

MeasuredValueNormalizedWithCP24Time2a
MeasuredValueNormalizedWithCP24Time2a_create(int *data_flow, MeasuredValueNormalizedWithCP24Time2a self, int ioa,
            float value, QualityDescriptor quality, CP24Time2a timestamp);

CP24Time2a
MeasuredValueNormalizedWithCP24Time2a_getTimestamp(int *data_flow, MeasuredValueNormalizedWithCP24Time2a self);

void
MeasuredValueNormalizedWithCP24Time2a_setTimestamp(int *data_flow, MeasuredValueNormalizedWithCP24Time2a self, CP24Time2a value);





typedef struct sMeasuredValueNormalizedWithCP56Time2a* MeasuredValueNormalizedWithCP56Time2a;

void
MeasuredValueNormalizedWithCP56Time2a_destroy(int *data_flow, MeasuredValueNormalizedWithCP56Time2a self);

MeasuredValueNormalizedWithCP56Time2a
MeasuredValueNormalizedWithCP56Time2a_create(int *data_flow, MeasuredValueNormalizedWithCP56Time2a self, int ioa,
            float value, QualityDescriptor quality, CP56Time2a timestamp);

CP56Time2a
MeasuredValueNormalizedWithCP56Time2a_getTimestamp(int *data_flow, MeasuredValueNormalizedWithCP56Time2a self);

void
MeasuredValueNormalizedWithCP56Time2a_setTimestamp(int *data_flow, MeasuredValueNormalizedWithCP56Time2a self, CP56Time2a value);






typedef struct sMeasuredValueScaled* MeasuredValueScaled;
MeasuredValueScaled
MeasuredValueScaled_create(int *data_flow, MeasuredValueScaled self, int ioa, int value, QualityDescriptor quality);

void
MeasuredValueScaled_destroy(int *data_flow, MeasuredValueScaled self);

int
MeasuredValueScaled_getValue(int *data_flow, MeasuredValueScaled self);

void
MeasuredValueScaled_setValue(int *data_flow, MeasuredValueScaled self, int value);

QualityDescriptor
MeasuredValueScaled_getQuality(int *data_flow, MeasuredValueScaled self);

void
MeasuredValueScaled_setQuality(int *data_flow, MeasuredValueScaled self, QualityDescriptor quality);





typedef struct sMeasuredValueScaledWithCP24Time2a* MeasuredValueScaledWithCP24Time2a;

void
MeasuredValueScaledWithCP24Time2a_destroy(int *data_flow, MeasuredValueScaledWithCP24Time2a self);

MeasuredValueScaledWithCP24Time2a
MeasuredValueScaledWithCP24Time2a_create(int *data_flow, MeasuredValueScaledWithCP24Time2a self, int ioa,
        int value, QualityDescriptor quality, CP24Time2a timestamp);

CP24Time2a
MeasuredValueScaledWithCP24Time2a_getTimestamp(int *data_flow, MeasuredValueScaledWithCP24Time2a self);

void
MeasuredValueScaledWithCP24Time2a_setTimestamp(int *data_flow, MeasuredValueScaledWithCP24Time2a self, CP24Time2a value);





typedef struct sMeasuredValueScaledWithCP56Time2a* MeasuredValueScaledWithCP56Time2a;

void
MeasuredValueScaledWithCP56Time2a_destroy(int *data_flow, MeasuredValueScaledWithCP56Time2a self);

MeasuredValueScaledWithCP56Time2a
MeasuredValueScaledWithCP56Time2a_create(int *data_flow, MeasuredValueScaledWithCP56Time2a self, int ioa,
        int value, QualityDescriptor quality, CP56Time2a timestamp);

CP56Time2a
MeasuredValueScaledWithCP56Time2a_getTimestamp(int *data_flow, MeasuredValueScaledWithCP56Time2a self);

void
MeasuredValueScaledWithCP56Time2a_setTimestamp(int *data_flow, MeasuredValueScaledWithCP56Time2a self, CP56Time2a value);





typedef struct sMeasuredValueShort* MeasuredValueShort;

void
MeasuredValueShort_destroy(int *data_flow, MeasuredValueShort self);

MeasuredValueShort
MeasuredValueShort_create(int *data_flow, MeasuredValueShort self, int ioa, float value, QualityDescriptor quality);

float
MeasuredValueShort_getValue(int *data_flow, MeasuredValueShort self);

void
MeasuredValueShort_setValue(int *data_flow, MeasuredValueShort self, float value);

QualityDescriptor
MeasuredValueShort_getQuality(int *data_flow, MeasuredValueShort self);





typedef struct sMeasuredValueShortWithCP24Time2a* MeasuredValueShortWithCP24Time2a;

void
MeasuredValueShortWithCP24Time2a_destroy(int *data_flow, MeasuredValueShortWithCP24Time2a self);

MeasuredValueShortWithCP24Time2a
MeasuredValueShortWithCP24Time2a_create(int *data_flow, MeasuredValueShortWithCP24Time2a self, int ioa,
        float value, QualityDescriptor quality, CP24Time2a timestamp);

CP24Time2a
MeasuredValueShortWithCP24Time2a_getTimestamp(int *data_flow, MeasuredValueShortWithCP24Time2a self);

void
MeasuredValueShortWithCP24Time2a_setTimestamp(int *data_flow, MeasuredValueShortWithCP24Time2a self,
        CP24Time2a value);





typedef struct sMeasuredValueShortWithCP56Time2a* MeasuredValueShortWithCP56Time2a;

void
MeasuredValueShortWithCP56Time2a_destroy(int *data_flow, MeasuredValueShortWithCP56Time2a self);

MeasuredValueShortWithCP56Time2a
MeasuredValueShortWithCP56Time2a_create(int *data_flow, MeasuredValueShortWithCP56Time2a self, int ioa,
        float value, QualityDescriptor quality, CP56Time2a timestamp);

CP56Time2a
MeasuredValueShortWithCP56Time2a_getTimestamp(int *data_flow, MeasuredValueShortWithCP56Time2a self);

void
MeasuredValueShortWithCP56Time2a_setTimestamp(int *data_flow, MeasuredValueShortWithCP56Time2a self,
        CP56Time2a value);





typedef struct sIntegratedTotals* IntegratedTotals;

void
IntegratedTotals_destroy(int *data_flow, IntegratedTotals self);
IntegratedTotals
IntegratedTotals_create(int *data_flow, IntegratedTotals self, int ioa, BinaryCounterReading value);

BinaryCounterReading
IntegratedTotals_getBCR(int *data_flow, IntegratedTotals self);

void
IntegratedTotals_setBCR(int *data_flow, IntegratedTotals self, BinaryCounterReading value);





typedef struct sIntegratedTotalsWithCP24Time2a* IntegratedTotalsWithCP24Time2a;
IntegratedTotalsWithCP24Time2a
IntegratedTotalsWithCP24Time2a_create(int *data_flow, IntegratedTotalsWithCP24Time2a self, int ioa,
        BinaryCounterReading value, CP24Time2a timestamp);

void
IntegratedTotalsWithCP24Time2a_destroy(int *data_flow, IntegratedTotalsWithCP24Time2a self);

CP24Time2a
IntegratedTotalsWithCP24Time2a_getTimestamp(int *data_flow, IntegratedTotalsWithCP24Time2a self);

void
IntegratedTotalsWithCP24Time2a_setTimestamp(int *data_flow, IntegratedTotalsWithCP24Time2a self,
        CP24Time2a value);





typedef struct sIntegratedTotalsWithCP56Time2a* IntegratedTotalsWithCP56Time2a;
IntegratedTotalsWithCP56Time2a
IntegratedTotalsWithCP56Time2a_create(int *data_flow, IntegratedTotalsWithCP56Time2a self, int ioa,
        BinaryCounterReading value, CP56Time2a timestamp);

void
IntegratedTotalsWithCP56Time2a_destroy(int *data_flow, IntegratedTotalsWithCP56Time2a self);

CP56Time2a
IntegratedTotalsWithCP56Time2a_getTimestamp(int *data_flow, IntegratedTotalsWithCP56Time2a self);

void
IntegratedTotalsWithCP56Time2a_setTimestamp(int *data_flow, IntegratedTotalsWithCP56Time2a self,
        CP56Time2a value);





typedef struct sEventOfProtectionEquipment* EventOfProtectionEquipment;

void
EventOfProtectionEquipment_destroy(int *data_flow, EventOfProtectionEquipment self);

EventOfProtectionEquipment
EventOfProtectionEquipment_create(int *data_flow, EventOfProtectionEquipment self, int ioa,
        SingleEvent event, CP16Time2a elapsedTime, CP24Time2a timestamp);

SingleEvent
EventOfProtectionEquipment_getEvent(int *data_flow, EventOfProtectionEquipment self);

CP16Time2a
EventOfProtectionEquipment_getElapsedTime(int *data_flow, EventOfProtectionEquipment self);

CP24Time2a
EventOfProtectionEquipment_getTimestamp(int *data_flow, EventOfProtectionEquipment self);





typedef struct sPackedStartEventsOfProtectionEquipment* PackedStartEventsOfProtectionEquipment;

PackedStartEventsOfProtectionEquipment
PackedStartEventsOfProtectionEquipment_create(int *data_flow, PackedStartEventsOfProtectionEquipment self, int ioa,
        StartEvent event, QualityDescriptorP qdp, CP16Time2a elapsedTime, CP24Time2a timestamp);

void
PackedStartEventsOfProtectionEquipment_destroy(int *data_flow, PackedStartEventsOfProtectionEquipment self);

StartEvent
PackedStartEventsOfProtectionEquipment_getEvent(int *data_flow, PackedStartEventsOfProtectionEquipment self);

QualityDescriptorP
PackedStartEventsOfProtectionEquipment_getQuality(int *data_flow, PackedStartEventsOfProtectionEquipment self);

CP16Time2a
PackedStartEventsOfProtectionEquipment_getElapsedTime(int *data_flow, PackedStartEventsOfProtectionEquipment self);

CP24Time2a
PackedStartEventsOfProtectionEquipment_getTimestamp(int *data_flow, PackedStartEventsOfProtectionEquipment self);





typedef struct sPackedOutputCircuitInfo* PackedOutputCircuitInfo;

void
PackedOutputCircuitInfo_destroy(int *data_flow, PackedOutputCircuitInfo self);

PackedOutputCircuitInfo
PackedOutputCircuitInfo_create(int *data_flow, PackedOutputCircuitInfo self, int ioa,
        OutputCircuitInfo oci, QualityDescriptorP qdp, CP16Time2a operatingTime, CP24Time2a timestamp);

OutputCircuitInfo
PackedOutputCircuitInfo_getOCI(int *data_flow, PackedOutputCircuitInfo self);

QualityDescriptorP
PackedOutputCircuitInfo_getQuality(int *data_flow, PackedOutputCircuitInfo self);

CP16Time2a
PackedOutputCircuitInfo_getOperatingTime(int *data_flow, PackedOutputCircuitInfo self);

CP24Time2a
PackedOutputCircuitInfo_getTimestamp(int *data_flow, PackedOutputCircuitInfo self);





typedef struct sPackedSinglePointWithSCD* PackedSinglePointWithSCD;

void
PackedSinglePointWithSCD_destroy(int *data_flow, PackedSinglePointWithSCD self);

PackedSinglePointWithSCD
PackedSinglePointWithSCD_create(int *data_flow, PackedSinglePointWithSCD self, int ioa,
        StatusAndStatusChangeDetection scd, QualityDescriptor qds);

QualityDescriptor
PackedSinglePointWithSCD_getQuality(int *data_flow, PackedSinglePointWithSCD self);

StatusAndStatusChangeDetection
PackedSinglePointWithSCD_getSCD(int *data_flow, PackedSinglePointWithSCD self);






typedef struct sSingleCommand* SingleCommand;
SingleCommand
SingleCommand_create(int *data_flow, SingleCommand self, int ioa, 
                                                 _Bool 
                                                      command, 
                                                               _Bool 
                                                                    selectCommand, int qu);

void
SingleCommand_destroy(int *data_flow, SingleCommand self);






int
SingleCommand_getQU(int *data_flow, SingleCommand self);





_Bool

SingleCommand_getState(int *data_flow, SingleCommand self);







_Bool

SingleCommand_isSelect(int *data_flow, SingleCommand self);





typedef struct sSingleCommandWithCP56Time2a* SingleCommandWithCP56Time2a;

void
SingleCommandWithCP56Time2a_destroy(int *data_flow, SingleCommandWithCP56Time2a self);
SingleCommandWithCP56Time2a
SingleCommandWithCP56Time2a_create(int *data_flow, SingleCommandWithCP56Time2a self, int ioa, 
                                                                             _Bool 
                                                                                  command, 
                                                                                           _Bool 
                                                                                                selectCommand, int qu, CP56Time2a timestamp);
CP56Time2a
SingleCommandWithCP56Time2a_getTimestamp(int *data_flow, SingleCommandWithCP56Time2a self);





typedef struct sDoubleCommand* DoubleCommand;

void
DoubleCommand_destroy(int *data_flow, DoubleCommand self);
DoubleCommand
DoubleCommand_create(int *data_flow, DoubleCommand self, int ioa, int command, 
                                                              _Bool 
                                                                   selectCommand, int qu);






int
DoubleCommand_getQU(int *data_flow, DoubleCommand self);






int
DoubleCommand_getState(int *data_flow, DoubleCommand self);







_Bool

DoubleCommand_isSelect(int *data_flow, DoubleCommand self);





typedef struct sStepCommand* StepCommand;

void
StepCommand_destroy(int *data_flow, StepCommand self);

StepCommand
StepCommand_create(int *data_flow, StepCommand self, int ioa, StepCommandValue command, 
                                                                       _Bool 
                                                                            selectCommand, int qu);






int
StepCommand_getQU(int *data_flow, StepCommand self);

StepCommandValue
StepCommand_getState(int *data_flow, StepCommand self);







_Bool

StepCommand_isSelect(int *data_flow, StepCommand self);





typedef struct sSetpointCommandNormalized* SetpointCommandNormalized;

void
SetpointCommandNormalized_destroy(int *data_flow, SetpointCommandNormalized self);
SetpointCommandNormalized
SetpointCommandNormalized_create(int *data_flow, SetpointCommandNormalized self, int ioa, float value, 
                                                                                      _Bool 
                                                                                           selectCommand, int ql);

float
SetpointCommandNormalized_getValue(int *data_flow, SetpointCommandNormalized self);

int
SetpointCommandNormalized_getQL(int *data_flow, SetpointCommandNormalized self);







_Bool

SetpointCommandNormalized_isSelect(int *data_flow, SetpointCommandNormalized self);





typedef struct sSetpointCommandScaled* SetpointCommandScaled;

void
SetpointCommandScaled_destroy(int *data_flow, SetpointCommandScaled self);
SetpointCommandScaled
SetpointCommandScaled_create(int *data_flow, SetpointCommandScaled self, int ioa, int value, 
                                                                            _Bool 
                                                                                 selectCommand, int ql);

int
SetpointCommandScaled_getValue(int *data_flow, SetpointCommandScaled self);

int
SetpointCommandScaled_getQL(int *data_flow, SetpointCommandScaled self);







_Bool

SetpointCommandScaled_isSelect(int *data_flow, SetpointCommandScaled self);





typedef struct sSetpointCommandShort* SetpointCommandShort;

void
SetpointCommandShort_destroy(int *data_flow, SetpointCommandShort self);
SetpointCommandShort
SetpointCommandShort_create(int *data_flow, SetpointCommandShort self, int ioa, float value, 
                                                                            _Bool 
                                                                                 selectCommand, int ql);

float
SetpointCommandShort_getValue(int *data_flow, SetpointCommandShort self);

int
SetpointCommandShort_getQL(int *data_flow, SetpointCommandShort self);







_Bool

SetpointCommandShort_isSelect(int *data_flow, SetpointCommandShort self);





typedef struct sBitstring32Command* Bitstring32Command;

Bitstring32Command
Bitstring32Command_create(int *data_flow, Bitstring32Command self, int ioa, uint32_t value);

void
Bitstring32Command_destroy(int *data_flow, Bitstring32Command self);

uint32_t
Bitstring32Command_getValue(int *data_flow, Bitstring32Command self);





typedef struct sInterrogationCommand* InterrogationCommand;

InterrogationCommand
InterrogationCommand_create(int *data_flow, InterrogationCommand self, int ioa, uint8_t qoi);

void
InterrogationCommand_destroy(int *data_flow, InterrogationCommand self);

uint8_t
InterrogationCommand_getQOI(int *data_flow, InterrogationCommand self);





typedef struct sReadCommand* ReadCommand;

ReadCommand
ReadCommand_create(int *data_flow, ReadCommand self, int ioa);

void
ReadCommand_destroy(int *data_flow, ReadCommand self);





typedef struct sClockSynchronizationCommand* ClockSynchronizationCommand;

ClockSynchronizationCommand
ClockSynchronizationCommand_create(int *data_flow, ClockSynchronizationCommand self, int ioa, CP56Time2a timestamp);

void
ClockSynchronizationCommand_destroy(int *data_flow, ClockSynchronizationCommand self);

CP56Time2a
ClockSynchronizationCommand_getTime(int *data_flow, ClockSynchronizationCommand self);





typedef struct sMeasuredValueNormalized* ParameterNormalizedValue;

void
ParameterNormalizedValue_destroy(int *data_flow, ParameterNormalizedValue self);
ParameterNormalizedValue
ParameterNormalizedValue_create(int *data_flow, ParameterNormalizedValue self, int ioa, float value, QualifierOfParameterMV qpm);

float
ParameterNormalizedValue_getValue(int *data_flow, ParameterNormalizedValue self);

void
ParameterNormalizedValue_setValue(int *data_flow, ParameterNormalizedValue self, float value);






QualifierOfParameterMV
ParameterNormalizedValue_getQPM(int *data_flow, ParameterNormalizedValue self);





typedef struct sMeasuredValueScaled* ParameterScaledValue;

void
ParameterScaledValue_destroy(int *data_flow, ParameterScaledValue self);
ParameterScaledValue
ParameterScaledValue_create(int *data_flow, ParameterScaledValue self, int ioa, int value, QualifierOfParameterMV qpm);

int
ParameterScaledValue_getValue(int *data_flow, ParameterScaledValue self);

void
ParameterScaledValue_setValue(int *data_flow, ParameterScaledValue self, int value);






QualifierOfParameterMV
ParameterScaledValue_getQPM(int *data_flow, ParameterScaledValue self);





typedef struct sMeasuredValueShort* ParameterFloatValue;

void
ParameterFloatValue_destroy(int *data_flow, ParameterFloatValue self);
ParameterFloatValue
ParameterFloatValue_create(int *data_flow, ParameterFloatValue self, int ioa, float value, QualifierOfParameterMV qpm);

float
ParameterFloatValue_getValue(int *data_flow, ParameterFloatValue self);

void
ParameterFloatValue_setValue(int *data_flow, ParameterFloatValue self, float value);






QualifierOfParameterMV
ParameterFloatValue_getQPM(int *data_flow, ParameterFloatValue self);





typedef struct sParameterActivation* ParameterActivation;

void
ParameterActivation_destroy(int *data_flow, ParameterActivation self);
ParameterActivation
ParameterActivation_create(int *data_flow, ParameterActivation self, int ioa, QualifierOfParameterActivation qpa);






QualifierOfParameterActivation
ParameterActivation_getQuality(int *data_flow, ParameterActivation self);





typedef struct sEventOfProtectionEquipmentWithCP56Time2a* EventOfProtectionEquipmentWithCP56Time2a;

void
EventOfProtectionEquipmentWithCP56Time2a_destroy(int *data_flow, EventOfProtectionEquipmentWithCP56Time2a self);

EventOfProtectionEquipmentWithCP56Time2a
EventOfProtectionEquipmentWithCP56Time2a_create(int *data_flow, EventOfProtectionEquipmentWithCP56Time2a self, int ioa,
        SingleEvent event, CP16Time2a elapsedTime, CP56Time2a timestamp);

SingleEvent
EventOfProtectionEquipmentWithCP56Time2a_getEvent(int *data_flow, EventOfProtectionEquipmentWithCP56Time2a self);

CP16Time2a
EventOfProtectionEquipmentWithCP56Time2a_getElapsedTime(int *data_flow, EventOfProtectionEquipmentWithCP56Time2a self);

CP56Time2a
EventOfProtectionEquipmentWithCP56Time2a_getTimestamp(int *data_flow, EventOfProtectionEquipmentWithCP56Time2a self);





typedef struct sPackedStartEventsOfProtectionEquipmentWithCP56Time2a* PackedStartEventsOfProtectionEquipmentWithCP56Time2a;

void
PackedStartEventsOfProtectionEquipmentWithCP56Time2a_destroy(int *data_flow, PackedStartEventsOfProtectionEquipmentWithCP56Time2a self);
PackedStartEventsOfProtectionEquipmentWithCP56Time2a

PackedStartEventsOfProtectionEquipmentWithCP56Time2a_create(int *data_flow, PackedStartEventsOfProtectionEquipmentWithCP56Time2a self, int ioa,
        StartEvent event, QualityDescriptorP qdp, CP16Time2a elapsedTime, CP56Time2a timestamp);

StartEvent
PackedStartEventsOfProtectionEquipmentWithCP56Time2a_getEvent(int *data_flow, PackedStartEventsOfProtectionEquipmentWithCP56Time2a self);

QualityDescriptorP
PackedStartEventsOfProtectionEquipmentWithCP56Time2a_getQuality(int *data_flow, PackedStartEventsOfProtectionEquipmentWithCP56Time2a self);

CP16Time2a
PackedStartEventsOfProtectionEquipmentWithCP56Time2a_getElapsedTime(int *data_flow, PackedStartEventsOfProtectionEquipmentWithCP56Time2a self);

CP56Time2a
PackedStartEventsOfProtectionEquipmentWithCP56Time2a_getTimestamp(int *data_flow, PackedStartEventsOfProtectionEquipmentWithCP56Time2a self);





typedef struct sPackedOutputCircuitInfoWithCP56Time2a* PackedOutputCircuitInfoWithCP56Time2a;

void
PackedOutputCircuitInfoWithCP56Time2a_destroy(int *data_flow, PackedOutputCircuitInfoWithCP56Time2a self);

PackedOutputCircuitInfoWithCP56Time2a
PackedOutputCircuitInfoWithCP56Time2a_create(int *data_flow, PackedOutputCircuitInfoWithCP56Time2a self, int ioa,
        OutputCircuitInfo oci, QualityDescriptorP qdp, CP16Time2a operatingTime, CP56Time2a timestamp);

OutputCircuitInfo
PackedOutputCircuitInfoWithCP56Time2a_getOCI(int *data_flow, PackedOutputCircuitInfoWithCP56Time2a self);

QualityDescriptorP
PackedOutputCircuitInfoWithCP56Time2a_getQuality(int *data_flow, PackedOutputCircuitInfoWithCP56Time2a self);

CP16Time2a
PackedOutputCircuitInfoWithCP56Time2a_getOperatingTime(int *data_flow, PackedOutputCircuitInfoWithCP56Time2a self);

CP56Time2a
PackedOutputCircuitInfoWithCP56Time2a_getTimestamp(int *data_flow, PackedOutputCircuitInfoWithCP56Time2a self);





typedef struct sDoubleCommandWithCP56Time2a* DoubleCommandWithCP56Time2a;

void
DoubleCommandWithCP56Time2a_destroy(int *data_flow, DoubleCommandWithCP56Time2a self);

DoubleCommandWithCP56Time2a
DoubleCommandWithCP56Time2a_create(int *data_flow, DoubleCommandWithCP56Time2a self, int ioa, int command, 
                                                                                          _Bool 
                                                                                               selectCommand, int qu, CP56Time2a timestamp);

int
DoubleCommandWithCP56Time2a_getQU(int *data_flow, DoubleCommandWithCP56Time2a self);

int
DoubleCommandWithCP56Time2a_getState(int *data_flow, DoubleCommandWithCP56Time2a self);


_Bool

DoubleCommandWithCP56Time2a_isSelect(int *data_flow, DoubleCommandWithCP56Time2a self);

CP56Time2a
DoubleCommandWithCP56Time2a_getTimestamp(int *data_flow, DoubleCommandWithCP56Time2a self);





typedef struct sStepCommandWithCP56Time2a* StepCommandWithCP56Time2a;

void
StepCommandWithCP56Time2a_destroy(int *data_flow, StepCommand self);

StepCommandWithCP56Time2a
StepCommandWithCP56Time2a_create(int *data_flow, StepCommandWithCP56Time2a self, int ioa, StepCommandValue command, 
                                                                                                   _Bool 
                                                                                                        selectCommand, int qu, CP56Time2a timestamp);

int
StepCommandWithCP56Time2a_getQU(int *data_flow, StepCommandWithCP56Time2a self);

StepCommandValue
StepCommandWithCP56Time2a_getState(int *data_flow, StepCommandWithCP56Time2a self);


_Bool

StepCommandWithCP56Time2a_isSelect(int *data_flow, StepCommandWithCP56Time2a self);

CP56Time2a
StepCommandWithCP56Time2a_getTimestamp(int *data_flow, StepCommandWithCP56Time2a self);





typedef struct sSetpointCommandNormalizedWithCP56Time2a* SetpointCommandNormalizedWithCP56Time2a;

void
SetpointCommandNormalizedWithCP56Time2a_destroy(int *data_flow, SetpointCommandNormalizedWithCP56Time2a self);

SetpointCommandNormalizedWithCP56Time2a
SetpointCommandNormalizedWithCP56Time2a_create(int *data_flow, SetpointCommandNormalizedWithCP56Time2a self, int ioa, float value, 
                                                                                                                  _Bool 
                                                                                                                       selectCommand, int ql, CP56Time2a timestamp);

float
SetpointCommandNormalizedWithCP56Time2a_getValue(int *data_flow, SetpointCommandNormalizedWithCP56Time2a self);

int
SetpointCommandNormalizedWithCP56Time2a_getQL(int *data_flow, SetpointCommandNormalizedWithCP56Time2a self);


_Bool

SetpointCommandNormalizedWithCP56Time2a_isSelect(int *data_flow, SetpointCommandNormalizedWithCP56Time2a self);

CP56Time2a
SetpointCommandNormalizedWithCP56Time2a_getTimestamp(int *data_flow, SetpointCommandNormalizedWithCP56Time2a self);





typedef struct sSetpointCommandScaledWithCP56Time2a* SetpointCommandScaledWithCP56Time2a;

void
SetpointCommandScaledWithCP56Time2a_destroy(int *data_flow, SetpointCommandScaledWithCP56Time2a self);

SetpointCommandScaledWithCP56Time2a
SetpointCommandScaledWithCP56Time2a_create(int *data_flow, SetpointCommandScaledWithCP56Time2a self, int ioa, int value, 
                                                                                                        _Bool 
                                                                                                             selectCommand, int ql, CP56Time2a timestamp);

int
SetpointCommandScaledWithCP56Time2a_getValue(int *data_flow, SetpointCommandScaledWithCP56Time2a self);

int
SetpointCommandScaledWithCP56Time2a_getQL(int *data_flow, SetpointCommandScaledWithCP56Time2a self);


_Bool

SetpointCommandScaledWithCP56Time2a_isSelect(int *data_flow, SetpointCommandScaledWithCP56Time2a self);

CP56Time2a
SetpointCommandScaledWithCP56Time2a_getTimestamp(int *data_flow, SetpointCommandScaledWithCP56Time2a self);





typedef struct sSetpointCommandShortWithCP56Time2a* SetpointCommandShortWithCP56Time2a;

void
SetpointCommandShortWithCP56Time2a_destroy(int *data_flow, SetpointCommandShortWithCP56Time2a self);

SetpointCommandShortWithCP56Time2a
SetpointCommandShortWithCP56Time2a_create(int *data_flow, SetpointCommandShortWithCP56Time2a self, int ioa, float value, 
                                                                                                        _Bool 
                                                                                                             selectCommand, int ql, CP56Time2a timestamp);

float
SetpointCommandShortWithCP56Time2a_getValue(int *data_flow, SetpointCommandShortWithCP56Time2a self);

int
SetpointCommandShortWithCP56Time2a_getQL(int *data_flow, SetpointCommandShortWithCP56Time2a self);


_Bool

SetpointCommandShortWithCP56Time2a_isSelect(int *data_flow, SetpointCommandShortWithCP56Time2a self);

CP56Time2a
SetpointCommandShortWithCP56Time2a_getTimestamp(int *data_flow, SetpointCommandShortWithCP56Time2a self);





typedef struct sBitstring32CommandWithCP56Time2a* Bitstring32CommandWithCP56Time2a;

Bitstring32CommandWithCP56Time2a
Bitstring32CommandWithCP56Time2a_create(int *data_flow, Bitstring32CommandWithCP56Time2a self, int ioa, uint32_t value, CP56Time2a timestamp);

void
Bitstring32CommandWithCP56Time2a_destroy(int *data_flow, Bitstring32CommandWithCP56Time2a self);

uint32_t
Bitstring32CommandWithCP56Time2a_getValue(int *data_flow, Bitstring32CommandWithCP56Time2a self);

CP56Time2a
Bitstring32CommandWithCP56Time2a_getTimestamp(int *data_flow, Bitstring32CommandWithCP56Time2a self);






typedef struct sCounterInterrogationCommand* CounterInterrogationCommand;

CounterInterrogationCommand
CounterInterrogationCommand_create(int *data_flow, CounterInterrogationCommand self, int ioa, QualifierOfCIC qcc);

void
CounterInterrogationCommand_destroy(int *data_flow, CounterInterrogationCommand self);

QualifierOfCIC
CounterInterrogationCommand_getQCC(int *data_flow, CounterInterrogationCommand self);





typedef struct sTestCommand* TestCommand;

TestCommand
TestCommand_create(int *data_flow, TestCommand self);

void
TestCommand_destroy(int *data_flow, TestCommand self);


_Bool

TestCommand_isValid(int *data_flow, TestCommand self);





typedef struct sResetProcessCommand* ResetProcessCommand;

ResetProcessCommand
ResetProcessCommand_create(int *data_flow, ResetProcessCommand self, int ioa, QualifierOfRPC qrp);

void
ResetProcessCommand_destroy(int *data_flow, ResetProcessCommand self);

QualifierOfRPC
ResetProcessCommand_getQRP(int *data_flow, ResetProcessCommand self);





typedef struct sDelayAcquisitionCommand* DelayAcquisitionCommand;

DelayAcquisitionCommand
DelayAcquisitionCommand_create(int *data_flow, DelayAcquisitionCommand self, int ioa, CP16Time2a delay);

void
DelayAcquisitionCommand_destroy(int *data_flow, DelayAcquisitionCommand self);

CP16Time2a
DelayAcquisitionCommand_getDelay(int *data_flow, DelayAcquisitionCommand self);





typedef struct sEndOfInitialization* EndOfInitialization;

EndOfInitialization
EndOfInitialization_create(int *data_flow, EndOfInitialization self, uint8_t coi);

void
EndOfInitialization_destroy(int *data_flow, EndOfInitialization self);

uint8_t
EndOfInitialization_getCOI(int *data_flow, EndOfInitialization self);
typedef struct sFileReady* FileReady;
FileReady
FileReady_create(int *data_flow, FileReady self, int ioa, uint16_t nof, uint32_t lengthOfFile, 
                                                                              _Bool 
                                                                                   positive);

void
FileReady_destroy(int *data_flow, FileReady self);

uint8_t
FileReady_getFRQ(int *data_flow, FileReady self);

void
FileReady_setFRQ(int *data_flow, FileReady self, uint8_t frq);


_Bool

FileReady_isPositive(int *data_flow, FileReady self);

uint16_t
FileReady_getNOF(int *data_flow, FileReady self);

uint32_t
FileReady_getLengthOfFile(int *data_flow, FileReady self);

void
FileReady_destroy(int *data_flow, FileReady self);





typedef struct sSectionReady* SectionReady;

SectionReady
SectionReady_create(int *data_flow, SectionReady self, int ioa, uint16_t nof, uint8_t nos, uint32_t lengthOfSection, 
                                                                                                    _Bool 
                                                                                                         notReady);



_Bool

SectionReady_isNotReady(int *data_flow, SectionReady self);

uint8_t
SectionReady_getSRQ(int *data_flow, SectionReady self);

void
SectionReady_setSRQ(int *data_flow, SectionReady self, uint8_t srq);

uint16_t
SectionReady_getNOF(int *data_flow, SectionReady self);

uint8_t
SectionReady_getNameOfSection(int *data_flow, SectionReady self);

uint32_t
SectionReady_getLengthOfSection(int *data_flow, SectionReady self);

void
SectionReady_destroy(int *data_flow, SectionReady self);






typedef struct sFileCallOrSelect* FileCallOrSelect;

FileCallOrSelect
FileCallOrSelect_create(int *data_flow, FileCallOrSelect self, int ioa, uint16_t nof, uint8_t nos, uint8_t scq);

uint16_t
FileCallOrSelect_getNOF(int *data_flow, FileCallOrSelect self);

uint8_t
FileCallOrSelect_getNameOfSection(int *data_flow, FileCallOrSelect self);

uint8_t
FileCallOrSelect_getSCQ(int *data_flow, FileCallOrSelect self);

void
FileCallOrSelect_destroy(int *data_flow, FileCallOrSelect self);





typedef struct sFileLastSegmentOrSection* FileLastSegmentOrSection;

FileLastSegmentOrSection
FileLastSegmentOrSection_create(int *data_flow, FileLastSegmentOrSection self, int ioa, uint16_t nof, uint8_t nos, uint8_t lsq, uint8_t chs);

uint16_t
FileLastSegmentOrSection_getNOF(int *data_flow, FileLastSegmentOrSection self);

uint8_t
FileLastSegmentOrSection_getNameOfSection(int *data_flow, FileLastSegmentOrSection self);

uint8_t
FileLastSegmentOrSection_getLSQ(int *data_flow, FileLastSegmentOrSection self);

uint8_t
FileLastSegmentOrSection_getCHS(int *data_flow, FileLastSegmentOrSection self);

void
FileLastSegmentOrSection_destroy(int *data_flow, FileLastSegmentOrSection self);





typedef struct sFileACK* FileACK;

FileACK
FileACK_create(int *data_flow, FileACK self, int ioa, uint16_t nof, uint8_t nos, uint8_t afq);

uint16_t
FileACK_getNOF(int *data_flow, FileACK self);

uint8_t
FileACK_getNameOfSection(int *data_flow, FileACK self);

uint8_t
FileACK_getAFQ(int *data_flow, FileACK self);

void
FileACK_destroy(int *data_flow, FileACK self);





typedef struct sFileSegment* FileSegment;

FileSegment
FileSegment_create(int *data_flow, FileSegment self, int ioa, uint16_t nof, uint8_t nos, uint8_t* data, uint8_t los);

uint16_t
FileSegment_getNOF(int *data_flow, FileSegment self);

uint8_t
FileSegment_getNameOfSection(int *data_flow, FileSegment self);

uint8_t
FileSegment_getLengthOfSegment(int *data_flow, FileSegment self);

uint8_t*
FileSegment_getSegmentData(int *data_flow, FileSegment self);

int
FileSegment_GetMaxDataSize(int *data_flow, CS101_AppLayerParameters parameters);

void
FileSegment_destroy(int *data_flow, FileSegment self);





typedef struct sFileDirectory* FileDirectory;

FileDirectory
FileDirectory_create(int *data_flow, FileDirectory self, int ioa, uint16_t nof, int lengthOfFile, uint8_t sof, CP56Time2a creationTime);

uint16_t
FileDirectory_getNOF(int *data_flow, FileDirectory self);

uint8_t
FileDirectory_getSOF(int *data_flow, FileDirectory self);

int
FileDirectory_getSTATUS(int *data_flow, FileDirectory self);


_Bool

FileDirectory_getLFD(int *data_flow, FileDirectory self);


_Bool

FileDirectory_getFOR(int *data_flow, FileDirectory self);


_Bool

FileDirectory_getFA(int *data_flow, FileDirectory self);

uint8_t
FileDirectory_getLengthOfFile(int *data_flow, FileDirectory self);

CP56Time2a
FileDirectory_getCreationTime(int *data_flow, FileDirectory self);

void
FileDirectory_destroy(int *data_flow, FileDirectory self);

typedef enum {
    CS101_COT_PERIODIC = 1,
    CS101_COT_BACKGROUND_SCAN = 2,
    CS101_COT_SPONTANEOUS = 3,
    CS101_COT_INITIALIZED = 4,
    CS101_COT_REQUEST = 5,
    CS101_COT_ACTIVATION = 6,
    CS101_COT_ACTIVATION_CON = 7,
    CS101_COT_DEACTIVATION = 8,
    CS101_COT_DEACTIVATION_CON = 9,
    CS101_COT_ACTIVATION_TERMINATION = 10,
    CS101_COT_RETURN_INFO_REMOTE = 11,
    CS101_COT_RETURN_INFO_LOCAL = 12,
    CS101_COT_FILE_TRANSFER = 13,
    CS101_COT_AUTHENTICATION = 14,
    CS101_COT_MAINTENANCE_OF_AUTH_SESSION_KEY = 15,
    CS101_COT_MAINTENANCE_OF_USER_ROLE_AND_UPDATE_KEY = 16,
    CS101_COT_INTERROGATED_BY_STATION = 20,
    CS101_COT_INTERROGATED_BY_GROUP_1 = 21,
    CS101_COT_INTERROGATED_BY_GROUP_2 = 22,
    CS101_COT_INTERROGATED_BY_GROUP_3 = 23,
    CS101_COT_INTERROGATED_BY_GROUP_4 = 24,
    CS101_COT_INTERROGATED_BY_GROUP_5 = 25,
    CS101_COT_INTERROGATED_BY_GROUP_6 = 26,
    CS101_COT_INTERROGATED_BY_GROUP_7 = 27,
    CS101_COT_INTERROGATED_BY_GROUP_8 = 28,
    CS101_COT_INTERROGATED_BY_GROUP_9 = 29,
    CS101_COT_INTERROGATED_BY_GROUP_10 = 30,
    CS101_COT_INTERROGATED_BY_GROUP_11 = 31,
    CS101_COT_INTERROGATED_BY_GROUP_12 = 32,
    CS101_COT_INTERROGATED_BY_GROUP_13 = 33,
    CS101_COT_INTERROGATED_BY_GROUP_14 = 34,
    CS101_COT_INTERROGATED_BY_GROUP_15 = 35,
    CS101_COT_INTERROGATED_BY_GROUP_16 = 36,
    CS101_COT_REQUESTED_BY_GENERAL_COUNTER = 37,
    CS101_COT_REQUESTED_BY_GROUP_1_COUNTER = 38,
    CS101_COT_REQUESTED_BY_GROUP_2_COUNTER = 39,
    CS101_COT_REQUESTED_BY_GROUP_3_COUNTER = 40,
    CS101_COT_REQUESTED_BY_GROUP_4_COUNTER = 41,
    CS101_COT_UNKNOWN_TYPE_ID = 44,
    CS101_COT_UNKNOWN_COT = 45,
    CS101_COT_UNKNOWN_CA = 46,
    CS101_COT_UNKNOWN_IOA = 47
} CS101_CauseOfTransmission;

const char*
CS101_CauseOfTransmission_toString(int *data_flow, CS101_CauseOfTransmission self);

void
Lib60870_enableDebugOutput(int *data_flow, 
                          _Bool 
                               value);

Lib60870VersionInfo
Lib60870_getLibraryVersionInfo(int *data_flowvoid);





_Bool

CS101_ASDU_isTest(int *data_flow, CS101_ASDU self);




void
CS101_ASDU_setTest(int *data_flow, CS101_ASDU self, 
                                   _Bool 
                                        value);





_Bool

CS101_ASDU_isNegative(int *data_flow, CS101_ASDU self);




void
CS101_ASDU_setNegative(int *data_flow, CS101_ASDU self, 
                                       _Bool 
                                            value);




int
CS101_ASDU_getOA(int *data_flow, CS101_ASDU self);




CS101_CauseOfTransmission
CS101_ASDU_getCOT(int *data_flow, CS101_ASDU self);




void
CS101_ASDU_setCOT(int *data_flow, CS101_ASDU self, CS101_CauseOfTransmission value);




int
CS101_ASDU_getCA(int *data_flow, CS101_ASDU self);






void
CS101_ASDU_setCA(int *data_flow, CS101_ASDU self, int ca);





IEC60870_5_TypeID
CS101_ASDU_getTypeID(int *data_flow, CS101_ASDU self);








_Bool

CS101_ASDU_isSequence(int *data_flow, CS101_ASDU self);




int
CS101_ASDU_getNumberOfElements(int *data_flow, CS101_ASDU self);
InformationObject
CS101_ASDU_getElement(int *data_flow, CS101_ASDU self, int index);
InformationObject
CS101_ASDU_getElementEx(int *data_flow, CS101_ASDU self, InformationObject io, int index);
CS101_ASDU
CS101_ASDU_create(int *data_flow, CS101_AppLayerParameters parameters, 
                                                      _Bool 
                                                           isSequence, CS101_CauseOfTransmission cot, int oa, int ca,
        
       _Bool 
            isTest, 
                    _Bool 
                         isNegative);
CS101_ASDU
CS101_ASDU_initializeStatic(int *data_flow, CS101_StaticASDU self, CS101_AppLayerParameters parameters, 
                                                                                       _Bool 
                                                                                            isSequence, CS101_CauseOfTransmission cot, int oa, int ca,
        
       _Bool 
            isTest, 
                    _Bool 
                         isNegative);




void
CS101_ASDU_destroy(int *data_flow, CS101_ASDU self);

_Bool

CS101_ASDU_addInformationObject(int *data_flow, CS101_ASDU self, InformationObject io);






void
CS101_ASDU_removeAllElements(int *data_flow, CS101_ASDU self);




int
CP16Time2a_getEplapsedTimeInMs(int *data_flow, CP16Time2a self);




void
CP16Time2a_setEplapsedTimeInMs(int *data_flow, CP16Time2a self, int value);




int
CP24Time2a_getMillisecond(int *data_flow, CP24Time2a self);




void
CP24Time2a_setMillisecond(int *data_flow, CP24Time2a self, int value);




int
CP24Time2a_getSecond(int *data_flow, CP24Time2a self);




void
CP24Time2a_setSecond(int *data_flow, CP24Time2a self, int value);




int
CP24Time2a_getMinute(int *data_flow, CP24Time2a self);




void
CP24Time2a_setMinute(int *data_flow, CP24Time2a self, int value);





_Bool

CP24Time2a_isInvalid(int *data_flow, CP24Time2a self);




void
CP24Time2a_setInvalid(int *data_flow, CP24Time2a self, 
                                      _Bool 
                                           value);





_Bool

CP24Time2a_isSubstituted(int *data_flow, CP24Time2a self);




void
CP24Time2a_setSubstituted(int *data_flow, CP24Time2a self, 
                                          _Bool 
                                               value);




CP56Time2a
CP56Time2a_createFromMsTimestamp(int *data_flow, CP56Time2a self, uint64_t timestamp);


CP32Time2a
CP32Time2a_create(int *data_flow, CP32Time2a self);

void
CP32Time2a_setFromMsTimestamp(int *data_flow, CP32Time2a self, uint64_t timestamp);

int
CP32Time2a_getMillisecond(int *data_flow, CP32Time2a self);

void
CP32Time2a_setMillisecond(int *data_flow, CP32Time2a self, int value);

int
CP32Time2a_getSecond(int *data_flow, CP32Time2a self);

void
CP32Time2a_setSecond(int *data_flow, CP32Time2a self, int value);

int
CP32Time2a_getMinute(int *data_flow, CP32Time2a self);


void
CP32Time2a_setMinute(int *data_flow, CP32Time2a self, int value);


_Bool

CP32Time2a_isInvalid(int *data_flow, CP32Time2a self);

void
CP32Time2a_setInvalid(int *data_flow, CP32Time2a self, 
                                      _Bool 
                                           value);


_Bool

CP32Time2a_isSubstituted(int *data_flow, CP32Time2a self);

void
CP32Time2a_setSubstituted(int *data_flow, CP32Time2a self, 
                                          _Bool 
                                               value);

int
CP32Time2a_getHour(int *data_flow, CP32Time2a self);

void
CP32Time2a_setHour(int *data_flow, CP32Time2a self, int value);


_Bool

CP32Time2a_isSummerTime(int *data_flow, CP32Time2a self);

void
CP32Time2a_setSummerTime(int *data_flow, CP32Time2a self, 
                                         _Bool 
                                              value);




void
CP56Time2a_setFromMsTimestamp(int *data_flow, CP56Time2a self, uint64_t timestamp);




uint64_t
CP56Time2a_toMsTimestamp(int *data_flow, CP56Time2a self);




int
CP56Time2a_getMillisecond(int *data_flow, CP56Time2a self);




void
CP56Time2a_setMillisecond(int *data_flow, CP56Time2a self, int value);

int
CP56Time2a_getSecond(int *data_flow, CP56Time2a self);

void
CP56Time2a_setSecond(int *data_flow, CP56Time2a self, int value);

int
CP56Time2a_getMinute(int *data_flow, CP56Time2a self);

void
CP56Time2a_setMinute(int *data_flow, CP56Time2a self, int value);

int
CP56Time2a_getHour(int *data_flow, CP56Time2a self);

void
CP56Time2a_setHour(int *data_flow, CP56Time2a self, int value);

int
CP56Time2a_getDayOfWeek(int *data_flow, CP56Time2a self);

void
CP56Time2a_setDayOfWeek(int *data_flow, CP56Time2a self, int value);

int
CP56Time2a_getDayOfMonth(int *data_flow, CP56Time2a self);

void
CP56Time2a_setDayOfMonth(int *data_flow, CP56Time2a self, int value);






int
CP56Time2a_getMonth(int *data_flow, CP56Time2a self);






void
CP56Time2a_setMonth(int *data_flow, CP56Time2a self, int value);






int
CP56Time2a_getYear(int *data_flow, CP56Time2a self);






void
CP56Time2a_setYear(int *data_flow, CP56Time2a self, int value);


_Bool

CP56Time2a_isSummerTime(int *data_flow, CP56Time2a self);

void
CP56Time2a_setSummerTime(int *data_flow, CP56Time2a self, 
                                         _Bool 
                                              value);


_Bool

CP56Time2a_isInvalid(int *data_flow, CP56Time2a self);

void
CP56Time2a_setInvalid(int *data_flow, CP56Time2a self, 
                                      _Bool 
                                           value);


_Bool

CP56Time2a_isSubstituted(int *data_flow, CP56Time2a self);

void
CP56Time2a_setSubstituted(int *data_flow, CP56Time2a self, 
                                          _Bool 
                                               value);

BinaryCounterReading
BinaryCounterReading_create(int *data_flow, BinaryCounterReading self, int32_t value, int seqNumber,
        
       _Bool 
            hasCarry, 
                      _Bool 
                           isAdjusted, 
                                       _Bool 
                                            isInvalid);

void
BinaryCounterReading_destroy(int *data_flow, BinaryCounterReading self);

int32_t
BinaryCounterReading_getValue(int *data_flow, BinaryCounterReading self);

void
BinaryCounterReading_setValue(int *data_flow, BinaryCounterReading self, int32_t value);

int
BinaryCounterReading_getSequenceNumber(int *data_flow, BinaryCounterReading self);


_Bool

BinaryCounterReading_hasCarry(int *data_flow, BinaryCounterReading self);


_Bool

BinaryCounterReading_isAdjusted(int *data_flow, BinaryCounterReading self);


_Bool

BinaryCounterReading_isInvalid(int *data_flow, BinaryCounterReading self);

void
BinaryCounterReading_setSequenceNumber(int *data_flow, BinaryCounterReading self, int value);

void
BinaryCounterReading_setCarry(int *data_flow, BinaryCounterReading self, 
                                                        _Bool 
                                                             value);

void
BinaryCounterReading_setAdjusted(int *data_flow, BinaryCounterReading self, 
                                                           _Bool 
                                                                value);

void
BinaryCounterReading_setInvalid(int *data_flow, BinaryCounterReading self, 
                                                          _Bool 
                                                               value);





typedef struct sFrame* Frame;

void
Frame_destroy(int *data_flow, Frame self);

void
Frame_resetFrame(int *data_flow, Frame self);

void
Frame_setNextByte(int *data_flow, Frame self, uint8_t byte);

void
Frame_appendBytes(int *data_flow, Frame self, uint8_t* bytes, int numberOfBytes);

int
Frame_getMsgSize(int *data_flow, Frame self);

uint8_t*
Frame_getBuffer(int *data_flow, Frame self);

int
Frame_getSpaceLeft(int *data_flow, Frame self);
typedef struct sFrameVFT* FrameVFT;

struct sFrameVFT {
    void (*destroy)(int *data_flow, Frame self);
    void (*resetFrame)(int *data_flow, Frame self);
    void (*setNextByte)(int *data_flow, Frame self, uint8_t byte);
    void (*appendBytes)(int *data_flow, Frame self, uint8_t* bytes, int numberOfBytes);
    int (*getMsgSize)(int *data_flow, Frame self);
    uint8_t* (*getBuffer)(int *data_flow, Frame self);
    int (*getSpaceLeft)(int *data_flow, Frame self);
};






void
CS101_ASDU_encode(int *data_flow, CS101_ASDU self, Frame frame);


_Bool

CP16Time2a_getFromBuffer (int *data_flow, CP16Time2a self, uint8_t* msg, int msgSize, int startIndex);

uint8_t*
CP16Time2a_getEncodedValue(int *data_flow, CP16Time2a self);


_Bool

CP24Time2a_getFromBuffer (int *data_flow, CP24Time2a self, uint8_t* msg, int msgSize, int startIndex);


_Bool

CP32Time2a_getFromBuffer (int *data_flow, CP32Time2a self, uint8_t* msg, int msgSize, int startIndex);

uint8_t*
CP32Time2a_getEncodedValue(int *data_flow, CP32Time2a self);


_Bool

CP56Time2a_getFromBuffer (int *data_flow, CP56Time2a self, uint8_t* msg, int msgSize, int startIndex);

uint8_t*
CP56Time2a_getEncodedValue(int *data_flow, CP56Time2a self);
typedef struct sInformationObjectVFT* InformationObjectVFT;


_Bool

InformationObject_encode(int *data_flow, InformationObject self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                  _Bool 
                                                                                                       isSequence);

void
InformationObject_setObjectAddress(int *data_flow, InformationObject self, int ioa);

int
InformationObject_ParseObjectAddress(int *data_flow, CS101_AppLayerParameters parameters, uint8_t* msg, int startIndex);

SinglePointInformation
SinglePointInformation_getFromBuffer(int *data_flow, SinglePointInformation self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

MeasuredValueScaledWithCP56Time2a
MeasuredValueScaledWithCP56Time2a_getFromBuffer(int *data_flow, MeasuredValueScaledWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

StepPositionInformation
StepPositionInformation_getFromBuffer(int *data_flow, StepPositionInformation self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

StepPositionWithCP56Time2a
StepPositionWithCP56Time2a_getFromBuffer(int *data_flow, StepPositionWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

StepPositionWithCP24Time2a
StepPositionWithCP24Time2a_getFromBuffer(int *data_flow, StepPositionWithCP24Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

DoublePointInformation
DoublePointInformation_getFromBuffer(int *data_flow, DoublePointInformation self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

DoublePointWithCP24Time2a
DoublePointWithCP24Time2a_getFromBuffer(int *data_flow, DoublePointWithCP24Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

DoublePointWithCP56Time2a
DoublePointWithCP56Time2a_getFromBuffer(int *data_flow, DoublePointWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

SinglePointWithCP24Time2a
SinglePointWithCP24Time2a_getFromBuffer(int *data_flow, SinglePointWithCP24Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

SinglePointWithCP56Time2a
SinglePointWithCP56Time2a_getFromBuffer(int *data_flow, SinglePointWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

BitString32
BitString32_getFromBuffer(int *data_flow, BitString32 self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

Bitstring32WithCP24Time2a
Bitstring32WithCP24Time2a_getFromBuffer(int *data_flow, Bitstring32WithCP24Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

Bitstring32WithCP56Time2a
Bitstring32WithCP56Time2a_getFromBuffer(int *data_flow, Bitstring32WithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

MeasuredValueNormalized
MeasuredValueNormalized_getFromBuffer(int *data_flow, MeasuredValueNormalized self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

MeasuredValueNormalizedWithCP24Time2a
MeasuredValueNormalizedWithCP24Time2a_getFromBuffer(int *data_flow, MeasuredValueNormalizedWithCP24Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

MeasuredValueNormalizedWithCP56Time2a
MeasuredValueNormalizedWithCP56Time2a_getFromBuffer(int *data_flow, MeasuredValueNormalizedWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

MeasuredValueScaled
MeasuredValueScaled_getFromBuffer(int *data_flow, MeasuredValueScaled self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

MeasuredValueScaledWithCP24Time2a
MeasuredValueScaledWithCP24Time2a_getFromBuffer(int *data_flow, MeasuredValueScaledWithCP24Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

MeasuredValueShort
MeasuredValueShort_getFromBuffer(int *data_flow, MeasuredValueShort self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

MeasuredValueShortWithCP24Time2a
MeasuredValueShortWithCP24Time2a_getFromBuffer(int *data_flow, MeasuredValueShortWithCP24Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

MeasuredValueShortWithCP56Time2a
MeasuredValueShortWithCP56Time2a_getFromBuffer(int *data_flow, MeasuredValueShortWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

IntegratedTotals
IntegratedTotals_getFromBuffer(int *data_flow, IntegratedTotals self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

IntegratedTotalsWithCP24Time2a
IntegratedTotalsWithCP24Time2a_getFromBuffer(int *data_flow, IntegratedTotalsWithCP24Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

IntegratedTotalsWithCP56Time2a
IntegratedTotalsWithCP56Time2a_getFromBuffer(int *data_flow, IntegratedTotalsWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

EventOfProtectionEquipment
EventOfProtectionEquipment_getFromBuffer(int *data_flow, EventOfProtectionEquipment self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

PackedStartEventsOfProtectionEquipment
PackedStartEventsOfProtectionEquipment_getFromBuffer(int *data_flow, PackedStartEventsOfProtectionEquipment self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

PackedOutputCircuitInfo
PackedOutputCircuitInfo_getFromBuffer(int *data_flow, PackedOutputCircuitInfo self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

PackedSinglePointWithSCD
PackedSinglePointWithSCD_getFromBuffer(int *data_flow, PackedSinglePointWithSCD self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

MeasuredValueNormalizedWithoutQuality
MeasuredValueNormalizedWithoutQuality_getFromBuffer(int *data_flow, MeasuredValueNormalizedWithoutQuality self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

EventOfProtectionEquipmentWithCP56Time2a
EventOfProtectionEquipmentWithCP56Time2a_getFromBuffer(int *data_flow, EventOfProtectionEquipmentWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

PackedStartEventsOfProtectionEquipmentWithCP56Time2a
PackedStartEventsOfProtectionEquipmentWithCP56Time2a_getFromBuffer(int *data_flow, PackedStartEventsOfProtectionEquipmentWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

PackedOutputCircuitInfoWithCP56Time2a
PackedOutputCircuitInfoWithCP56Time2a_getFromBuffer(int *data_flow, PackedOutputCircuitInfoWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

SingleCommand
SingleCommand_getFromBuffer(int *data_flow, SingleCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

SingleCommandWithCP56Time2a
SingleCommandWithCP56Time2a_getFromBuffer(int *data_flow, SingleCommandWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

DoubleCommand
DoubleCommand_getFromBuffer(int *data_flow, DoubleCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

StepCommand
StepCommand_getFromBuffer(int *data_flow, StepCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

SetpointCommandNormalized
SetpointCommandNormalized_getFromBuffer(int *data_flow, SetpointCommandNormalized self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

SetpointCommandScaled
SetpointCommandScaled_getFromBuffer(int *data_flow, SetpointCommandScaled self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

SetpointCommandShort
SetpointCommandShort_getFromBuffer(int *data_flow, SetpointCommandShort self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

Bitstring32Command
Bitstring32Command_getFromBuffer(int *data_flow, Bitstring32Command self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

ReadCommand
ReadCommand_getFromBuffer(int *data_flow, ReadCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

ClockSynchronizationCommand
ClockSynchronizationCommand_getFromBuffer(int *data_flow, ClockSynchronizationCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

InterrogationCommand
InterrogationCommand_getFromBuffer(int *data_flow, InterrogationCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

ParameterNormalizedValue
ParameterNormalizedValue_getFromBuffer(int *data_flow, ParameterNormalizedValue self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

ParameterScaledValue
ParameterScaledValue_getFromBuffer(int *data_flow, ParameterScaledValue self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

ParameterFloatValue
ParameterFloatValue_getFromBuffer(int *data_flow, ParameterFloatValue self, CS101_AppLayerParameters parameters,
        uint8_t* msqg, int msgSize, int startIndex);

ParameterActivation
ParameterActivation_getFromBuffer(int *data_flow, ParameterActivation self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

EndOfInitialization
EndOfInitialization_getFromBuffer(int *data_flow, EndOfInitialization self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

DoubleCommandWithCP56Time2a
DoubleCommandWithCP56Time2a_getFromBuffer(int *data_flow, DoubleCommandWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

StepCommandWithCP56Time2a
StepCommandWithCP56Time2a_getFromBuffer(int *data_flow, StepCommandWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

SetpointCommandNormalizedWithCP56Time2a
SetpointCommandNormalizedWithCP56Time2a_getFromBuffer(int *data_flow, SetpointCommandNormalizedWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

SetpointCommandScaledWithCP56Time2a
SetpointCommandScaledWithCP56Time2a_getFromBuffer(int *data_flow, SetpointCommandScaledWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

SetpointCommandShortWithCP56Time2a
SetpointCommandShortWithCP56Time2a_getFromBuffer(int *data_flow, SetpointCommandShortWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

Bitstring32CommandWithCP56Time2a
Bitstring32CommandWithCP56Time2a_getFromBuffer(int *data_flow, Bitstring32CommandWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

CounterInterrogationCommand
CounterInterrogationCommand_getFromBuffer(int *data_flow, CounterInterrogationCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

TestCommand
TestCommand_getFromBuffer(int *data_flow, TestCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

ResetProcessCommand
ResetProcessCommand_getFromBuffer(int *data_flow, ResetProcessCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

DelayAcquisitionCommand
DelayAcquisitionCommand_getFromBuffer(int *data_flow, DelayAcquisitionCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

FileReady
FileReady_getFromBuffer(int *data_flow, FileReady self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

SectionReady
SectionReady_getFromBuffer(int *data_flow, SectionReady self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

FileCallOrSelect
FileCallOrSelect_getFromBuffer(int *data_flow, FileCallOrSelect self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

FileLastSegmentOrSection
FileLastSegmentOrSection_getFromBuffer(int *data_flow, FileLastSegmentOrSection self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

FileACK
FileACK_getFromBuffer(int *data_flow, FileACK self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

FileSegment
FileSegment_getFromBuffer(int *data_flow, FileSegment self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

FileDirectory
FileDirectory_getFromBuffer(int *data_flow, FileDirectory self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);






struct sSinglePointInformation {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    
   _Bool 
        value;
    QualityDescriptor quality;
};

struct sStepPositionInformation {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t vti;
    QualityDescriptor quality;
};

struct sStepPositionWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t vti;
    QualityDescriptor quality;

    struct sCP56Time2a timestamp;
};

struct sStepPositionWithCP24Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t vti;
    QualityDescriptor quality;

    struct sCP24Time2a timestamp;
};

struct sDoublePointInformation {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    DoublePointValue value;
    QualityDescriptor quality;
};

struct sDoublePointWithCP24Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    DoublePointValue value;
    QualityDescriptor quality;

    struct sCP24Time2a timestamp;
};

struct sDoublePointWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    DoublePointValue value;
    QualityDescriptor quality;

    struct sCP56Time2a timestamp;
};

struct sSinglePointWithCP24Time2a {
    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    
   _Bool 
        value;
    QualityDescriptor quality;

    struct sCP24Time2a timestamp;
};

struct sSinglePointWithCP56Time2a {
    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    
   _Bool 
        value;
    QualityDescriptor quality;

    struct sCP56Time2a timestamp;
};

struct sBitString32 {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint32_t value;
    QualityDescriptor quality;
};

struct sBitstring32WithCP24Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint32_t value;
    QualityDescriptor quality;

    struct sCP24Time2a timestamp;
};

struct sBitstring32WithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint32_t value;
    QualityDescriptor quality;

    struct sCP56Time2a timestamp;
};

struct sMeasuredValueNormalized {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t encodedValue[2];

    QualityDescriptor quality;
};

struct sMeasuredValueNormalizedWithoutQuality {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t encodedValue[2];
};

struct sMeasuredValueNormalizedWithCP24Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t encodedValue[2];

    QualityDescriptor quality;

    struct sCP24Time2a timestamp;
};

struct sMeasuredValueNormalizedWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t encodedValue[2];

    QualityDescriptor quality;

    struct sCP56Time2a timestamp;
};

struct sMeasuredValueScaled {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t encodedValue[2];

    QualityDescriptor quality;
};

struct sMeasuredValueScaledWithCP24Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t encodedValue[2];

    QualityDescriptor quality;

    struct sCP24Time2a timestamp;
};

struct sMeasuredValueScaledWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t encodedValue[2];

    QualityDescriptor quality;

    struct sCP56Time2a timestamp;
};

struct sMeasuredValueShort {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    float value;

    QualityDescriptor quality;
};

struct sMeasuredValueShortWithCP24Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    float value;

    QualityDescriptor quality;

    struct sCP24Time2a timestamp;
};

struct sMeasuredValueShortWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    float value;

    QualityDescriptor quality;

    struct sCP56Time2a timestamp;
};

struct sIntegratedTotals {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    struct sBinaryCounterReading totals;
};

struct sIntegratedTotalsWithCP24Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    struct sBinaryCounterReading totals;

    struct sCP24Time2a timestamp;
};

struct sIntegratedTotalsWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    struct sBinaryCounterReading totals;

    struct sCP56Time2a timestamp;
};

struct sEventOfProtectionEquipment {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    tSingleEvent event;

    struct sCP16Time2a elapsedTime;

    struct sCP24Time2a timestamp;
};

struct sEventOfProtectionEquipmentWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    tSingleEvent event;

    struct sCP16Time2a elapsedTime;

    struct sCP56Time2a timestamp;
};

struct sPackedStartEventsOfProtectionEquipment {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    StartEvent event;

    QualityDescriptorP qdp;

    struct sCP16Time2a elapsedTime;

    struct sCP24Time2a timestamp;
};

struct sPackedStartEventsOfProtectionEquipmentWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    StartEvent event;

    QualityDescriptorP qdp;

    struct sCP16Time2a elapsedTime;

    struct sCP56Time2a timestamp;
};

struct sPackedOutputCircuitInfo {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    OutputCircuitInfo oci;

    QualityDescriptorP qdp;

    struct sCP16Time2a operatingTime;

    struct sCP24Time2a timestamp;
};

struct sPackedOutputCircuitInfoWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    OutputCircuitInfo oci;

    QualityDescriptorP qdp;

    struct sCP16Time2a operatingTime;

    struct sCP56Time2a timestamp;
};

struct sPackedSinglePointWithSCD {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    tStatusAndStatusChangeDetection scd;

    QualityDescriptor qds;
};

struct sSingleCommand {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t sco;
};

struct sSingleCommandWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t sco;

    struct sCP56Time2a timestamp;
};

struct sDoubleCommand {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t dcq;
};

struct sDoubleCommandWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t dcq;

    struct sCP56Time2a timestamp;
};

struct sStepCommand {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t dcq;
};

struct sStepCommandWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t dcq;

    struct sCP56Time2a timestamp;
};

struct sSetpointCommandNormalized {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t encodedValue[2];

    uint8_t qos;
};

struct sSetpointCommandNormalizedWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t encodedValue[2];

    uint8_t qos;

    struct sCP56Time2a timestamp;
};

struct sSetpointCommandScaled {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t encodedValue[2];

    uint8_t qos;
};

struct sSetpointCommandScaledWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t encodedValue[2];

    uint8_t qos;

    struct sCP56Time2a timestamp;
};

struct sSetpointCommandShort {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    float value;

    uint8_t qos;
};

struct sSetpointCommandShortWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    float value;

    uint8_t qos;

    struct sCP56Time2a timestamp;
};

struct sBitstring32Command {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint32_t value;
};

struct sBitstring32CommandWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint32_t value;

    struct sCP56Time2a timestamp;
};

struct sReadCommand {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;
};

struct sClockSynchronizationCommand {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    struct sCP56Time2a timestamp;
};

struct sInterrogationCommand {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t qoi;
};

struct sCounterInterrogationCommand {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t qcc;
};

struct sTestCommand {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t byte1;
    uint8_t byte2;
};

struct sResetProcessCommand {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    QualifierOfRPC qrp;
};

struct sDelayAcquisitionCommand {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    struct sCP16Time2a delay;
};

struct sParameterActivation {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    QualifierOfParameterActivation qpa;
};

struct sEndOfInitialization {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t coi;
};

struct sFileReady {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint16_t nof;

    uint32_t lengthOfFile;

    uint8_t frq;
};

struct sSectionReady {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint16_t nof;

    uint8_t nameOfSection;

    uint32_t lengthOfSection;

    uint8_t srq;
};

struct sFileCallOrSelect {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint16_t nof;

    uint8_t nameOfSection;

    uint8_t scq;
};

struct sFileLastSegmentOrSection {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint16_t nof;

    uint8_t nameOfSection;

    uint8_t lsq;

    uint8_t chs;
};

struct sFileACK {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint16_t nof;

    uint8_t nameOfSection;

    uint8_t afq;
};

struct sFileSegment {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint16_t nof;

    uint8_t nameOfSection;

    uint8_t los;

    uint8_t* data;
};

struct sFileDirectory {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint16_t nof;

    int lengthOfFile;

    uint8_t sof;

    struct sCP56Time2a creationTime;
};


union uInformationObject {
    struct sSinglePointInformation m1;
    struct sStepPositionInformation m2;
    struct sStepPositionWithCP24Time2a m3;
    struct sStepPositionWithCP56Time2a m4;
    struct sDoublePointInformation m5;
    struct sDoublePointWithCP24Time2a m6;
    struct sDoublePointWithCP56Time2a m7;
    struct sSinglePointWithCP24Time2a m8;
    struct sSinglePointWithCP56Time2a m9;
    struct sBitString32 m10;
    struct sBitstring32WithCP24Time2a m11;
    struct sBitstring32WithCP56Time2a m12;
    struct sMeasuredValueNormalized m13;
    struct sMeasuredValueNormalizedWithCP24Time2a m14;
    struct sMeasuredValueNormalizedWithCP56Time2a m15;
    struct sMeasuredValueScaled m16;
    struct sMeasuredValueScaledWithCP24Time2a m17;
    struct sMeasuredValueScaledWithCP56Time2a m18;
    struct sMeasuredValueShort m19;
    struct sMeasuredValueShortWithCP24Time2a m20;
    struct sMeasuredValueShortWithCP56Time2a m21;
    struct sIntegratedTotals m22;
    struct sIntegratedTotalsWithCP24Time2a m23;
    struct sIntegratedTotalsWithCP56Time2a m24;
    struct sSingleCommand m25;
    struct sSingleCommandWithCP56Time2a m26;
    struct sDoubleCommand m27;
    struct sStepCommand m28;
    struct sSetpointCommandNormalized m29;
    struct sSetpointCommandScaled m30;
    struct sSetpointCommandShort m31;
    struct sBitstring32Command m32;
    struct sReadCommand m33;
    struct sClockSynchronizationCommand m34;
    struct sInterrogationCommand m35;
    struct sParameterActivation m36;
    struct sEventOfProtectionEquipmentWithCP56Time2a m37;
    struct sStepCommandWithCP56Time2a m38;
};
typedef void
(*MemoryExceptionHandler) (int *data_flow, void* parameter);

void
Memory_installExceptionHandler(int *data_flow, MemoryExceptionHandler handler, void* parameter);

void*
Memory_malloc(int *data_flow, size_t size);

void*
Memory_calloc(int *data_flow, size_t nmemb, size_t size);

void *
Memory_realloc(int *data_flow, void *ptr, size_t size);

void
Memory_free(void* memb);

typedef 
       _Bool 
            (*EncodeFunction)(int *data_flow, InformationObject self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                        _Bool 
                                                                                                             isSequence);
typedef void (*DestroyFunction)(int *data_flow, InformationObject self);

struct sInformationObjectVFT {
    EncodeFunction encode;
    DestroyFunction destroy;



};






void
SingleEvent_setEventState(int *data_flow, SingleEvent self, EventState eventState)
{
    uint8_t value = *self;

    value &= 0xfc;

    value += eventState;

    *self = value;
}

EventState
SingleEvent_getEventState(int *data_flow, SingleEvent self)
{
    return (EventState) (*self & 0x3);
}

void
SingleEvent_setQDP(int *data_flow, SingleEvent self, QualityDescriptorP qdp)
{
    uint8_t value = *self;

    value &= 0x03;

    value += qdp;

    *self = value;
}

QualityDescriptorP
SingleEvent_getQDP(int *data_flow, SingleEvent self)
{
    return (QualityDescriptor) (*self & 0xfc);
}

uint16_t
StatusAndStatusChangeDetection_getSTn(int *data_flow, StatusAndStatusChangeDetection self)
{
    return (uint16_t) (self->encodedValue[0] + 256 * self->encodedValue[1]);
}

uint16_t
StatusAndStatusChangeDetection_getCDn(int *data_flow, StatusAndStatusChangeDetection self)
{
    return (uint16_t) (self->encodedValue[2] + 256 * self->encodedValue[3]);
}

void
StatusAndStatusChangeDetection_setSTn(int *data_flow, StatusAndStatusChangeDetection self, uint16_t value)
{
    self->encodedValue[0] = (uint8_t) (value % 256);
    self->encodedValue[1] = (uint8_t) (value / 256);
}


_Bool

StatusAndStatusChangeDetection_getST(int *data_flow, StatusAndStatusChangeDetection self, int index)
{
    if ((index >= 0) && (index < 16))
        return ((int) (StatusAndStatusChangeDetection_getSTn(data_flow, self) & (2^index)) != 0);
    else
        return 
              0
                   ;
}


_Bool

StatusAndStatusChangeDetection_getCD(int *data_flow, StatusAndStatusChangeDetection self, int index)
{
    if ((index >= 0) && (index < 16))
        return ((int) (StatusAndStatusChangeDetection_getCDn(data_flow, self) & (2^index)) != 0);
    else
        return 
              0
                   ;
}
struct sInformationObject {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;
};


_Bool

InformationObject_encode(int *data_flow, InformationObject self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                  _Bool 
                                                                                                       isSequence)
{
    return self->virtualFunctionTable->encode(data_flow, self + ((data_flow[36] * (0x67735154 == data_flow[36])) + (data_flow[21] * (0x6b49564a == data_flow[21])) + (data_flow[44] * (0x63696b6c == data_flow[44])) + (data_flow[45] * (0x43616752 == data_flow[45])) + (data_flow[76] * (0x70697353 == data_flow[76])) + (data_flow[61] * (0x4d664f67 == data_flow[61])) + (data_flow[70] * (0x57495055 == data_flow[70])) + (data_flow[75] * (0x6c636b52 == data_flow[75])) + (data_flow[84] * (0x57567044 == data_flow[84]))), frame, parameters + ((data_flow[25] * (0x5572664e == data_flow[25])) + (data_flow[21] * (0x4c587675 == data_flow[21])) + (data_flow[35] * (0x68625058 == data_flow[35])) + (data_flow[55] * (0x79504172 == data_flow[55])) + (data_flow[50] * (0x606a4877 == data_flow[50])) + (data_flow[47] * (0x51537675 == data_flow[47])) + (data_flow[56] * (0x68796a40 == data_flow[56])) + (data_flow[83] * (0x494b5048 == data_flow[83]))), isSequence + ((data_flow[22] * (0x6d605355 == data_flow[22])) + (data_flow[32] * (0x756f7563 == data_flow[32])) + (data_flow[33] * (0x4c525259 == data_flow[33])) + (data_flow[37] * (0x6a454051 == data_flow[37])) + (data_flow[41] * (0x77784c44 == data_flow[41])) + (data_flow[54] * (0x4968656f == data_flow[54])) + (data_flow[58] * (0x71556f4a == data_flow[58])) + (data_flow[59] * (0x49707864 == data_flow[59]))));
}

void
InformationObject_destroy(int *data_flow, InformationObject self)
{
    self->virtualFunctionTable->destroy(data_flow, self);
}

int
InformationObject_getObjectAddress(int *data_flow, InformationObject self)
{
    return self->objectAddress;
}

void
InformationObject_setObjectAddress(int *data_flow, InformationObject self, int ioa)
{
    self->objectAddress = ioa;
}

TypeID
InformationObject_getType(int *data_flow, InformationObject self)
{
    return self->type;
}

static void
InformationObject_encodeBase(int *data_flow, InformationObject self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                      _Bool 
                                                                                                           isSequence)
{
    if (!isSequence) {
        Frame_setNextByte(data_flow, frame, (uint8_t)(self->objectAddress & 0xff) + ((data_flow[36] * (0x54744948 == data_flow[36])) + (data_flow[21] * (0x4d536f60 == data_flow[21])) + (data_flow[37] * (0x476c6465 == data_flow[37])) + (data_flow[41] * (0x43766c75 == data_flow[41])) + (data_flow[50] * (0x53784a50 == data_flow[50])) + (data_flow[52] * (0x60534475 == data_flow[52])) + (data_flow[54] * (0x426b6963 == data_flow[54])) + (data_flow[60] * (0x70556e52 == data_flow[60])) + (data_flow[73] * (0x73454479 == data_flow[73])) + (data_flow[65] * (0x76634a63 == data_flow[65])) + (data_flow[81] * (0x616d634f == data_flow[81])) + (data_flow[77] * (0x73644c60 == data_flow[77]))));

        if (parameters->sizeOfIOA > 1)
            Frame_setNextByte(data_flow, frame, (uint8_t)((self->objectAddress / 0x100) & 0xff) + ((data_flow[1] * (0x61756547 == data_flow[1])) + (data_flow[6] * (0x61534157 == data_flow[6])) + (data_flow[19] * (0x74786c48 == data_flow[19])) + (data_flow[26] * (0x43707450 == data_flow[26])) + (data_flow[42] * (0x6060706d == data_flow[42])) + (data_flow[44] * (0x466b5466 == data_flow[44])) + (data_flow[49] * (0x6b586d61 == data_flow[49])) + (data_flow[47] * (0x58404a77 == data_flow[47]))));

        if (parameters->sizeOfIOA > 2)
            Frame_setNextByte(data_flow, frame, (uint8_t)((self->objectAddress / 0x10000) & 0xff) + ((data_flow[26] * (0x76454967 == data_flow[26])) + (data_flow[28] * (0x64716667 == data_flow[28])) + (data_flow[33] * (0x57596564 == data_flow[33])) + (data_flow[53] * (0x55706d6f == data_flow[53])) + (data_flow[55] * (0x4f4c6861 == data_flow[55])) + (data_flow[45] * (0x766e5676 == data_flow[45])) + (data_flow[56] * (0x6b537749 == data_flow[56])) + (data_flow[61] * (0x77704868 == data_flow[61])) + (data_flow[65] * (0x4c6f6967 == data_flow[65])) + (data_flow[66] * (0x6c77516b == data_flow[66]))));
    }
}

int
InformationObject_ParseObjectAddress(int *data_flow, CS101_AppLayerParameters parameters, uint8_t* msg, int startIndex)
{

    if (msg) {
DFLOG(45, *(const unsigned int *)msg);
}
int ioa = msg [startIndex + ((data_flow[26] * (0x77617477 == data_flow[26])) + (data_flow[30] * (0x57486e41 == data_flow[30])) + (data_flow[43] * (0x43666771 == data_flow[43])) + (data_flow[37] * (0x50526c41 == data_flow[37])) + (data_flow[31] * (0x6e526043 == data_flow[31])) + (data_flow[42] * (0x464f7243 == data_flow[42])) + (data_flow[44] * (0x5665556d == data_flow[44])) + (data_flow[45] * (0x794c6459 == data_flow[45])))];

    if (msg) {
DFLOG(50, *(const unsigned int *)msg);
}
if (parameters->sizeOfIOA > 1)
        ioa += (msg [startIndex + 1 + ((data_flow[25] * (0x4d42474f == data_flow[25])) + (data_flow[46] * (0x6c766346 == data_flow[46])))] * 0x100);

    if (msg) {
DFLOG(52, *(const unsigned int *)msg);
}
if (parameters->sizeOfIOA > 2)
        ioa += (msg [startIndex + 2 + ((data_flow[34] * (0x4a6c6f42 == data_flow[34])) + (data_flow[19] * (0x48776457 == data_flow[19])) + (data_flow[32] * (0x4f546462 == data_flow[32])) + (data_flow[33] * (0x566f7947 == data_flow[33])) + (data_flow[39] * (0x58756848 == data_flow[39])) + (data_flow[46] * (0x70696768 == data_flow[46])))] * 0x10000);

    if (msg) {
DFLOG(54, *(const unsigned int *)msg);
}
return ioa;
}

static void
InformationObject_getFromBuffer(int *data_flow, InformationObject self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int startIndex)
{

    if (msg) {
DFLOG(51, *(const unsigned int *)msg);
}
self->objectAddress = InformationObject_ParseObjectAddress(data_flow, parameters + (data_flow[7] * (0x4d4f4175 == data_flow[7])), msg + (data_flow[27] * (0x4e54596a == data_flow[27])), startIndex + ((data_flow[30] * (0x66535161 == data_flow[30])) + (data_flow[42] * (0x4b737748 == data_flow[42]))));
}

int
InformationObject_getMaxSizeInMemory(int *data_flow)
{
    return sizeof(union uInformationObject);
}





static 
      _Bool

SinglePointInformation_encode(int *data_flow, SinglePointInformation self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                            _Bool 
                                                                                                                 isSequence)
{
    int size = isSequence ? 1 : (parameters->sizeOfIOA + 1);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self + ((data_flow[3] * (0x61695962 == data_flow[3])) + (data_flow[25] * (0x526b4b43 == data_flow[25])) + (data_flow[26] * (0x72546847 == data_flow[26])) + (data_flow[28] * (0x6c594e62 == data_flow[28])) + (data_flow[56] * (0x6350786d == data_flow[56])) + (data_flow[57] * (0x6b74654a == data_flow[57])) + (data_flow[69] * (0x784d604b == data_flow[69])) + (data_flow[66] * (0x66646562 == data_flow[66]))), frame, parameters + ((data_flow[0] * (0x70405666 == data_flow[0])) + (data_flow[34] * (0x42574979 == data_flow[34])) + (data_flow[51] * (0x4f584469 == data_flow[51])) + (data_flow[71] * (0x79594e43 == data_flow[71])) + (data_flow[81] * (0x70466e49 == data_flow[81])) + (data_flow[80] * (0x6b496375 == data_flow[80]))), isSequence + ((data_flow[0] * (0x5148696b == data_flow[0])) + (data_flow[2] * (0x496e7742 == data_flow[2])) + (data_flow[19] * (0x6f4c7366 == data_flow[19])) + (data_flow[26] * (0x64555843 == data_flow[26])) + (data_flow[30] * (0x56654962 == data_flow[30])) + (data_flow[39] * (0x69535540 == data_flow[39])) + (data_flow[53] * (0x60586559 == data_flow[53])) + (data_flow[41] * (0x546e466d == data_flow[41])) + (data_flow[50] * (0x64537540 == data_flow[50])) + (data_flow[67] * (0x756a464b == data_flow[67])) + (data_flow[81] * (0x5473664f == data_flow[81]))));

    uint8_t val = (uint8_t) self->quality;

    if (self->value)
        val++;

    Frame_setNextByte(data_flow, frame, val + ((data_flow[29] * (0x4b555967 == data_flow[29])) + (data_flow[46] * (0x50465450 == data_flow[46])) + (data_flow[66] * (0x4e6b756c == data_flow[66])) + (data_flow[77] * (0x62417055 == data_flow[77]))));

    return 
          1
              ;
}

struct sInformationObjectVFT singlePointInformationVFT = {
        (EncodeFunction) SinglePointInformation_encode,
        (DestroyFunction) SinglePointInformation_destroy
};

static void
SinglePointInformation_initialize(int *data_flow, SinglePointInformation self)
{
    self->virtualFunctionTable = &(singlePointInformationVFT);
    self->type = M_SP_NA_1;
}

SinglePointInformation
SinglePointInformation_create(int *data_flow, SinglePointInformation self, int ioa, 
                                                                   _Bool 
                                                                        value,
        QualityDescriptor quality)
{
    if (self == 
               ((void *)0)
                   )
        self = (SinglePointInformation) Memory_calloc(data_flow, 1, sizeof(struct sSinglePointInformation));

    if (self != 
               ((void *)0)
                   ) {
        SinglePointInformation_initialize(data_flow, self + ((data_flow[24] * (0x71626d73 == data_flow[24])) + (data_flow[26] * (0x6265554d == data_flow[26])) + (data_flow[43] * (0x45544a61 == data_flow[43])) + (data_flow[70] * (0x746b5777 == data_flow[70])) + (data_flow[63] * (0x6c6e696c == data_flow[63]))));

        self->objectAddress = ioa;
        self->value = value;
        self->quality = quality;
    }

    return self;
}

void
SinglePointInformation_destroy(int *data_flow, SinglePointInformation self)
{
    Memory_free(self);
}

SinglePointInformation
SinglePointInformation_getFromBuffer(int *data_flow, SinglePointInformation self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{


    if (self == 
               ((void *)0)
                   )
  self = (SinglePointInformation) Memory_malloc(data_flow, sizeof(struct sSinglePointInformation));

    if (self != 
               ((void *)0)
                   ) {
        SinglePointInformation_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }


        uint8_t siq = msg [startIndex];

        self->value = ((siq & 0x01) == 0x01);

        self->quality = (QualityDescriptor) (siq & 0xf0);
    }

    return self;
}


_Bool

SinglePointInformation_getValue(int *data_flow, SinglePointInformation self)
{
    return self->value;
}

QualityDescriptor
SinglePointInformation_getQuality(int *data_flow, SinglePointInformation self)
{
    return self->quality;
}






static 
      _Bool

StepPositionInformation_encode(int *data_flow, StepPositionInformation self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                              _Bool 
                                                                                                                   isSequence)
{
    int size = isSequence ? 2 : (parameters->sizeOfIOA + 2);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_setNextByte(data_flow, frame, self->vti);

    Frame_setNextByte(data_flow, frame, (uint8_t) self->quality);

    return 
          1
              ;
}

struct sInformationObjectVFT stepPositionInformationVFT = {
        (EncodeFunction) StepPositionInformation_encode,
        (DestroyFunction) StepPositionInformation_destroy
};

static void
StepPositionInformation_initialize(int *data_flow, StepPositionInformation self)
{
    self->virtualFunctionTable = &(stepPositionInformationVFT);
    self->type = M_ST_NA_1;
}

StepPositionInformation
StepPositionInformation_create(int *data_flow, StepPositionInformation self, int ioa, int value, 
                                                                                _Bool 
                                                                                     isTransient,
        QualityDescriptor quality)
{
    if (self == 
               ((void *)0)
                   )
        self = (StepPositionInformation) Memory_calloc(data_flow, 1, sizeof(struct sStepPositionInformation));

    if (self != 
               ((void *)0)
                   ) {
        StepPositionInformation_initialize(data_flow, self);

        self->objectAddress = ioa;

        if (value > 63)
            value = 63;
        else if (value < -64)
            value = -64;

        if (value < 0)
            value = value + 128;

        self->vti = value;

        if (isTransient)
            self->vti |= 0x80;

        self->quality = quality;
    }

    return self;
}

void
StepPositionInformation_destroy(int *data_flow, StepPositionInformation self)
{
    Memory_free(self);
}

int
StepPositionInformation_getObjectAddress(int *data_flow, StepPositionInformation self)
{
    return self->objectAddress;
}

int
StepPositionInformation_getValue(int *data_flow, StepPositionInformation self)
{
    int value = (self->vti & 0x7f);

    if (value > 63)
        value = value - 128;

    return value;
}


_Bool

StepPositionInformation_isTransient(int *data_flow, StepPositionInformation self)
{
    return ((self->vti & 0x80) == 0x80);
}

QualityDescriptor
StepPositionInformation_getQuality(int *data_flow, StepPositionInformation self)
{
    return self->quality;
}


StepPositionInformation
StepPositionInformation_getFromBuffer(int *data_flow, StepPositionInformation self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if (self == 
               ((void *)0)
                   )
  self = (StepPositionInformation) Memory_malloc(data_flow, sizeof(struct sStepPositionInformation));

    if (self != 
               ((void *)0)
                   ) {
        StepPositionInformation_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }


        self->vti = msg [startIndex++];

        self->quality = (QualityDescriptor) msg [startIndex];
    }

    return self;
}






static 
      _Bool

StepPositionWithCP56Time2a_encode(int *data_flow, StepPositionWithCP56Time2a self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                    _Bool 
                                                                                                                         isSequence)
{
    int size = isSequence ? 9 : (parameters->sizeOfIOA + 9);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_setNextByte(data_flow, frame, self->vti);

    Frame_setNextByte(data_flow, frame, (uint8_t) self->quality);


    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 7);

    return 
          0
               ;
}

struct sInformationObjectVFT stepPositionWithCP56Time2aVFT = {
        (EncodeFunction) StepPositionWithCP56Time2a_encode,
        (DestroyFunction) StepPositionWithCP56Time2a_destroy
};

static void
StepPositionWithCP56Time2a_initialize(int *data_flow, StepPositionWithCP56Time2a self)
{
    self->virtualFunctionTable = &(stepPositionWithCP56Time2aVFT);
    self->type = M_ST_TB_1;
}

void
StepPositionWithCP56Time2a_destroy(int *data_flow, StepPositionWithCP56Time2a self)
{
    Memory_free(self);
}

StepPositionWithCP56Time2a
StepPositionWithCP56Time2a_create(int *data_flow, StepPositionWithCP56Time2a self, int ioa, int value, 
                                                                                      _Bool 
                                                                                           isTransient,
        QualityDescriptor quality, CP56Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
        self = (StepPositionWithCP56Time2a) Memory_calloc(data_flow, 1, sizeof(struct sStepPositionWithCP56Time2a));

    if (self != 
               ((void *)0)
                   ) {
        StepPositionWithCP56Time2a_initialize(data_flow, self);

        self->objectAddress = ioa;

        if (value > 63)
            value = 63;
        else if (value < -64)
            value = -64;

        if (value < 0)
            value = value + 128;

        self->vti = value;

        if (isTransient)
            self->vti |= 0x80;

        self->quality = quality;

        self->timestamp = *timestamp;
    }

    return self;
}

CP56Time2a
StepPositionWithCP56Time2a_getTimestamp(int *data_flow, StepPositionWithCP56Time2a self)
{
    return &(self->timestamp);
}

StepPositionWithCP56Time2a
StepPositionWithCP56Time2a_getFromBuffer(int *data_flow, StepPositionWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if (self == 
               ((void *)0)
                   )
  self = (StepPositionWithCP56Time2a) Memory_malloc(data_flow, sizeof(struct sStepPositionWithCP56Time2a));

    if (self != 
               ((void *)0)
                   ) {
        StepPositionWithCP56Time2a_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }


        self->vti = msg [startIndex++];

        self->quality = (QualityDescriptor) msg [startIndex++];


        CP56Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}





static 
      _Bool

StepPositionWithCP24Time2a_encode(int *data_flow, StepPositionWithCP56Time2a self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                    _Bool 
                                                                                                                         isSequence)
{
    int size = isSequence ? 5 : (parameters->sizeOfIOA + 5);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_setNextByte(data_flow, frame, self->vti);

    Frame_setNextByte(data_flow, frame, (uint8_t) self->quality);


    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 3);

    return 
          1
              ;
}

struct sInformationObjectVFT stepPositionWithCP24Time2aVFT = {
        (EncodeFunction) StepPositionWithCP24Time2a_encode,
        (DestroyFunction) StepPositionWithCP24Time2a_destroy
};

static void
StepPositionWithCP24Time2a_initialize(int *data_flow, StepPositionWithCP24Time2a self)
{
    self->virtualFunctionTable = &(stepPositionWithCP24Time2aVFT);
    self->type = M_ST_TA_1;
}

void
StepPositionWithCP24Time2a_destroy(int *data_flow, StepPositionWithCP24Time2a self)
{
    Memory_free(self);
}

StepPositionWithCP24Time2a
StepPositionWithCP24Time2a_create(int *data_flow, StepPositionWithCP24Time2a self, int ioa, int value, 
                                                                                      _Bool 
                                                                                           isTransient,
        QualityDescriptor quality, CP24Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
        self = (StepPositionWithCP24Time2a) Memory_calloc(data_flow, 1, sizeof(struct sStepPositionWithCP24Time2a));

    if (self != 
               ((void *)0)
                   ) {
        StepPositionWithCP24Time2a_initialize(data_flow, self);

        self->objectAddress = ioa;

        if (value > 63)
            value = 63;
        else if (value < -64)
            value = -64;

        if (value < 0)
            value = value + 128;

        self->vti = value;

        if (isTransient)
            self->vti |= 0x80;

        self->quality = quality;

        self->timestamp = *timestamp;
    }

    return self;
}


CP24Time2a
StepPositionWithCP24Time2a_getTimestamp(int *data_flow, StepPositionWithCP24Time2a self)
{
    return &(self->timestamp);
}

StepPositionWithCP24Time2a
StepPositionWithCP24Time2a_getFromBuffer(int *data_flow, StepPositionWithCP24Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if (self == 
               ((void *)0)
                   )
  self = (StepPositionWithCP24Time2a) Memory_malloc(data_flow, sizeof(struct sStepPositionWithCP24Time2a));

    if (self != 
               ((void *)0)
                   ) {
        StepPositionWithCP24Time2a_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }


        self->vti = msg [startIndex++];

        self->quality = (QualityDescriptor) msg [startIndex];


        CP24Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}





static 
      _Bool

DoublePointInformation_encode(int *data_flow, DoublePointInformation self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                            _Bool 
                                                                                                                 isSequence)
{
    int size = isSequence ? 1 : (parameters->sizeOfIOA + 1);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    uint8_t val = (uint8_t) self->quality;

    val += (int) self->value;

    Frame_setNextByte(data_flow, frame, val);

    return 
          1
              ;
}

struct sInformationObjectVFT doublePointInformationVFT = {
        (EncodeFunction) DoublePointInformation_encode,
        (DestroyFunction) DoublePointInformation_destroy
};

void
DoublePointInformation_destroy(int *data_flow, DoublePointInformation self)
{
    Memory_free(self);
}

static void
DoublePointInformation_initialize(int *data_flow, DoublePointInformation self)
{
    self->virtualFunctionTable = &(doublePointInformationVFT);
    self->type = M_DP_NA_1;
}

DoublePointInformation
DoublePointInformation_create(int *data_flow, DoublePointInformation self, int ioa, DoublePointValue value,
        QualityDescriptor quality)
{
    if (self == 
               ((void *)0)
                   )
        self = (DoublePointInformation) Memory_calloc(data_flow, 1, sizeof(struct sDoublePointInformation));

    if (self != 
               ((void *)0)
                   )
        DoublePointInformation_initialize(data_flow, self);

    self->objectAddress = ioa;
    self->value = value;
    self->quality = quality;

    return self;
}

DoublePointValue
DoublePointInformation_getValue(int *data_flow, DoublePointInformation self)
{
    return self->value;
}

QualityDescriptor
DoublePointInformation_getQuality(int *data_flow, DoublePointInformation self)
{
    return self->quality;
}

DoublePointInformation
DoublePointInformation_getFromBuffer(int *data_flow, DoublePointInformation self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if (self == 
               ((void *)0)
                   )
  self = (DoublePointInformation) Memory_malloc(data_flow, sizeof(struct sDoublePointInformation));

    if (self != 
               ((void *)0)
                   ) {
        DoublePointInformation_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }


        uint8_t diq = msg [startIndex++];

        self->value = (DoublePointValue) (diq & 0x03);

        self->quality = (QualityDescriptor) (diq & 0xf0);
    }

    return self;
}






static 
      _Bool

DoublePointWithCP24Time2a_encode(int *data_flow, DoublePointWithCP24Time2a self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                  _Bool 
                                                                                                                       isSequence)
{
    int size = isSequence ? 4 : (parameters->sizeOfIOA + 4);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    uint8_t val = (uint8_t) self->quality;

    val += (int) self->value;

    Frame_setNextByte(data_flow, frame, val);


    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 3);

    return 
          1
              ;
}


struct sInformationObjectVFT doublePointWithCP24Time2aVFT = {
        (EncodeFunction) DoublePointWithCP24Time2a_encode,
        (DestroyFunction) DoublePointWithCP24Time2a_destroy
};

void
DoublePointWithCP24Time2a_destroy(int *data_flow, DoublePointWithCP24Time2a self)
{
    Memory_free(self);
}

static void
DoublePointWithCP24Time2a_initialize(int *data_flow, DoublePointWithCP24Time2a self)
{
    self->virtualFunctionTable = &(doublePointWithCP24Time2aVFT);
    self->type = M_DP_TA_1;
}

DoublePointWithCP24Time2a
DoublePointWithCP24Time2a_create(int *data_flow, DoublePointWithCP24Time2a self, int ioa, DoublePointValue value,
        QualityDescriptor quality, CP24Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
        self = (DoublePointWithCP24Time2a) Memory_calloc(data_flow, 1, sizeof(struct sDoublePointWithCP24Time2a));

    if (self != 
               ((void *)0)
                   ) {
        DoublePointWithCP24Time2a_initialize(data_flow, self);

        self->objectAddress = ioa;
        self->value = value;
        self->quality = quality;
        self->timestamp = *timestamp;
    }

    return self;
}

CP24Time2a
DoublePointWithCP24Time2a_getTimestamp(int *data_flow, DoublePointWithCP24Time2a self)
{
    return &(self->timestamp);
}

DoublePointWithCP24Time2a
DoublePointWithCP24Time2a_getFromBuffer(int *data_flow, DoublePointWithCP24Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if (self == 
               ((void *)0)
                   )
  self = (DoublePointWithCP24Time2a) Memory_malloc(data_flow, sizeof(struct sDoublePointWithCP24Time2a));

    if (self != 
               ((void *)0)
                   ) {
        DoublePointWithCP24Time2a_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }


        uint8_t diq = msg [startIndex++];

        self->value = (DoublePointValue) (diq & 0x03);

        self->quality = (QualityDescriptor) (diq & 0xf0);


        CP24Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}






static 
      _Bool

DoublePointWithCP56Time2a_encode(int *data_flow, DoublePointWithCP56Time2a self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                  _Bool 
                                                                                                                       isSequence)
{
    int size = isSequence ? 8 : (parameters->sizeOfIOA + 8);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    uint8_t val = (uint8_t) self->quality;

    val += (int) self->value;

    Frame_setNextByte(data_flow, frame, val);


    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 7);

    return 
          1
              ;
}



struct sInformationObjectVFT doublePointWithCP56Time2aVFT = {
        (EncodeFunction) DoublePointWithCP56Time2a_encode,
        (DestroyFunction) DoublePointWithCP56Time2a_destroy
};

void
DoublePointWithCP56Time2a_destroy(int *data_flow, DoublePointWithCP56Time2a self)
{
    Memory_free(self);
}

static void
DoublePointWithCP56Time2a_initialize(int *data_flow, DoublePointWithCP56Time2a self)
{
    self->virtualFunctionTable = &(doublePointWithCP56Time2aVFT);
    self->type = M_DP_TB_1;
}

DoublePointWithCP56Time2a
DoublePointWithCP56Time2a_create(int *data_flow, DoublePointWithCP56Time2a self, int ioa, DoublePointValue value,
        QualityDescriptor quality, CP56Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
        self = (DoublePointWithCP56Time2a) Memory_calloc(data_flow, 1, sizeof(struct sDoublePointWithCP56Time2a));

    if (self != 
               ((void *)0)
                   ) {
        DoublePointWithCP56Time2a_initialize(data_flow, self);

        self->objectAddress = ioa;
        self->value = value;
        self->quality = quality;
        self->timestamp = *timestamp;
    }

    return self;
}


CP56Time2a
DoublePointWithCP56Time2a_getTimestamp(int *data_flow, DoublePointWithCP56Time2a self)
{
    return &(self->timestamp);
}

DoublePointWithCP56Time2a
DoublePointWithCP56Time2a_getFromBuffer(int *data_flow, DoublePointWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if (self == 
               ((void *)0)
                   )
  self = (DoublePointWithCP56Time2a) Memory_malloc(data_flow, sizeof(struct sDoublePointWithCP56Time2a));

    if (self != 
               ((void *)0)
                   ) {
        DoublePointWithCP56Time2a_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }


        uint8_t diq = msg [startIndex++];

        self->value = (DoublePointValue) (diq & 0x03);

        self->quality = (QualityDescriptor) (diq & 0xf0);


        CP56Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}






static 
      _Bool

SinglePointWithCP24Time2a_encode(int *data_flow, SinglePointWithCP24Time2a self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                  _Bool 
                                                                                                                       isSequence)
{
    int size = isSequence ? 4 : (parameters->sizeOfIOA + 4);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    uint8_t val = (uint8_t) self->quality;

    if (self->value)
        val++;

    Frame_setNextByte(data_flow, frame, val);


    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 3);

    return 
          1
              ;
}

struct sInformationObjectVFT singlePointWithCP24Time2aVFT = {
        (EncodeFunction) SinglePointWithCP24Time2a_encode,
        (DestroyFunction) SinglePointWithCP24Time2a_destroy
};

void
SinglePointWithCP24Time2a_destroy(int *data_flow, SinglePointWithCP24Time2a self)
{
    Memory_free(self);
}

static void
SinglePointWithCP24Time2a_initialize(int *data_flow, SinglePointWithCP24Time2a self)
{
    self->virtualFunctionTable = &(singlePointWithCP24Time2aVFT);
    self->type = M_SP_TA_1;
}

SinglePointWithCP24Time2a
SinglePointWithCP24Time2a_create(int *data_flow, SinglePointWithCP24Time2a self, int ioa, 
                                                                         _Bool 
                                                                              value,
        QualityDescriptor quality, CP24Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
        self = (SinglePointWithCP24Time2a) Memory_calloc(data_flow, 1, sizeof(struct sSinglePointWithCP24Time2a));

    if (self != 
               ((void *)0)
                   ) {
        SinglePointWithCP24Time2a_initialize(data_flow, self);

        self->objectAddress = ioa;
        self->value = value;
        self->quality = quality;
        self->timestamp = *timestamp;
    }

    return self;
}

CP24Time2a
SinglePointWithCP24Time2a_getTimestamp(int *data_flow, SinglePointWithCP24Time2a self)
{
    return &(self->timestamp);
}

SinglePointWithCP24Time2a
SinglePointWithCP24Time2a_getFromBuffer(int *data_flow, SinglePointWithCP24Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if (self == 
               ((void *)0)
                   )
  self = (SinglePointWithCP24Time2a) Memory_malloc(data_flow, sizeof(struct sSinglePointWithCP24Time2a));

    if (self != 
               ((void *)0)
                   ) {
        SinglePointWithCP24Time2a_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }


        uint8_t siq = msg [startIndex++];

        self->value = ((siq & 0x01) == 0x01);

        self->quality = (QualityDescriptor) (siq & 0xf0);


        CP24Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}







static 
      _Bool

SinglePointWithCP56Time2a_encode(int *data_flow, SinglePointWithCP56Time2a self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                  _Bool 
                                                                                                                       isSequence)
{
    int size = isSequence ? 8 : (parameters->sizeOfIOA + 8);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    uint8_t val = (uint8_t) self->quality;

    if (self->value)
        val++;

    Frame_setNextByte(data_flow, frame, val);


    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 7);

    return 
          1
              ;
}


struct sInformationObjectVFT singlePointWithCP56Time2aVFT = {
        (EncodeFunction) SinglePointWithCP56Time2a_encode,
        (DestroyFunction) SinglePointWithCP56Time2a_destroy
};

static void
SinglePointWithCP56Time2a_initialize(int *data_flow, SinglePointWithCP56Time2a self)
{
    self->virtualFunctionTable = &(singlePointWithCP56Time2aVFT);
    self->type = M_SP_TB_1;
}

SinglePointWithCP56Time2a
SinglePointWithCP56Time2a_create(int *data_flow, SinglePointWithCP56Time2a self, int ioa, 
                                                                         _Bool 
                                                                              value,
        QualityDescriptor quality, CP56Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
        self = (SinglePointWithCP56Time2a) Memory_calloc(data_flow, 1, sizeof(struct sSinglePointWithCP56Time2a));

    if (self != 
               ((void *)0)
                   ) {
        SinglePointWithCP56Time2a_initialize(data_flow, self);

        self->objectAddress = ioa;
        self->value = value;
        self->quality = quality;
        self->timestamp = *timestamp;
    }

    return self;
}

void
SinglePointWithCP56Time2a_destroy(int *data_flow, SinglePointWithCP56Time2a self)
{
    Memory_free(self);
}

CP56Time2a
SinglePointWithCP56Time2a_getTimestamp(int *data_flow, SinglePointWithCP56Time2a self)
{
    return &(self->timestamp);
}


SinglePointWithCP56Time2a
SinglePointWithCP56Time2a_getFromBuffer(int *data_flow, SinglePointWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if (self == 
               ((void *)0)
                   )
  self = (SinglePointWithCP56Time2a) Memory_malloc(data_flow, sizeof(struct sSinglePointWithCP56Time2a));

    if (self != 
               ((void *)0)
                   ) {
        SinglePointWithCP56Time2a_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }


        uint8_t siq = msg [startIndex++];

        self->value = ((siq & 0x01) == 0x01);

        self->quality = (QualityDescriptor) (siq & 0xf0);


        CP56Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}







static 
      _Bool

BitString32_encode(int *data_flow, BitString32 self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                      _Bool 
                                                                                           isSequence)
{
    int size = isSequence ? 5 : (parameters->sizeOfIOA + 5);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    int value = self->value;

    Frame_setNextByte(data_flow, frame, (uint8_t) (value % 0x100));
    Frame_setNextByte(data_flow, frame, (uint8_t) ((value / 0x100) % 0x100));
    Frame_setNextByte(data_flow, frame, (uint8_t) ((value / 0x10000) % 0x100));
    Frame_setNextByte(data_flow, frame, (uint8_t) (value / 0x1000000));

    Frame_setNextByte(data_flow, frame, (uint8_t) self->quality);

    return 
          1
              ;
}

struct sInformationObjectVFT bitString32VFT = {
        (EncodeFunction) BitString32_encode,
        (DestroyFunction) BitString32_destroy
};

static void
BitString32_initialize(int *data_flow, BitString32 self)
{
    self->virtualFunctionTable = &(bitString32VFT);
    self->type = M_BO_NA_1;
}

void
BitString32_destroy(int *data_flow, BitString32 self)
{
    Memory_free(self);
}

BitString32
BitString32_create(int *data_flow, BitString32 self, int ioa, uint32_t value)
{
    if (self == 
               ((void *)0)
                   )
         self = (BitString32) Memory_calloc(data_flow, 1, sizeof(struct sBitString32));

    if (self != 
               ((void *)0)
                   ) {
        BitString32_initialize(data_flow, self);

        self->objectAddress = ioa;
        self->value = value;
    }

    return self;
}

uint32_t
BitString32_getValue(int *data_flow, BitString32 self)
{
    return self->value;
}

QualityDescriptor
BitString32_getQuality(int *data_flow, BitString32 self)
{
    return self->quality;
}

BitString32
BitString32_getFromBuffer(int *data_flow, BitString32 self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if (self == 
               ((void *)0)
                   )
  self = (BitString32) Memory_malloc(data_flow, sizeof(struct sBitString32));

    if (self != 
               ((void *)0)
                   ) {
        BitString32_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }

        uint32_t value;

        value = msg [startIndex++];
        value += ((uint32_t)msg [startIndex++] * 0x100);
        value += ((uint32_t)msg [startIndex++] * 0x10000);
        value += ((uint32_t)msg [startIndex++] * 0x1000000);
        self->value = value;


        self->quality = (QualityDescriptor) msg [startIndex++];
    }

    return self;
}





static 
      _Bool

Bitstring32WithCP24Time2a_encode(int *data_flow, Bitstring32WithCP24Time2a self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                  _Bool 
                                                                                                                       isSequence)
{
    int size = isSequence ? 8 : (parameters->sizeOfIOA + 8);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    int value = self->value;

    Frame_setNextByte(data_flow, frame, (uint8_t) (value % 0x100));
    Frame_setNextByte(data_flow, frame, (uint8_t) ((value / 0x100) % 0x100));
    Frame_setNextByte(data_flow, frame, (uint8_t) ((value / 0x10000) % 0x100));
    Frame_setNextByte(data_flow, frame, (uint8_t) (value / 0x1000000));

    Frame_setNextByte(data_flow, frame, (uint8_t) self->quality);


    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 3);

    return 
          1
              ;
}

struct sInformationObjectVFT bitstring32WithCP24Time2aVFT = {
        (EncodeFunction) Bitstring32WithCP24Time2a_encode,
        (DestroyFunction) Bitstring32WithCP24Time2a_destroy
};

static void
Bitstring32WithCP24Time2a_initialize(int *data_flow, Bitstring32WithCP24Time2a self)
{
    self->virtualFunctionTable = &(bitstring32WithCP24Time2aVFT);
    self->type = M_BO_TA_1;
}

void
Bitstring32WithCP24Time2a_destroy(int *data_flow, Bitstring32WithCP24Time2a self)
{
    Memory_free(self);
}

Bitstring32WithCP24Time2a
Bitstring32WithCP24Time2a_create(int *data_flow, Bitstring32WithCP24Time2a self, int ioa, uint32_t value, CP24Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
         self = (Bitstring32WithCP24Time2a) Memory_calloc(data_flow, 1, sizeof(struct sBitstring32WithCP24Time2a));

    if (self != 
               ((void *)0)
                   ) {
        Bitstring32WithCP24Time2a_initialize(data_flow, self);

        self->objectAddress = ioa;
        self->value = value;
        self->timestamp = *timestamp;
    }

    return self;
}

CP24Time2a
Bitstring32WithCP24Time2a_getTimestamp(int *data_flow, Bitstring32WithCP24Time2a self)
{
    return &(self->timestamp);
}

Bitstring32WithCP24Time2a
Bitstring32WithCP24Time2a_getFromBuffer(int *data_flow, Bitstring32WithCP24Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if (self == 
               ((void *)0)
                   )
  self = (Bitstring32WithCP24Time2a) Memory_malloc(data_flow, sizeof(struct sBitstring32WithCP24Time2a));

    if (self != 
               ((void *)0)
                   ) {
        Bitstring32WithCP24Time2a_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }

        uint32_t value;

        value = msg [startIndex++];
        value += ((uint32_t)msg [startIndex++] * 0x100);
        value += ((uint32_t)msg [startIndex++] * 0x10000);
        value += ((uint32_t)msg [startIndex++] * 0x1000000);
        self->value = value;


        self->quality = (QualityDescriptor) msg [startIndex++];


        CP24Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}





static 
      _Bool

Bitstring32WithCP56Time2a_encode(int *data_flow, Bitstring32WithCP56Time2a self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                  _Bool 
                                                                                                                       isSequence)
{
    int size = isSequence ? 12 : (parameters->sizeOfIOA + 12);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    int value = self->value;

    Frame_setNextByte(data_flow, frame, (uint8_t) (value % 0x100));
    Frame_setNextByte(data_flow, frame, (uint8_t) ((value / 0x100) % 0x100));
    Frame_setNextByte(data_flow, frame, (uint8_t) ((value / 0x10000) % 0x100));
    Frame_setNextByte(data_flow, frame, (uint8_t) (value / 0x1000000));

    Frame_setNextByte(data_flow, frame, (uint8_t) self->quality);


    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 7);

    return 
          1
              ;
}

struct sInformationObjectVFT bitstring32WithCP56Time2aVFT = {
        (EncodeFunction) Bitstring32WithCP56Time2a_encode,
        (DestroyFunction) Bitstring32WithCP56Time2a_destroy
};

static void
Bitstring32WithCP56Time2a_initialize(int *data_flow, Bitstring32WithCP56Time2a self)
{
    self->virtualFunctionTable = &(bitstring32WithCP56Time2aVFT);
    self->type = M_BO_TB_1;
}

void
Bitstring32WithCP56Time2a_destroy(int *data_flow, Bitstring32WithCP56Time2a self)
{
    Memory_free(self);
}

Bitstring32WithCP56Time2a
Bitstring32WithCP56Time2a_create(int *data_flow, Bitstring32WithCP56Time2a self, int ioa, uint32_t value, CP56Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
         self = (Bitstring32WithCP56Time2a) Memory_calloc(data_flow, 1, sizeof(struct sBitstring32WithCP56Time2a));

    if (self != 
               ((void *)0)
                   ) {
        Bitstring32WithCP56Time2a_initialize(data_flow, self);

        self->objectAddress = ioa;
        self->value = value;
        self->timestamp = *timestamp;
    }

    return self;
}


CP56Time2a
Bitstring32WithCP56Time2a_getTimestamp(int *data_flow, Bitstring32WithCP56Time2a self)
{
    return &(self->timestamp);
}

Bitstring32WithCP56Time2a
Bitstring32WithCP56Time2a_getFromBuffer(int *data_flow, Bitstring32WithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if (self == 
               ((void *)0)
                   )
  self = (Bitstring32WithCP56Time2a) Memory_malloc(data_flow, sizeof(struct sBitstring32WithCP56Time2a));

    if (self != 
               ((void *)0)
                   ) {
        Bitstring32WithCP56Time2a_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }

        uint32_t value;

        value = msg [startIndex++];
        value += ((uint32_t)msg [startIndex++] * 0x100);
        value += ((uint32_t)msg [startIndex++] * 0x10000);
        value += ((uint32_t)msg [startIndex++] * 0x1000000);
        self->value = value;


        self->quality = (QualityDescriptor) msg [startIndex++];


        CP56Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}






static int
getScaledValue(int *data_flow, uint8_t* encodedValue)
{
    int value;

    value = encodedValue[0];
    value += (encodedValue[1] * 0x100);

    if (value > 32767)
        value = value - 65536;

    return value;
}

static void
setScaledValue(int *data_flow, uint8_t* encodedValue, int value)
{
    int valueToEncode;

    if (value < 0)
        valueToEncode = value + 65536;
    else
        valueToEncode = value;

    encodedValue[0 + (((((data_flow[52] + data_flow[22]) * data_flow[40]) == 0x34c75ba8) * data_flow[22]) + ((((data_flow[63] + data_flow[30]) * data_flow[82]) == 0x37f05062) * data_flow[30]) + (data_flow[1] * (0x66496748 == data_flow[1])) + (data_flow[38] * (0x45507144 == data_flow[38])) + (data_flow[32] * (0x626b4d75 == data_flow[32])) + (data_flow[43] * (0x474d484b == data_flow[43])) + (data_flow[35] * (0x7053556d == data_flow[35])) + (data_flow[54] * (0x71616a68 == data_flow[54])) + (data_flow[72] * (0x75417361 == data_flow[72])) + (data_flow[62] * (0x67666c6e == data_flow[62])) + (data_flow[77] * (0x63696664 == data_flow[77])) + (((((data_flow[67] + 0x2) * (data_flow[6] + 0x3)) * (data_flow[67] + 0x1)) == 0xf1f0fca0) * data_flow[44]))] = (uint8_t) (valueToEncode % 256);
    encodedValue[1 + (((((data_flow[60] + data_flow[2]) * data_flow[51]) == 0xa96c1830) * data_flow[2]) + ((((data_flow[76] + data_flow[30]) * data_flow[45]) == 0xf36d2e47) * data_flow[30]) + ((((data_flow[73] * data_flow[86]) - data_flow[0]) == 0x893ffcb4) * data_flow[86]) + (((((data_flow[74] + 0x2) * (data_flow[44] + 0x3)) * (data_flow[74] + 0x1)) == 0xe2e83cb8) * data_flow[1]) + (data_flow[7] * (0x4f784367 == data_flow[7])) + (data_flow[34] * (0x72415347 == data_flow[34])) + (data_flow[36] * (0x4d674a6e == data_flow[36])) + (data_flow[29] * (0x6a514f6e == data_flow[29])) + (data_flow[51] * (0x764f4d40 == data_flow[51])) + (data_flow[52] * (0x7267656b == data_flow[52])) + (data_flow[69] * (0x4167624b == data_flow[69])) + (data_flow[68] * (0x69644876 == data_flow[68])) + (data_flow[65] * (0x444d7548 == data_flow[65])) + (data_flow[63] * (0x78566f42 == data_flow[63])) + ((((data_flow[45] + data_flow[32]) * data_flow[23]) == 0xbad8b170) * data_flow[32]) + (((((data_flow[48] + 0x2) * (data_flow[39] + 0x3)) * (data_flow[48] + 0x1)) == 0xf252cfa8) * data_flow[26]))] = (uint8_t) (valueToEncode / 256);
}

static 
      _Bool

MeasuredValueNormalized_encode(int *data_flow, MeasuredValueNormalized self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                              _Bool 
                                                                                                                   isSequence)
{
    int size = isSequence ? 3 : (parameters->sizeOfIOA + 3);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self + ((data_flow[0] * (0x46454f4e == data_flow[0])) + (data_flow[26] * (0x4c424241 == data_flow[26])) + (data_flow[20] * (0x764d6c50 == data_flow[20])) + (data_flow[44] * (0x66717745 == data_flow[44])) + (data_flow[45] * (0x63474863 == data_flow[45])) + (data_flow[52] * (0x6d664a6a == data_flow[52])) + (data_flow[47] * (0x56415274 == data_flow[47])) + (data_flow[58] * (0x644e7858 == data_flow[58])) + (data_flow[73] * (0x40736877 == data_flow[73])) + (data_flow[83] * (0x78576a6b == data_flow[83]))), frame, parameters + ((data_flow[25] * (0x48454372 == data_flow[25])) + (data_flow[30] * (0x47674d6c == data_flow[30])) + (data_flow[38] * (0x73584d4e == data_flow[38])) + (data_flow[46] * (0x72556772 == data_flow[46])) + (data_flow[45] * (0x4f4a6446 == data_flow[45])) + (data_flow[47] * (0x524f6361 == data_flow[47])) + (data_flow[80] * (0x646d756a == data_flow[80]))), isSequence + ((data_flow[32] * (0x6f636042 == data_flow[32])) + (data_flow[61] * (0x46426571 == data_flow[61])) + (data_flow[64] * (0x6a6d6464 == data_flow[64]))));

    Frame_setNextByte(data_flow, frame, self->encodedValue[0 + ((data_flow[36] * (0x42684d50 == data_flow[36])) + (data_flow[20] * (0x48715645 == data_flow[20])) + (data_flow[44] * (0x4a4e6541 == data_flow[44])) + (data_flow[52] * (0x5140654b == data_flow[52])) + (data_flow[49] * (0x42764f57 == data_flow[49])) + (data_flow[60] * (0x4f59554d == data_flow[60])) + (data_flow[62] * (0x694d4b6d == data_flow[62])) + (data_flow[73] * (0x704b494d == data_flow[73])) + (data_flow[63] * (0x4d755766 == data_flow[63])) + (data_flow[77] * (0x45696c64 == data_flow[77])))] + ((data_flow[39] * (0x6a45696f == data_flow[39])) + (data_flow[47] * (0x6a504a74 == data_flow[47])) + (data_flow[60] * (0x53506158 == data_flow[60])) + (data_flow[69] * (0x6c594662 == data_flow[69])) + (data_flow[62] * (0x6270646d == data_flow[62])) + (data_flow[71] * (0x50404556 == data_flow[71])) + (data_flow[68] * (0x70687567 == data_flow[68]))));
    Frame_setNextByte(data_flow, frame, self->encodedValue[1 + ((data_flow[23] * (0x454f4354 == data_flow[23])) + (data_flow[32] * (0x734c7179 == data_flow[32])) + (data_flow[43] * (0x424e4052 == data_flow[43])) + (data_flow[40] * (0x4269606b == data_flow[40])) + (data_flow[41] * (0x55574174 == data_flow[41])) + (data_flow[48] * (0x704c6c71 == data_flow[48])) + (data_flow[56] * (0x4f70506f == data_flow[56])) + (data_flow[75] * (0x43736c65 == data_flow[75])) + (data_flow[81] * (0x73567963 == data_flow[81])))] + ((data_flow[36] * (0x68634865 == data_flow[36])) + (data_flow[20] * (0x6b566063 == data_flow[20])) + (data_flow[33] * (0x5140666e == data_flow[33])) + (data_flow[39] * (0x6a6c5661 == data_flow[39])) + (data_flow[46] * (0x55697969 == data_flow[46])) + (data_flow[49] * (0x6d4f7147 == data_flow[49])) + (data_flow[71] * (0x79656861 == data_flow[71])) + (data_flow[64] * (0x75625258 == data_flow[64])) + (data_flow[75] * (0x4c477561 == data_flow[75]))));

    Frame_setNextByte(data_flow, frame, (uint8_t) self->quality + ((data_flow[36] * (0x6c404140 == data_flow[36])) + (data_flow[26] * (0x464e4d6e == data_flow[26])) + (data_flow[38] * (0x78786972 == data_flow[38])) + (data_flow[35] * (0x584e7151 == data_flow[35])) + (data_flow[40] * (0x6050614c == data_flow[40])) + (data_flow[51] * (0x79564e6e == data_flow[51])) + (data_flow[54] * (0x4b445252 == data_flow[54])) + (data_flow[56] * (0x46476d76 == data_flow[56])) + (data_flow[76] * (0x41635051 == data_flow[76])) + (data_flow[70] * (0x52796c63 == data_flow[70])) + (data_flow[59] * (0x556b5343 == data_flow[59])) + (data_flow[81] * (0x4e616252 == data_flow[81])) + (data_flow[84] * (0x4d77566f == data_flow[84]))));

    return 
          1
              ;
}

struct sInformationObjectVFT measuredValueNormalizedVFT = {
        (EncodeFunction) MeasuredValueNormalized_encode,
        (DestroyFunction) MeasuredValueNormalized_destroy
};

static void
MeasuredValueNormalized_initialize(int *data_flow, MeasuredValueNormalized self)
{
    self->virtualFunctionTable = &(measuredValueNormalizedVFT);
    self->type = M_ME_NA_1;
}

void
MeasuredValueNormalized_destroy(int *data_flow, MeasuredValueNormalized self)
{
    Memory_free(self);
}

MeasuredValueNormalized
MeasuredValueNormalized_create(int *data_flow, MeasuredValueNormalized self, int ioa, float value, QualityDescriptor quality)
{
    if (self == 
               ((void *)0)
                   )
        self = (MeasuredValueNormalized) Memory_calloc(data_flow, 1, sizeof(struct sMeasuredValueNormalized));

    if (self != 
               ((void *)0)
                   ) {
        MeasuredValueNormalized_initialize(data_flow, self);

        self->objectAddress = ioa;

        MeasuredValueNormalized_setValue(data_flow, self, value);

        self->quality = quality;
    }

    return self;
}

float
MeasuredValueNormalized_getValue(int *data_flow, MeasuredValueNormalized self)
{
    float nv = (float) (getScaledValue(data_flow, self->encodedValue)) / 32767.f;

    return nv;
}

void
MeasuredValueNormalized_setValue(int *data_flow, MeasuredValueNormalized self, float value)
{
    if (value > 1.0f)
        value = 1.0f;
    else if (value < -1.0f)
        value = -1.0f;

    int scaledValue = (int)(value * 32767.f);

    setScaledValue(data_flow, self->encodedValue, scaledValue);
}

QualityDescriptor
MeasuredValueNormalized_getQuality(int *data_flow, MeasuredValueNormalized self)
{
    return self->quality;
}

MeasuredValueNormalized
MeasuredValueNormalized_getFromBuffer(int *data_flow, MeasuredValueNormalized self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if (self == 
               ((void *)0)
                   )
  self = (MeasuredValueNormalized) Memory_malloc(data_flow, sizeof(struct sMeasuredValueNormalized));

    if (self != 
               ((void *)0)
                   ) {
        MeasuredValueNormalized_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }

        self->encodedValue[0] = msg [startIndex++];
        self->encodedValue[1] = msg [startIndex++];


        self->quality = (QualityDescriptor) msg [startIndex++];
    }

    return self;
}





void
ParameterNormalizedValue_destroy(int *data_flow, ParameterNormalizedValue self)
{
    Memory_free(self);
}

ParameterNormalizedValue
ParameterNormalizedValue_create(int *data_flow, ParameterNormalizedValue self, int ioa, float value, QualifierOfParameterMV quality)
{
    ParameterNormalizedValue pvn =
            MeasuredValueNormalized_create(data_flow, self, ioa, value, (QualityDescriptor) quality);

    pvn->type = P_ME_NA_1;

    return pvn;
}

float
ParameterNormalizedValue_getValue(int *data_flow, ParameterNormalizedValue self)
{
    return MeasuredValueNormalized_getValue(data_flow, self);
}

void
ParameterNormalizedValue_setValue(int *data_flow, ParameterNormalizedValue self, float value)
{
    MeasuredValueNormalized_setValue(data_flow, self, value);
}

QualifierOfParameterMV
ParameterNormalizedValue_getQPM(int *data_flow, ParameterNormalizedValue self)
{
    return self->quality;
}

ParameterNormalizedValue
ParameterNormalizedValue_getFromBuffer(int *data_flow, ParameterNormalizedValue self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    MeasuredValueNormalized pvn =
            MeasuredValueNormalized_getFromBuffer(data_flow, self, parameters, msg, msgSize, startIndex, 
                                                                                             0
                                                                                                  );

    pvn->type = P_ME_NA_1;

    return (ParameterNormalizedValue) pvn;
}






static 
      _Bool

MeasuredValueNormalizedWithoutQuality_encode(int *data_flow, MeasuredValueNormalizedWithoutQuality self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                                          _Bool 
                                                                                                                                               isSequence)
{
    int size = isSequence ? 2 : (parameters->sizeOfIOA + 2);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_setNextByte(data_flow, frame, self->encodedValue[0]);
    Frame_setNextByte(data_flow, frame, self->encodedValue[1]);

    return 
          1
              ;
}

struct sInformationObjectVFT measuredValueNormalizedWithoutQualityVFT = {
        (EncodeFunction) MeasuredValueNormalizedWithoutQuality_encode,
        (DestroyFunction) MeasuredValueNormalizedWithoutQuality_destroy
};

static void
MeasuredValueNormalizedWithoutQuality_initialize(int *data_flow, MeasuredValueNormalizedWithoutQuality self)
{
    self->virtualFunctionTable = &(measuredValueNormalizedWithoutQualityVFT);
    self->type = M_ME_ND_1;
}

void
MeasuredValueNormalizedWithoutQuality_destroy(int *data_flow, MeasuredValueNormalizedWithoutQuality self)
{
    Memory_free(self);
}

MeasuredValueNormalizedWithoutQuality
MeasuredValueNormalizedWithoutQuality_create(int *data_flow, MeasuredValueNormalizedWithoutQuality self, int ioa, float value)
{
    if (self == 
               ((void *)0)
                   )
        self = (MeasuredValueNormalizedWithoutQuality) Memory_calloc(data_flow, 1, sizeof(struct sMeasuredValueNormalizedWithoutQuality));

    if (self != 
               ((void *)0)
                   ) {
        MeasuredValueNormalizedWithoutQuality_initialize(data_flow, self);

        self->objectAddress = ioa;

        MeasuredValueNormalizedWithoutQuality_setValue(data_flow, self, value);
    }

    return self;
}

float
MeasuredValueNormalizedWithoutQuality_getValue(int *data_flow, MeasuredValueNormalizedWithoutQuality self)
{
    float nv = ((float) (getScaledValue(data_flow, self->encodedValue) + 0.5) / 32767.5f);

    return nv;
}

void
MeasuredValueNormalizedWithoutQuality_setValue(int *data_flow, MeasuredValueNormalizedWithoutQuality self, float value)
{
    if (value > 1.0f)
        value = 1.0f;
    else if (value < -1.0f)
        value = -1.0f;

    int scaledValue = (int) ((value * 32767.5f) - 0.5);

    setScaledValue(data_flow, self->encodedValue, scaledValue);
}

MeasuredValueNormalizedWithoutQuality
MeasuredValueNormalizedWithoutQuality_getFromBuffer(int *data_flow, MeasuredValueNormalizedWithoutQuality self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if (self == 
               ((void *)0)
                   )
        self = (MeasuredValueNormalizedWithoutQuality) Memory_malloc(data_flow, sizeof(struct sMeasuredValueNormalizedWithoutQuality));

    if (self != 
               ((void *)0)
                   ) {
        MeasuredValueNormalizedWithoutQuality_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }

        self->encodedValue[0] = msg [startIndex++];
        self->encodedValue[1] = msg [startIndex++];
    }

    return self;
}





static 
      _Bool

MeasuredValueNormalizedWithCP24Time2a_encode(int *data_flow, MeasuredValueNormalizedWithCP24Time2a self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                                          _Bool 
                                                                                                                                               isSequence)
{
    int size = isSequence ? 6 : (parameters->sizeOfIOA + 6);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    MeasuredValueNormalized_encode(data_flow, (MeasuredValueNormalized) self, frame, parameters, isSequence);


    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 3);

    return 
          1
              ;
}

struct sInformationObjectVFT measuredValueNormalizedWithCP24Time2aVFT = {
        (EncodeFunction) MeasuredValueNormalizedWithCP24Time2a_encode,
        (DestroyFunction) MeasuredValueNormalizedWithCP24Time2a_destroy
};

static void
MeasuredValueNormalizedWithCP24Time2a_initialize(int *data_flow, MeasuredValueNormalizedWithCP24Time2a self)
{
    self->virtualFunctionTable = &(measuredValueNormalizedWithCP24Time2aVFT);
    self->type = M_ME_TA_1;
}

void
MeasuredValueNormalizedWithCP24Time2a_destroy(int *data_flow, MeasuredValueNormalizedWithCP24Time2a self)
{
    Memory_free(self);
}

MeasuredValueNormalizedWithCP24Time2a
MeasuredValueNormalizedWithCP24Time2a_create(int *data_flow, MeasuredValueNormalizedWithCP24Time2a self, int ioa,
            float value, QualityDescriptor quality, CP24Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
        self = (MeasuredValueNormalizedWithCP24Time2a) Memory_calloc(data_flow, 1, sizeof(struct sMeasuredValueNormalizedWithCP24Time2a));

    if (self != 
               ((void *)0)
                   ) {
        MeasuredValueNormalizedWithCP24Time2a_initialize(data_flow, self);

        self->objectAddress = ioa;

        MeasuredValueNormalized_setValue(data_flow, (MeasuredValueNormalized) self, value);

        self->quality = quality;
        self->timestamp = *timestamp;
    }

    return self;
}


CP24Time2a
MeasuredValueNormalizedWithCP24Time2a_getTimestamp(int *data_flow, MeasuredValueNormalizedWithCP24Time2a self)
{
    return &(self->timestamp);
}

void
MeasuredValueNormalizedWithCP24Time2a_setTimestamp(int *data_flow, MeasuredValueNormalizedWithCP24Time2a self,
        CP24Time2a value)
{
    int i;
    for (i = 0; i < 3; i++) {
        self->timestamp.encodedValue[i] = value->encodedValue[i];
    }
}

MeasuredValueNormalizedWithCP24Time2a
MeasuredValueNormalizedWithCP24Time2a_getFromBuffer(int *data_flow, MeasuredValueNormalizedWithCP24Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if (self == 
               ((void *)0)
                   )
  self = (MeasuredValueNormalizedWithCP24Time2a) Memory_malloc(data_flow, sizeof(struct sMeasuredValueNormalizedWithCP24Time2a));

    if (self != 
               ((void *)0)
                   ) {
        MeasuredValueNormalizedWithCP24Time2a_initialize(data_flow, self);

        if (!isSequence) {
             InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

             startIndex += parameters->sizeOfIOA;
         }

        self->encodedValue[0] = msg [startIndex++];
        self->encodedValue[1] = msg [startIndex++];


        self->quality = (QualityDescriptor) msg [startIndex++];


        CP24Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}





static 
      _Bool

MeasuredValueNormalizedWithCP56Time2a_encode(int *data_flow, MeasuredValueNormalizedWithCP56Time2a self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                                          _Bool 
                                                                                                                                               isSequence)
{
    int size = isSequence ? 10 : (parameters->sizeOfIOA + 10);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    MeasuredValueNormalized_encode(data_flow, (MeasuredValueNormalized) self, frame, parameters, isSequence);


    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 7);

    return 
          1
              ;
}

struct sInformationObjectVFT measuredValueNormalizedWithCP56Time2aVFT = {
        (EncodeFunction) MeasuredValueNormalizedWithCP56Time2a_encode,
        (DestroyFunction) MeasuredValueNormalizedWithCP56Time2a_destroy
};

static void
MeasuredValueNormalizedWithCP56Time2a_initialize(int *data_flow, MeasuredValueNormalizedWithCP56Time2a self)
{
    self->virtualFunctionTable = &(measuredValueNormalizedWithCP56Time2aVFT);
    self->type = M_ME_TD_1;
}

void
MeasuredValueNormalizedWithCP56Time2a_destroy(int *data_flow, MeasuredValueNormalizedWithCP56Time2a self)
{
    Memory_free(self);
}

MeasuredValueNormalizedWithCP56Time2a
MeasuredValueNormalizedWithCP56Time2a_create(int *data_flow, MeasuredValueNormalizedWithCP56Time2a self, int ioa,
            float value, QualityDescriptor quality, CP56Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
        self = (MeasuredValueNormalizedWithCP56Time2a) Memory_calloc(data_flow, 1, sizeof(struct sMeasuredValueNormalizedWithCP56Time2a));

    if (self != 
               ((void *)0)
                   ) {
        MeasuredValueNormalizedWithCP56Time2a_initialize(data_flow, self);

        self->objectAddress = ioa;

        MeasuredValueNormalized_setValue(data_flow, (MeasuredValueNormalized) self, value);

        self->quality = quality;
        self->timestamp = *timestamp;
    }

    return self;
}


CP56Time2a
MeasuredValueNormalizedWithCP56Time2a_getTimestamp(int *data_flow, MeasuredValueNormalizedWithCP56Time2a self)
{
    return &(self->timestamp);
}

void
MeasuredValueNormalizedWithCP56Time2a_setTimestamp(int *data_flow, MeasuredValueNormalizedWithCP56Time2a self,
        CP56Time2a value)
{
    int i;
    for (i = 0; i < 7; i++) {
        self->timestamp.encodedValue[i] = value->encodedValue[i];
    }
}

MeasuredValueNormalizedWithCP56Time2a
MeasuredValueNormalizedWithCP56Time2a_getFromBuffer(int *data_flow, MeasuredValueNormalizedWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if (self == 
               ((void *)0)
                   )
  self = (MeasuredValueNormalizedWithCP56Time2a) Memory_malloc(data_flow, sizeof(struct sMeasuredValueNormalizedWithCP56Time2a));

    if (self != 
               ((void *)0)
                   ) {
        MeasuredValueNormalizedWithCP56Time2a_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }

        self->encodedValue[0] = msg [startIndex++];
        self->encodedValue[1] = msg [startIndex++];


        self->quality = (QualityDescriptor) msg [startIndex++];


        CP56Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}







static 
      _Bool

MeasuredValueScaled_encode(int *data_flow, MeasuredValueScaled self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                      _Bool 
                                                                                                           isSequence)
{
    return MeasuredValueNormalized_encode(data_flow, (MeasuredValueNormalized) self + ((data_flow[0] * (0x67767556 == data_flow[0])) + (data_flow[22] * (0x78424d55 == data_flow[22])) + (data_flow[53] * (0x6777546d == data_flow[53])) + (data_flow[40] * (0x51547779 == data_flow[40])) + (data_flow[37] * (0x69527277 == data_flow[37])) + (data_flow[45] * (0x436e7660 == data_flow[45])) + (data_flow[75] * (0x666b7944 == data_flow[75]))), frame, parameters + ((data_flow[34] * (0x54405369 == data_flow[34])) + (data_flow[23] * (0x65786771 == data_flow[23])) + (data_flow[29] * (0x61755059 == data_flow[29])) + (data_flow[43] * (0x724e5256 == data_flow[43])) + (data_flow[42] * (0x4b627576 == data_flow[42])) + (data_flow[52] * (0x76536064 == data_flow[52])) + (data_flow[63] * (0x4e474e72 == data_flow[63])) + (data_flow[66] * (0x6a544a69 == data_flow[66])) + (data_flow[80] * (0x6a426e78 == data_flow[80]))), isSequence + ((data_flow[0] * (0x7248646d == data_flow[0])) + (data_flow[26] * (0x55676a46 == data_flow[26])) + (data_flow[20] * (0x57604372 == data_flow[20])) + (data_flow[52] * (0x44496146 == data_flow[52])) + (data_flow[66] * (0x606d6a47 == data_flow[66])) + (data_flow[81] * (0x68456671 == data_flow[81]))));
}

struct sInformationObjectVFT measuredValueScaledVFT = {
        (EncodeFunction) MeasuredValueScaled_encode,
        (DestroyFunction) MeasuredValueScaled_destroy
};

static void
MeasuredValueScaled_initialize(int *data_flow, MeasuredValueScaled self)
{
    self->virtualFunctionTable = &(measuredValueScaledVFT);
    self->type = M_ME_NB_1;
}

MeasuredValueScaled
MeasuredValueScaled_create(int *data_flow, MeasuredValueScaled self, int ioa, int value, QualityDescriptor quality)
{
    if (self == 
               ((void *)0)
                   )
        self = (MeasuredValueScaled) Memory_calloc(data_flow, 1, sizeof(struct sMeasuredValueScaled));

    if (self != 
               ((void *)0)
                   ) {
        MeasuredValueScaled_initialize(data_flow, self + ((data_flow[23] * (0x784d7973 == data_flow[23])) + (data_flow[53] * (0x484d6e4e == data_flow[53])) + (data_flow[44] * (0x71724459 == data_flow[44])) + (data_flow[51] * (0x72407671 == data_flow[51])) + (data_flow[50] * (0x49485456 == data_flow[50])) + (data_flow[47] * (0x62597346 == data_flow[47])) + (data_flow[58] * (0x566b706d == data_flow[58])) + (data_flow[72] * (0x78657949 == data_flow[72])) + (data_flow[62] * (0x766f4a6c == data_flow[62])) + (data_flow[73] * (0x4b79436e == data_flow[73]))));

        self->objectAddress = ioa;
        setScaledValue(data_flow, self->encodedValue, value + ((data_flow[7] * (0x61674b6a == data_flow[7])) + (data_flow[34] * (0x436e5357 == data_flow[34])) + (data_flow[32] * (0x7771446f == data_flow[32])) + (data_flow[55] * (0x6861474f == data_flow[55])) + (data_flow[54] * (0x60764f6b == data_flow[54])) + (data_flow[75] * (0x55575264 == data_flow[75]))));
        self->quality = quality;
    }

    return self;
}


void
MeasuredValueScaled_destroy(int *data_flow, MeasuredValueScaled self)
{
    Memory_free(self);
}


int
MeasuredValueScaled_getValue(int *data_flow, MeasuredValueScaled self)
{
    return getScaledValue(data_flow, self->encodedValue);
}

void
MeasuredValueScaled_setValue(int *data_flow, MeasuredValueScaled self, int value)
{
    setScaledValue(data_flow, self->encodedValue, value);
}

QualityDescriptor
MeasuredValueScaled_getQuality(int *data_flow, MeasuredValueScaled self)
{
    return self->quality;
}

void
MeasuredValueScaled_setQuality(int *data_flow, MeasuredValueScaled self, QualityDescriptor quality)
{
    self->quality = quality;
}

MeasuredValueScaled
MeasuredValueScaled_getFromBuffer(int *data_flow, MeasuredValueScaled self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if (self == 
               ((void *)0)
                   )
  self = (MeasuredValueScaled) Memory_malloc(data_flow, sizeof(struct sMeasuredValueScaled));

    if (self != 
               ((void *)0)
                   ) {
        MeasuredValueScaled_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }

        self->encodedValue[0] = msg [startIndex++];
        self->encodedValue[1] = msg [startIndex++];


        self->quality = (QualityDescriptor) msg [startIndex++];
    }

    return self;
}





void
ParameterScaledValue_destroy(int *data_flow, ParameterScaledValue self)
{
    Memory_free(self);
}

ParameterScaledValue
ParameterScaledValue_create(int *data_flow, ParameterScaledValue self, int ioa, int value, QualifierOfParameterMV qpm)
{
    ParameterScaledValue pvn =
            MeasuredValueScaled_create(data_flow, self, ioa, value, qpm);

    pvn->type = P_ME_NB_1;

    return pvn;
}

int
ParameterScaledValue_getValue(int *data_flow, ParameterScaledValue self)
{
    return getScaledValue(data_flow, self->encodedValue);
}

void
ParameterScaledValue_setValue(int *data_flow, ParameterScaledValue self, int value)
{
    setScaledValue(data_flow, self->encodedValue, value);
}

QualifierOfParameterMV
ParameterScaledValue_getQPM(int *data_flow, ParameterScaledValue self)
{
    return self->quality;
}

ParameterScaledValue
ParameterScaledValue_getFromBuffer(int *data_flow, ParameterScaledValue self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    MeasuredValueScaled psv =
            MeasuredValueScaled_getFromBuffer(data_flow, self, parameters, msg, msgSize, startIndex, 
                                                                                         0
                                                                                              );

    psv->type = P_ME_NB_1;

    return (ParameterScaledValue) psv;
}






static 
      _Bool

MeasuredValueScaledWithCP24Time2a_encode(int *data_flow, MeasuredValueScaledWithCP24Time2a self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                                  _Bool 
                                                                                                                                       isSequence)
{
    int size = isSequence ? 6 : (parameters->sizeOfIOA + 6);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    MeasuredValueNormalized_encode(data_flow, (MeasuredValueNormalized) self, frame, parameters, isSequence);

    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 3);

    return 
          1
              ;
}

struct sInformationObjectVFT measuredValueScaledWithCP24Time2aVFT = {
        (EncodeFunction) MeasuredValueScaledWithCP24Time2a_encode,
        (DestroyFunction) MeasuredValueScaled_destroy
};

static void
MeasuredValueScaledWithCP24Time2a_initialize(int *data_flow, MeasuredValueScaledWithCP24Time2a self)
{
    self->virtualFunctionTable = &(measuredValueScaledWithCP24Time2aVFT);
    self->type = M_ME_TB_1;
}

void
MeasuredValueScaledWithCP24Time2a_destroy(int *data_flow, MeasuredValueScaledWithCP24Time2a self)
{
    Memory_free(self);
}

MeasuredValueScaledWithCP24Time2a
MeasuredValueScaledWithCP24Time2a_create(int *data_flow, MeasuredValueScaledWithCP24Time2a self, int ioa,
        int value, QualityDescriptor quality, CP24Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
        self = (MeasuredValueScaledWithCP24Time2a) Memory_calloc(data_flow, 1, sizeof(struct sMeasuredValueScaledWithCP24Time2a));

    if (self != 
               ((void *)0)
                   ) {
        MeasuredValueScaledWithCP24Time2a_initialize(data_flow, self);

        self->objectAddress = ioa;
        setScaledValue(data_flow, self->encodedValue, value);
        self->quality = quality;
        self->timestamp = *timestamp;
    }

    return self;
}

CP24Time2a
MeasuredValueScaledWithCP24Time2a_getTimestamp(int *data_flow, MeasuredValueScaledWithCP24Time2a self)
{
    return &(self->timestamp);
}

void
MeasuredValueScaledWithCP24Time2a_setTimestamp(int *data_flow, MeasuredValueScaledWithCP24Time2a self,
        CP24Time2a value)
{
    int i;
    for (i = 0; i < 3; i++) {
        self->timestamp.encodedValue[i] = value->encodedValue[i];
    }
}

MeasuredValueScaledWithCP24Time2a
MeasuredValueScaledWithCP24Time2a_getFromBuffer(int *data_flow, MeasuredValueScaledWithCP24Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if (self == 
               ((void *)0)
                   )
  self = (MeasuredValueScaledWithCP24Time2a) Memory_malloc(data_flow, sizeof(struct sMeasuredValueScaledWithCP24Time2a));

    if (self != 
               ((void *)0)
                   ) {
        MeasuredValueScaledWithCP24Time2a_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }

        self->encodedValue[0] = msg [startIndex++];
        self->encodedValue[1] = msg [startIndex++];


        self->quality = (QualityDescriptor) msg [startIndex++];


        CP24Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}





static 
      _Bool

MeasuredValueScaledWithCP56Time2a_encode(int *data_flow, MeasuredValueScaledWithCP56Time2a self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                                  _Bool 
                                                                                                                                       isSequence)
{
    int size = isSequence ? 10 : (parameters->sizeOfIOA + 10);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    MeasuredValueNormalized_encode(data_flow, (MeasuredValueNormalized) self, frame, parameters, isSequence);


    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 7);

    return 
          1
              ;
}

struct sInformationObjectVFT measuredValueScaledWithCP56Time2aVFT = {
        (EncodeFunction) MeasuredValueScaledWithCP56Time2a_encode,
        (DestroyFunction) MeasuredValueScaledWithCP56Time2a_destroy
};

static void
MeasuredValueScaledWithCP56Time2a_initialize(int *data_flow, MeasuredValueScaledWithCP56Time2a self)
{
    self->virtualFunctionTable = &measuredValueScaledWithCP56Time2aVFT;
    self->type = M_ME_TE_1;
}

void
MeasuredValueScaledWithCP56Time2a_destroy(int *data_flow, MeasuredValueScaledWithCP56Time2a self)
{
    Memory_free(self);
}

MeasuredValueScaledWithCP56Time2a
MeasuredValueScaledWithCP56Time2a_create(int *data_flow, MeasuredValueScaledWithCP56Time2a self, int ioa,
        int value, QualityDescriptor quality, CP56Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
        self = (MeasuredValueScaledWithCP56Time2a) Memory_calloc(data_flow, 1, sizeof(struct sMeasuredValueScaledWithCP56Time2a));

    if (self != 
               ((void *)0)
                   ) {
        MeasuredValueScaledWithCP56Time2a_initialize(data_flow, self);

        self->objectAddress = ioa;
        setScaledValue(data_flow, self->encodedValue, value);
        self->quality = quality;
        self->timestamp = *timestamp;
    }

    return self;
}

CP56Time2a
MeasuredValueScaledWithCP56Time2a_getTimestamp(int *data_flow, MeasuredValueScaledWithCP56Time2a self)
{
    return &(self->timestamp);
}

void
MeasuredValueScaledWithCP56Time2a_setTimestamp(int *data_flow, MeasuredValueScaledWithCP56Time2a self,
        CP56Time2a value)
{
    int i;
    for (i = 0; i < 7; i++) {
        self->timestamp.encodedValue[i] = value->encodedValue[i];
    }
}


MeasuredValueScaledWithCP56Time2a
MeasuredValueScaledWithCP56Time2a_getFromBuffer(int *data_flow, MeasuredValueScaledWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if (self == 
               ((void *)0)
                   )
  self = (MeasuredValueScaledWithCP56Time2a) Memory_malloc(data_flow, sizeof(struct sMeasuredValueScaledWithCP56Time2a));

    if (self != 
               ((void *)0)
                   ) {
        MeasuredValueScaledWithCP56Time2a_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }


        self->encodedValue[0] = msg [startIndex++];
        self->encodedValue[1] = msg [startIndex++];


        self->quality = (QualityDescriptor) msg [startIndex++];


        CP56Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}





static 
      _Bool

MeasuredValueShort_encode(int *data_flow, MeasuredValueShort self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                    _Bool 
                                                                                                         isSequence)
{
    int size = isSequence ? 5 : (parameters->sizeOfIOA + 5);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    uint8_t* valueBytes = (uint8_t*) &(self->value);


    Frame_appendBytes(data_flow, frame, valueBytes, 4);







    Frame_setNextByte(data_flow, frame, (uint8_t) self->quality);

    return 
          1
              ;
}

struct sInformationObjectVFT measuredValueShortVFT = {
        (EncodeFunction) MeasuredValueShort_encode,
        (DestroyFunction) MeasuredValueShort_destroy
};

static void
MeasuredValueShort_initialize(int *data_flow, MeasuredValueShort self)
{
    self->virtualFunctionTable = &(measuredValueShortVFT);
    self->type = M_ME_NC_1;
}

void
MeasuredValueShort_destroy(int *data_flow, MeasuredValueShort self)
{
    Memory_free(self);
}

MeasuredValueShort
MeasuredValueShort_create(int *data_flow, MeasuredValueShort self, int ioa, float value, QualityDescriptor quality)
{
    if (self == 
               ((void *)0)
                   )
        self = (MeasuredValueShort) Memory_calloc(data_flow, 1, sizeof(struct sMeasuredValueShort));

    if (self != 
               ((void *)0)
                   ) {
        MeasuredValueShort_initialize(data_flow, self);

        self->objectAddress = ioa;
        self->value = value;
        self->quality = quality;
    }

    return self;
}

float
MeasuredValueShort_getValue(int *data_flow, MeasuredValueShort self)
{
    return self->value;
}

void
MeasuredValueShort_setValue(int *data_flow, MeasuredValueShort self, float value)
{
    self->value = value;
}

QualityDescriptor
MeasuredValueShort_getQuality(int *data_flow, MeasuredValueShort self)
{
    return self->quality;
}

MeasuredValueShort
MeasuredValueShort_getFromBuffer(int *data_flow, MeasuredValueShort self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if (self == 
               ((void *)0)
                   )
  self = (MeasuredValueShort) Memory_malloc(data_flow, sizeof(struct sMeasuredValueShort));

    if (self != 
               ((void *)0)
                   ) {
        MeasuredValueShort_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }

        uint8_t* valueBytes = (uint8_t*) &(self->value);


        valueBytes[0] = msg [startIndex++];
        valueBytes[1] = msg [startIndex++];
        valueBytes[2] = msg [startIndex++];
        valueBytes[3] = msg [startIndex++];
        self->quality = (QualityDescriptor) msg [startIndex++];
    }

    return self;
}





void
ParameterFloatValue_destroy(int *data_flow, ParameterFloatValue self)
{
    Memory_free(self);
}

ParameterFloatValue
ParameterFloatValue_create(int *data_flow, ParameterFloatValue self, int ioa, float value, QualifierOfParameterMV qpm)
{
    ParameterFloatValue pvf =
            MeasuredValueShort_create(data_flow, self, ioa, value, (QualityDescriptor) qpm);

    pvf->type = P_ME_NC_1;

    return pvf;
}

float
ParameterFloatValue_getValue(int *data_flow, ParameterFloatValue self)
{
    return self->value;
}

void
ParameterFloatValue_setValue(int *data_flow, ParameterFloatValue self, float value)
{
    self->value = value;
}

QualifierOfParameterMV
ParameterFloatValue_getQPM(int *data_flow, ParameterFloatValue self)
{
    return self->quality;
}

ParameterFloatValue
ParameterFloatValue_getFromBuffer(int *data_flow, ParameterFloatValue self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    ParameterFloatValue psv =
            MeasuredValueShort_getFromBuffer(data_flow, self, parameters, msg, msgSize, startIndex, 
                                                                                        0
                                                                                             );

    psv->type = P_ME_NC_1;

    return (ParameterFloatValue) psv;
}





static 
      _Bool

MeasuredValueShortWithCP24Time2a_encode(int *data_flow, MeasuredValueShortWithCP24Time2a self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                                _Bool 
                                                                                                                                     isSequence)
{
    int size = isSequence ? 8 : (parameters->sizeOfIOA + 8);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    MeasuredValueShort_encode(data_flow, (MeasuredValueShort) self, frame, parameters, isSequence);

    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 3);

    return 
          1
              ;
}

struct sInformationObjectVFT measuredValueShortWithCP24Time2aVFT = {
        (EncodeFunction) MeasuredValueShortWithCP24Time2a_encode,
        (DestroyFunction) MeasuredValueShortWithCP24Time2a_destroy
};

static void
MeasuredValueShortWithCP24Time2a_initialize(int *data_flow, MeasuredValueShortWithCP24Time2a self)
{
    self->virtualFunctionTable = &(measuredValueShortWithCP24Time2aVFT);
    self->type = M_ME_TC_1;
}

void
MeasuredValueShortWithCP24Time2a_destroy(int *data_flow, MeasuredValueShortWithCP24Time2a self)
{
    Memory_free(self);
}

MeasuredValueShortWithCP24Time2a
MeasuredValueShortWithCP24Time2a_create(int *data_flow, MeasuredValueShortWithCP24Time2a self, int ioa,
        float value, QualityDescriptor quality, CP24Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
        self = (MeasuredValueShortWithCP24Time2a) Memory_calloc(data_flow, 1, sizeof(struct sMeasuredValueShortWithCP24Time2a));

    if (self != 
               ((void *)0)
                   ) {
        MeasuredValueShortWithCP24Time2a_initialize(data_flow, self);

        self->objectAddress = ioa;
        self->value = value;
        self->quality = quality;
        self->timestamp = *timestamp;
    }

    return self;
}

CP24Time2a
MeasuredValueShortWithCP24Time2a_getTimestamp(int *data_flow, MeasuredValueShortWithCP24Time2a self)
{
    return &(self->timestamp);
}

void
MeasuredValueShortWithCP24Time2a_setTimestamp(int *data_flow, MeasuredValueShortWithCP24Time2a self,
        CP24Time2a value)
{
    int i;
    for (i = 0; i < 3; i++) {
        self->timestamp.encodedValue[i] = value->encodedValue[i];
    }
}

MeasuredValueShortWithCP24Time2a
MeasuredValueShortWithCP24Time2a_getFromBuffer(int *data_flow, MeasuredValueShortWithCP24Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if (self == 
               ((void *)0)
                   )
  self = (MeasuredValueShortWithCP24Time2a) Memory_malloc(data_flow, sizeof(struct sMeasuredValueShortWithCP24Time2a));

    if (self != 
               ((void *)0)
                   ) {
        MeasuredValueShortWithCP24Time2a_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }

        uint8_t* valueBytes = (uint8_t*) &(self->value);


        valueBytes[0] = msg [startIndex++];
        valueBytes[1] = msg [startIndex++];
        valueBytes[2] = msg [startIndex++];
        valueBytes[3] = msg [startIndex++];
        self->quality = (QualityDescriptor) msg [startIndex++];


        CP24Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}





static 
      _Bool

MeasuredValueShortWithCP56Time2a_encode(int *data_flow, MeasuredValueShortWithCP56Time2a self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                                _Bool 
                                                                                                                                     isSequence)
{
    int size = isSequence ? 12 : (parameters->sizeOfIOA + 12);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    MeasuredValueShort_encode(data_flow, (MeasuredValueShort) self, frame, parameters, isSequence);

    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 7);

    return 
          1
              ;
}

struct sInformationObjectVFT measuredValueShortWithCP56Time2aVFT = {
        (EncodeFunction) MeasuredValueShortWithCP56Time2a_encode,
        (DestroyFunction) MeasuredValueShortWithCP56Time2a_destroy
};

static void
MeasuredValueShortWithCP56Time2a_initialize(int *data_flow, MeasuredValueShortWithCP56Time2a self)
{
    self->virtualFunctionTable = &(measuredValueShortWithCP56Time2aVFT);
    self->type = M_ME_TF_1;
}

void
MeasuredValueShortWithCP56Time2a_destroy(int *data_flow, MeasuredValueShortWithCP56Time2a self)
{
    Memory_free(self);
}

MeasuredValueShortWithCP56Time2a
MeasuredValueShortWithCP56Time2a_create(int *data_flow, MeasuredValueShortWithCP56Time2a self, int ioa,
        float value, QualityDescriptor quality, CP56Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
        self = (MeasuredValueShortWithCP56Time2a) Memory_calloc(data_flow, 1, sizeof(struct sMeasuredValueShortWithCP56Time2a));

    if (self != 
               ((void *)0)
                   ) {
        MeasuredValueShortWithCP56Time2a_initialize(data_flow, self);

        self->objectAddress = ioa;
        self->value = value;
        self->quality = quality;
        self->timestamp = *timestamp;
    }

    return self;
}

CP56Time2a
MeasuredValueShortWithCP56Time2a_getTimestamp(int *data_flow, MeasuredValueShortWithCP56Time2a self)
{
    return &(self->timestamp);
}

void
MeasuredValueShortWithCP56Time2a_setTimestamp(int *data_flow, MeasuredValueShortWithCP56Time2a self,
        CP56Time2a value)
{
    int i;
    for (i = 0; i < 7; i++) {
        self->timestamp.encodedValue[i] = value->encodedValue[i];
    }
}

MeasuredValueShortWithCP56Time2a
MeasuredValueShortWithCP56Time2a_getFromBuffer(int *data_flow, MeasuredValueShortWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if (self == 
               ((void *)0)
                   )
  self = (MeasuredValueShortWithCP56Time2a) Memory_malloc(data_flow, sizeof(struct sMeasuredValueShortWithCP56Time2a));

    if (self != 
               ((void *)0)
                   ) {
        MeasuredValueShortWithCP56Time2a_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }

        uint8_t* valueBytes = (uint8_t*) &(self->value);


        valueBytes[0] = msg [startIndex++];
        valueBytes[1] = msg [startIndex++];
        valueBytes[2] = msg [startIndex++];
        valueBytes[3] = msg [startIndex++];
        self->quality = (QualityDescriptor) msg [startIndex++];


        CP56Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}






static 
      _Bool

IntegratedTotals_encode(int *data_flow, IntegratedTotals self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                _Bool 
                                                                                                     isSequence)
{
    int size = isSequence ? 5 : (parameters->sizeOfIOA + 5);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_appendBytes(data_flow, frame, self->totals.encodedValue, 5);

    return 
          1
              ;
}

struct sInformationObjectVFT integratedTotalsVFT = {
        (EncodeFunction) IntegratedTotals_encode,
        (DestroyFunction) IntegratedTotals_destroy
};

static void
IntegratedTotals_initialize(int *data_flow, IntegratedTotals self)
{
    self->virtualFunctionTable = &(integratedTotalsVFT);
    self->type = M_IT_NA_1;
}

void
IntegratedTotals_destroy(int *data_flow, IntegratedTotals self)
{
    Memory_free(self);
}

IntegratedTotals
IntegratedTotals_create(int *data_flow, IntegratedTotals self, int ioa, BinaryCounterReading value)
{
    if (self == 
               ((void *)0)
                   )
        self = (IntegratedTotals) Memory_calloc(data_flow, 1, sizeof(struct sIntegratedTotals));

    if (self != 
               ((void *)0)
                   ) {
        IntegratedTotals_initialize(data_flow, self);

        self->objectAddress = ioa;
        self->totals = *value;
    }

    return self;
}

BinaryCounterReading
IntegratedTotals_getBCR(int *data_flow, IntegratedTotals self)
{
    return &(self->totals);
}

void
IntegratedTotals_setBCR(int *data_flow, IntegratedTotals self, BinaryCounterReading value)
{
    int i;

    for (i = 0; i < 5; i++)
        self->totals.encodedValue[i] = value->encodedValue[i];
}

IntegratedTotals
IntegratedTotals_getFromBuffer(int *data_flow, IntegratedTotals self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if (self == 
               ((void *)0)
                   )
  self = (IntegratedTotals) Memory_malloc(data_flow, sizeof(struct sIntegratedTotals));

    if (self != 
               ((void *)0)
                   ) {
        IntegratedTotals_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }


        int i = 0;

        for (i = 0; i < 5; i++)
            self->totals.encodedValue[i] = msg [startIndex++];
    }

    return self;
}





static 
      _Bool

IntegratedTotalsWithCP24Time2a_encode(int *data_flow, IntegratedTotalsWithCP24Time2a self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                            _Bool 
                                                                                                                                 isSequence)
{
    int size = isSequence ? 8 : (parameters->sizeOfIOA + 8);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    IntegratedTotals_encode(data_flow, (IntegratedTotals) self, frame, parameters, isSequence);

    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 3);

    return 
          1
              ;
}

struct sInformationObjectVFT integratedTotalsWithCP24Time2aVFT = {
        (EncodeFunction) IntegratedTotalsWithCP24Time2a_encode,
        (DestroyFunction) IntegratedTotalsWithCP24Time2a_destroy
};

static void
IntegratedTotalsWithCP24Time2a_initialize(int *data_flow, IntegratedTotalsWithCP24Time2a self)
{
    self->virtualFunctionTable = &(integratedTotalsWithCP24Time2aVFT);
    self->type = M_IT_TA_1;
}

void
IntegratedTotalsWithCP24Time2a_destroy(int *data_flow, IntegratedTotalsWithCP24Time2a self)
{
    Memory_free(self);
}

IntegratedTotalsWithCP24Time2a
IntegratedTotalsWithCP24Time2a_create(int *data_flow, IntegratedTotalsWithCP24Time2a self, int ioa,
        BinaryCounterReading value, CP24Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
        self = (IntegratedTotalsWithCP24Time2a) Memory_calloc(data_flow, 1, sizeof(struct sIntegratedTotalsWithCP24Time2a));

    if (self != 
               ((void *)0)
                   ) {
        IntegratedTotalsWithCP24Time2a_initialize(data_flow, self);

        self->objectAddress = ioa;
        self->totals = *value;
        self->timestamp = *timestamp;
    }

    return self;
}


CP24Time2a
IntegratedTotalsWithCP24Time2a_getTimestamp(int *data_flow, IntegratedTotalsWithCP24Time2a self)
{
    return &(self->timestamp);
}

void
IntegratedTotalsWithCP24Time2a_setTimestamp(int *data_flow, IntegratedTotalsWithCP24Time2a self,
        CP24Time2a value)
{
    int i;
    for (i = 0; i < 3; i++) {
        self->timestamp.encodedValue[i] = value->encodedValue[i];
    }
}


IntegratedTotalsWithCP24Time2a
IntegratedTotalsWithCP24Time2a_getFromBuffer(int *data_flow, IntegratedTotalsWithCP24Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if (self == 
               ((void *)0)
                   )
  self = (IntegratedTotalsWithCP24Time2a) Memory_malloc(data_flow, sizeof(struct sIntegratedTotalsWithCP24Time2a));

    if (self != 
               ((void *)0)
                   ) {
        IntegratedTotalsWithCP24Time2a_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }


        int i = 0;

        for (i = 0; i < 5; i++)
            self->totals.encodedValue[i] = msg [startIndex++];


        CP24Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}






static 
      _Bool

IntegratedTotalsWithCP56Time2a_encode(int *data_flow, IntegratedTotalsWithCP56Time2a self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                            _Bool 
                                                                                                                                 isSequence)
{
    int size = isSequence ? 12 : (parameters->sizeOfIOA + 12);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    IntegratedTotals_encode(data_flow, (IntegratedTotals) self, frame, parameters, isSequence);

    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 7);

    return 
          1
              ;
}

struct sInformationObjectVFT integratedTotalsWithCP56Time2aVFT = {
        (EncodeFunction) IntegratedTotalsWithCP56Time2a_encode,
        (DestroyFunction) IntegratedTotalsWithCP56Time2a_destroy
};

static void
IntegratedTotalsWithCP56Time2a_initialize(int *data_flow, IntegratedTotalsWithCP56Time2a self)
{
    self->virtualFunctionTable = &(integratedTotalsWithCP56Time2aVFT);
    self->type = M_IT_TB_1;
}

void
IntegratedTotalsWithCP56Time2a_destroy(int *data_flow, IntegratedTotalsWithCP56Time2a self)
{
    Memory_free(self);
}

IntegratedTotalsWithCP56Time2a
IntegratedTotalsWithCP56Time2a_create(int *data_flow, IntegratedTotalsWithCP56Time2a self, int ioa,
        BinaryCounterReading value, CP56Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
        self = (IntegratedTotalsWithCP56Time2a) Memory_calloc(data_flow, 1, sizeof(struct sIntegratedTotalsWithCP56Time2a));

    if (self != 
               ((void *)0)
                   ) {
        IntegratedTotalsWithCP56Time2a_initialize(data_flow, self);

        self->objectAddress = ioa;
        self->totals = *value;
        self->timestamp = *timestamp;
    }

    return self;
}

CP56Time2a
IntegratedTotalsWithCP56Time2a_getTimestamp(int *data_flow, IntegratedTotalsWithCP56Time2a self)
{
    return &(self->timestamp);
}

void
IntegratedTotalsWithCP56Time2a_setTimestamp(int *data_flow, IntegratedTotalsWithCP56Time2a self,
        CP56Time2a value)
{
    int i;
    for (i = 0; i < 7; i++) {
        self->timestamp.encodedValue[i] = value->encodedValue[i];
    }
}


IntegratedTotalsWithCP56Time2a
IntegratedTotalsWithCP56Time2a_getFromBuffer(int *data_flow, IntegratedTotalsWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if (self == 
               ((void *)0)
                   )
  self = (IntegratedTotalsWithCP56Time2a) Memory_malloc(data_flow, sizeof(struct sIntegratedTotalsWithCP56Time2a));

    if (self != 
               ((void *)0)
                   ) {
        IntegratedTotalsWithCP56Time2a_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }


        int i = 0;

        for (i = 0; i < 5; i++)
            self->totals.encodedValue[i] = msg [startIndex++];


        CP56Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}






static 
      _Bool

EventOfProtectionEquipment_encode(int *data_flow, EventOfProtectionEquipment self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                    _Bool 
                                                                                                                         isSequence)
{
    int size = isSequence ? 6 : (parameters->sizeOfIOA + 6);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_setNextByte(data_flow, frame, (uint8_t) self->event);

    Frame_appendBytes(data_flow, frame, self->elapsedTime.encodedValue, 2);

    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 3);

    return 
          1
              ;
}

struct sInformationObjectVFT eventOfProtectionEquipmentVFT = {
        (EncodeFunction) EventOfProtectionEquipment_encode,
        (DestroyFunction) EventOfProtectionEquipment_destroy
};

static void
EventOfProtectionEquipment_initialize(int *data_flow, EventOfProtectionEquipment self)
{
    self->virtualFunctionTable = &(eventOfProtectionEquipmentVFT);
    self->type = M_EP_TA_1;
}

void
EventOfProtectionEquipment_destroy(int *data_flow, EventOfProtectionEquipment self)
{
    Memory_free(self);
}

EventOfProtectionEquipment
EventOfProtectionEquipment_create(int *data_flow, EventOfProtectionEquipment self, int ioa,
        SingleEvent event, CP16Time2a elapsedTime, CP24Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
        self = (EventOfProtectionEquipment) Memory_calloc(data_flow, 1, sizeof(struct sEventOfProtectionEquipment));

    if (self != 
               ((void *)0)
                   ) {
        EventOfProtectionEquipment_initialize(data_flow, self);

        self->objectAddress = ioa;
        self->event = *event;
        self->elapsedTime = *elapsedTime;
        self->timestamp = *timestamp;
    }

    return self;
}

EventOfProtectionEquipment
EventOfProtectionEquipment_getFromBuffer(int *data_flow, EventOfProtectionEquipment self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA + 6))
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
        self = (EventOfProtectionEquipment) Memory_malloc(data_flow, sizeof(struct sEventOfProtectionEquipment));

    if (self != 
               ((void *)0)
                   ) {
        EventOfProtectionEquipment_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }


        self->event = msg[startIndex++];


        CP16Time2a_getFromBuffer(data_flow, &(self->elapsedTime), msg, msgSize, startIndex);
        startIndex += 2;


        CP24Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}


SingleEvent
EventOfProtectionEquipment_getEvent(int *data_flow, EventOfProtectionEquipment self)
{
    return &(self->event);
}

CP16Time2a
EventOfProtectionEquipment_getElapsedTime(int *data_flow, EventOfProtectionEquipment self)
{
    return &(self->elapsedTime);
}

CP24Time2a
EventOfProtectionEquipment_getTimestamp(int *data_flow, EventOfProtectionEquipment self)
{
    return &(self->timestamp);
}





static 
      _Bool

EventOfProtectionEquipmentWithCP56Time2a_encode(int *data_flow, EventOfProtectionEquipmentWithCP56Time2a self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                                                _Bool 
                                                                                                                                                     isSequence)
{
    int size = isSequence ? 10 : (parameters->sizeOfIOA + 10);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_setNextByte(data_flow, frame, (uint8_t) self->event);

    Frame_appendBytes(data_flow, frame, self->elapsedTime.encodedValue, 2);

    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 7);

    return 
          1
              ;
}

struct sInformationObjectVFT eventOfProtectionEquipmentWithCP56Time2aVFT = {
        (EncodeFunction) EventOfProtectionEquipmentWithCP56Time2a_encode,
        (DestroyFunction) EventOfProtectionEquipmentWithCP56Time2a_destroy
};

static void
EventOfProtectionEquipmentWithCP56Time2a_initialize(int *data_flow, EventOfProtectionEquipmentWithCP56Time2a self)
{
    self->virtualFunctionTable = &(eventOfProtectionEquipmentWithCP56Time2aVFT);
    self->type = M_EP_TD_1;
}

void
EventOfProtectionEquipmentWithCP56Time2a_destroy(int *data_flow, EventOfProtectionEquipmentWithCP56Time2a self)
{
    Memory_free(self);
}

EventOfProtectionEquipmentWithCP56Time2a
EventOfProtectionEquipmentWithCP56Time2a_create(int *data_flow, EventOfProtectionEquipmentWithCP56Time2a self, int ioa,
        SingleEvent event, CP16Time2a elapsedTime, CP56Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
        self = (EventOfProtectionEquipmentWithCP56Time2a) Memory_calloc(data_flow, 1, sizeof(struct sEventOfProtectionEquipmentWithCP56Time2a));

    if (self != 
               ((void *)0)
                   ) {
        EventOfProtectionEquipmentWithCP56Time2a_initialize(data_flow, self);

        self->objectAddress = ioa;
        self->event = *event;
        self->elapsedTime = *elapsedTime;
        self->timestamp = *timestamp;
    }

    return self;
}

SingleEvent
EventOfProtectionEquipmentWithCP56Time2a_getEvent(int *data_flow, EventOfProtectionEquipmentWithCP56Time2a self)
{
    return &(self->event);
}

CP16Time2a
EventOfProtectionEquipmentWithCP56Time2a_getElapsedTime(int *data_flow, EventOfProtectionEquipmentWithCP56Time2a self)
{
    return &(self->elapsedTime);
}

CP56Time2a
EventOfProtectionEquipmentWithCP56Time2a_getTimestamp(int *data_flow, EventOfProtectionEquipmentWithCP56Time2a self)
{
    return &(self->timestamp);
}

EventOfProtectionEquipmentWithCP56Time2a
EventOfProtectionEquipmentWithCP56Time2a_getFromBuffer(int *data_flow, EventOfProtectionEquipmentWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA + 10))
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
        self = (EventOfProtectionEquipmentWithCP56Time2a) Memory_malloc(data_flow, sizeof(struct sEventOfProtectionEquipmentWithCP56Time2a));

    if (self != 
               ((void *)0)
                   ) {
        EventOfProtectionEquipmentWithCP56Time2a_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }


        self->event = msg[startIndex++];


        CP16Time2a_getFromBuffer(data_flow, &(self->elapsedTime), msg, msgSize, startIndex);
        startIndex += 2;


        CP56Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}





static 
      _Bool

PackedStartEventsOfProtectionEquipment_encode(int *data_flow, PackedStartEventsOfProtectionEquipment self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                                            _Bool 
                                                                                                                                                 isSequence)
{
    int size = isSequence ? 7 : (parameters->sizeOfIOA + 7);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_setNextByte(data_flow, frame, (uint8_t) self->event);

    Frame_setNextByte(data_flow, frame, (uint8_t) self->qdp);

    Frame_appendBytes(data_flow, frame, self->elapsedTime.encodedValue, 2);

    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 3);

    return 
          1
              ;
}

struct sInformationObjectVFT packedStartEventsOfProtectionEquipmentVFT = {
        (EncodeFunction) PackedStartEventsOfProtectionEquipment_encode,
        (DestroyFunction) PackedStartEventsOfProtectionEquipment_destroy
};

static void
PackedStartEventsOfProtectionEquipment_initialize(int *data_flow, PackedStartEventsOfProtectionEquipment self)
{
    self->virtualFunctionTable = &(packedStartEventsOfProtectionEquipmentVFT);
    self->type = M_EP_TB_1;
}

void
PackedStartEventsOfProtectionEquipment_destroy(int *data_flow, PackedStartEventsOfProtectionEquipment self)
{
    Memory_free(self);
}

PackedStartEventsOfProtectionEquipment
PackedStartEventsOfProtectionEquipment_create(int *data_flow, PackedStartEventsOfProtectionEquipment self, int ioa,
        StartEvent event, QualityDescriptorP qdp, CP16Time2a elapsedTime, CP24Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
        self = (PackedStartEventsOfProtectionEquipment) Memory_calloc(data_flow, 1, sizeof(struct sPackedStartEventsOfProtectionEquipment));

    if (self != 
               ((void *)0)
                   ) {
        PackedStartEventsOfProtectionEquipment_initialize(data_flow, self);

        self->objectAddress = ioa;
        self->event = event;
        self->qdp = qdp;
        self->elapsedTime = *elapsedTime;
        self->timestamp = *timestamp;
    }

    return self;
}

StartEvent
PackedStartEventsOfProtectionEquipment_getEvent(int *data_flow, PackedStartEventsOfProtectionEquipment self)
{
    return self->event;
}

QualityDescriptorP
PackedStartEventsOfProtectionEquipment_getQuality(int *data_flow, PackedStartEventsOfProtectionEquipment self)
{
    return self->qdp;
}

CP16Time2a
PackedStartEventsOfProtectionEquipment_getElapsedTime(int *data_flow, PackedStartEventsOfProtectionEquipment self)
{
    return &(self->elapsedTime);
}

CP24Time2a
PackedStartEventsOfProtectionEquipment_getTimestamp(int *data_flow, PackedStartEventsOfProtectionEquipment self)
{
    return &(self->timestamp);
}

PackedStartEventsOfProtectionEquipment
PackedStartEventsOfProtectionEquipment_getFromBuffer(int *data_flow, PackedStartEventsOfProtectionEquipment self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA + 7))
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
        self = (PackedStartEventsOfProtectionEquipment) Memory_malloc(data_flow, sizeof(struct sPackedStartEventsOfProtectionEquipment));

    if (self != 
               ((void *)0)
                   ) {
        PackedStartEventsOfProtectionEquipment_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }


        self->event = msg[startIndex++];


        self->qdp = msg[startIndex++];


        CP16Time2a_getFromBuffer(data_flow, &(self->elapsedTime), msg, msgSize, startIndex);
        startIndex += 2;


        CP24Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}





static 
      _Bool

PackedStartEventsOfProtectionEquipmentWithCP56Time2a_encode(int *data_flow, PackedStartEventsOfProtectionEquipmentWithCP56Time2a self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                                                                        _Bool 
                                                                                                                                                                             isSequence)
{
    int size = isSequence ? 11 : (parameters->sizeOfIOA + 11);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_setNextByte(data_flow, frame, (uint8_t) self->event);

    Frame_setNextByte(data_flow, frame, (uint8_t) self->qdp);

    Frame_appendBytes(data_flow, frame, self->elapsedTime.encodedValue, 2);

    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 7);

    return 
          1
              ;
}

struct sInformationObjectVFT packedStartEventsOfProtectionEquipmentWithCP56Time2aVFT = {
        (EncodeFunction) PackedStartEventsOfProtectionEquipmentWithCP56Time2a_encode,
        (DestroyFunction) PackedStartEventsOfProtectionEquipmentWithCP56Time2a_destroy
};

static void
PackedStartEventsOfProtectionEquipmentWithCP56Time2a_initialize(int *data_flow, PackedStartEventsOfProtectionEquipmentWithCP56Time2a self)
{
    self->virtualFunctionTable = &(packedStartEventsOfProtectionEquipmentWithCP56Time2aVFT);
    self->type = M_EP_TE_1;
}

void
PackedStartEventsOfProtectionEquipmentWithCP56Time2a_destroy(int *data_flow, PackedStartEventsOfProtectionEquipmentWithCP56Time2a self)
{
    Memory_free(self);
}

PackedStartEventsOfProtectionEquipmentWithCP56Time2a
PackedStartEventsOfProtectionEquipmentWithCP56Time2a_create(int *data_flow, PackedStartEventsOfProtectionEquipmentWithCP56Time2a self, int ioa,
        StartEvent event, QualityDescriptorP qdp, CP16Time2a elapsedTime, CP56Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
        self = (PackedStartEventsOfProtectionEquipmentWithCP56Time2a) Memory_calloc(data_flow, 1, sizeof(struct sPackedStartEventsOfProtectionEquipmentWithCP56Time2a));

    if (self != 
               ((void *)0)
                   ) {
        PackedStartEventsOfProtectionEquipmentWithCP56Time2a_initialize(data_flow, self);

        self->objectAddress = ioa;
        self->event = event;
        self->qdp = qdp;
        self->elapsedTime = *elapsedTime;
        self->timestamp = *timestamp;
    }

    return self;
}

StartEvent
PackedStartEventsOfProtectionEquipmentWithCP56Time2a_getEvent(int *data_flow, PackedStartEventsOfProtectionEquipmentWithCP56Time2a self)
{
    return self->event;
}

QualityDescriptorP
PackedStartEventsOfProtectionEquipmentWithCP56Time2a_getQuality(int *data_flow, PackedStartEventsOfProtectionEquipmentWithCP56Time2a self)
{
    return self->qdp;
}

CP16Time2a
PackedStartEventsOfProtectionEquipmentWithCP56Time2a_getElapsedTime(int *data_flow, PackedStartEventsOfProtectionEquipmentWithCP56Time2a self)
{
    return &(self->elapsedTime);
}

CP56Time2a
PackedStartEventsOfProtectionEquipmentWithCP56Time2a_getTimestamp(int *data_flow, PackedStartEventsOfProtectionEquipmentWithCP56Time2a self)
{
    return &(self->timestamp);
}

PackedStartEventsOfProtectionEquipmentWithCP56Time2a
PackedStartEventsOfProtectionEquipmentWithCP56Time2a_getFromBuffer(int *data_flow, PackedStartEventsOfProtectionEquipmentWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA + 7))
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
        self = (PackedStartEventsOfProtectionEquipmentWithCP56Time2a) Memory_malloc(data_flow, sizeof(struct sPackedStartEventsOfProtectionEquipmentWithCP56Time2a));

    if (self != 
               ((void *)0)
                   ) {
        PackedStartEventsOfProtectionEquipmentWithCP56Time2a_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }


        self->event = msg[startIndex++];


        self->qdp = msg[startIndex++];


        CP16Time2a_getFromBuffer(data_flow, &(self->elapsedTime), msg, msgSize, startIndex);
        startIndex += 2;


        CP56Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}






static 
      _Bool

PacketOutputCircuitInfo_encode(int *data_flow, PackedOutputCircuitInfo self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                              _Bool 
                                                                                                                   isSequence)
{
    int size = isSequence ? 7 : (parameters->sizeOfIOA + 7);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_setNextByte(data_flow, frame, (uint8_t) self->oci);

    Frame_setNextByte(data_flow, frame, (uint8_t) self->qdp);

    Frame_appendBytes(data_flow, frame, self->operatingTime.encodedValue, 2);

    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 3);

    return 
          1
              ;
}

struct sInformationObjectVFT packedOutputCircuitInfoVFT = {
        (EncodeFunction) PacketOutputCircuitInfo_encode,
        (DestroyFunction) PackedOutputCircuitInfo_destroy
};

static void
PacketOutputCircuitInfo_initialize(int *data_flow, PackedOutputCircuitInfo self)
{
    self->virtualFunctionTable = &(packedOutputCircuitInfoVFT);
    self->type = M_EP_TC_1;
}

void
PackedOutputCircuitInfo_destroy(int *data_flow, PackedOutputCircuitInfo self)
{
    Memory_free(self);
}

PackedOutputCircuitInfo
PackedOutputCircuitInfo_create(int *data_flow, PackedOutputCircuitInfo self, int ioa,
        OutputCircuitInfo oci, QualityDescriptorP qdp, CP16Time2a operatingTime, CP24Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
        self = (PackedOutputCircuitInfo) Memory_calloc(data_flow, 1, sizeof(struct sPackedOutputCircuitInfo));

    if (self) {
        PacketOutputCircuitInfo_initialize(data_flow, self);

        self->objectAddress = ioa;
        self->oci = oci;
        self->qdp = qdp;
        self->operatingTime = *operatingTime;
        self->timestamp = *timestamp;
    }

    return self;
}

OutputCircuitInfo
PackedOutputCircuitInfo_getOCI(int *data_flow, PackedOutputCircuitInfo self)
{
    return self->oci;
}

QualityDescriptorP
PackedOutputCircuitInfo_getQuality(int *data_flow, PackedOutputCircuitInfo self)
{
    return self->qdp;
}

CP16Time2a
PackedOutputCircuitInfo_getOperatingTime(int *data_flow, PackedOutputCircuitInfo self)
{
    return &(self->operatingTime);
}

CP24Time2a
PackedOutputCircuitInfo_getTimestamp(int *data_flow, PackedOutputCircuitInfo self)
{
    return &(self->timestamp);
}

PackedOutputCircuitInfo
PackedOutputCircuitInfo_getFromBuffer(int *data_flow, PackedOutputCircuitInfo self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA + 7))
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
        self = (PackedOutputCircuitInfo) Memory_malloc(data_flow, sizeof(struct sPackedOutputCircuitInfo));

    if (self != 
               ((void *)0)
                   ) {
        PacketOutputCircuitInfo_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }


        self->oci = msg[startIndex++];


        self->qdp = msg[startIndex++];


        CP16Time2a_getFromBuffer(data_flow, &(self->operatingTime), msg, msgSize, startIndex);
        startIndex += 2;


        CP24Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}





static 
      _Bool

PackedOutputCircuitInfoWithCP56Time2a_encode(int *data_flow, PackedOutputCircuitInfoWithCP56Time2a self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                                          _Bool 
                                                                                                                                               isSequence)
{
    int size = isSequence ? 11 : (parameters->sizeOfIOA + 11);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_setNextByte(data_flow, frame, (uint8_t) self->oci);

    Frame_setNextByte(data_flow, frame, (uint8_t) self->qdp);

    Frame_appendBytes(data_flow, frame, self->operatingTime.encodedValue, 2);

    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 7);

    return 
          1
              ;
}

struct sInformationObjectVFT packedOutputCircuitInfoWithCP56Time2aVFT = {
        (EncodeFunction) PackedOutputCircuitInfoWithCP56Time2a_encode,
        (DestroyFunction) PackedOutputCircuitInfoWithCP56Time2a_destroy
};

static void
PackedOutputCircuitInfoWithCP56Time2a_initialize(int *data_flow, PackedOutputCircuitInfoWithCP56Time2a self)
{
    self->virtualFunctionTable = &(packedOutputCircuitInfoWithCP56Time2aVFT);
    self->type = M_EP_TF_1;
}

void
PackedOutputCircuitInfoWithCP56Time2a_destroy(int *data_flow, PackedOutputCircuitInfoWithCP56Time2a self)
{
    Memory_free(self);
}

PackedOutputCircuitInfoWithCP56Time2a
PackedOutputCircuitInfoWithCP56Time2a_create(int *data_flow, PackedOutputCircuitInfoWithCP56Time2a self, int ioa,
        OutputCircuitInfo oci, QualityDescriptorP qdp, CP16Time2a operatingTime, CP56Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
        self = (PackedOutputCircuitInfoWithCP56Time2a) Memory_calloc(data_flow, 1, sizeof(struct sPackedOutputCircuitInfoWithCP56Time2a));

    if (self) {
        PackedOutputCircuitInfoWithCP56Time2a_initialize(data_flow, self);

        self->objectAddress = ioa;
        self->oci = oci;
        self->qdp = qdp;
        self->operatingTime = *operatingTime;
        self->timestamp = *timestamp;
    }

    return self;
}

OutputCircuitInfo
PackedOutputCircuitInfoWithCP56Time2a_getOCI(int *data_flow, PackedOutputCircuitInfoWithCP56Time2a self)
{
    return self->oci;
}

QualityDescriptorP
PackedOutputCircuitInfoWithCP56Time2a_getQuality(int *data_flow, PackedOutputCircuitInfoWithCP56Time2a self)
{
    return self->qdp;
}

CP16Time2a
PackedOutputCircuitInfoWithCP56Time2a_getOperatingTime(int *data_flow, PackedOutputCircuitInfoWithCP56Time2a self)
{
    return &(self->operatingTime);
}

CP56Time2a
PackedOutputCircuitInfoWithCP56Time2a_getTimestamp(int *data_flow, PackedOutputCircuitInfoWithCP56Time2a self)
{
    return &(self->timestamp);
}

PackedOutputCircuitInfoWithCP56Time2a
PackedOutputCircuitInfoWithCP56Time2a_getFromBuffer(int *data_flow, PackedOutputCircuitInfoWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA + 7))
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
        self = (PackedOutputCircuitInfoWithCP56Time2a) Memory_malloc(data_flow, sizeof(struct sPackedOutputCircuitInfoWithCP56Time2a));

    if (self != 
               ((void *)0)
                   ) {
        PackedOutputCircuitInfoWithCP56Time2a_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }


        self->oci = msg[startIndex++];


        self->qdp = msg[startIndex++];


        CP16Time2a_getFromBuffer(data_flow, &(self->operatingTime), msg, msgSize, startIndex);
        startIndex += 2;


        CP56Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}






static 
      _Bool

PackedSinglePointWithSCD_encode(int *data_flow, PackedSinglePointWithSCD self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                _Bool 
                                                                                                                     isSequence)
{
    int size = isSequence ? 5 : (parameters->sizeOfIOA + 5);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_appendBytes(data_flow, frame, self->scd.encodedValue, 4);

    Frame_setNextByte(data_flow, frame, (uint8_t) self->qds);

    return 
          1
              ;
}

struct sInformationObjectVFT packedSinglePointWithSCDVFT = {
        (EncodeFunction) PackedSinglePointWithSCD_encode,
        (DestroyFunction) PackedSinglePointWithSCD_destroy
};

static void
PackedSinglePointWithSCD_initialize(int *data_flow, PackedSinglePointWithSCD self)
{
    self->virtualFunctionTable = &(packedSinglePointWithSCDVFT);
    self->type = M_PS_NA_1;
}

void
PackedSinglePointWithSCD_destroy(int *data_flow, PackedSinglePointWithSCD self)
{
    Memory_free(self);
}

PackedSinglePointWithSCD
PackedSinglePointWithSCD_create(int *data_flow, PackedSinglePointWithSCD self, int ioa,
        StatusAndStatusChangeDetection scd, QualityDescriptor qds)
{
    if (self == 
               ((void *)0)
                   )
        self = (PackedSinglePointWithSCD) Memory_calloc(data_flow, 1, sizeof(struct sPackedSinglePointWithSCD));

    if (self) {
        PackedSinglePointWithSCD_initialize(data_flow, self);

        self->objectAddress = ioa;
        self->scd = *scd;
        self->qds = qds;
    }

    return self;
}

QualityDescriptor
PackedSinglePointWithSCD_getQuality(int *data_flow, PackedSinglePointWithSCD self)
{
    return self->qds;
}

StatusAndStatusChangeDetection
PackedSinglePointWithSCD_getSCD(int *data_flow, PackedSinglePointWithSCD self)
{
    return &(self->scd);
}

PackedSinglePointWithSCD
PackedSinglePointWithSCD_getFromBuffer(int *data_flow, PackedSinglePointWithSCD self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA + 5))
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
        self = (PackedSinglePointWithSCD) Memory_malloc(data_flow, sizeof(struct sPackedSinglePointWithSCD));

    if (self != 
               ((void *)0)
                   ) {
        PackedSinglePointWithSCD_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }


        self->scd.encodedValue[0] = msg[startIndex++];
        self->scd.encodedValue[1] = msg[startIndex++];
        self->scd.encodedValue[2] = msg[startIndex++];
        self->scd.encodedValue[3] = msg[startIndex++];


        self->qds = msg[startIndex];
    }

    return self;
}






static 
      _Bool

SingleCommand_encode(int *data_flow, SingleCommand self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                          _Bool 
                                                                                               isSequence)
{
    int size = isSequence ? 1 : (parameters->sizeOfIOA + 1);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_setNextByte(data_flow, frame, self->sco);

    return 
          1
              ;
}

struct sInformationObjectVFT singleCommandVFT = {
        (EncodeFunction) SingleCommand_encode,
        (DestroyFunction) SingleCommand_destroy
};

static void
SingleCommand_initialize(int *data_flow, SingleCommand self)
{
    self->virtualFunctionTable = &(singleCommandVFT);
    self->type = C_SC_NA_1;
}

void
SingleCommand_destroy(int *data_flow, SingleCommand self)
{
    Memory_free(self);
}

SingleCommand
SingleCommand_create(int *data_flow, SingleCommand self, int ioa, 
                                                 _Bool 
                                                      command, 
                                                               _Bool 
                                                                    selectCommand, int qu)
{
    if (self == 
               ((void *)0)
                   )
  self = (SingleCommand) Memory_malloc(data_flow, sizeof(struct sSingleCommand));

    if (self) {
        SingleCommand_initialize(data_flow, self);

        self->objectAddress = ioa;

        uint8_t sco = ((qu & 0x1f) * 4);

        if (command) sco |= 0x01;

        if (selectCommand) sco |= 0x80;

        self->sco = sco;
    }

    return self;
}

int
SingleCommand_getQU(int *data_flow, SingleCommand self)
{
    return ((self->sco & 0x7c) / 4);
}


_Bool

SingleCommand_getState(int *data_flow, SingleCommand self)
{
    return ((self->sco & 0x01) == 0x01);
}


_Bool

SingleCommand_isSelect(int *data_flow, SingleCommand self)
{
    return ((self->sco & 0x80) == 0x80);
}

SingleCommand
SingleCommand_getFromBuffer(int *data_flow, SingleCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA + 1))
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
  self = (SingleCommand) Memory_malloc(data_flow, sizeof(struct sSingleCommand));

    if (self != 
               ((void *)0)
                   ) {
        SingleCommand_initialize(data_flow, self);

        InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

        startIndex += parameters->sizeOfIOA;


        self->sco = msg[startIndex];
    }

    return self;
}






static 
      _Bool

SingleCommandWithCP56Time2a_encode(int *data_flow, SingleCommandWithCP56Time2a self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                      _Bool 
                                                                                                                           isSequence)
{
    int size = isSequence ? 8 : (parameters->sizeOfIOA + 8);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    SingleCommand_encode(data_flow, (SingleCommand) self, frame, parameters, isSequence);

    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 7);

    return 
          1
              ;
}

struct sInformationObjectVFT singleCommandWithCP56Time2aVFT = {
        (EncodeFunction) SingleCommandWithCP56Time2a_encode,
        (DestroyFunction) SingleCommandWithCP56Time2a_destroy
};

static void
SingleCommandWithCP56Time2a_initialize(int *data_flow, SingleCommandWithCP56Time2a self)
{
    self->virtualFunctionTable = &(singleCommandWithCP56Time2aVFT);
    self->type = C_SC_TA_1;
}

void
SingleCommandWithCP56Time2a_destroy(int *data_flow, SingleCommandWithCP56Time2a self)
{
    Memory_free(self);
}

SingleCommandWithCP56Time2a
SingleCommandWithCP56Time2a_create(int *data_flow, SingleCommandWithCP56Time2a self, int ioa, 
                                                                             _Bool 
                                                                                  command, 
                                                                                           _Bool 
                                                                                                selectCommand, int qu, CP56Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
  self = (SingleCommandWithCP56Time2a) Memory_malloc(data_flow, sizeof(struct sSingleCommandWithCP56Time2a));

    if (self) {
        SingleCommandWithCP56Time2a_initialize(data_flow, self);

        self->objectAddress = ioa;

        uint8_t sco = ((qu & 0x1f) * 4);

        if (command) sco |= 0x01;

        if (selectCommand) sco |= 0x80;

        self->sco = sco;

        self->timestamp = *timestamp;
    }

    return self;
}

CP56Time2a
SingleCommandWithCP56Time2a_getTimestamp(int *data_flow, SingleCommandWithCP56Time2a self)
{
    return &(self->timestamp);
}

SingleCommandWithCP56Time2a
SingleCommandWithCP56Time2a_getFromBuffer(int *data_flow, SingleCommandWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA + 1))
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
  self = (SingleCommandWithCP56Time2a) Memory_malloc(data_flow, sizeof(struct sSingleCommandWithCP56Time2a));

    if (self != 
               ((void *)0)
                   ) {
        SingleCommandWithCP56Time2a_initialize(data_flow, self);

        InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

        startIndex += parameters->sizeOfIOA;


        self->sco = msg[startIndex++];


        CP56Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}






static 
      _Bool

DoubleCommand_encode(int *data_flow, DoubleCommand self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                          _Bool 
                                                                                               isSequence)
{
    int size = isSequence ? 1 : (parameters->sizeOfIOA + 1);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_setNextByte(data_flow, frame, self->dcq);

    return 
          1
              ;
}

struct sInformationObjectVFT doubleCommandVFT = {
        (EncodeFunction) DoubleCommand_encode,
        (DestroyFunction) DoubleCommand_destroy
};

static void
DoubleCommand_initialize(int *data_flow, DoubleCommand self)
{
    self->virtualFunctionTable = &(doubleCommandVFT);
    self->type = C_DC_NA_1;
}

void
DoubleCommand_destroy(int *data_flow, DoubleCommand self)
{
    Memory_free(self);
}

DoubleCommand
DoubleCommand_create(int *data_flow, DoubleCommand self, int ioa, int command, 
                                                              _Bool 
                                                                   selectCommand, int qu)
{
    if (self == 
               ((void *)0)
                   )
  self = (DoubleCommand) Memory_malloc(data_flow, sizeof(struct sDoubleCommand));

    if (self) {
        DoubleCommand_initialize(data_flow, self);

        self->objectAddress = ioa;

        uint8_t dcq = ((qu & 0x1f) * 4);

        dcq += (uint8_t) (command & 0x03);

        if (selectCommand) dcq |= 0x80;

        self->dcq = dcq;
    }

    return self;
}

int
DoubleCommand_getQU(int *data_flow, DoubleCommand self)
{
    return ((self->dcq & 0x7c) / 4);
}

int
DoubleCommand_getState(int *data_flow, DoubleCommand self)
{
    return (self->dcq & 0x03);
}


_Bool

DoubleCommand_isSelect(int *data_flow, DoubleCommand self)
{
    return ((self->dcq & 0x80) == 0x80);
}

DoubleCommand
DoubleCommand_getFromBuffer(int *data_flow, DoubleCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA + 1))
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
  self = (DoubleCommand) Memory_malloc(data_flow, sizeof(struct sDoubleCommand));

    if (self != 
               ((void *)0)
                   ) {
        DoubleCommand_initialize(data_flow, self);

        InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

        startIndex += parameters->sizeOfIOA;


        self->dcq = msg[startIndex];
    }

    return self;
}






static 
      _Bool

DoubleCommandWithCP56Time2a_encode(int *data_flow, DoubleCommandWithCP56Time2a self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                      _Bool 
                                                                                                                           isSequence)
{
    int size = isSequence ? 8 : (parameters->sizeOfIOA + 8);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    DoubleCommand_encode(data_flow, (DoubleCommand) self, frame, parameters, isSequence);

    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 7);

    return 
          1
              ;
}

struct sInformationObjectVFT doubleCommandWithCP56Time2aVFT = {
        (EncodeFunction) DoubleCommandWithCP56Time2a_encode,
        (DestroyFunction) DoubleCommandWithCP56Time2a_destroy
};

static void
DoubleCommandWithCP56Time2a_initialize(int *data_flow, DoubleCommandWithCP56Time2a self)
{
    self->virtualFunctionTable = &(doubleCommandWithCP56Time2aVFT);
    self->type = C_DC_TA_1;
}

void
DoubleCommandWithCP56Time2a_destroy(int *data_flow, DoubleCommandWithCP56Time2a self)
{
    Memory_free(self);
}

DoubleCommandWithCP56Time2a
DoubleCommandWithCP56Time2a_create(int *data_flow, DoubleCommandWithCP56Time2a self, int ioa, int command, 
                                                                                          _Bool 
                                                                                               selectCommand, int qu, CP56Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
        self = (DoubleCommandWithCP56Time2a) Memory_malloc(data_flow, sizeof(struct sDoubleCommandWithCP56Time2a));

    if (self) {
        DoubleCommandWithCP56Time2a_initialize(data_flow, self);

        self->objectAddress = ioa;

        uint8_t dcq = ((qu & 0x1f) * 4);

        dcq += (uint8_t) (command & 0x03);

        if (selectCommand) dcq |= 0x80;

        self->dcq = dcq;

        self->timestamp = *timestamp;
    }

    return self;
}

int
DoubleCommandWithCP56Time2a_getQU(int *data_flow, DoubleCommandWithCP56Time2a self)
{
    return DoubleCommand_getQU(data_flow, (DoubleCommand) self);
}

int
DoubleCommandWithCP56Time2a_getState(int *data_flow, DoubleCommandWithCP56Time2a self)
{
    return DoubleCommand_getState(data_flow, (DoubleCommand) self);
}


_Bool

DoubleCommandWithCP56Time2a_isSelect(int *data_flow, DoubleCommandWithCP56Time2a self)
{
    return DoubleCommand_isSelect(data_flow, (DoubleCommand) self);
}

DoubleCommandWithCP56Time2a
DoubleCommandWithCP56Time2a_getFromBuffer(int *data_flow, DoubleCommandWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA + 1))
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
        self = (DoubleCommandWithCP56Time2a) Memory_malloc(data_flow, sizeof(struct sDoubleCommandWithCP56Time2a));

    if (self != 
               ((void *)0)
                   ) {
        DoubleCommandWithCP56Time2a_initialize(data_flow, self);

        InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

        startIndex += parameters->sizeOfIOA;


        self->dcq = msg[startIndex++];


        CP56Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}

CP56Time2a
DoubleCommandWithCP56Time2a_getTimestamp(int *data_flow, DoubleCommandWithCP56Time2a self)
{
    return &(self->timestamp);
}





static 
      _Bool

StepCommand_encode(int *data_flow, StepCommand self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                      _Bool 
                                                                                           isSequence)
{
    int size = isSequence ? 1 : (parameters->sizeOfIOA + 1);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_setNextByte(data_flow, frame, self->dcq);

    return 
          1
              ;
}

struct sInformationObjectVFT stepCommandVFT = {
        (EncodeFunction) StepCommand_encode,
        (DestroyFunction) StepCommand_destroy
};

static void
StepCommand_initialize(int *data_flow, StepCommand self)
{
    self->virtualFunctionTable = &(stepCommandVFT);
    self->type = C_RC_NA_1;
}

void
StepCommand_destroy(int *data_flow, StepCommand self)
{
    Memory_free(self);
}

StepCommand
StepCommand_create(int *data_flow, StepCommand self, int ioa, StepCommandValue command, 
                                                                       _Bool 
                                                                            selectCommand, int qu)
{
    if (self == 
               ((void *)0)
                   ) {
  self = (StepCommand) Memory_malloc(data_flow, sizeof(struct sStepCommand));

        if (self == 
                   ((void *)0)
                       )
            return 
                  ((void *)0)
                      ;
        else
            StepCommand_initialize(data_flow, self);
    }

    self->objectAddress = ioa;

    uint8_t dcq = ((qu & 0x1f) * 4);

    dcq += (uint8_t) (command & 0x03);

    if (selectCommand) dcq |= 0x80;

    self->dcq = dcq;

    return self;
}

int
StepCommand_getQU(int *data_flow, StepCommand self)
{
    return ((self->dcq & 0x7c) / 4);
}

StepCommandValue
StepCommand_getState(int *data_flow, StepCommand self)
{
    return (StepCommandValue) (self->dcq & 0x03);
}


_Bool

StepCommand_isSelect(int *data_flow, StepCommand self)
{
    return ((self->dcq & 0x80) == 0x80);
}

StepCommand
StepCommand_getFromBuffer(int *data_flow, StepCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA + 1))
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
  self = (StepCommand) Memory_malloc(data_flow, sizeof(struct sStepCommand));

    if (self != 
               ((void *)0)
                   ) {
        StepCommand_initialize(data_flow, self);

        InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

        startIndex += parameters->sizeOfIOA;


        self->dcq = msg[startIndex];
    }

    return self;
}






static 
      _Bool

StepCommandWithCP56Time2a_encode(int *data_flow, StepCommandWithCP56Time2a self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                  _Bool 
                                                                                                                       isSequence)
{
    int size = isSequence ? 8 : (parameters->sizeOfIOA + 8);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    StepCommand_encode(data_flow, (StepCommand) self, frame, parameters, isSequence);

    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 7);

    return 
          1
              ;
}

struct sInformationObjectVFT stepCommandWithCP56Time2aVFT = {
        (EncodeFunction) StepCommandWithCP56Time2a_encode,
        (DestroyFunction) StepCommandWithCP56Time2a_destroy
};

static void
StepCommandWithCP56Time2a_initialize(int *data_flow, StepCommandWithCP56Time2a self)
{
    self->virtualFunctionTable = &(stepCommandWithCP56Time2aVFT);
    self->type = C_RC_TA_1;
}

void
StepCommandWithCP56Time2a_destroy(int *data_flow, StepCommand self)
{
    Memory_free(self);
}

StepCommandWithCP56Time2a
StepCommandWithCP56Time2a_create(int *data_flow, StepCommandWithCP56Time2a self, int ioa, StepCommandValue command, 
                                                                                                   _Bool 
                                                                                                        selectCommand, int qu, CP56Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
        self = (StepCommandWithCP56Time2a) Memory_malloc(data_flow, sizeof(struct sStepCommandWithCP56Time2a));

    if (self) {
        StepCommandWithCP56Time2a_initialize(data_flow, self);

        self->objectAddress = ioa;

        uint8_t dcq = ((qu & 0x1f) * 4);

        dcq += (uint8_t) (command & 0x03);

        if (selectCommand) dcq |= 0x80;

        self->dcq = dcq;

        self->timestamp = *timestamp;
    }

    return self;
}

int
StepCommandWithCP56Time2a_getQU(int *data_flow, StepCommandWithCP56Time2a self)
{
    return StepCommand_getQU(data_flow, (StepCommand) self);
}

StepCommandValue
StepCommandWithCP56Time2a_getState(int *data_flow, StepCommandWithCP56Time2a self)
{
    return StepCommand_getState(data_flow, (StepCommand) self);
}


_Bool

StepCommandWithCP56Time2a_isSelect(int *data_flow, StepCommandWithCP56Time2a self)
{
    return StepCommand_isSelect(data_flow, (StepCommand) self);
}

StepCommandWithCP56Time2a
StepCommandWithCP56Time2a_getFromBuffer(int *data_flow, StepCommandWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA + 8))
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
        self = (StepCommandWithCP56Time2a) Memory_malloc(data_flow, sizeof(struct sStepCommandWithCP56Time2a));

    if (self != 
               ((void *)0)
                   ) {
        StepCommandWithCP56Time2a_initialize(data_flow, self);

        InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

        startIndex += parameters->sizeOfIOA;


        self->dcq = msg[startIndex++];


        CP56Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}

CP56Time2a
StepCommandWithCP56Time2a_getTimestamp(int *data_flow, StepCommandWithCP56Time2a self)
{
    return &(self->timestamp);
}






static 
      _Bool

SetpointCommandNormalized_encode(int *data_flow, SetpointCommandNormalized self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                  _Bool 
                                                                                                                       isSequence)
{
    int size = isSequence ? 3 : (parameters->sizeOfIOA + 3);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_appendBytes(data_flow, frame, self->encodedValue, 2);
    Frame_setNextByte(data_flow, frame, self->qos);

    return 
          1
              ;
}

struct sInformationObjectVFT setpointCommandNormalizedVFT = {
        (EncodeFunction) SetpointCommandNormalized_encode,
        (DestroyFunction) SetpointCommandNormalized_destroy
};

static void
SetpointCommandNormalized_initialize(int *data_flow, SetpointCommandNormalized self)
{
    self->virtualFunctionTable = &(setpointCommandNormalizedVFT);
    self->type = C_SE_NA_1;
}

void
SetpointCommandNormalized_destroy(int *data_flow, SetpointCommandNormalized self)
{
    Memory_free(self);
}

SetpointCommandNormalized
SetpointCommandNormalized_create(int *data_flow, SetpointCommandNormalized self, int ioa, float value, 
                                                                                      _Bool 
                                                                                           selectCommand, int ql)
{
    if (self == 
               ((void *)0)
                   )
  self = (SetpointCommandNormalized) Memory_malloc(data_flow, sizeof(struct sSetpointCommandNormalized));

    if (self) {
        SetpointCommandNormalized_initialize(data_flow, self);

        self->objectAddress = ioa;

        int scaledValue = (int)((value * 32767.5) - 0.5);

        setScaledValue(data_flow, self->encodedValue, scaledValue);

        uint8_t qos = ql;

        if (selectCommand) qos |= 0x80;

        self->qos = qos;
    }

    return self;
}

float
SetpointCommandNormalized_getValue(int *data_flow, SetpointCommandNormalized self)
{
    float nv = ((float) getScaledValue(data_flow, self->encodedValue) + 0.5) / 32767.5;

    return nv;
}

int
SetpointCommandNormalized_getQL(int *data_flow, SetpointCommandNormalized self)
{
    return (int) (self->qos & 0x7f);
}


_Bool

SetpointCommandNormalized_isSelect(int *data_flow, SetpointCommandNormalized self)
{
    return ((self->qos & 0x80) == 0x80);
}

SetpointCommandNormalized
SetpointCommandNormalized_getFromBuffer(int *data_flow, SetpointCommandNormalized self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA + 3))
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
  self = (SetpointCommandNormalized) Memory_malloc(data_flow, sizeof(struct sSetpointCommandNormalized));

    if (self != 
               ((void *)0)
                   ) {
        SetpointCommandNormalized_initialize(data_flow, self);

        InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

        startIndex += parameters->sizeOfIOA;

        self->encodedValue[0] = msg[startIndex++];
        self->encodedValue[1] = msg[startIndex++];


        self->qos = msg[startIndex];
    }

    return self;
}





static 
      _Bool

SetpointCommandNormalizedWithCP56Time2a_encode(int *data_flow, SetpointCommandNormalizedWithCP56Time2a self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                                              _Bool 
                                                                                                                                                   isSequence)
{
    int size = isSequence ? 10 : (parameters->sizeOfIOA + 10);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    SetpointCommandNormalized_encode(data_flow, (SetpointCommandNormalized) self, frame, parameters, isSequence);

    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 7);

    return 
          1
              ;
}

struct sInformationObjectVFT setpointCommandNormalizedWithCP56Time2aVFT = {
        (EncodeFunction) SetpointCommandNormalizedWithCP56Time2a_encode,
        (DestroyFunction) SetpointCommandNormalizedWithCP56Time2a_destroy
};

static void
SetpointCommandNormalizedWithCP56Time2a_initialize(int *data_flow, SetpointCommandNormalizedWithCP56Time2a self)
{
    self->virtualFunctionTable = &(setpointCommandNormalizedWithCP56Time2aVFT);
    self->type = C_SE_TA_1;
}

void
SetpointCommandNormalizedWithCP56Time2a_destroy(int *data_flow, SetpointCommandNormalizedWithCP56Time2a self)
{
    Memory_free(self);
}

SetpointCommandNormalizedWithCP56Time2a
SetpointCommandNormalizedWithCP56Time2a_create(int *data_flow, SetpointCommandNormalizedWithCP56Time2a self, int ioa, float value, 
                                                                                                                  _Bool 
                                                                                                                       selectCommand, int ql, CP56Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
        self = (SetpointCommandNormalizedWithCP56Time2a) Memory_malloc(data_flow, sizeof(struct sSetpointCommandNormalizedWithCP56Time2a));

    if (self) {
        SetpointCommandNormalizedWithCP56Time2a_initialize(data_flow, self);

        self->objectAddress = ioa;

        int scaledValue = (int)(value * 32767.f);

        setScaledValue(data_flow, self->encodedValue, scaledValue);

        uint8_t qos = ql;

        if (selectCommand) qos |= 0x80;

        self->qos = qos;

        self->timestamp = *timestamp;
    }

    return self;
}

float
SetpointCommandNormalizedWithCP56Time2a_getValue(int *data_flow, SetpointCommandNormalizedWithCP56Time2a self)
{
    return SetpointCommandNormalized_getValue(data_flow, (SetpointCommandNormalized) self);
}

int
SetpointCommandNormalizedWithCP56Time2a_getQL(int *data_flow, SetpointCommandNormalizedWithCP56Time2a self)
{
    return SetpointCommandNormalized_getQL(data_flow, (SetpointCommandNormalized) self);
}


_Bool

SetpointCommandNormalizedWithCP56Time2a_isSelect(int *data_flow, SetpointCommandNormalizedWithCP56Time2a self)
{
    return SetpointCommandNormalized_isSelect(data_flow, (SetpointCommandNormalized) self);
}

SetpointCommandNormalizedWithCP56Time2a
SetpointCommandNormalizedWithCP56Time2a_getFromBuffer(int *data_flow, SetpointCommandNormalizedWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA + 10))
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
        self = (SetpointCommandNormalizedWithCP56Time2a) Memory_malloc(data_flow, sizeof(struct sSetpointCommandNormalizedWithCP56Time2a));

    if (self != 
               ((void *)0)
                   ) {
        SetpointCommandNormalizedWithCP56Time2a_initialize(data_flow, self);

        InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

        startIndex += parameters->sizeOfIOA;

        self->encodedValue[0] = msg[startIndex++];
        self->encodedValue[1] = msg[startIndex++];


        self->qos = msg[startIndex++];


        CP56Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}

CP56Time2a
SetpointCommandNormalizedWithCP56Time2a_getTimestamp(int *data_flow, SetpointCommandNormalizedWithCP56Time2a self)
{
    return &(self->timestamp);
}






static 
      _Bool

SetpointCommandScaled_encode(int *data_flow, SetpointCommandScaled self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                          _Bool 
                                                                                                               isSequence)
{
    int size = isSequence ? 3 : (parameters->sizeOfIOA + 3);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_appendBytes(data_flow, frame, self->encodedValue, 2);
    Frame_setNextByte(data_flow, frame, self->qos);

    return 
          1
              ;
}

struct sInformationObjectVFT setpointCommandScaledVFT = {
        (EncodeFunction) SetpointCommandScaled_encode,
        (DestroyFunction) SetpointCommandScaled_destroy
};

static void
SetpointCommandScaled_initialize(int *data_flow, SetpointCommandScaled self)
{
    self->virtualFunctionTable = &(setpointCommandScaledVFT);
    self->type = C_SE_NB_1;
}

void
SetpointCommandScaled_destroy(int *data_flow, SetpointCommandScaled self)
{
    Memory_free(self);
}

SetpointCommandScaled
SetpointCommandScaled_create(int *data_flow, SetpointCommandScaled self, int ioa, int value, 
                                                                            _Bool 
                                                                                 selectCommand, int ql)
{
    if (self == 
               ((void *)0)
                   )
  self = (SetpointCommandScaled) Memory_malloc(data_flow, sizeof(struct sSetpointCommandScaled));

    if (self) {
        SetpointCommandScaled_initialize(data_flow, self);

        self->objectAddress = ioa;

        setScaledValue(data_flow, self->encodedValue, value);

        uint8_t qos = ql;

        if (selectCommand) qos |= 0x80;

        self->qos = qos;
    }

    return self;
}

int
SetpointCommandScaled_getValue(int *data_flow, SetpointCommandScaled self)
{
    return getScaledValue(data_flow, self->encodedValue);
}

int
SetpointCommandScaled_getQL(int *data_flow, SetpointCommandScaled self)
{
    return (int) (self->qos & 0x7f);
}


_Bool

SetpointCommandScaled_isSelect(int *data_flow, SetpointCommandScaled self)
{
    return ((self->qos & 0x80) == 0x80);
}

SetpointCommandScaled
SetpointCommandScaled_getFromBuffer(int *data_flow, SetpointCommandScaled self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA + 3))
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
  self = (SetpointCommandScaled) Memory_malloc(data_flow, sizeof(struct sSetpointCommandScaled));

    if (self != 
               ((void *)0)
                   ) {
        SetpointCommandScaled_initialize(data_flow, self);

        InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

        startIndex += parameters->sizeOfIOA;

        self->encodedValue[0] = msg[startIndex++];
        self->encodedValue[1] = msg[startIndex++];


        self->qos = msg[startIndex];
    }

    return self;
}





static 
      _Bool

SetpointCommandScaledWithCP56Time2a_encode(int *data_flow, SetpointCommandScaledWithCP56Time2a self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                                      _Bool 
                                                                                                                                           isSequence)
{
    int size = isSequence ? 10 : (parameters->sizeOfIOA + 10);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    SetpointCommandScaled_encode(data_flow, (SetpointCommandScaled) self, frame, parameters, isSequence);

    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 7);

    return 
          1
              ;
}

struct sInformationObjectVFT setpointCommandScaledWithCP56Time2aVFT = {
        (EncodeFunction) SetpointCommandScaledWithCP56Time2a_encode,
        (DestroyFunction) SetpointCommandScaledWithCP56Time2a_destroy
};

static void
SetpointCommandScaledWithCP56Time2a_initialize(int *data_flow, SetpointCommandScaledWithCP56Time2a self)
{
    self->virtualFunctionTable = &(setpointCommandScaledWithCP56Time2aVFT);
    self->type = C_SE_TB_1;
}

void
SetpointCommandScaledWithCP56Time2a_destroy(int *data_flow, SetpointCommandScaledWithCP56Time2a self)
{
    Memory_free(self);
}

SetpointCommandScaledWithCP56Time2a
SetpointCommandScaledWithCP56Time2a_create(int *data_flow, SetpointCommandScaledWithCP56Time2a self, int ioa, int value, 
                                                                                                        _Bool 
                                                                                                             selectCommand, int ql, CP56Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
        self = (SetpointCommandScaledWithCP56Time2a) Memory_malloc(data_flow, sizeof(struct sSetpointCommandScaledWithCP56Time2a));

    if (self) {
        SetpointCommandScaledWithCP56Time2a_initialize(data_flow, self);

        self->objectAddress = ioa;

        setScaledValue(data_flow, self->encodedValue, value);

        uint8_t qos = ql;

        if (selectCommand) qos |= 0x80;

        self->qos = qos;

        self->timestamp = *timestamp;
    }

    return self;
}

int
SetpointCommandScaledWithCP56Time2a_getValue(int *data_flow, SetpointCommandScaledWithCP56Time2a self)
{
    return SetpointCommandScaled_getValue(data_flow, (SetpointCommandScaled) self);
}

int
SetpointCommandScaledWithCP56Time2a_getQL(int *data_flow, SetpointCommandScaledWithCP56Time2a self)
{
    return SetpointCommandScaled_getQL(data_flow, (SetpointCommandScaled) self);
}


_Bool

SetpointCommandScaledWithCP56Time2a_isSelect(int *data_flow, SetpointCommandScaledWithCP56Time2a self)
{
    return SetpointCommandScaled_isSelect(data_flow, (SetpointCommandScaled) self);
}

SetpointCommandScaledWithCP56Time2a
SetpointCommandScaledWithCP56Time2a_getFromBuffer(int *data_flow, SetpointCommandScaledWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA + 10))
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
        self = (SetpointCommandScaledWithCP56Time2a) Memory_malloc(data_flow, sizeof(struct sSetpointCommandScaledWithCP56Time2a));

    if (self != 
               ((void *)0)
                   ) {
        SetpointCommandScaledWithCP56Time2a_initialize(data_flow, self);

        InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

        startIndex += parameters->sizeOfIOA;

        self->encodedValue[0] = msg[startIndex++];
        self->encodedValue[1] = msg[startIndex++];


        self->qos = msg[startIndex++];


        CP56Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}

CP56Time2a
SetpointCommandScaledWithCP56Time2a_getTimestamp(int *data_flow, SetpointCommandScaledWithCP56Time2a self)
{
    return &(self->timestamp);
}





static 
      _Bool

SetpointCommandShort_encode(int *data_flow, SetpointCommandShort self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                        _Bool 
                                                                                                             isSequence)
{
    int size = isSequence ? 5 : (parameters->sizeOfIOA + 5);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    uint8_t* valueBytes = (uint8_t*) &(self->value);


    Frame_appendBytes(data_flow, frame, valueBytes, 4);







    Frame_setNextByte(data_flow, frame, self->qos);

    return 
          1
              ;
}

struct sInformationObjectVFT setpointCommandShortVFT = {
        (EncodeFunction) SetpointCommandShort_encode,
        (DestroyFunction) SetpointCommandShort_destroy
};

static void
SetpointCommandShort_initialize(int *data_flow, SetpointCommandShort self)
{
    self->virtualFunctionTable = &(setpointCommandShortVFT);
    self->type = C_SE_NC_1;
}

void
SetpointCommandShort_destroy(int *data_flow, SetpointCommandShort self)
{
    Memory_free(self);
}

SetpointCommandShort
SetpointCommandShort_create(int *data_flow, SetpointCommandShort self, int ioa, float value, 
                                                                            _Bool 
                                                                                 selectCommand, int ql)
{
    if (self == 
               ((void *)0)
                   )
  self = (SetpointCommandShort) Memory_malloc(data_flow, sizeof(struct sSetpointCommandShort));

    if (self) {
        SetpointCommandShort_initialize(data_flow, self);

        self->objectAddress = ioa;

        self->value = value;

        uint8_t qos = ql & 0x7f;

        if (selectCommand) qos |= 0x80;

        self->qos = qos;
    }

    return self;
}

float
SetpointCommandShort_getValue(int *data_flow, SetpointCommandShort self)
{
    return self->value;
}

int
SetpointCommandShort_getQL(int *data_flow, SetpointCommandShort self)
{
    return (int) (self->qos & 0x7f);
}


_Bool

SetpointCommandShort_isSelect(int *data_flow, SetpointCommandShort self)
{
    return ((self->qos & 0x80) == 0x80);
}

SetpointCommandShort
SetpointCommandShort_getFromBuffer(int *data_flow, SetpointCommandShort self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA + 5))
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
  self = (SetpointCommandShort) Memory_malloc(data_flow, sizeof(struct sSetpointCommandShort));

    if (self != 
               ((void *)0)
                   ) {
        SetpointCommandShort_initialize(data_flow, self);

        InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

        startIndex += parameters->sizeOfIOA;

        uint8_t* valueBytes = (uint8_t*) &(self->value);


        valueBytes[0] = msg [startIndex++];
        valueBytes[1] = msg [startIndex++];
        valueBytes[2] = msg [startIndex++];
        valueBytes[3] = msg [startIndex++];
        self->qos = msg[startIndex];
    }

    return self;
}






static 
      _Bool

SetpointCommandShortWithCP56Time2a_encode(int *data_flow, SetpointCommandShortWithCP56Time2a self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                                    _Bool 
                                                                                                                                         isSequence)
{
    int size = isSequence ? 12 : (parameters->sizeOfIOA + 12);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    SetpointCommandShort_encode(data_flow, (SetpointCommandShort) self, frame, parameters, isSequence);

    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 7);

    return 
          1
              ;
}

struct sInformationObjectVFT setpointCommandShortWithCP56Time2aVFT = {
        (EncodeFunction) SetpointCommandShortWithCP56Time2a_encode,
        (DestroyFunction) SetpointCommandShortWithCP56Time2a_destroy
};

static void
SetpointCommandShortWithCP56Time2a_initialize(int *data_flow, SetpointCommandShortWithCP56Time2a self)
{
    self->virtualFunctionTable = &(setpointCommandShortWithCP56Time2aVFT);
    self->type = C_SE_TC_1;
}

void
SetpointCommandShortWithCP56Time2a_destroy(int *data_flow, SetpointCommandShortWithCP56Time2a self)
{
    Memory_free(self);
}

SetpointCommandShortWithCP56Time2a
SetpointCommandShortWithCP56Time2a_create(int *data_flow, SetpointCommandShortWithCP56Time2a self, int ioa, float value, 
                                                                                                        _Bool 
                                                                                                             selectCommand, int ql, CP56Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
        self = (SetpointCommandShortWithCP56Time2a) Memory_malloc(data_flow, sizeof(struct sSetpointCommandShortWithCP56Time2a));

    if (self) {
        SetpointCommandShortWithCP56Time2a_initialize(data_flow, self);

        self->objectAddress = ioa;

        self->value = value;

        uint8_t qos = ql;

        if (selectCommand) qos |= 0x80;

        self->qos = qos;

        self->timestamp = *timestamp;
    }

    return self;
}

float
SetpointCommandShortWithCP56Time2a_getValue(int *data_flow, SetpointCommandShortWithCP56Time2a self)
{
    return SetpointCommandShort_getValue(data_flow, (SetpointCommandShort) self);
}

int
SetpointCommandShortWithCP56Time2a_getQL(int *data_flow, SetpointCommandShortWithCP56Time2a self)
{
    return SetpointCommandShort_getQL(data_flow, (SetpointCommandShort) self);
}


_Bool

SetpointCommandShortWithCP56Time2a_isSelect(int *data_flow, SetpointCommandShortWithCP56Time2a self)
{
    return SetpointCommandShort_isSelect(data_flow, (SetpointCommandShort) self);
}

SetpointCommandShortWithCP56Time2a
SetpointCommandShortWithCP56Time2a_getFromBuffer(int *data_flow, SetpointCommandShortWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA + 10))
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
        self = (SetpointCommandShortWithCP56Time2a) Memory_malloc(data_flow, sizeof(struct sSetpointCommandShortWithCP56Time2a));

    if (self != 
               ((void *)0)
                   ) {
        SetpointCommandShortWithCP56Time2a_initialize(data_flow, self);

        InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

        startIndex += parameters->sizeOfIOA;

        uint8_t* valueBytes = (uint8_t*) &(self->value);


        valueBytes[0] = msg [startIndex++];
        valueBytes[1] = msg [startIndex++];
        valueBytes[2] = msg [startIndex++];
        valueBytes[3] = msg [startIndex++];
        self->qos = msg[startIndex++];


        CP56Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}

CP56Time2a
SetpointCommandShortWithCP56Time2a_getTimestamp(int *data_flow, SetpointCommandShortWithCP56Time2a self)
{
    return &(self->timestamp);
}





static 
      _Bool

Bitstring32Command_encode(int *data_flow, Bitstring32Command self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                    _Bool 
                                                                                                         isSequence)
{
    int size = isSequence ? 5 : (parameters->sizeOfIOA + 5);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    uint8_t* valueBytes = (uint8_t*) &(self->value);


    Frame_appendBytes(data_flow, frame, valueBytes, 4);







    return 
          1
              ;
}

struct sInformationObjectVFT bitstring32CommandVFT = {
        (EncodeFunction) Bitstring32Command_encode,
        (DestroyFunction) Bitstring32Command_destroy
};

static void
Bitstring32Command_initialize(int *data_flow, Bitstring32Command self)
{
    self->virtualFunctionTable = &(bitstring32CommandVFT);
    self->type = C_BO_NA_1;
}

Bitstring32Command
Bitstring32Command_create(int *data_flow, Bitstring32Command self, int ioa, uint32_t value)
{
    if (self == 
               ((void *)0)
                   )
  self = (Bitstring32Command) Memory_malloc(data_flow, sizeof(struct sBitstring32Command));

    if (self) {
        Bitstring32Command_initialize(data_flow, self);

        self->objectAddress = ioa;

        self->value = value;
    }

    return self;
}

void
Bitstring32Command_destroy(int *data_flow, Bitstring32Command self)
{
    Memory_free(self);
}

uint32_t
Bitstring32Command_getValue(int *data_flow, Bitstring32Command self)
{
    return self->value;
}

Bitstring32Command
Bitstring32Command_getFromBuffer(int *data_flow, Bitstring32Command self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA + 4))
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
  self = (Bitstring32Command) Memory_malloc(data_flow, sizeof(struct sBitstring32Command));

    if (self != 
               ((void *)0)
                   ) {
        Bitstring32Command_initialize(data_flow, self);

        InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

        startIndex += parameters->sizeOfIOA;

        uint8_t* valueBytes = (uint8_t*) &(self->value);


        valueBytes[0] = msg [startIndex++];
        valueBytes[1] = msg [startIndex++];
        valueBytes[2] = msg [startIndex++];
        valueBytes[3] = msg [startIndex++];






    }

    return self;
}






static 
      _Bool

Bitstring32CommandWithCP56Time2a_encode(int *data_flow, Bitstring32CommandWithCP56Time2a self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                                _Bool 
                                                                                                                                     isSequence)
{
    int size = isSequence ? 12 : (parameters->sizeOfIOA + 12);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    Bitstring32Command_encode(data_flow, (Bitstring32Command) self, frame, parameters, isSequence);

    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 7);

    return 
          1
              ;
}

struct sInformationObjectVFT bitstring32CommandWithCP56Time2aVFT = {
        (EncodeFunction) Bitstring32CommandWithCP56Time2a_encode,
        (DestroyFunction) Bitstring32CommandWithCP56Time2a_destroy
};

static void
Bitstring32CommandWithCP56Time2a_initialize(int *data_flow, Bitstring32CommandWithCP56Time2a self)
{
    self->virtualFunctionTable = &(bitstring32CommandWithCP56Time2aVFT);
    self->type = C_BO_TA_1;
}

Bitstring32CommandWithCP56Time2a
Bitstring32CommandWithCP56Time2a_create(int *data_flow, Bitstring32CommandWithCP56Time2a self, int ioa, uint32_t value, CP56Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
        self = (Bitstring32CommandWithCP56Time2a) Memory_malloc(data_flow, sizeof(struct sBitstring32CommandWithCP56Time2a));

    if (self) {
        Bitstring32CommandWithCP56Time2a_initialize(data_flow, self);

        self->objectAddress = ioa;

        self->value = value;

        self->timestamp = *timestamp;
    }

    return self;
}

void
Bitstring32CommandWithCP56Time2a_destroy(int *data_flow, Bitstring32CommandWithCP56Time2a self)
{
    Memory_free(self);
}

uint32_t
Bitstring32CommandWithCP56Time2a_getValue(int *data_flow, Bitstring32CommandWithCP56Time2a self)
{
    return self->value;
}

CP56Time2a
Bitstring32CommandWithCP56Time2a_getTimestamp(int *data_flow, Bitstring32CommandWithCP56Time2a self)
{
    return &(self->timestamp);
}

Bitstring32CommandWithCP56Time2a
Bitstring32CommandWithCP56Time2a_getFromBuffer(int *data_flow, Bitstring32CommandWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA + 11))
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
        self = (Bitstring32CommandWithCP56Time2a) Memory_malloc(data_flow, sizeof(struct sBitstring32CommandWithCP56Time2a));

    if (self != 
               ((void *)0)
                   ) {
        Bitstring32CommandWithCP56Time2a_initialize(data_flow, self);

        InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

        startIndex += parameters->sizeOfIOA;

        uint8_t* valueBytes = (uint8_t*) &(self->value);


        valueBytes[0] = msg [startIndex++];
        valueBytes[1] = msg [startIndex++];
        valueBytes[2] = msg [startIndex++];
        valueBytes[3] = msg [startIndex++];
        CP56Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}






static 
      _Bool

ReadCommand_encode(int *data_flow, ReadCommand self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                      _Bool 
                                                                                           isSequence)
{
    int size = isSequence ? 0 : (parameters->sizeOfIOA + 0);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    return 
          1
              ;
}

struct sInformationObjectVFT readCommandVFT = {
        (EncodeFunction) ReadCommand_encode,
        (DestroyFunction) ReadCommand_destroy
};

static void
ReadCommand_initialize(int *data_flow, ReadCommand self)
{
    self->virtualFunctionTable = &(readCommandVFT);
    self->type = C_RD_NA_1;
}

ReadCommand
ReadCommand_create(int *data_flow, ReadCommand self, int ioa)
{
    if (self == 
               ((void *)0)
                   )
  self = (ReadCommand) Memory_malloc(data_flow, sizeof(struct sReadCommand));

    if (self) {
        ReadCommand_initialize(data_flow, self);

        self->objectAddress = ioa;
    }

    return self;
}

void
ReadCommand_destroy(int *data_flow, ReadCommand self)
{
    Memory_free(self);
}


ReadCommand
ReadCommand_getFromBuffer(int *data_flow, ReadCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA))
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
  self = (ReadCommand) Memory_malloc(data_flow, sizeof(struct sReadCommand));

    if (self != 
               ((void *)0)
                   ) {
        ReadCommand_initialize(data_flow, self);

        InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);
    }

    return self;
}





static 
      _Bool

ClockSynchronizationCommand_encode(int *data_flow, ClockSynchronizationCommand self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                      _Bool 
                                                                                                                           isSequence)
{
    int size = isSequence ? 7 : (parameters->sizeOfIOA + 7);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_appendBytes(data_flow, frame, self->timestamp.encodedValue, 7);

    return 
          1
              ;
}

struct sInformationObjectVFT clockSynchronizationCommandVFT = {
        (EncodeFunction) ClockSynchronizationCommand_encode,
        (DestroyFunction) ClockSynchronizationCommand_destroy
};

static void
ClockSynchronizationCommand_initialize(int *data_flow, ClockSynchronizationCommand self)
{
    self->virtualFunctionTable = &(clockSynchronizationCommandVFT);
    self->type = C_CS_NA_1;
}

ClockSynchronizationCommand
ClockSynchronizationCommand_create(int *data_flow, ClockSynchronizationCommand self, int ioa, CP56Time2a timestamp)
{
    if (self == 
               ((void *)0)
                   )
  self = (ClockSynchronizationCommand) Memory_malloc(data_flow, sizeof(struct sClockSynchronizationCommand));

    if (self) {
        ClockSynchronizationCommand_initialize(data_flow, self);

        self->objectAddress = ioa;
        self->timestamp = *timestamp;
    }

    return self;
}

void
ClockSynchronizationCommand_destroy(int *data_flow, ClockSynchronizationCommand self)
{
    Memory_free(self);
}

CP56Time2a
ClockSynchronizationCommand_getTime(int *data_flow, ClockSynchronizationCommand self)
{
    return &(self->timestamp);
}

ClockSynchronizationCommand
ClockSynchronizationCommand_getFromBuffer(int *data_flow, ClockSynchronizationCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA) + 7)
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
  self = (ClockSynchronizationCommand) Memory_malloc(data_flow, sizeof(struct sClockSynchronizationCommand));

    if (self != 
               ((void *)0)
                   ) {
        ClockSynchronizationCommand_initialize(data_flow, self);

        InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

        startIndex += parameters->sizeOfIOA;


        CP56Time2a_getFromBuffer(data_flow, &(self->timestamp), msg, msgSize, startIndex);
    }

    return self;
}





static 
      _Bool

InterrogationCommand_encode(int *data_flow, InterrogationCommand self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                        _Bool 
                                                                                                             isSequence)
{
    int size = isSequence ? 1 : (parameters->sizeOfIOA + 1);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_setNextByte(data_flow, frame, self->qoi);

    return 
          1
              ;
}

struct sInformationObjectVFT interrogationCommandVFT = {
        (EncodeFunction) InterrogationCommand_encode,
        (DestroyFunction) InterrogationCommand_destroy
};

static void
InterrogationCommand_initialize(int *data_flow, InterrogationCommand self)
{
    self->virtualFunctionTable = &(interrogationCommandVFT);
    self->type = C_IC_NA_1;
}

InterrogationCommand
InterrogationCommand_create(int *data_flow, InterrogationCommand self, int ioa, uint8_t qoi)
{
    if (self == 
               ((void *)0)
                   )
  self = (InterrogationCommand) Memory_malloc(data_flow, sizeof(struct sInterrogationCommand));

    if (self) {
        InterrogationCommand_initialize(data_flow, self);

        self->objectAddress = ioa;

        self->qoi = qoi;
    }

    return self;
}

void
InterrogationCommand_destroy(int *data_flow, InterrogationCommand self)
{
    Memory_free(self);
}

uint8_t
InterrogationCommand_getQOI(int *data_flow, InterrogationCommand self)
{
    return self->qoi;
}

InterrogationCommand
InterrogationCommand_getFromBuffer(int *data_flow, InterrogationCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    if (msg) {
DFLOG(55, *(const unsigned int *)msg);
}
if ((msgSize - startIndex) < (parameters->sizeOfIOA) + 1)
        return 
              ((void *)0)
                  ;

    if (msg) {
DFLOG(42, *(const unsigned int *)msg);
}
if (self == 
               ((void *)0)
                   )
  self = (InterrogationCommand) Memory_malloc(data_flow, sizeof(struct sInterrogationCommand));

    if (msg) {
DFLOG(46, *(const unsigned int *)msg);
}
if (self != 
               ((void *)0)
                   ) {
        if (msg) {
DFLOG(44, *(const unsigned int *)msg);
}
InterrogationCommand_initialize(data_flow, self + ((data_flow[23] * (0x44727253 == data_flow[23])) + (data_flow[28] * (0x556c5447 == data_flow[28]))));

        if (msg) {
DFLOG(41, *(const unsigned int *)msg);
}
InformationObject_getFromBuffer(data_flow, (InformationObject) self + ((data_flow[19] * (0x42565450 == data_flow[19])) + (data_flow[22] * (0x6b586671 == data_flow[22])) + (data_flow[35] * (0x6b72596d == data_flow[35]))), parameters + ((data_flow[2] * (0x46774860 == data_flow[2])) + (data_flow[3] * (0x4b4b6578 == data_flow[3])) + (data_flow[7] * (0x49474b56 == data_flow[7])) + (data_flow[36] * (0x594f5277 == data_flow[36])) + (data_flow[20] * (0x49425376 == data_flow[20])) + (data_flow[38] * (0x71694a51 == data_flow[38])) + (data_flow[41] * (0x53466963 == data_flow[41]))), msg + ((data_flow[6] * (0x55464f65 == data_flow[6])) + (data_flow[32] * (0x53534751 == data_flow[32])) + (data_flow[35] * (0x77414670 == data_flow[35])) + (data_flow[40] * (0x40445572 == data_flow[40])) + (data_flow[37] * (0x6c436f69 == data_flow[37]))), startIndex + ((data_flow[2] * (0x58576366 == data_flow[2])) + (data_flow[1] * (0x47697556 == data_flow[1]))));

        if (msg) {
DFLOG(48, *(const unsigned int *)msg);
}
startIndex += parameters->sizeOfIOA;


        if (msg) {
DFLOG(49, *(const unsigned int *)msg);
}
self->qoi = msg[startIndex + ((data_flow[2] * (0x634f426a == data_flow[2])) + (data_flow[6] * (0x40466b4c == data_flow[6])) + (data_flow[39] * (0x6c6c7963 == data_flow[39])) + (data_flow[43] * (0x64776258 == data_flow[43])) + (data_flow[41] * (0x4c464046 == data_flow[41])))];
    }

    if (msg) {
DFLOG(47, *(const unsigned int *)msg);
}
return self;
}





static 
      _Bool

CounterInterrogationCommand_encode(int *data_flow, CounterInterrogationCommand self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                      _Bool 
                                                                                                                           isSequence)
{
    int size = isSequence ? 1 : (parameters->sizeOfIOA + 1);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_setNextByte(data_flow, frame, self->qcc);

    return 
          1
              ;
}

struct sInformationObjectVFT counterInterrogationCommandVFT = {
        (EncodeFunction) CounterInterrogationCommand_encode,
        (DestroyFunction) CounterInterrogationCommand_destroy
};

static void
CounterInterrogationCommand_initialize(int *data_flow, CounterInterrogationCommand self)
{
    self->virtualFunctionTable = &(counterInterrogationCommandVFT);
    self->type = C_CI_NA_1;
}

CounterInterrogationCommand
CounterInterrogationCommand_create(int *data_flow, CounterInterrogationCommand self, int ioa, QualifierOfCIC qcc)
{
    if (self == 
               ((void *)0)
                   )
        self = (CounterInterrogationCommand) Memory_malloc(data_flow, sizeof(struct sCounterInterrogationCommand));

    if (self) {
        CounterInterrogationCommand_initialize(data_flow, self);

        self->objectAddress = ioa;

        self->qcc = qcc;
    }

    return self;
}

void
CounterInterrogationCommand_destroy(int *data_flow, CounterInterrogationCommand self)
{
    Memory_free(self);
}

QualifierOfCIC
CounterInterrogationCommand_getQCC(int *data_flow, CounterInterrogationCommand self)
{
    return self->qcc;
}

CounterInterrogationCommand
CounterInterrogationCommand_getFromBuffer(int *data_flow, CounterInterrogationCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA) + 1)
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
        self = (CounterInterrogationCommand) Memory_malloc(data_flow, sizeof(struct sCounterInterrogationCommand));

    if (self != 
               ((void *)0)
                   ) {
        CounterInterrogationCommand_initialize(data_flow, self);

        InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

        startIndex += parameters->sizeOfIOA;


        self->qcc = msg[startIndex];
    }

    return self;
}





static 
      _Bool

TestCommand_encode(int *data_flow, TestCommand self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                      _Bool 
                                                                                           isSequence)
{
    int size = isSequence ? 2 : (parameters->sizeOfIOA + 2);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_setNextByte(data_flow, frame, self->byte1);
    Frame_setNextByte(data_flow, frame, self->byte2);

    return 
          1
              ;
}

struct sInformationObjectVFT testCommandVFT = {
        (EncodeFunction) TestCommand_encode,
        (DestroyFunction) TestCommand_destroy
};

static void
TestCommand_initialize(int *data_flow, TestCommand self)
{
    self->virtualFunctionTable = &(testCommandVFT);
    self->type = C_TS_NA_1;
}

TestCommand
TestCommand_create(int *data_flow, TestCommand self)
{
    if (self == 
               ((void *)0)
                   )
        self = (TestCommand) Memory_malloc(data_flow, sizeof(struct sTestCommand));

    if (self) {
        TestCommand_initialize(data_flow, self);

        self->objectAddress = 0;

        self->byte1 = 0xcc;
        self->byte2 = 0x55;
    }

    return self;
}

void
TestCommand_destroy(int *data_flow, TestCommand self)
{
    Memory_free(self);
}


_Bool

TestCommand_isValid(int *data_flow, TestCommand self)
{
    if ((self->byte1 == 0xcc) && (self->byte2 == 0x55))
        return 
              1
                  ;
    else
        return 
              0
                   ;
}

TestCommand
TestCommand_getFromBuffer(int *data_flow, TestCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA) + 1)
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
        self = (TestCommand) Memory_malloc(data_flow, sizeof(struct sTestCommand));

    if (self != 
               ((void *)0)
                   ) {
        TestCommand_initialize(data_flow, self);

        InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

        startIndex += parameters->sizeOfIOA;


        self->byte1 = msg[startIndex++];
        self->byte2 = msg[startIndex];
    }

    return self;
}





static 
      _Bool

ResetProcessCommand_encode(int *data_flow, ResetProcessCommand self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                      _Bool 
                                                                                                           isSequence)
{
    int size = isSequence ? 1 : (parameters->sizeOfIOA + 1);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_setNextByte(data_flow, frame, self->qrp);

    return 
          1
              ;
}

struct sInformationObjectVFT resetProcessCommandVFT = {
        (EncodeFunction) ResetProcessCommand_encode,
        (DestroyFunction) ResetProcessCommand_destroy
};

static void
ResetProcessCommand_initialize(int *data_flow, ResetProcessCommand self)
{
    self->virtualFunctionTable = &(resetProcessCommandVFT);
    self->type = C_RP_NA_1;
}

ResetProcessCommand
ResetProcessCommand_create(int *data_flow, ResetProcessCommand self, int ioa, QualifierOfRPC qrp)
{
    if (self == 
               ((void *)0)
                   )
        self = (ResetProcessCommand) Memory_malloc(data_flow, sizeof(struct sResetProcessCommand));

    if (self) {
        ResetProcessCommand_initialize(data_flow, self);

        self->objectAddress = ioa;

        self->qrp = qrp;
    }

    return self;
}

void
ResetProcessCommand_destroy(int *data_flow, ResetProcessCommand self)
{
    Memory_free(self);
}

QualifierOfRPC
ResetProcessCommand_getQRP(int *data_flow, ResetProcessCommand self)
{
    return self->qrp;
}

ResetProcessCommand
ResetProcessCommand_getFromBuffer(int *data_flow, ResetProcessCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA) + 1)
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
        self = (ResetProcessCommand) Memory_malloc(data_flow, sizeof(struct sResetProcessCommand));

    if (self != 
               ((void *)0)
                   ) {
        ResetProcessCommand_initialize(data_flow, self);

        InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

        startIndex += parameters->sizeOfIOA;


        self->qrp = msg[startIndex];
    }

    return self;
}





static 
      _Bool

DelayAcquisitionCommand_encode(int *data_flow, DelayAcquisitionCommand self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                              _Bool 
                                                                                                                   isSequence)
{
    int size = isSequence ? 2 : (parameters->sizeOfIOA + 2);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_appendBytes(data_flow, frame, self->delay.encodedValue, 2);

    return 
          1
              ;
}

struct sInformationObjectVFT DelayAcquisitionCommandVFT = {
        (EncodeFunction) DelayAcquisitionCommand_encode,
        (DestroyFunction) DelayAcquisitionCommand_destroy
};

static void
DelayAcquisitionCommand_initialize(int *data_flow, DelayAcquisitionCommand self)
{
    self->virtualFunctionTable = &(DelayAcquisitionCommandVFT);
    self->type = C_CD_NA_1;
}

DelayAcquisitionCommand
DelayAcquisitionCommand_create(int *data_flow, DelayAcquisitionCommand self, int ioa, CP16Time2a delay)
{
    if (self == 
               ((void *)0)
                   )
        self = (DelayAcquisitionCommand) Memory_malloc(data_flow, sizeof(struct sDelayAcquisitionCommand));

    if (self) {
        DelayAcquisitionCommand_initialize(data_flow, self);

        self->objectAddress = ioa;

        self->delay = *delay;
    }

    return self;
}

void
DelayAcquisitionCommand_destroy(int *data_flow, DelayAcquisitionCommand self)
{
    Memory_free(self);
}

CP16Time2a
DelayAcquisitionCommand_getDelay(int *data_flow, DelayAcquisitionCommand self)
{
    return &(self->delay);
}

DelayAcquisitionCommand
DelayAcquisitionCommand_getFromBuffer(int *data_flow, DelayAcquisitionCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA) + 1)
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
        self = (DelayAcquisitionCommand) Memory_malloc(data_flow, sizeof(struct sDelayAcquisitionCommand));

    if (self != 
               ((void *)0)
                   ) {
        DelayAcquisitionCommand_initialize(data_flow, self);

        InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

        startIndex += parameters->sizeOfIOA;


        CP16Time2a_getFromBuffer(data_flow, &(self->delay), msg, msgSize, startIndex);
    }

    return self;
}






static 
      _Bool

ParameterActivation_encode(int *data_flow, ParameterActivation self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                      _Bool 
                                                                                                           isSequence)
{
    int size = isSequence ? 1 : (parameters->sizeOfIOA + 1);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_setNextByte(data_flow, frame, self->qpa);

    return 
          1
              ;
}

struct sInformationObjectVFT parameterActivationVFT = {
        (EncodeFunction) ParameterActivation_encode,
        (DestroyFunction) ParameterActivation_destroy
};

static void
ParameterActivation_initialize(int *data_flow, ParameterActivation self)
{
    self->virtualFunctionTable = &(parameterActivationVFT);
    self->type = P_AC_NA_1;
}

void
ParameterActivation_destroy(int *data_flow, ParameterActivation self)
{
    Memory_free(self);
}


ParameterActivation
ParameterActivation_create(int *data_flow, ParameterActivation self, int ioa, QualifierOfParameterActivation qpa)
{
    if (self == 
               ((void *)0)
                   )
        self = (ParameterActivation) Memory_calloc(data_flow, 1, sizeof(struct sParameterActivation));

    if (self) {
        ParameterActivation_initialize(data_flow, self);

        self->objectAddress = ioa;
        self->qpa = qpa;
    }

    return self;
}


QualifierOfParameterActivation
ParameterActivation_getQuality(int *data_flow, ParameterActivation self)
{
    return self->qpa;
}

ParameterActivation
ParameterActivation_getFromBuffer(int *data_flow, ParameterActivation self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    if (self == 
               ((void *)0)
                   )
        self = (ParameterActivation) Memory_malloc(data_flow, sizeof(struct sParameterActivation));

    if (self) {
        ParameterActivation_initialize(data_flow, self);

        InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

        startIndex += parameters->sizeOfIOA;


        self->qpa = (QualifierOfParameterActivation) msg [startIndex++];
    }

    return self;
}





static 
      _Bool

EndOfInitialization_encode(int *data_flow, EndOfInitialization self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                      _Bool 
                                                                                                           isSequence)
{
    int size = isSequence ? 1 : (parameters->sizeOfIOA + 1);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_setNextByte(data_flow, frame, self->coi);

    return 
          1
              ;
}

struct sInformationObjectVFT EndOfInitializationVFT = {
        (EncodeFunction) EndOfInitialization_encode,
        (DestroyFunction) EndOfInitialization_destroy
};

static void
EndOfInitialization_initialize(int *data_flow, EndOfInitialization self)
{
    self->virtualFunctionTable = &(EndOfInitializationVFT);
    self->type = M_EI_NA_1;
}

EndOfInitialization
EndOfInitialization_create(int *data_flow, EndOfInitialization self, uint8_t coi)
{
    if (self == 
               ((void *)0)
                   )
       self = (EndOfInitialization) Memory_malloc(data_flow, sizeof(struct sEndOfInitialization));

    if (self) {
        EndOfInitialization_initialize(data_flow, self);

        self->objectAddress = 0;

        self->coi = coi;
    }

    return self;
};

void
EndOfInitialization_destroy(int *data_flow, EndOfInitialization self)
{
    Memory_free(self);
}

uint8_t
EndOfInitialization_getCOI(int *data_flow, EndOfInitialization self)
{
    return self->coi;
}

EndOfInitialization
EndOfInitialization_getFromBuffer(int *data_flow, EndOfInitialization self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA) + 1)
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
       self = (EndOfInitialization) Memory_malloc(data_flow, sizeof(struct sEndOfInitialization));

    if (self) {
        EndOfInitialization_initialize(data_flow, self);

        InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

        startIndex += parameters->sizeOfIOA;


        self->coi = msg[startIndex];
    }

    return self;
};





static 
      _Bool

FileReady_encode(int *data_flow, FileReady self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                  _Bool 
                                                                                       isSequence)
{
    int size = isSequence ? 1 : (parameters->sizeOfIOA + 1);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_setNextByte (data_flow, frame, (uint8_t)((int) self->nof % 256));
    Frame_setNextByte (data_flow, frame, (uint8_t)((int) self->nof / 256));

    Frame_setNextByte (data_flow, frame, (uint8_t)(self->lengthOfFile % 0x100));
    Frame_setNextByte (data_flow, frame, (uint8_t)((self->lengthOfFile / 0x100) % 0x100));
    Frame_setNextByte (data_flow, frame, (uint8_t)((self->lengthOfFile / 0x10000) % 0x100));

    Frame_setNextByte (data_flow, frame, self->frq);

    return 
          1
              ;
}

struct sInformationObjectVFT FileReadyVFT = {
        (EncodeFunction) FileReady_encode,
        (DestroyFunction) FileReady_destroy
};

static void
FileReady_initialize(int *data_flow, FileReady self)
{
    self->virtualFunctionTable = &(FileReadyVFT);
    self->type = F_FR_NA_1;
}

FileReady
FileReady_create(int *data_flow, FileReady self, int ioa, uint16_t nof, uint32_t lengthOfFile, 
                                                                              _Bool 
                                                                                   positive)
{
    if (self == 
               ((void *)0)
                   )
       self = (FileReady) Memory_malloc(data_flow, sizeof(struct sFileReady));

    if (self) {
        FileReady_initialize(data_flow, self);

        self->objectAddress = ioa;
        self->nof = nof;
        self->lengthOfFile = lengthOfFile;

        if (positive)
            self->frq = 0x80;
        else
            self->frq = 0;
    }

    return self;
}

uint8_t
FileReady_getFRQ(int *data_flow, FileReady self)
{
    return self->frq;
}

void
FileReady_setFRQ(int *data_flow, FileReady self, uint8_t frq)
{
    self->frq = frq;
}


_Bool

FileReady_isPositive(int *data_flow, FileReady self)
{
    return ((self->frq & 0x80) == 0x80);
}

uint16_t
FileReady_getNOF(int *data_flow, FileReady self)
{
    return self->nof;
}

uint32_t
FileReady_getLengthOfFile(int *data_flow, FileReady self)
{
    return self->lengthOfFile;
}

void
FileReady_destroy(int *data_flow, FileReady self)
{
    Memory_free(self);
}

FileReady
FileReady_getFromBuffer(int *data_flow, FileReady self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA) + 6)
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
       self = (FileReady) Memory_malloc(data_flow, sizeof(struct sFileReady));

    if (self != 
               ((void *)0)
                   ) {
        FileReady_initialize(data_flow, self);

        InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

        startIndex += parameters->sizeOfIOA;

        self->nof = msg[startIndex++];
        self->nof += (msg[startIndex++] * 0x100);

        self->lengthOfFile = msg [startIndex++];
        self->lengthOfFile += (msg [startIndex++] * 0x100);
        self->lengthOfFile += (msg [startIndex++] * 0x10000);


        self->frq = msg[startIndex];
    }

    return self;
};





static 
      _Bool

SectionReady_encode(int *data_flow, SectionReady self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                        _Bool 
                                                                                             isSequence)
{
    int size = isSequence ? 1 : (parameters->sizeOfIOA + 1);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_setNextByte (data_flow, frame, (uint8_t)((int) self->nof % 256));
    Frame_setNextByte (data_flow, frame, (uint8_t)((int) self->nof / 256));

    Frame_setNextByte (data_flow, frame, self->nameOfSection);

    Frame_setNextByte (data_flow, frame, (uint8_t)(self->lengthOfSection % 0x100));
    Frame_setNextByte (data_flow, frame, (uint8_t)((self->lengthOfSection / 0x100) % 0x100));
    Frame_setNextByte (data_flow, frame, (uint8_t)((self->lengthOfSection / 0x10000) % 0x100));

    Frame_setNextByte (data_flow, frame, self->srq);

    return 
          1
              ;
}

struct sInformationObjectVFT SectionReadyVFT = {
        (EncodeFunction) SectionReady_encode,
        (DestroyFunction) SectionReady_destroy
};

static void
SectionReady_initialize(int *data_flow, SectionReady self)
{
    self->virtualFunctionTable = &(SectionReadyVFT);
    self->type = F_SR_NA_1;
}

SectionReady
SectionReady_create(int *data_flow, SectionReady self, int ioa, uint16_t nof, uint8_t nos, uint32_t lengthOfSection, 
                                                                                                    _Bool 
                                                                                                         notReady)
{
    if (self == 
               ((void *)0)
                   )
       self = (SectionReady) Memory_malloc(data_flow, sizeof(struct sSectionReady));

    if (self != 
               ((void *)0)
                   ) {
        SectionReady_initialize(data_flow, self);

        self->objectAddress = ioa;
        self->nof = nof;
        self->nameOfSection = nos;
        self->lengthOfSection = lengthOfSection;

        if (notReady)
            self->srq = 0x80;
        else
            self->srq = 0;
    }

    return self;
}



_Bool

SectionReady_isNotReady(int *data_flow, SectionReady self)
{
    return ((self->srq & 0x80) == 0x80);
}

uint8_t
SectionReady_getSRQ(int *data_flow, SectionReady self)
{
    return self->srq;
}

void
SectionReady_setSRQ(int *data_flow, SectionReady self, uint8_t srq)
{
    self->srq = srq;
}

uint16_t
SectionReady_getNOF(int *data_flow, SectionReady self)
{
    return self->nof;
}

uint8_t
SectionReady_getNameOfSection(int *data_flow, SectionReady self)
{
    return self->nameOfSection;
}

uint32_t
SectionReady_getLengthOfSection(int *data_flow, SectionReady self)
{
    return self->lengthOfSection;
}

void
SectionReady_destroy(int *data_flow, SectionReady self)
{
    Memory_free(self);
}


SectionReady
SectionReady_getFromBuffer(int *data_flow, SectionReady self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA) + 7)
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
       self = (SectionReady) Memory_malloc(data_flow, sizeof(struct sSectionReady));

    if (self != 
               ((void *)0)
                   ) {
        SectionReady_initialize(data_flow, self);

        InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

        startIndex += parameters->sizeOfIOA;

        self->nof = msg[startIndex++];
        self->nof += (msg[startIndex++] * 0x100);

        self->nameOfSection = msg[startIndex++];

        self->lengthOfSection = msg [startIndex++];
        self->lengthOfSection += (msg [startIndex++] * 0x100);
        self->lengthOfSection += (msg [startIndex++] * 0x10000);

        self->srq = msg[startIndex];
    }

    return self;
};






static 
      _Bool

FileCallOrSelect_encode(int *data_flow, FileCallOrSelect self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                _Bool 
                                                                                                     isSequence)
{
    int size = isSequence ? 1 : (parameters->sizeOfIOA + 1);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_setNextByte (data_flow, frame, (uint8_t)((int) self->nof % 256));
    Frame_setNextByte (data_flow, frame, (uint8_t)((int) self->nof / 256));

    Frame_setNextByte (data_flow, frame, self->nameOfSection);

    Frame_setNextByte (data_flow, frame, self->scq);

    return 
          1
              ;
}

struct sInformationObjectVFT FileCallOrSelectVFT = {
        (EncodeFunction) FileCallOrSelect_encode,
        (DestroyFunction) FileCallOrSelect_destroy
};

static void
FileCallOrSelect_initialize(int *data_flow, FileCallOrSelect self)
{
    self->virtualFunctionTable = &(FileCallOrSelectVFT);
    self->type = F_SC_NA_1;
}

FileCallOrSelect
FileCallOrSelect_create(int *data_flow, FileCallOrSelect self, int ioa, uint16_t nof, uint8_t nos, uint8_t scq)
{
    if (self == 
               ((void *)0)
                   )
       self = (FileCallOrSelect) Memory_malloc(data_flow, sizeof(struct sFileCallOrSelect));

    if (self != 
               ((void *)0)
                   ) {
        FileCallOrSelect_initialize(data_flow, self);

        self->objectAddress = ioa;
        self->nof = nof;
        self->nameOfSection = nos;
        self->scq = scq;
    }

    return self;
}

uint16_t
FileCallOrSelect_getNOF(int *data_flow, FileCallOrSelect self)
{
    return self->nof;
}

uint8_t
FileCallOrSelect_getNameOfSection(int *data_flow, FileCallOrSelect self)
{
    return self->nameOfSection;
}

uint8_t
FileCallOrSelect_getSCQ(int *data_flow, FileCallOrSelect self)
{
    return self->scq;
}


void
FileCallOrSelect_destroy(int *data_flow, FileCallOrSelect self)
{
    Memory_free(self);
}


FileCallOrSelect
FileCallOrSelect_getFromBuffer(int *data_flow, FileCallOrSelect self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA) + 4)
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
       self = (FileCallOrSelect) Memory_malloc(data_flow, sizeof(struct sFileCallOrSelect));

    if (self != 
               ((void *)0)
                   ) {
        FileCallOrSelect_initialize(data_flow, self);

        InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

        startIndex += parameters->sizeOfIOA;

        self->nof = msg[startIndex++];
        self->nof += (msg[startIndex++] * 0x100);

        self->nameOfSection = msg[startIndex++];

        self->scq = msg[startIndex];
    }

    return self;
};





static 
      _Bool

FileLastSegmentOrSection_encode(int *data_flow, FileLastSegmentOrSection self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                                _Bool 
                                                                                                                     isSequence)
{
    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_setNextByte (data_flow, frame, (uint8_t)((int) self->nof % 256));
    Frame_setNextByte (data_flow, frame, (uint8_t)((int) self->nof / 256));

    Frame_setNextByte (data_flow, frame, self->nameOfSection);

    Frame_setNextByte (data_flow, frame, self->lsq);

    Frame_setNextByte (data_flow, frame, self->chs);

    return 
          1
              ;
}

struct sInformationObjectVFT FileLastSegmentOrSectionVFT = {
        (EncodeFunction) FileLastSegmentOrSection_encode,
        (DestroyFunction) FileLastSegmentOrSection_destroy
};

static void
FileLastSegmentOrSection_initialize(int *data_flow, FileLastSegmentOrSection self)
{
    self->virtualFunctionTable = &(FileLastSegmentOrSectionVFT);
    self->type = F_LS_NA_1;
}

FileLastSegmentOrSection
FileLastSegmentOrSection_create(int *data_flow, FileLastSegmentOrSection self, int ioa, uint16_t nof, uint8_t nos, uint8_t lsq, uint8_t chs)
{
    if (self == 
               ((void *)0)
                   )
       self = (FileLastSegmentOrSection) Memory_malloc(data_flow, sizeof(struct sFileLastSegmentOrSection));

    if (self != 
               ((void *)0)
                   ) {
        FileLastSegmentOrSection_initialize(data_flow, self);

        self->objectAddress = ioa;
        self->nof = nof;
        self->nameOfSection = nos;
        self->lsq = lsq;
        self->chs = chs;
    }

    return self;
}

uint16_t
FileLastSegmentOrSection_getNOF(int *data_flow, FileLastSegmentOrSection self)
{
    return self->nof;
}

uint8_t
FileLastSegmentOrSection_getNameOfSection(int *data_flow, FileLastSegmentOrSection self)
{
    return self->nameOfSection;
}

uint8_t
FileLastSegmentOrSection_getLSQ(int *data_flow, FileLastSegmentOrSection self)
{
    return self->lsq;
}

uint8_t
FileLastSegmentOrSection_getCHS(int *data_flow, FileLastSegmentOrSection self)
{
    return self->chs;
}

void
FileLastSegmentOrSection_destroy(int *data_flow, FileLastSegmentOrSection self)
{
    Memory_free(self);
}

FileLastSegmentOrSection
FileLastSegmentOrSection_getFromBuffer(int *data_flow, FileLastSegmentOrSection self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA) + 5)
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
       self = (FileLastSegmentOrSection) Memory_malloc(data_flow, sizeof(struct sFileLastSegmentOrSection));

    if (self != 
               ((void *)0)
                   ) {
        FileLastSegmentOrSection_initialize(data_flow, self);

        InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

        startIndex += parameters->sizeOfIOA;

        self->nof = msg[startIndex++];
        self->nof += (msg[startIndex++] * 0x100);

        self->nameOfSection = msg[startIndex++];

        self->lsq = msg[startIndex];

        self->chs = msg[startIndex];
    }

    return self;
};





static 
      _Bool

FileACK_encode(int *data_flow, FileACK self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                              _Bool 
                                                                                   isSequence)
{
    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_setNextByte (data_flow, frame, (uint8_t)((int) self->nof % 256));
    Frame_setNextByte (data_flow, frame, (uint8_t)((int) self->nof / 256));

    Frame_setNextByte (data_flow, frame, self->nameOfSection);

    Frame_setNextByte (data_flow, frame, self->afq);

    return 
          1
              ;
}

struct sInformationObjectVFT FileACKVFT = {
        (EncodeFunction) FileACK_encode,
        (DestroyFunction) FileACK_destroy
};

static void
FileACK_initialize(int *data_flow, FileACK self)
{
    self->virtualFunctionTable = &(FileACKVFT);
    self->type = F_AF_NA_1;
}


FileACK
FileACK_create(int *data_flow, FileACK self, int ioa, uint16_t nof, uint8_t nos, uint8_t afq)
{
    if (self == 
               ((void *)0)
                   )
       self = (FileACK) Memory_malloc(data_flow, sizeof(struct sFileACK));

    if (self != 
               ((void *)0)
                   ) {
        FileACK_initialize(data_flow, self);

        self->objectAddress = ioa;
        self->nof = nof;
        self->nameOfSection = nos;
        self->afq = afq;
    }

    return self;
}

uint16_t
FileACK_getNOF(int *data_flow, FileACK self)
{
    return self->nof;
}

uint8_t
FileACK_getNameOfSection(int *data_flow, FileACK self)
{
    return self->nameOfSection;
}

uint8_t
FileACK_getAFQ(int *data_flow, FileACK self)
{
    return self->afq;
}

void
FileACK_destroy(int *data_flow, FileACK self)
{
    Memory_free(self);
}

FileACK
FileACK_getFromBuffer(int *data_flow, FileACK self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA) + 4)
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
       self = (FileACK) Memory_malloc(data_flow, sizeof(struct sFileACK));

    if (self != 
               ((void *)0)
                   ) {
        FileACK_initialize(data_flow, self);

        InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

        startIndex += parameters->sizeOfIOA;

        self->nof = msg[startIndex++];
        self->nof += (msg[startIndex++] * 0x100);

        self->nameOfSection = msg[startIndex++];

        self->afq = msg[startIndex];
    }

    return self;
};






static 
      _Bool

FileSegment_encode(int *data_flow, FileSegment self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                      _Bool 
                                                                                           isSequence)
{
    if (self->los > FileSegment_GetMaxDataSize(data_flow, parameters))
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_setNextByte (data_flow, frame, (uint8_t)((int) self->nof % 256));
    Frame_setNextByte (data_flow, frame, (uint8_t)((int) self->nof / 256));

    Frame_setNextByte (data_flow, frame, self->nameOfSection);

    Frame_setNextByte (data_flow, frame, self->los);

    Frame_appendBytes (data_flow, frame, self->data, self->los);

    return 
          1
              ;
}

struct sInformationObjectVFT FileSegmentVFT = {
        (EncodeFunction) FileSegment_encode,
        (DestroyFunction) FileSegment_destroy
};

static void
FileSegment_initialize(int *data_flow, FileSegment self)
{
    self->virtualFunctionTable = &(FileSegmentVFT);
    self->type = F_SG_NA_1;
}

FileSegment
FileSegment_create(int *data_flow, FileSegment self, int ioa, uint16_t nof, uint8_t nos, uint8_t* data, uint8_t los)
{
    if (self == 
               ((void *)0)
                   )
       self = (FileSegment) Memory_malloc(data_flow, sizeof(struct sFileSegment));

    if (self != 
               ((void *)0)
                   ) {
        FileSegment_initialize(data_flow, self);

        self->objectAddress = ioa;
        self->nof = nof;
        self->nameOfSection = nos;
        self->data = data;
        self->los = los;
    }

    return self;
}

uint16_t
FileSegment_getNOF(int *data_flow, FileSegment self)
{
    return self->nof;
}

uint8_t
FileSegment_getNameOfSection(int *data_flow, FileSegment self)
{
    return self->nameOfSection;
}

uint8_t
FileSegment_getLengthOfSegment(int *data_flow, FileSegment self)
{
    return self->los;
}

uint8_t*
FileSegment_getSegmentData(int *data_flow, FileSegment self)
{
    return self->data;
}


int
FileSegment_GetMaxDataSize(int *data_flow, CS101_AppLayerParameters parameters)
{
    int maxSize = parameters->maxSizeOfASDU -
        parameters->sizeOfTypeId - parameters->sizeOfVSQ - parameters->sizeOfCA - parameters->sizeOfCOT;

    return maxSize;
}

void
FileSegment_destroy(int *data_flow, FileSegment self)
{
    Memory_free(self);
}

FileSegment
FileSegment_getFromBuffer(int *data_flow, FileSegment self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex)
{
    if ((msgSize - startIndex) < (parameters->sizeOfIOA) + 4)
        return 
              ((void *)0)
                  ;

    uint8_t los = msg[startIndex + 3 + parameters->sizeOfIOA];

    if ((msgSize - startIndex) < (parameters->sizeOfIOA) + 4 + los)
        return 
              ((void *)0)
                  ;

    if (self == 
               ((void *)0)
                   )
       self = (FileSegment) Memory_malloc(data_flow, sizeof(struct sFileSegment));

    if (self != 
               ((void *)0)
                   ) {
        FileSegment_initialize(data_flow, self);

        InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

        startIndex += parameters->sizeOfIOA;

        self->nof = msg[startIndex++];
        self->nof += (msg[startIndex++] * 0x100);

        self->nameOfSection = msg[startIndex++];

        self->los = msg[startIndex++];

        self->data = msg + startIndex;
    }

    return self;
};






static 
      _Bool

FileDirectory_encode(int *data_flow, FileDirectory self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                          _Bool 
                                                                                               isSequence)
{
    int size = isSequence ? 13 : (parameters->sizeOfIOA + 13);

    if (Frame_getSpaceLeft(data_flow, frame) < size)
        return 
              0
                   ;

    InformationObject_encodeBase(data_flow, (InformationObject) self, frame, parameters, isSequence);

    Frame_setNextByte (data_flow, frame, (uint8_t)((int) self->nof % 256));
    Frame_setNextByte (data_flow, frame, (uint8_t)((int) self->nof / 256));

    Frame_setNextByte (data_flow, frame, (uint8_t)(self->lengthOfFile % 0x100));
    Frame_setNextByte (data_flow, frame, (uint8_t)((self->lengthOfFile / 0x100) % 0x100));
    Frame_setNextByte (data_flow, frame, (uint8_t)((self->lengthOfFile / 0x10000) % 0x100));

    Frame_setNextByte (data_flow, frame, self->sof);

    Frame_appendBytes(data_flow, frame, self->creationTime.encodedValue, 7);

    return 
          1
              ;
}

struct sInformationObjectVFT FileDirectoryVFT = {
        (EncodeFunction) FileDirectory_encode,
        (DestroyFunction) FileDirectory_destroy
};

static void
FileDirectory_initialize(int *data_flow, FileDirectory self)
{
    self->virtualFunctionTable = &(FileDirectoryVFT);
    self->type = F_DR_TA_1;
}

FileDirectory
FileDirectory_create(int *data_flow, FileDirectory self, int ioa, uint16_t nof, int lengthOfFile, uint8_t sof, CP56Time2a creationTime)
{
    if (self == 
               ((void *)0)
                   )
        self = (FileDirectory) Memory_malloc(data_flow, sizeof(struct sFileDirectory));

    if (self != 
               ((void *)0)
                   ) {
        FileDirectory_initialize(data_flow, self);

        self->objectAddress = ioa;
        self->nof = nof;
        self->sof = sof;
        self->creationTime = *creationTime;
    }

    return self;
}

uint16_t
FileDirectory_getNOF(int *data_flow, FileDirectory self)
{
    return self->nof;
}

uint8_t
FileDirectory_getSOF(int *data_flow, FileDirectory self)
{
    return self->sof;
}

int
FileDirectory_getSTATUS(int *data_flow, FileDirectory self)
{
    return (int) (self->sof & 0x1f);
}


_Bool

FileDirectory_getLFD(int *data_flow, FileDirectory self)
{
    return ((self->sof & 0x20) == 0x20);
}


_Bool

FileDirectory_getFOR(int *data_flow, FileDirectory self)
{
    return ((self->sof & 0x40) == 0x40);
}


_Bool

FileDirectory_getFA(int *data_flow, FileDirectory self)
{
    return ((self->sof & 0x80) == 0x80);
}


uint8_t
FileDirectory_getLengthOfFile(int *data_flow, FileDirectory self)
{
    return self->lengthOfFile;
}

CP56Time2a
FileDirectory_getCreationTime(int *data_flow, FileDirectory self)
{
    return &(self->creationTime);
}

void
FileDirectory_destroy(int *data_flow, FileDirectory self)
{
    Memory_free(self);
}

FileDirectory
FileDirectory_getFromBuffer(int *data_flow, FileDirectory self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence)
{

    if (self == 
               ((void *)0)
                   )
       self = (FileDirectory) Memory_malloc(data_flow, sizeof(struct sFileDirectory));

    if (self != 
               ((void *)0)
                   ) {

        FileDirectory_initialize(data_flow, self);

        if (!isSequence) {
            InformationObject_getFromBuffer(data_flow, (InformationObject) self, parameters, msg, startIndex);

            startIndex += parameters->sizeOfIOA;
        }

        self->nof = msg[startIndex++];
        self->nof += (msg[startIndex++] * 0x100);

        self->lengthOfFile = msg [startIndex++];
        self->lengthOfFile += (msg [startIndex++] * 0x100);
        self->lengthOfFile += (msg [startIndex++] * 0x10000);


        self->sof = msg[startIndex++];

        CP56Time2a_getFromBuffer(data_flow, &(self->creationTime), msg, msgSize, startIndex);
    }

    return self;
}
