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
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


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





struct _IO_FILE;



typedef struct _IO_FILE FILE;





typedef struct _IO_FILE __FILE;




typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
typedef __builtin_va_list __gnuc_va_list;
struct _IO_jump_t; struct _IO_FILE;





typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
  __off64_t _offset;







  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));




typedef __gnuc_va_list va_list;


typedef _G_fpos_t fpos_t;







extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));








extern FILE *tmpfile (void) ;
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

extern int fflush_unlocked (FILE *__stream);






extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;

extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
extern char *gets (char *__s) __attribute__ ((__deprecated__));


extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);



extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;








extern void perror (const char *__s);






extern int sys_nerr;
extern const char *const sys_errlist[];




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));















extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;


extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));




extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));

extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));


extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int __sigismember (const __sigset_t *, int);
extern int __sigaddset (__sigset_t *, int);
extern int __sigdelset (__sigset_t *, int);







typedef __sig_atomic_t sig_atomic_t;












typedef union sigval
  {
    int sival_int;
    void *sival_ptr;
  } sigval_t;
typedef __clock_t __sigchld_clock_t;



typedef struct
  {
    int si_signo;
    int si_errno;

    int si_code;

    union
      {
 int _pad[((128 / sizeof (int)) - 3)];


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
   } _kill;


 struct
   {
     int si_tid;
     int si_overrun;
     sigval_t si_sigval;
   } _timer;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     sigval_t si_sigval;
   } _rt;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     int si_status;
     __sigchld_clock_t si_utime;
     __sigchld_clock_t si_stime;
   } _sigchld;


 struct
   {
     void *si_addr;
     short int si_addr_lsb;
     struct
       {
  void *_lower;
  void *_upper;
       } si_addr_bnd;
   } _sigfault;


 struct
   {
     long int si_band;
     int si_fd;
   } _sigpoll;


 struct
   {
     void *_call_addr;
     int _syscall;
     unsigned int _arch;
   } _sigsys;
      } _sifields;
  } siginfo_t ;
enum
{
  SI_ASYNCNL = -60,

  SI_TKILL = -6,

  SI_SIGIO,

  SI_ASYNCIO,

  SI_MESGQ,

  SI_TIMER,

  SI_QUEUE,

  SI_USER,

  SI_KERNEL = 0x80

};




enum
{
  ILL_ILLOPC = 1,

  ILL_ILLOPN,

  ILL_ILLADR,

  ILL_ILLTRP,

  ILL_PRVOPC,

  ILL_PRVREG,

  ILL_COPROC,

  ILL_BADSTK

};


enum
{
  FPE_INTDIV = 1,

  FPE_INTOVF,

  FPE_FLTDIV,

  FPE_FLTOVF,

  FPE_FLTUND,

  FPE_FLTRES,

  FPE_FLTINV,

  FPE_FLTSUB

};


enum
{
  SEGV_MAPERR = 1,

  SEGV_ACCERR

};


enum
{
  BUS_ADRALN = 1,

  BUS_ADRERR,

  BUS_OBJERR,

  BUS_MCEERR_AR,

  BUS_MCEERR_AO

};
enum
{
  CLD_EXITED = 1,

  CLD_KILLED,

  CLD_DUMPED,

  CLD_TRAPPED,

  CLD_STOPPED,

  CLD_CONTINUED

};


enum
{
  POLL_IN = 1,

  POLL_OUT,

  POLL_MSG,

  POLL_ERR,

  POLL_PRI,

  POLL_HUP

};
typedef struct sigevent
  {
    sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
 int _pad[((64 / sizeof (int)) - 3)];



 __pid_t _tid;

 struct
   {
     void (*_function) (int *data_flow, sigval_t);
     pthread_attr_t *_attribute;
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;






enum
{
  SIGEV_SIGNAL = 0,

  SIGEV_NONE,

  SIGEV_THREAD,


  SIGEV_THREAD_ID = 4

};




typedef void (*__sighandler_t) (int *data_flow, int);




extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));


extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));

extern int kill (__pid_t __pid, int __sig) __attribute__ ((__nothrow__ , __leaf__));






extern int killpg (__pid_t __pgrp, int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern int raise (int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
extern int gsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern void psignal (int __sig, const char *__s);


extern void psiginfo (const siginfo_t *__pinfo, const char *__s);
extern int sigblock (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));


extern int sigsetmask (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));


extern int siggetmask (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigfillset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigaddset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigdelset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigismember (const sigset_t *__set, int __signo)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
struct sigaction
  {


    union
      {

 __sighandler_t sa_handler;

 void (*sa_sigaction) (int *data_flow, int, siginfo_t *, void *);
      }
    __sigaction_handler;







    __sigset_t sa_mask;


    int sa_flags;


    void (*sa_restorer) (int *data_flowvoid);
  };


extern int sigprocmask (int __how, const sigset_t *__restrict __set,
   sigset_t *__restrict __oset) __attribute__ ((__nothrow__ , __leaf__));






extern int sigsuspend (const sigset_t *__set) __attribute__ ((__nonnull__ (1)));


extern int sigaction (int __sig, const struct sigaction *__restrict __act,
        struct sigaction *__restrict __oact) __attribute__ ((__nothrow__ , __leaf__));


extern int sigpending (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int sigwait (const sigset_t *__restrict __set, int *__restrict __sig)
     __attribute__ ((__nonnull__ (1, 2)));






extern int sigwaitinfo (const sigset_t *__restrict __set,
   siginfo_t *__restrict __info) __attribute__ ((__nonnull__ (1)));






extern int sigtimedwait (const sigset_t *__restrict __set,
    siginfo_t *__restrict __info,
    const struct timespec *__restrict __timeout)
     __attribute__ ((__nonnull__ (1)));



extern int sigqueue (__pid_t __pid, int __sig, const union sigval __val)
     __attribute__ ((__nothrow__ , __leaf__));
extern const char *const _sys_siglist[65];
extern const char *const sys_siglist[65];



struct _fpx_sw_bytes
{
  __uint32_t magic1;
  __uint32_t extended_size;
  __uint64_t xstate_bv;
  __uint32_t xstate_size;
  __uint32_t padding[7];
};

struct _fpreg
{
  unsigned short significand[4];
  unsigned short exponent;
};

struct _fpxreg
{
  unsigned short significand[4];
  unsigned short exponent;
  unsigned short padding[3];
};

struct _xmmreg
{
  __uint32_t element[4];
};





struct _fpstate
{

  __uint32_t cw;
  __uint32_t sw;
  __uint32_t tag;
  __uint32_t ipoff;
  __uint32_t cssel;
  __uint32_t dataoff;
  __uint32_t datasel;
  struct _fpreg _st[8];
  unsigned short status;
  unsigned short magic;


  __uint32_t _fxsr_env[6];
  __uint32_t mxcsr;
  __uint32_t reserved;
  struct _fpxreg _fxsr_st[8];
  struct _xmmreg _xmm[8];
  __uint32_t padding[56];
};
struct sigcontext
{
  unsigned short gs, __gsh;
  unsigned short fs, __fsh;
  unsigned short es, __esh;
  unsigned short ds, __dsh;
  unsigned long edi;
  unsigned long esi;
  unsigned long ebp;
  unsigned long esp;
  unsigned long ebx;
  unsigned long edx;
  unsigned long ecx;
  unsigned long eax;
  unsigned long trapno;
  unsigned long err;
  unsigned long eip;
  unsigned short cs, __csh;
  unsigned long eflags;
  unsigned long esp_at_signal;
  unsigned short ss, __ssh;
  struct _fpstate * fpstate;
  unsigned long oldmask;
  unsigned long cr2;
};
struct _xsave_hdr
{
  __uint64_t xstate_bv;
  __uint64_t reserved1[2];
  __uint64_t reserved2[5];
};

struct _ymmh_state
{
  __uint32_t ymmh_space[64];
};

struct _xstate
{
  struct _fpstate fpstate;
  struct _xsave_hdr xstate_hdr;
  struct _ymmh_state ymmh;
};


extern int sigreturn (struct sigcontext *__scp) __attribute__ ((__nothrow__ , __leaf__));










extern int siginterrupt (int __sig, int __interrupt) __attribute__ ((__nothrow__ , __leaf__));

struct sigstack
  {
    void *ss_sp;
    int ss_onstack;
  };



enum
{
  SS_ONSTACK = 1,

  SS_DISABLE

};
typedef struct sigaltstack
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;


typedef int greg_t;





typedef greg_t gregset_t[19];
struct _libc_fpreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
};

struct _libc_fpstate
{
  unsigned long int cw;
  unsigned long int sw;
  unsigned long int tag;
  unsigned long int ipoff;
  unsigned long int cssel;
  unsigned long int dataoff;
  unsigned long int datasel;
  struct _libc_fpreg _st[8];
  unsigned long int status;
};


typedef struct _libc_fpstate *fpregset_t;


typedef struct
  {
    gregset_t gregs;


    fpregset_t fpregs;
    unsigned long int oldmask;
    unsigned long int cr2;
  } mcontext_t;


typedef struct ucontext
  {
    unsigned long int uc_flags;
    struct ucontext *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    __sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
  } ucontext_t;





extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));



extern int sigaltstack (const struct sigaltstack *__restrict __ss,
   struct sigaltstack *__restrict __oss) __attribute__ ((__nothrow__ , __leaf__));
extern int pthread_sigmask (int __how,
       const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)__attribute__ ((__nothrow__ , __leaf__));


extern int pthread_kill (pthread_t __threadid, int __signo) __attribute__ ((__nothrow__ , __leaf__));






extern int __libc_current_sigrtmin (void) __attribute__ ((__nothrow__ , __leaf__));

extern int __libc_current_sigrtmax (void) __attribute__ ((__nothrow__ , __leaf__));









struct sched_param
  {
    int __sched_priority;
  };










struct __sched_param
  {
    int __sched_priority;
  };
typedef unsigned long int __cpu_mask;






typedef struct
{
  __cpu_mask __bits[1024 / (8 * sizeof (__cpu_mask))];
} cpu_set_t;


extern int __sched_cpucount (size_t __setsize, const cpu_set_t *__setp)
  __attribute__ ((__nothrow__ , __leaf__));
extern cpu_set_t *__sched_cpualloc (size_t __count) __attribute__ ((__nothrow__ , __leaf__)) ;
extern void __sched_cpufree (cpu_set_t *__set) __attribute__ ((__nothrow__ , __leaf__));









extern int sched_setparam (__pid_t __pid, const struct sched_param *__param)
     __attribute__ ((__nothrow__ , __leaf__));


extern int sched_getparam (__pid_t __pid, struct sched_param *__param) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_setscheduler (__pid_t __pid, int __policy,
          const struct sched_param *__param) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_getscheduler (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_yield (void) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_get_priority_max (int __algorithm) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_get_priority_min (int __algorithm) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_rr_get_interval (__pid_t __pid, struct timespec *__t) __attribute__ ((__nothrow__ , __leaf__));














struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;



extern clock_t clock (void) __attribute__ ((__nothrow__ , __leaf__));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));

extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     __locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *gmtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));





extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));





extern char *asctime (const struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));







extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__ , __leaf__));



extern int daylight;
extern long int timezone;





extern int stime (const time_t *__when) __attribute__ ((__nothrow__ , __leaf__));
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int dysize (int __year) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     __attribute__ ((__nothrow__ , __leaf__));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__ , __leaf__));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__ , __leaf__));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));



typedef int __jmp_buf[6];



enum
{
  PTHREAD_CREATE_JOINABLE,

  PTHREAD_CREATE_DETACHED

};



enum
{
  PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_ADAPTIVE_NP

  ,
  PTHREAD_MUTEX_NORMAL = PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE = PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK = PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_NORMAL





};




enum
{
  PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_STALLED_NP = PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_ROBUST,
  PTHREAD_MUTEX_ROBUST_NP = PTHREAD_MUTEX_ROBUST
};





enum
{
  PTHREAD_PRIO_NONE,
  PTHREAD_PRIO_INHERIT,
  PTHREAD_PRIO_PROTECT
};
enum
{
  PTHREAD_RWLOCK_PREFER_READER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP,
  PTHREAD_RWLOCK_DEFAULT_NP = PTHREAD_RWLOCK_PREFER_READER_NP
};
enum
{
  PTHREAD_INHERIT_SCHED,

  PTHREAD_EXPLICIT_SCHED

};



enum
{
  PTHREAD_SCOPE_SYSTEM,

  PTHREAD_SCOPE_PROCESS

};



enum
{
  PTHREAD_PROCESS_PRIVATE,

  PTHREAD_PROCESS_SHARED

};
struct _pthread_cleanup_buffer
{
  void (*__routine) (int *data_flow, void *);
  void *__arg;
  int __canceltype;
  struct _pthread_cleanup_buffer *__prev;
};


enum
{
  PTHREAD_CANCEL_ENABLE,

  PTHREAD_CANCEL_DISABLE

};
enum
{
  PTHREAD_CANCEL_DEFERRED,

  PTHREAD_CANCEL_ASYNCHRONOUS

};





extern int pthread_create (pthread_t *__restrict __newthread,
      const pthread_attr_t *__restrict __attr,
      void *(*__start_routine) (int *data_flow, void *),
      void *__restrict __arg) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3)));





extern void pthread_exit (void *__retval) __attribute__ ((__noreturn__));







extern int pthread_join (pthread_t __th, void **__thread_return);
extern int pthread_detach (pthread_t __th) __attribute__ ((__nothrow__ , __leaf__));



extern pthread_t pthread_self (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int pthread_equal (pthread_t __thread1, pthread_t __thread2)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));







extern int pthread_attr_init (pthread_attr_t *__attr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_destroy (pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getdetachstate (const pthread_attr_t *__attr,
     int *__detachstate)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setdetachstate (pthread_attr_t *__attr,
     int __detachstate)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getguardsize (const pthread_attr_t *__attr,
          size_t *__guardsize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setguardsize (pthread_attr_t *__attr,
          size_t __guardsize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getschedparam (const pthread_attr_t *__restrict __attr,
           struct sched_param *__restrict __param)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setschedparam (pthread_attr_t *__restrict __attr,
           const struct sched_param *__restrict
           __param) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_getschedpolicy (const pthread_attr_t *__restrict
     __attr, int *__restrict __policy)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setschedpolicy (pthread_attr_t *__attr, int __policy)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getinheritsched (const pthread_attr_t *__restrict
      __attr, int *__restrict __inherit)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setinheritsched (pthread_attr_t *__attr,
      int __inherit)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getscope (const pthread_attr_t *__restrict __attr,
      int *__restrict __scope)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setscope (pthread_attr_t *__attr, int __scope)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getstackaddr (const pthread_attr_t *__restrict
          __attr, void **__restrict __stackaddr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__deprecated__));





extern int pthread_attr_setstackaddr (pthread_attr_t *__attr,
          void *__stackaddr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__));


extern int pthread_attr_getstacksize (const pthread_attr_t *__restrict
          __attr, size_t *__restrict __stacksize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int pthread_attr_setstacksize (pthread_attr_t *__attr,
          size_t __stacksize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getstack (const pthread_attr_t *__restrict __attr,
      void **__restrict __stackaddr,
      size_t *__restrict __stacksize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3)));




extern int pthread_attr_setstack (pthread_attr_t *__attr, void *__stackaddr,
      size_t __stacksize) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_setschedparam (pthread_t __target_thread, int __policy,
      const struct sched_param *__param)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));


extern int pthread_getschedparam (pthread_t __target_thread,
      int *__restrict __policy,
      struct sched_param *__restrict __param)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));


extern int pthread_setschedprio (pthread_t __target_thread, int __prio)
     __attribute__ ((__nothrow__ , __leaf__));
extern int pthread_once (pthread_once_t *__once_control,
    void (*__init_routine) (int *data_flowvoid)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_setcancelstate (int __state, int *__oldstate);



extern int pthread_setcanceltype (int __type, int *__oldtype);


extern int pthread_cancel (pthread_t __th);




extern void pthread_testcancel (void);




typedef struct
{
  struct
  {
    __jmp_buf __cancel_jmp_buf;
    int __mask_was_saved;
  } __cancel_jmp_buf[1];
  void *__pad[4];
} __pthread_unwind_buf_t __attribute__ ((__aligned__));
struct __pthread_cleanup_frame
{
  void (*__cancel_routine) (int *data_flow, void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;
};
extern void __pthread_register_cancel (__pthread_unwind_buf_t *__buf)
     __attribute__ ((__regparm__ (1)));
extern void __pthread_unregister_cancel (__pthread_unwind_buf_t *__buf)
  __attribute__ ((__regparm__ (1)));
extern void __pthread_unwind_next (__pthread_unwind_buf_t *__buf)
     __attribute__ ((__regparm__ (1))) __attribute__ ((__noreturn__))

     __attribute__ ((__weak__))

     ;



struct __jmp_buf_tag;
extern int __sigsetjmp (struct __jmp_buf_tag *__env, int __savemask) __attribute__ ((__nothrow__));





extern int pthread_mutex_init (pthread_mutex_t *__mutex,
          const pthread_mutexattr_t *__mutexattr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_destroy (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_trylock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_lock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutex_timedlock (pthread_mutex_t *__restrict __mutex,
        const struct timespec *__restrict
        __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutex_unlock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutex_getprioceiling (const pthread_mutex_t *
      __restrict __mutex,
      int *__restrict __prioceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutex_setprioceiling (pthread_mutex_t *__restrict __mutex,
      int __prioceiling,
      int *__restrict __old_ceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));




extern int pthread_mutex_consistent (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_mutexattr_init (pthread_mutexattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_destroy (pthread_mutexattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_getpshared (const pthread_mutexattr_t *
      __restrict __attr,
      int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_setpshared (pthread_mutexattr_t *__attr,
      int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_gettype (const pthread_mutexattr_t *__restrict
          __attr, int *__restrict __kind)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int pthread_mutexattr_settype (pthread_mutexattr_t *__attr, int __kind)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_getprotocol (const pthread_mutexattr_t *
       __restrict __attr,
       int *__restrict __protocol)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutexattr_setprotocol (pthread_mutexattr_t *__attr,
       int __protocol)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_getprioceiling (const pthread_mutexattr_t *
          __restrict __attr,
          int *__restrict __prioceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_setprioceiling (pthread_mutexattr_t *__attr,
          int __prioceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_getrobust (const pthread_mutexattr_t *__attr,
     int *__robustness)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));







extern int pthread_mutexattr_setrobust (pthread_mutexattr_t *__attr,
     int __robustness)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_rwlock_init (pthread_rwlock_t *__restrict __rwlock,
    const pthread_rwlockattr_t *__restrict
    __attr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_destroy (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_rdlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_tryrdlock (pthread_rwlock_t *__rwlock)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_rwlock_timedrdlock (pthread_rwlock_t *__restrict __rwlock,
           const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_rwlock_wrlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_trywrlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_rwlock_timedwrlock (pthread_rwlock_t *__restrict __rwlock,
           const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_rwlock_unlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int pthread_rwlockattr_init (pthread_rwlockattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_destroy (pthread_rwlockattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_getpshared (const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_rwlockattr_setpshared (pthread_rwlockattr_t *__attr,
       int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_getkind_np (const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pref)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_rwlockattr_setkind_np (pthread_rwlockattr_t *__attr,
       int __pref) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int pthread_cond_init (pthread_cond_t *__restrict __cond,
         const pthread_condattr_t *__restrict __cond_attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_destroy (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_signal (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_broadcast (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int pthread_cond_wait (pthread_cond_t *__restrict __cond,
         pthread_mutex_t *__restrict __mutex)
     __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_cond_timedwait (pthread_cond_t *__restrict __cond,
       pthread_mutex_t *__restrict __mutex,
       const struct timespec *__restrict __abstime)
     __attribute__ ((__nonnull__ (1, 2, 3)));




extern int pthread_condattr_init (pthread_condattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_condattr_destroy (pthread_condattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_condattr_getpshared (const pthread_condattr_t *
     __restrict __attr,
     int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_condattr_setpshared (pthread_condattr_t *__attr,
     int __pshared) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_condattr_getclock (const pthread_condattr_t *
          __restrict __attr,
          __clockid_t *__restrict __clock_id)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_condattr_setclock (pthread_condattr_t *__attr,
          __clockid_t __clock_id)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_spin_init (pthread_spinlock_t *__lock, int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_destroy (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_lock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_trylock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_unlock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int pthread_barrier_init (pthread_barrier_t *__restrict __barrier,
     const pthread_barrierattr_t *__restrict
     __attr, unsigned int __count)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrier_destroy (pthread_barrier_t *__barrier)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrier_wait (pthread_barrier_t *__barrier)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_barrierattr_init (pthread_barrierattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrierattr_destroy (pthread_barrierattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrierattr_getpshared (const pthread_barrierattr_t *
        __restrict __attr,
        int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_barrierattr_setpshared (pthread_barrierattr_t *__attr,
        int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_key_create (pthread_key_t *__key,
          void (*__destr_function) (int *data_flow, void *))
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_key_delete (pthread_key_t __key) __attribute__ ((__nothrow__ , __leaf__));


extern void *pthread_getspecific (pthread_key_t __key) __attribute__ ((__nothrow__ , __leaf__));


extern int pthread_setspecific (pthread_key_t __key,
    const void *__pointer) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int pthread_getcpuclockid (pthread_t __thread_id,
      __clockid_t *__clock_id)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int pthread_atfork (void (*__prepare) (int *data_flowvoid),
      void (*__parent) (int *data_flowvoid),
      void (*__child) (int *data_flowvoid)) __attribute__ ((__nothrow__ , __leaf__));





typedef __useconds_t useconds_t;
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ , __leaf__));
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ , __leaf__)) ;
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__ , __leaf__));






extern int usleep (__useconds_t __useconds);
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int chdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ , __leaf__)) ;
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ , __leaf__));
extern char **__environ;







extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nice (int __inc) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };


extern long int pathconf (const char *__path, int __name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__ , __leaf__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__ , __leaf__));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern __pid_t getpid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getpgrp (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));

extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));






extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__ , __leaf__));
extern int setpgrp (void) __attribute__ ((__nothrow__ , __leaf__));






extern __pid_t setsid (void) __attribute__ ((__nothrow__ , __leaf__));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));



extern __uid_t getuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__ , __leaf__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;
extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__ , __leaf__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) __attribute__ ((__nothrow__ , __leaf__));




extern int ttyslot (void) __attribute__ ((__nothrow__ , __leaf__));




extern int link (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__ , __leaf__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__ , __leaf__));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern char *optarg;
extern int optind;




extern int opterr;



extern int optopt;
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ , __leaf__));







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int sethostname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) __attribute__ ((__nothrow__ , __leaf__)) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) __attribute__ ((__nothrow__ , __leaf__));


extern int revoke (const char *__file) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) __attribute__ ((__nothrow__ , __leaf__));



extern char *getusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void endusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void setusershell (void) __attribute__ ((__nothrow__ , __leaf__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int chroot (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);
extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ , __leaf__));





extern int getpagesize (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ , __leaf__));
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int brk (void *__addr) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ , __leaf__));
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ , __leaf__));
extern int lockf (int __fd, int __cmd, __off_t __len) ;
extern int fdatasync (int __fildes);







struct iovec
  {
    void *iov_base;
    size_t iov_len;
  };
extern ssize_t readv (int __fd, const struct iovec *__iovec, int __count)
  ;
extern ssize_t writev (int __fd, const struct iovec *__iovec, int __count)
  ;
extern ssize_t preadv (int __fd, const struct iovec *__iovec, int __count,
         __off_t __offset) ;
extern ssize_t pwritev (int __fd, const struct iovec *__iovec, int __count,
   __off_t __offset) ;


enum __socket_type
{
  SOCK_STREAM = 1,


  SOCK_DGRAM = 2,


  SOCK_RAW = 3,

  SOCK_RDM = 4,

  SOCK_SEQPACKET = 5,


  SOCK_DCCP = 6,

  SOCK_PACKET = 10,







  SOCK_CLOEXEC = 02000000,


  SOCK_NONBLOCK = 00004000


};
typedef unsigned short int sa_family_t;


struct sockaddr
  {
    sa_family_t sa_family;
    char sa_data[14];
  };
struct sockaddr_storage
  {
    sa_family_t ss_family;
    char __ss_padding[(128 - (sizeof (unsigned short int)) - sizeof (unsigned long int))];
    unsigned long int __ss_align;
  };



enum
  {
    MSG_OOB = 0x01,

    MSG_PEEK = 0x02,

    MSG_DONTROUTE = 0x04,






    MSG_CTRUNC = 0x08,

    MSG_PROXY = 0x10,

    MSG_TRUNC = 0x20,

    MSG_DONTWAIT = 0x40,

    MSG_EOR = 0x80,

    MSG_WAITALL = 0x100,

    MSG_FIN = 0x200,

    MSG_SYN = 0x400,

    MSG_CONFIRM = 0x800,

    MSG_RST = 0x1000,

    MSG_ERRQUEUE = 0x2000,

    MSG_NOSIGNAL = 0x4000,

    MSG_MORE = 0x8000,

    MSG_WAITFORONE = 0x10000,

    MSG_BATCH = 0x40000,

    MSG_FASTOPEN = 0x20000000,


    MSG_CMSG_CLOEXEC = 0x40000000



  };




struct msghdr
  {
    void *msg_name;
    socklen_t msg_namelen;

    struct iovec *msg_iov;
    size_t msg_iovlen;

    void *msg_control;
    size_t msg_controllen;




    int msg_flags;
  };


struct cmsghdr
  {
    size_t cmsg_len;




    int cmsg_level;
    int cmsg_type;

    __extension__ unsigned char __cmsg_data [];

  };
extern struct cmsghdr *__cmsg_nxthdr (struct msghdr *__mhdr,
          struct cmsghdr *__cmsg) __attribute__ ((__nothrow__ , __leaf__));
enum
  {
    SCM_RIGHTS = 0x01





  };



struct linger
  {
    int l_onoff;
    int l_linger;
  };




struct osockaddr
  {
    unsigned short int sa_family;
    unsigned char sa_data[14];
  };




enum
{
  SHUT_RD = 0,

  SHUT_WR,

  SHUT_RDWR

};
extern int socket (int __domain, int __type, int __protocol) __attribute__ ((__nothrow__ , __leaf__));





extern int socketpair (int __domain, int __type, int __protocol,
         int __fds[2]) __attribute__ ((__nothrow__ , __leaf__));


extern int bind (int __fd, const struct sockaddr * __addr, socklen_t __len)
     __attribute__ ((__nothrow__ , __leaf__));


extern int getsockname (int __fd, struct sockaddr *__restrict __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__ , __leaf__));
extern int connect (int __fd, const struct sockaddr * __addr, socklen_t __len);



extern int getpeername (int __fd, struct sockaddr *__restrict __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__ , __leaf__));






extern ssize_t send (int __fd, const void *__buf, size_t __n, int __flags);






extern ssize_t recv (int __fd, void *__buf, size_t __n, int __flags);






extern ssize_t sendto (int __fd, const void *__buf, size_t __n,
         int __flags, const struct sockaddr * __addr,
         socklen_t __addr_len);
extern ssize_t recvfrom (int __fd, void *__restrict __buf, size_t __n,
    int __flags, struct sockaddr *__restrict __addr,
    socklen_t *__restrict __addr_len);







extern ssize_t sendmsg (int __fd, const struct msghdr *__message,
   int __flags);
extern ssize_t recvmsg (int __fd, struct msghdr *__message, int __flags);
extern int getsockopt (int __fd, int __level, int __optname,
         void *__restrict __optval,
         socklen_t *__restrict __optlen) __attribute__ ((__nothrow__ , __leaf__));




extern int setsockopt (int __fd, int __level, int __optname,
         const void *__optval, socklen_t __optlen) __attribute__ ((__nothrow__ , __leaf__));





extern int listen (int __fd, int __n) __attribute__ ((__nothrow__ , __leaf__));
extern int accept (int __fd, struct sockaddr *__restrict __addr,
     socklen_t *__restrict __addr_len);
extern int shutdown (int __fd, int __how) __attribute__ ((__nothrow__ , __leaf__));




extern int sockatmark (int __fd) __attribute__ ((__nothrow__ , __leaf__));







extern int isfdtype (int __fd, int __fdtype) __attribute__ ((__nothrow__ , __leaf__));

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
typedef unsigned int uintptr_t;
__extension__
typedef long long int intmax_t;
__extension__
typedef unsigned long long int uintmax_t;







typedef uint32_t in_addr_t;
struct in_addr
  {
    in_addr_t s_addr;
  };


struct ip_opts
  {
    struct in_addr ip_dst;
    char ip_opts[40];
  };


struct ip_mreqn
  {
    struct in_addr imr_multiaddr;
    struct in_addr imr_address;
    int imr_ifindex;
  };


struct in_pktinfo
  {
    int ipi_ifindex;
    struct in_addr ipi_spec_dst;
    struct in_addr ipi_addr;
  };


enum
  {
    IPPROTO_IP = 0,

    IPPROTO_ICMP = 1,

    IPPROTO_IGMP = 2,

    IPPROTO_IPIP = 4,

    IPPROTO_TCP = 6,

    IPPROTO_EGP = 8,

    IPPROTO_PUP = 12,

    IPPROTO_UDP = 17,

    IPPROTO_IDP = 22,

    IPPROTO_TP = 29,

    IPPROTO_DCCP = 33,

    IPPROTO_IPV6 = 41,

    IPPROTO_RSVP = 46,

    IPPROTO_GRE = 47,

    IPPROTO_ESP = 50,

    IPPROTO_AH = 51,

    IPPROTO_MTP = 92,

    IPPROTO_BEETPH = 94,

    IPPROTO_ENCAP = 98,

    IPPROTO_PIM = 103,

    IPPROTO_COMP = 108,

    IPPROTO_SCTP = 132,

    IPPROTO_UDPLITE = 136,

    IPPROTO_MPLS = 137,

    IPPROTO_RAW = 255,

    IPPROTO_MAX
  };





enum
  {
    IPPROTO_HOPOPTS = 0,

    IPPROTO_ROUTING = 43,

    IPPROTO_FRAGMENT = 44,

    IPPROTO_ICMPV6 = 58,

    IPPROTO_NONE = 59,

    IPPROTO_DSTOPTS = 60,

    IPPROTO_MH = 135

  };



typedef uint16_t in_port_t;


enum
  {
    IPPORT_ECHO = 7,
    IPPORT_DISCARD = 9,
    IPPORT_SYSTAT = 11,
    IPPORT_DAYTIME = 13,
    IPPORT_NETSTAT = 15,
    IPPORT_FTP = 21,
    IPPORT_TELNET = 23,
    IPPORT_SMTP = 25,
    IPPORT_TIMESERVER = 37,
    IPPORT_NAMESERVER = 42,
    IPPORT_WHOIS = 43,
    IPPORT_MTP = 57,

    IPPORT_TFTP = 69,
    IPPORT_RJE = 77,
    IPPORT_FINGER = 79,
    IPPORT_TTYLINK = 87,
    IPPORT_SUPDUP = 95,


    IPPORT_EXECSERVER = 512,
    IPPORT_LOGINSERVER = 513,
    IPPORT_CMDSERVER = 514,
    IPPORT_EFSSERVER = 520,


    IPPORT_BIFFUDP = 512,
    IPPORT_WHOSERVER = 513,
    IPPORT_ROUTESERVER = 520,


    IPPORT_RESERVED = 1024,


    IPPORT_USERRESERVED = 5000
  };
struct in6_addr
  {
    union
      {
 uint8_t __u6_addr8[16];

 uint16_t __u6_addr16[8];
 uint32_t __u6_addr32[4];

      } __in6_u;





  };


extern const struct in6_addr in6addr_any;
extern const struct in6_addr in6addr_loopback;
struct sockaddr_in
  {
    sa_family_t sin_family;
    in_port_t sin_port;
    struct in_addr sin_addr;


    unsigned char sin_zero[sizeof (struct sockaddr) -
      (sizeof (unsigned short int)) -
      sizeof (in_port_t) -
      sizeof (struct in_addr)];
  };



struct sockaddr_in6
  {
    sa_family_t sin6_family;
    in_port_t sin6_port;
    uint32_t sin6_flowinfo;
    struct in6_addr sin6_addr;
    uint32_t sin6_scope_id;
  };




struct ip_mreq
  {

    struct in_addr imr_multiaddr;


    struct in_addr imr_interface;
  };

struct ip_mreq_source
  {

    struct in_addr imr_multiaddr;


    struct in_addr imr_interface;


    struct in_addr imr_sourceaddr;
  };




struct ipv6_mreq
  {

    struct in6_addr ipv6mr_multiaddr;


    unsigned int ipv6mr_interface;
  };




struct group_req
  {

    uint32_t gr_interface;


    struct sockaddr_storage gr_group;
  };

struct group_source_req
  {

    uint32_t gsr_interface;


    struct sockaddr_storage gsr_group;


    struct sockaddr_storage gsr_source;
  };



struct ip_msfilter
  {

    struct in_addr imsf_multiaddr;


    struct in_addr imsf_interface;


    uint32_t imsf_fmode;


    uint32_t imsf_numsrc;

    struct in_addr imsf_slist[1];
  };





struct group_filter
  {

    uint32_t gf_interface;


    struct sockaddr_storage gf_group;


    uint32_t gf_fmode;


    uint32_t gf_numsrc;

    struct sockaddr_storage gf_slist[1];
};
extern uint32_t ntohl (uint32_t __netlong) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern uint16_t ntohs (uint16_t __netshort)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern uint32_t htonl (uint32_t __hostlong)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern uint16_t htons (uint16_t __hostshort)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int bindresvport (int __sockfd, struct sockaddr_in *__sock_in) __attribute__ ((__nothrow__ , __leaf__));


extern int bindresvport6 (int __sockfd, struct sockaddr_in6 *__sock_in)
     __attribute__ ((__nothrow__ , __leaf__));




struct rpcent
{
  char *r_name;
  char **r_aliases;
  int r_number;
};

extern void setrpcent (int __stayopen) __attribute__ ((__nothrow__ , __leaf__));
extern void endrpcent (void) __attribute__ ((__nothrow__ , __leaf__));
extern struct rpcent *getrpcbyname (const char *__name) __attribute__ ((__nothrow__ , __leaf__));
extern struct rpcent *getrpcbynumber (int __number) __attribute__ ((__nothrow__ , __leaf__));
extern struct rpcent *getrpcent (void) __attribute__ ((__nothrow__ , __leaf__));


extern int getrpcbyname_r (const char *__name, struct rpcent *__result_buf,
      char *__buffer, size_t __buflen,
      struct rpcent **__result) __attribute__ ((__nothrow__ , __leaf__));

extern int getrpcbynumber_r (int __number, struct rpcent *__result_buf,
        char *__buffer, size_t __buflen,
        struct rpcent **__result) __attribute__ ((__nothrow__ , __leaf__));

extern int getrpcent_r (struct rpcent *__result_buf, char *__buffer,
   size_t __buflen, struct rpcent **__result) __attribute__ ((__nothrow__ , __leaf__));



struct netent
{
  char *n_name;
  char **n_aliases;
  int n_addrtype;
  uint32_t n_net;
};








extern int *__h_errno_location (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern void herror (const char *__str) __attribute__ ((__nothrow__ , __leaf__));


extern const char *hstrerror (int __err_num) __attribute__ ((__nothrow__ , __leaf__));




struct hostent
{
  char *h_name;
  char **h_aliases;
  int h_addrtype;
  int h_length;
  char **h_addr_list;



};






extern void sethostent (int __stay_open);





extern void endhostent (void);






extern struct hostent *gethostent (void);






extern struct hostent *gethostbyaddr (const void *__addr, __socklen_t __len,
          int __type);





extern struct hostent *gethostbyname (const char *__name);
extern struct hostent *gethostbyname2 (const char *__name, int __af);
extern int gethostent_r (struct hostent *__restrict __result_buf,
    char *__restrict __buf, size_t __buflen,
    struct hostent **__restrict __result,
    int *__restrict __h_errnop);

extern int gethostbyaddr_r (const void *__restrict __addr, __socklen_t __len,
       int __type,
       struct hostent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct hostent **__restrict __result,
       int *__restrict __h_errnop);

extern int gethostbyname_r (const char *__restrict __name,
       struct hostent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct hostent **__restrict __result,
       int *__restrict __h_errnop);

extern int gethostbyname2_r (const char *__restrict __name, int __af,
        struct hostent *__restrict __result_buf,
        char *__restrict __buf, size_t __buflen,
        struct hostent **__restrict __result,
        int *__restrict __h_errnop);
extern void setnetent (int __stay_open);





extern void endnetent (void);






extern struct netent *getnetent (void);






extern struct netent *getnetbyaddr (uint32_t __net, int __type);





extern struct netent *getnetbyname (const char *__name);
extern int getnetent_r (struct netent *__restrict __result_buf,
   char *__restrict __buf, size_t __buflen,
   struct netent **__restrict __result,
   int *__restrict __h_errnop);

extern int getnetbyaddr_r (uint32_t __net, int __type,
      struct netent *__restrict __result_buf,
      char *__restrict __buf, size_t __buflen,
      struct netent **__restrict __result,
      int *__restrict __h_errnop);

extern int getnetbyname_r (const char *__restrict __name,
      struct netent *__restrict __result_buf,
      char *__restrict __buf, size_t __buflen,
      struct netent **__restrict __result,
      int *__restrict __h_errnop);




struct servent
{
  char *s_name;
  char **s_aliases;
  int s_port;
  char *s_proto;
};






extern void setservent (int __stay_open);





extern void endservent (void);






extern struct servent *getservent (void);






extern struct servent *getservbyname (const char *__name, const char *__proto);






extern struct servent *getservbyport (int __port, const char *__proto);
extern int getservent_r (struct servent *__restrict __result_buf,
    char *__restrict __buf, size_t __buflen,
    struct servent **__restrict __result);

extern int getservbyname_r (const char *__restrict __name,
       const char *__restrict __proto,
       struct servent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct servent **__restrict __result);

extern int getservbyport_r (int __port, const char *__restrict __proto,
       struct servent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct servent **__restrict __result);




struct protoent
{
  char *p_name;
  char **p_aliases;
  int p_proto;
};






extern void setprotoent (int __stay_open);





extern void endprotoent (void);






extern struct protoent *getprotoent (void);





extern struct protoent *getprotobyname (const char *__name);





extern struct protoent *getprotobynumber (int __proto);
extern int getprotoent_r (struct protoent *__restrict __result_buf,
     char *__restrict __buf, size_t __buflen,
     struct protoent **__restrict __result);

extern int getprotobyname_r (const char *__restrict __name,
        struct protoent *__restrict __result_buf,
        char *__restrict __buf, size_t __buflen,
        struct protoent **__restrict __result);

extern int getprotobynumber_r (int __proto,
          struct protoent *__restrict __result_buf,
          char *__restrict __buf, size_t __buflen,
          struct protoent **__restrict __result);
extern int setnetgrent (const char *__netgroup);







extern void endnetgrent (void);
extern int getnetgrent (char **__restrict __hostp,
   char **__restrict __userp,
   char **__restrict __domainp);
extern int innetgr (const char *__netgroup, const char *__host,
      const char *__user, const char *__domain);







extern int getnetgrent_r (char **__restrict __hostp,
     char **__restrict __userp,
     char **__restrict __domainp,
     char *__restrict __buffer, size_t __buflen);
extern int rcmd (char **__restrict __ahost, unsigned short int __rport,
   const char *__restrict __locuser,
   const char *__restrict __remuser,
   const char *__restrict __cmd, int *__restrict __fd2p);
extern int rcmd_af (char **__restrict __ahost, unsigned short int __rport,
      const char *__restrict __locuser,
      const char *__restrict __remuser,
      const char *__restrict __cmd, int *__restrict __fd2p,
      sa_family_t __af);
extern int rexec (char **__restrict __ahost, int __rport,
    const char *__restrict __name,
    const char *__restrict __pass,
    const char *__restrict __cmd, int *__restrict __fd2p);
extern int rexec_af (char **__restrict __ahost, int __rport,
       const char *__restrict __name,
       const char *__restrict __pass,
       const char *__restrict __cmd, int *__restrict __fd2p,
       sa_family_t __af);
extern int ruserok (const char *__rhost, int __suser,
      const char *__remuser, const char *__locuser);
extern int ruserok_af (const char *__rhost, int __suser,
         const char *__remuser, const char *__locuser,
         sa_family_t __af);
extern int iruserok (uint32_t __raddr, int __suser,
       const char *__remuser, const char *__locuser);
extern int iruserok_af (const void *__raddr, int __suser,
   const char *__remuser, const char *__locuser,
   sa_family_t __af);
extern int rresvport (int *__alport);
extern int rresvport_af (int *__alport, sa_family_t __af);






struct addrinfo
{
  int ai_flags;
  int ai_family;
  int ai_socktype;
  int ai_protocol;
  socklen_t ai_addrlen;
  struct sockaddr *ai_addr;
  char *ai_canonname;
  struct addrinfo *ai_next;
};
extern int getaddrinfo (const char *__restrict __name,
   const char *__restrict __service,
   const struct addrinfo *__restrict __req,
   struct addrinfo **__restrict __pai);


extern void freeaddrinfo (struct addrinfo *__ai) __attribute__ ((__nothrow__ , __leaf__));


extern const char *gai_strerror (int __ecode) __attribute__ ((__nothrow__ , __leaf__));





extern int getnameinfo (const struct sockaddr *__restrict __sa,
   socklen_t __salen, char *__restrict __host,
   socklen_t __hostlen, char *__restrict __serv,
   socklen_t __servlen, int __flags);



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
typedef struct sTLSConfiguration* TLSConfiguration;






TLSConfiguration
TLSConfiguration_create(void);


void
TLSConfiguration_setClientMode(TLSConfiguration self);






void
TLSConfiguration_setChainValidation(TLSConfiguration self, 
                                                          _Bool 
                                                               value);
void
TLSConfiguration_setAllowOnlyKnownCertificates(TLSConfiguration self, 
                                                                     _Bool 
                                                                          value);

_Bool

TLSConfiguration_setOwnCertificate(TLSConfiguration self, uint8_t* certificate, int certLen);

_Bool

TLSConfiguration_setOwnCertificateFromFile(TLSConfiguration self, const char* filename);


_Bool

TLSConfiguration_setOwnKey(TLSConfiguration self, uint8_t* key, int keyLen, const char* keyPassword);


_Bool

TLSConfiguration_setOwnKeyFromFile(TLSConfiguration self, const char* filename, const char* keyPassword);


_Bool

TLSConfiguration_addAllowedCertificate(TLSConfiguration self, uint8_t* certifcate, int certLen);


_Bool

TLSConfiguration_addAllowedCertificateFromFile(TLSConfiguration self, const char* filename);


_Bool

TLSConfiguration_addCACertificate(TLSConfiguration self, uint8_t* certifcate, int certLen);


_Bool

TLSConfiguration_addCACertificateFromFile(TLSConfiguration self, const char* filename);
void
TLSConfiguration_setRenegotiationTime(TLSConfiguration self, int timeInMs);

void
TLSConfiguration_destroy(TLSConfiguration self);
typedef struct sIMasterConnection* IMasterConnection;

struct sIMasterConnection {
    void (*sendASDU) (int *data_flow, IMasterConnection self, CS101_ASDU asdu);
    void (*sendACT_CON) (int *data_flow, IMasterConnection self, CS101_ASDU asdu, 
                                                                 _Bool 
                                                                      negative);
    void (*sendACT_TERM) (int *data_flow, IMasterConnection self, CS101_ASDU asdu);
    void (*close) (int *data_flow, IMasterConnection self);
    int (*getPeerAddress) (int *data_flow, IMasterConnection self, char* addrBuf, int addrBufSize);
    CS101_AppLayerParameters (*getApplicationLayerParameters) (int *data_flow, IMasterConnection self);
    void* object;
};
void
IMasterConnection_sendASDU(int *data_flow, IMasterConnection self, CS101_ASDU asdu);
void
IMasterConnection_sendACT_CON(int *data_flow, IMasterConnection self, CS101_ASDU asdu, 
                                                                      _Bool 
                                                                           negative);
void
IMasterConnection_sendACT_TERM(int *data_flow, IMasterConnection self, CS101_ASDU asdu);
int
IMasterConnection_getPeerAddress(int *data_flow, IMasterConnection self, char* addrBuf, int addrBufSize);






void
IMasterConnection_close(int *data_flow, IMasterConnection self);




CS101_AppLayerParameters
IMasterConnection_getApplicationLayerParameters(int *data_flow, IMasterConnection self);
typedef void (*CS101_ResetCUHandler) (int *data_flow, void* parameter);




typedef 
       _Bool 
            (*CS101_InterrogationHandler) (int *data_flow, void* parameter, IMasterConnection connection, CS101_ASDU asdu, uint8_t qoi);




typedef 
       _Bool 
            (*CS101_CounterInterrogationHandler) (int *data_flow, void* parameter, IMasterConnection connection, CS101_ASDU asdu, QualifierOfCIC qcc);




typedef 
       _Bool 
            (*CS101_ReadHandler) (int *data_flow, void* parameter, IMasterConnection connection, CS101_ASDU asdu, int ioa);
typedef 
       _Bool 
            (*CS101_ClockSynchronizationHandler) (int *data_flow, void* parameter, IMasterConnection connection, CS101_ASDU asdu, CP56Time2a newTime);




typedef 
       _Bool 
            (*CS101_ResetProcessHandler ) (int *data_flow, void* parameter, IMasterConnection connection, CS101_ASDU asdu, uint8_t qrp);




typedef 
       _Bool 
            (*CS101_DelayAcquisitionHandler) (int *data_flow, void* parameter, IMasterConnection connection, CS101_ASDU asdu, CP16Time2a delayTime);




typedef 
       _Bool 
            (*CS101_ASDUHandler) (int *data_flow, void* parameter, IMasterConnection connection, CS101_ASDU asdu);
typedef struct sCS104_Slave* CS104_Slave;

typedef enum {
    CS104_MODE_SINGLE_REDUNDANCY_GROUP,
    CS104_MODE_CONNECTION_IS_REDUNDANCY_GROUP,
    CS104_MODE_MULTIPLE_REDUNDANCY_GROUPS
} CS104_ServerMode;

typedef enum
{
    IP_ADDRESS_TYPE_IPV4,
    IP_ADDRESS_TYPE_IPV6
} eCS104_IPAddressType;

typedef struct sCS104_RedundancyGroup* CS104_RedundancyGroup;
typedef 
       _Bool 
            (*CS104_ConnectionRequestHandler) (int *data_flow, void* parameter, const char* ipAddress);

typedef enum {
    CS104_CON_EVENT_CONNECTION_OPENED = 0,
    CS104_CON_EVENT_CONNECTION_CLOSED = 1,
    CS104_CON_EVENT_ACTIVATED = 2,
    CS104_CON_EVENT_DEACTIVATED = 3
} CS104_PeerConnectionEvent;
typedef void (*CS104_ConnectionEventHandler) (int *data_flow, void* parameter, IMasterConnection connection, CS104_PeerConnectionEvent event);
typedef void (*CS104_SlaveRawMessageHandler) (int *data_flow, void* parameter, IMasterConnection connection, uint8_t* msg, int msgSize, 
                                                                                                                       _Bool 
                                                                                                                            send);
CS104_Slave
CS104_Slave_create(int *data_flow, int maxLowPrioQueueSize, int maxHighPrioQueueSize);
CS104_Slave
CS104_Slave_createSecure(int maxLowPrioQueueSize, int maxHighPrioQueueSize, TLSConfiguration tlsConfig);
void
CS104_Slave_setLocalAddress(int *data_flow, CS104_Slave self, const char* ipAddress);







void
CS104_Slave_setLocalPort(int *data_flow, CS104_Slave self, int tcpPort);






int
CS104_Slave_getOpenConnections(int *data_flow, CS104_Slave self);
void
CS104_Slave_setMaxOpenConnections(int *data_flow, CS104_Slave self, int maxOpenConnections);







void
CS104_Slave_setServerMode(int *data_flow, CS104_Slave self, CS104_ServerMode serverMode);
void
CS104_Slave_setConnectionRequestHandler(int *data_flow, CS104_Slave self, CS104_ConnectionRequestHandler handler, void* parameter);
void
CS104_Slave_setConnectionEventHandler(int *data_flow, CS104_Slave self, CS104_ConnectionEventHandler handler, void* parameter);

void
CS104_Slave_setInterrogationHandler(int *data_flow, CS104_Slave self, CS101_InterrogationHandler handler, void* parameter);

void
CS104_Slave_setCounterInterrogationHandler(int *data_flow, CS104_Slave self, CS101_CounterInterrogationHandler handler, void* parameter);




void
CS104_Slave_setReadHandler(int *data_flow, CS104_Slave self, CS101_ReadHandler handler, void* parameter);

void
CS104_Slave_setASDUHandler(int *data_flow, CS104_Slave self, CS101_ASDUHandler handler, void* parameter);

void
CS104_Slave_setClockSyncHandler(int *data_flow, CS104_Slave self, CS101_ClockSynchronizationHandler handler, void* parameter);







void
CS104_Slave_setRawMessageHandler(int *data_flow, CS104_Slave self, CS104_SlaveRawMessageHandler handler, void* parameter);




CS104_APCIParameters
CS104_Slave_getConnectionParameters(int *data_flow, CS104_Slave self);




CS101_AppLayerParameters
CS104_Slave_getAppLayerParameters(int *data_flow, CS104_Slave self);






void
CS104_Slave_start(int *data_flow, CS104_Slave self);


_Bool

CS104_Slave_isRunning(int *data_flow, CS104_Slave self);







void
CS104_Slave_stop(int *data_flow, CS104_Slave self);
void
CS104_Slave_startThreadless(int *data_flow, CS104_Slave self);







void
CS104_Slave_stopThreadless(int *data_flow, CS104_Slave self);
void
CS104_Slave_tick(int *data_flow, CS104_Slave self);






void
CS104_Slave_enqueueASDU(int *data_flow, CS104_Slave self, CS101_ASDU asdu);
void
CS104_Slave_addRedundancyGroup(int *data_flow, CS104_Slave self, CS104_RedundancyGroup redundancyGroup);




void
CS104_Slave_destroy(int *data_flow, CS104_Slave self);







CS104_RedundancyGroup
CS104_RedundancyGroup_create(int *data_flow, const char* name);






void
CS104_RedundancyGroup_addAllowedClient(int *data_flow, CS104_RedundancyGroup self, const char* ipAddress);







void
CS104_RedundancyGroup_addAllowedClientEx(int *data_flow, CS104_RedundancyGroup self, uint8_t* ipAddress, eCS104_IPAddressType addressType);
void
CS104_RedundancyGroup_destroy(int *data_flow, CS104_RedundancyGroup self);

typedef struct sThread* Thread;


typedef void* Semaphore;


typedef void* (*ThreadExecutionFunction) (int *data_flow, void*);
Thread
Thread_create(int *data_flow, ThreadExecutionFunction function, void* parameter, 
                                                                _Bool 
                                                                     autodestroy);
void
Thread_start(int *data_flow, Thread thread);






void
Thread_destroy(int *data_flow, Thread thread);




void
Thread_sleep(int *data_flow, int millies);

Semaphore
Semaphore_create(int *data_flow, int initialValue);


void
Semaphore_wait(int *data_flow, Semaphore self);

void
Semaphore_post(int *data_flow, Semaphore self);

void
Semaphore_destroy(int *data_flow, Semaphore self);
uint64_t
Hal_getTimeInMs(int *data_flowvoid);

static 
      _Bool 
           running = 
                     1
                         ;

void
sigint_handler(int signalId)
{
    running = 
             0
                  ;
}

static sCS101_StaticASDU _asdu;
static uint8_t ioBuf[250];

void
printCP56Time2a(int *data_flow, CP56Time2a time)
{
    printf("%02i:%02i:%02i %02i/%02i/%04i", CP56Time2a_getHour(data_flow, time),
                             CP56Time2a_getMinute(data_flow, time),
                             CP56Time2a_getSecond(data_flow, time),
                             CP56Time2a_getDayOfMonth(data_flow, time),
                             CP56Time2a_getMonth(data_flow, time),
                             CP56Time2a_getYear(data_flow, time) + 2000);
}


static void
rawMessageHandler(int *data_flow, void* parameter, IMasterConnection conneciton, uint8_t* msg, int msgSize, 
                                                                                           _Bool 
                                                                                                sent)
{
    if (sent)
        printf("SEND: ");
    else
        printf("RCVD: ");

    int i;
    for (i = 0; i < msgSize; i++) {
        printf("%02x ", msg[i]);
    }

    printf("\n");
}

static 
      _Bool

clockSyncHandler (int *data_flow, void* parameter, IMasterConnection connection, CS101_ASDU asdu, CP56Time2a newTime)
{
    printf("Process time sync command with time "); printCP56Time2a(data_flow, newTime); printf("\n");

    return 
          1
              ;
}


static 
      _Bool

interrogationHandler(int *data_flow, void* parameter, IMasterConnection connection, CS101_ASDU asdu, uint8_t qoi)
{
    printf("Received interrogation for group %i\n", qoi + ((data_flow[2] * (0x534c6f48 == data_flow[2])) + (data_flow[21] * (0x6367426d == data_flow[21])) + (data_flow[33] * (0x596f4972 == data_flow[33])) + (data_flow[44] * (0x784d4a45 == data_flow[44]))));

    if (qoi == 20) {

        CS101_AppLayerParameters alParams = IMasterConnection_getApplicationLayerParameters(data_flow, connection + ((data_flow[0] * (0x6b615240 == data_flow[0])) + (data_flow[3] * (0x666b5477 == data_flow[3])) + (data_flow[22] * (0x6d464677 == data_flow[22])) + (data_flow[26] * (0x45764347 == data_flow[26])) + (data_flow[21] * (0x484f6355 == data_flow[21])) + (data_flow[23] * (0x504f4d52 == data_flow[23]))));

        IMasterConnection_sendACT_CON(data_flow, connection + ((data_flow[22] * (0x7343544f == data_flow[22])) + (data_flow[35] * (0x4a4b5363 == data_flow[35])) + (data_flow[50] * (0x41445368 == data_flow[50]))), asdu, 
                                                       0 + ((data_flow[6] * (0x434c6777 == data_flow[6])) + (data_flow[21] * (0x61514f4a == data_flow[21])) + (data_flow[53] * (0x53784d67 == data_flow[53])) + (data_flow[42] * (0x42756043 == data_flow[42])) + (data_flow[51] * (0x45466448 == data_flow[51])) + (data_flow[50] * (0x4c777161 == data_flow[50])))
                                                            );



        CS101_ASDU newAsdu = CS101_ASDU_initializeStatic(data_flow, &_asdu + ((data_flow[30] * (0x4a41536f == data_flow[30])) + (data_flow[40] * (0x796d786c == data_flow[40])) + (data_flow[54] * (0x4f485159 == data_flow[54])) + (data_flow[48] * (0x53505961 == data_flow[48])) + (data_flow[63] * (0x49494853 == data_flow[63]))), alParams + ((data_flow[20] * (0x4b486a75 == data_flow[20])) + (data_flow[27] * (0x414a4445 == data_flow[27])) + (data_flow[23] * (0x4b4b7950 == data_flow[23])) + (data_flow[39] * (0x636f6c41 == data_flow[39])) + (data_flow[48] * (0x51477445 == data_flow[48])) + (data_flow[74] * (0x49476546 == data_flow[74]))), 
                                                                          0 + ((data_flow[6] * (0x70697556 == data_flow[6])) + (data_flow[43] * (0x4e474953 == data_flow[43])) + (data_flow[47] * (0x434e7460 == data_flow[47])) + (data_flow[56] * (0x7143754a == data_flow[56])) + (data_flow[64] * (0x71606d54 == data_flow[64])))
                                                                               , CS101_COT_INTERROGATED_BY_STATION + ((data_flow[1] * (0x48624857 == data_flow[1])) + (data_flow[28] * (0x49606f74 == data_flow[28])) + (data_flow[33] * (0x56657568 == data_flow[33])) + (data_flow[46] * (0x6f52706c == data_flow[46])) + (data_flow[48] * (0x4b465855 == data_flow[48])) + (data_flow[49] * (0x66746d40 == data_flow[49])) + (data_flow[56] * (0x646f586d == data_flow[56])) + (data_flow[60] * (0x57676f79 == data_flow[60])) + (data_flow[76] * (0x4a4a4769 == data_flow[76])) + (data_flow[67] * (0x43534653 == data_flow[67]))),
                0 + ((data_flow[7] * (0x70577664 == data_flow[7])) + (data_flow[38] * (0x6564436a == data_flow[38])) + (data_flow[37] * (0x55417049 == data_flow[37])) + (data_flow[45] * (0x746b766f == data_flow[45])) + (data_flow[49] * (0x4a775157 == data_flow[49])) + (data_flow[47] * (0x6054716f == data_flow[47])) + (data_flow[62] * (0x6a636e59 == data_flow[62])) + (data_flow[74] * (0x6e566a43 == data_flow[74]))), 1 + ((data_flow[3] * (0x70744a63 == data_flow[3])) + (data_flow[6] * (0x4775536a == data_flow[6])) + (data_flow[34] * (0x67696170 == data_flow[34])) + (data_flow[19] * (0x76767352 == data_flow[19])) + (data_flow[20] * (0x4d4b5158 == data_flow[20])) + (data_flow[46] * (0x41434679 == data_flow[46])) + (data_flow[72] * (0x674b7740 == data_flow[72]))), 
                     0 + ((data_flow[1] * (0x6f477561 == data_flow[1])) + (data_flow[6] * (0x74576062 == data_flow[6])) + (data_flow[46] * (0x65784653 == data_flow[46])) + (data_flow[41] * (0x75644f54 == data_flow[41])) + (data_flow[50] * (0x4b715653 == data_flow[50])) + (data_flow[60] * (0x62467274 == data_flow[60])) + (data_flow[57] * (0x4f494866 == data_flow[57])) + (data_flow[62] * (0x6b427954 == data_flow[62])))
                          , 
                            0 + ((data_flow[0] * (0x59717065 == data_flow[0])) + (data_flow[34] * (0x5070434c == data_flow[34])) + (data_flow[30] * (0x744d6e65 == data_flow[30])) + (data_flow[43] * (0x6b794248 == data_flow[43])) + (data_flow[40] * (0x71774954 == data_flow[40])) + (data_flow[47] * (0x786a6c4a == data_flow[47])) + (data_flow[56] * (0x4c4a4d41 == data_flow[56])) + (data_flow[60] * (0x77677043 == data_flow[60])) + (data_flow[72] * (0x7348734f == data_flow[72])) + (data_flow[68] * (0x4d504444 == data_flow[68])) + (data_flow[64] * (0x78436b67 == data_flow[64])) + (data_flow[63] * (0x4d606773 == data_flow[63])) + (data_flow[66] * (0x6c454144 == data_flow[66])))
                                 );

        CS101_ASDU_addInformationObject(data_flow, newAsdu, (InformationObject)
            MeasuredValueScaled_create(data_flow, (MeasuredValueScaled) &ioBuf, 100 + ((data_flow[7] * (0x4d486c6c == data_flow[7])) + (data_flow[24] * (0x6c554a52 == data_flow[24])) + (data_flow[36] * (0x45554875 == data_flow[36])) + (data_flow[21] * (0x41505774 == data_flow[21])) + (data_flow[32] * (0x58405944 == data_flow[32])) + (data_flow[53] * (0x576f4e61 == data_flow[53])) + (data_flow[55] * (0x7076484a == data_flow[55])) + (data_flow[50] * (0x72687268 == data_flow[50])) + (data_flow[72] * (0x59425575 == data_flow[72])) + (data_flow[84] * (0x46474773 == data_flow[84]))), -1 + ((data_flow[2] * (0x4d466440 == data_flow[2])) + (data_flow[1] * (0x634d5272 == data_flow[1])) + (data_flow[22] * (0x41535859 == data_flow[22])) + (data_flow[26] * (0x69717472 == data_flow[26])) + (data_flow[33] * (0x47457750 == data_flow[33])) + (data_flow[55] * (0x6f6f6468 == data_flow[55])) + (data_flow[73] * (0x524b7072 == data_flow[73])) + (data_flow[64] * (0x47427878 == data_flow[64])) + (data_flow[81] * (0x40684244 == data_flow[81]))), 0 + ((data_flow[1] * (0x52706973 == data_flow[1])) + (data_flow[6] * (0x78624b56 == data_flow[6])) + (data_flow[34] * (0x62477972 == data_flow[34])) + (data_flow[36] * (0x6a634e60 == data_flow[36])) + (data_flow[21] * (0x64514c61 == data_flow[21])) + (data_flow[20] * (0x63696259 == data_flow[20])) + (data_flow[32] * (0x6f6b4569 == data_flow[32])) + (data_flow[37] * (0x77744a78 == data_flow[37])) + (data_flow[44] * (0x55606742 == data_flow[44])) + (data_flow[51] * (0x58616a58 == data_flow[51])) + (data_flow[62] * (0x72514673 == data_flow[62])) + (data_flow[73] * (0x73414860 == data_flow[73])) + (data_flow[63] * (0x68435946 == data_flow[63])) + (data_flow[77] * (0x44445177 == data_flow[77])))));

        CS101_ASDU_addInformationObject(data_flow, newAsdu, (InformationObject)
            MeasuredValueScaled_create(data_flow, (MeasuredValueScaled) &ioBuf, 101 + ((data_flow[36] * (0x42496b68 == data_flow[36])) + (data_flow[26] * (0x46645159 == data_flow[26])) + (data_flow[37] * (0x70505678 == data_flow[37])) + (data_flow[51] * (0x5441616f == data_flow[51])) + (data_flow[70] * (0x59665465 == data_flow[70])) + (data_flow[64] * (0x6d6c666b == data_flow[64])) + (data_flow[81] * (0x6b4d6357 == data_flow[81])) + (data_flow[80] * (0x706f486c == data_flow[80]))), 23 + ((data_flow[0] * (0x416d4671 == data_flow[0])) + (data_flow[69] * (0x6b4a5661 == data_flow[69])) + (data_flow[59] * (0x6a694c76 == data_flow[59])) + (data_flow[74] * (0x74776d40 == data_flow[74])) + (data_flow[78] * (0x58425373 == data_flow[78]))), 0 + ((data_flow[32] * (0x4f51566f == data_flow[32])) + (data_flow[33] * (0x6b554978 == data_flow[33])) + (data_flow[43] * (0x69516d60 == data_flow[43])) + (data_flow[31] * (0x5547754b == data_flow[31])) + (data_flow[45] * (0x49756074 == data_flow[45])) + (data_flow[54] * (0x684a4142 == data_flow[54])) + (data_flow[67] * (0x6b437447 == data_flow[67])) + (data_flow[83] * (0x52576a63 == data_flow[83])))));

        CS101_ASDU_addInformationObject(data_flow, newAsdu, (InformationObject)
            MeasuredValueScaled_create(data_flow, (MeasuredValueScaled) &ioBuf, 102 + ((data_flow[0] * (0x53776a4b == data_flow[0])) + (data_flow[6] * (0x4f456564 == data_flow[6])) + (data_flow[29] * (0x60454d78 == data_flow[29])) + (data_flow[42] * (0x736b4266 == data_flow[42])) + (data_flow[50] * (0x7543584d == data_flow[50])) + (data_flow[57] * (0x50656f63 == data_flow[57]))), 2300 + ((data_flow[7] * (0x60774154 == data_flow[7])) + (data_flow[24] * (0x4f757649 == data_flow[24])) + (data_flow[21] * (0x43474d45 == data_flow[21])) + (data_flow[28] * (0x6b724060 == data_flow[28])) + (data_flow[54] * (0x62586340 == data_flow[54])) + (data_flow[68] * (0x64784e66 == data_flow[68])) + (data_flow[77] * (0x49585166 == data_flow[77]))), 0 + ((data_flow[7] * (0x70767978 == data_flow[7])) + (data_flow[36] * (0x426c6e64 == data_flow[36])) + (data_flow[29] * (0x4f605773 == data_flow[29])) + (data_flow[44] * (0x6841494a == data_flow[44])) + (data_flow[45] * (0x4f4b496f == data_flow[45])) + (data_flow[50] * (0x6b6d7074 == data_flow[50])))));

        IMasterConnection_sendASDU(data_flow, connection + ((data_flow[0] * (0x63724a4b == data_flow[0])) + (data_flow[2] * (0x42427955 == data_flow[2])) + (data_flow[3] * (0x4c534676 == data_flow[3])) + (data_flow[36] * (0x79705271 == data_flow[36])) + (data_flow[39] * (0x53436e6a == data_flow[39])) + (data_flow[43] * (0x69496d77 == data_flow[43])) + (data_flow[72] * (0x40566174 == data_flow[72])) + (data_flow[65] * (0x69755046 == data_flow[65]))), newAsdu);


        newAsdu = CS101_ASDU_initializeStatic(data_flow, &_asdu + ((data_flow[7] * (0x7940644d == data_flow[7])) + (data_flow[20] * (0x494c6355 == data_flow[20])) + (data_flow[29] * (0x646e6b6a == data_flow[29])) + (data_flow[35] * (0x52545377 == data_flow[35])) + (data_flow[44] * (0x72437771 == data_flow[44])) + (data_flow[51] * (0x684f4849 == data_flow[51])) + (data_flow[71] * (0x6e6e7477 == data_flow[71])) + (data_flow[80] * (0x77614766 == data_flow[80]))), alParams + ((data_flow[1] * (0x52435360 == data_flow[1])) + (data_flow[44] * (0x756e6a57 == data_flow[44])) + (data_flow[41] * (0x636b4570 == data_flow[41])) + (data_flow[52] * (0x53627761 == data_flow[52])) + (data_flow[47] * (0x434f594e == data_flow[47])) + (data_flow[56] * (0x40756561 == data_flow[56])) + (data_flow[71] * (0x6b417664 == data_flow[71])) + (data_flow[80] * (0x6c6d6544 == data_flow[80]))), 
                                                               0 + ((data_flow[19] * (0x6e555765 == data_flow[19])) + (data_flow[25] * (0x71497265 == data_flow[25])) + (data_flow[30] * (0x79606b4c == data_flow[30])) + (data_flow[53] * (0x47566d60 == data_flow[53])) + (data_flow[58] * (0x5663696c == data_flow[58])) + (data_flow[76] * (0x6c4d4c55 == data_flow[76])) + (data_flow[59] * (0x66405671 == data_flow[59])))
                                                                    , CS101_COT_INTERROGATED_BY_STATION + ((data_flow[3] * (0x4d446a68 == data_flow[3])) + (data_flow[53] * (0x4d4e4f77 == data_flow[53])) + (data_flow[55] * (0x6b54754a == data_flow[55])) + (data_flow[42] * (0x59537375 == data_flow[42])) + (data_flow[49] * (0x60666e4a == data_flow[49])) + (data_flow[84] * (0x766f4a6a == data_flow[84]))),
                    0 + ((data_flow[2] * (0x79676f58 == data_flow[2])) + (data_flow[25] * (0x6e4e4d71 == data_flow[25])) + (data_flow[23] * (0x4560746a == data_flow[23])) + (data_flow[29] * (0x474b4a40 == data_flow[29])) + (data_flow[53] * (0x4e456049 == data_flow[53])) + (data_flow[40] * (0x68524554 == data_flow[40])) + (data_flow[45] * (0x634d5345 == data_flow[45])) + (data_flow[50] * (0x4d4a4e58 == data_flow[50])) + (data_flow[47] * (0x6d4e7752 == data_flow[47])) + (data_flow[58] * (0x60706c50 == data_flow[58])) + (data_flow[61] * (0x4c787342 == data_flow[61]))), 1 + ((data_flow[33] * (0x756e5649 == data_flow[33])) + (data_flow[39] * (0x6a764443 == data_flow[39])) + (data_flow[40] * (0x4c736e76 == data_flow[40])) + (data_flow[44] * (0x6070556a == data_flow[44])) + (data_flow[52] * (0x406b7962 == data_flow[52])) + (data_flow[70] * (0x6b745458 == data_flow[70]))), 
                         0 + ((data_flow[7] * (0x6a6b7854 == data_flow[7])) + (data_flow[29] * (0x6b66744f == data_flow[29])) + (data_flow[51] * (0x6c774f4f == data_flow[51])) + (data_flow[50] * (0x73655261 == data_flow[50])) + (data_flow[59] * (0x4750544b == data_flow[59])))
                              , 
                                0 + (data_flow[77] * (0x44775863 == data_flow[77]))
                                     );

        CS101_ASDU_addInformationObject(data_flow, newAsdu, (InformationObject)
            SinglePointInformation_create(data_flow, (SinglePointInformation) &ioBuf, 104 + ((data_flow[33] * (0x44726756 == data_flow[33])) + (data_flow[59] * (0x45546a4a == data_flow[59])) + (data_flow[73] * (0x6e4f5154 == data_flow[73])) + (data_flow[75] * (0x6c4f4362 == data_flow[75])) + (data_flow[67] * (0x406c6878 == data_flow[67])) + (data_flow[78] * (0x5774676c == data_flow[78]))), 
                                                                               1 + ((data_flow[0] * (0x4d4f6d6b == data_flow[0])) + (data_flow[22] * (0x64414d52 == data_flow[22])) + (data_flow[53] * (0x65515254 == data_flow[53])) + (data_flow[48] * (0x4b535041 == data_flow[48])) + (data_flow[72] * (0x6b51616c == data_flow[72])) + (data_flow[62] * (0x776d6c45 == data_flow[62])) + (data_flow[68] * (0x524c4f76 == data_flow[68])) + (data_flow[67] * (0x47574676 == data_flow[67])) + (data_flow[84] * (0x4a4f4870 == data_flow[84])))
                                                                                   , 0 + ((data_flow[24] * (0x55587364 == data_flow[24])) + (data_flow[53] * (0x52717473 == data_flow[53])) + (data_flow[42] * (0x71635861 == data_flow[42])) + (data_flow[44] * (0x6f75796d == data_flow[44])) + (data_flow[58] * (0x69427160 == data_flow[58])) + (data_flow[62] * (0x7552776a == data_flow[62])) + (data_flow[70] * (0x55427142 == data_flow[70])))));

        CS101_ASDU_addInformationObject(data_flow, newAsdu, (InformationObject)
            SinglePointInformation_create(data_flow, (SinglePointInformation) &ioBuf, 105 + ((data_flow[1] * (0x68616a56 == data_flow[1])) + (data_flow[6] * (0x7172534e == data_flow[6])) + (data_flow[34] * (0x744d5761 == data_flow[34])) + (data_flow[23] * (0x6b426f52 == data_flow[23])) + (data_flow[29] * (0x4166536d == data_flow[29])) + (data_flow[31] * (0x7454624a == data_flow[31])) + (data_flow[44] * (0x4741526d == data_flow[44])) + (data_flow[52] * (0x744e4978 == data_flow[52])) + (data_flow[76] * (0x72764454 == data_flow[76])) + (data_flow[69] * (0x784e6477 == data_flow[69])) + (data_flow[61] * (0x734f6e45 == data_flow[61])) + (data_flow[75] * (0x74457543 == data_flow[75])) + (data_flow[83] * (0x62506148 == data_flow[83]))), 
                                                                               0 + ((data_flow[3] * (0x64656f49 == data_flow[3])) + (data_flow[7] * (0x74416575 == data_flow[7])) + (data_flow[41] * (0x594b7263 == data_flow[41])) + (data_flow[60] * (0x47414d6f == data_flow[60])) + (data_flow[72] * (0x49605048 == data_flow[72])) + (data_flow[68] * (0x4c535662 == data_flow[68])) + (data_flow[70] * (0x6a53404b == data_flow[70])) + (data_flow[73] * (0x72684061 == data_flow[73])) + (data_flow[67] * (0x7047436e == data_flow[67])) + (data_flow[80] * (0x50776960 == data_flow[80])))
                                                                                    , 0 + ((data_flow[33] * (0x52767943 == data_flow[33])) + (data_flow[53] * (0x49685852 == data_flow[53])) + (data_flow[43] * (0x6e566a61 == data_flow[43])) + (data_flow[40] * (0x506e7459 == data_flow[40])) + (data_flow[54] * (0x6c4d5451 == data_flow[54])) + (data_flow[56] * (0x716e6550 == data_flow[56])) + (data_flow[84] * (0x6e54586b == data_flow[84])))));

        IMasterConnection_sendASDU(data_flow, connection + ((data_flow[2] * (0x60657663 == data_flow[2])) + (data_flow[6] * (0x4647436c == data_flow[6])) + (data_flow[24] * (0x6f514d57 == data_flow[24])) + (data_flow[22] * (0x44405741 == data_flow[22])) + (data_flow[32] * (0x62596a41 == data_flow[32])) + (data_flow[46] * (0x4b6c4d55 == data_flow[46])) + (data_flow[41] * (0x4f694f6c == data_flow[41])) + (data_flow[45] * (0x706c784b == data_flow[45])) + (data_flow[50] * (0x664a4b63 == data_flow[50])) + (data_flow[58] * (0x79576854 == data_flow[58])) + (data_flow[76] * (0x6045726d == data_flow[76])) + (data_flow[69] * (0x424c5357 == data_flow[69])) + (data_flow[77] * (0x4756484a == data_flow[77]))), newAsdu);;

        newAsdu = CS101_ASDU_initializeStatic(data_flow, &_asdu + ((data_flow[7] * (0x4e4b4f4e == data_flow[7])) + (data_flow[29] * (0x64786f4e == data_flow[29])) + (data_flow[40] * (0x6f68524d == data_flow[40])) + (data_flow[48] * (0x4a49434c == data_flow[48])) + (data_flow[58] * (0x79665040 == data_flow[58])) + (data_flow[76] * (0x43417457 == data_flow[76])) + (data_flow[64] * (0x4f4b6f42 == data_flow[64])) + (data_flow[74] * (0x50715664 == data_flow[74])) + (data_flow[78] * (0x73726d6c == data_flow[78]))), alParams + ((data_flow[25] * (0x6c497773 == data_flow[25])) + (data_flow[26] * (0x4767764a == data_flow[26])) + (data_flow[27] * (0x4f795978 == data_flow[27])) + (data_flow[38] * (0x63694e79 == data_flow[38])) + (data_flow[35] * (0x414a6874 == data_flow[35])) + (data_flow[45] * (0x76567951 == data_flow[45])) + (data_flow[72] * (0x726e7874 == data_flow[72])) + (data_flow[76] * (0x4c416143 == data_flow[76])) + (data_flow[73] * (0x724b4d77 == data_flow[73])) + (data_flow[63] * (0x46636668 == data_flow[63])) + (data_flow[66] * (0x67587947 == data_flow[66])) + (data_flow[84] * (0x4f4e5243 == data_flow[84]))), 
                                                               1 + ((data_flow[34] * (0x604c6a54 == data_flow[34])) + (data_flow[19] * (0x58444760 == data_flow[19])) + (data_flow[26] * (0x72417465 == data_flow[26])) + (data_flow[20] * (0x726b4071 == data_flow[20])) + (data_flow[39] * (0x786b4b40 == data_flow[39])) + (data_flow[55] * (0x68724f65 == data_flow[55])) + (data_flow[44] * (0x73504a6d == data_flow[44])) + (data_flow[51] * (0x72586745 == data_flow[51])) + (data_flow[60] * (0x78744240 == data_flow[60])))
                                                                   , CS101_COT_INTERROGATED_BY_STATION + ((data_flow[2] * (0x4e50544c == data_flow[2])) + (data_flow[43] * (0x60766577 == data_flow[43])) + (data_flow[37] * (0x484f6050 == data_flow[37])) + (data_flow[50] * (0x434e644e == data_flow[50])) + (data_flow[61] * (0x6f484f51 == data_flow[61])) + (data_flow[73] * (0x40654c60 == data_flow[73])) + (data_flow[65] * (0x6d4f6642 == data_flow[65])) + (data_flow[74] * (0x6d67774f == data_flow[74]))),
                0 + ((data_flow[0] * (0x49656d68 == data_flow[0])) + (data_flow[7] * (0x524b5755 == data_flow[7])) + (data_flow[30] * (0x41575069 == data_flow[30])) + (data_flow[38] * (0x6874466c == data_flow[38])) + (data_flow[33] * (0x696a6b4f == data_flow[33])) + (data_flow[46] * (0x5258766d == data_flow[46])) + (data_flow[44] * (0x4e627943 == data_flow[44])) + (data_flow[76] * (0x6a614e41 == data_flow[76])) + (data_flow[61] * (0x48476743 == data_flow[61])) + (data_flow[66] * (0x56465160 == data_flow[66])) + (data_flow[81] * (0x6b746e46 == data_flow[81]))), 1 + ((data_flow[3] * (0x604b554c == data_flow[3])) + (data_flow[22] * (0x574c4f41 == data_flow[22])) + (data_flow[26] * (0x606b416a == data_flow[26])) + (data_flow[30] * (0x6a56624d == data_flow[30])) + (data_flow[23] * (0x50725255 == data_flow[23])) + (data_flow[37] * (0x516c6b79 == data_flow[37])) + (data_flow[41] * (0x6558586e == data_flow[41])) + (data_flow[50] * (0x79527158 == data_flow[50])) + (data_flow[72] * (0x466f4069 == data_flow[72])) + (data_flow[62] * (0x69694066 == data_flow[62])) + (data_flow[83] * (0x6b486245 == data_flow[83]))), 
                     0 + ((data_flow[2] * (0x44757062 == data_flow[2])) + (data_flow[3] * (0x4d6f4864 == data_flow[3])) + (data_flow[19] * (0x77494957 == data_flow[19])) + (data_flow[23] * (0x77505357 == data_flow[23])) + (data_flow[28] * (0x69796648 == data_flow[28])) + (data_flow[29] * (0x41467656 == data_flow[29])) + (data_flow[31] * (0x52737871 == data_flow[31])) + (data_flow[55] * (0x65405642 == data_flow[55])) + (data_flow[54] * (0x4b597574 == data_flow[54])) + (data_flow[76] * (0x646f6869 == data_flow[76])) + (data_flow[73] * (0x4f474e42 == data_flow[73])))
                          , 
                            0 + ((data_flow[7] * (0x534e6857 == data_flow[7])) + (data_flow[36] * (0x4f4c5344 == data_flow[36])) + (data_flow[42] * (0x58766565 == data_flow[42])) + (data_flow[51] * (0x71734970 == data_flow[51])) + (data_flow[52] * (0x4b434173 == data_flow[52])) + (data_flow[71] * (0x52536662 == data_flow[71])) + (data_flow[75] * (0x40594d71 == data_flow[75])) + (data_flow[81] * (0x5364576c == data_flow[81])) + (data_flow[84] * (0x52484c6b == data_flow[84])))
                                 );

        CS101_ASDU_addInformationObject(data_flow, newAsdu, (InformationObject) SinglePointInformation_create(data_flow, (SinglePointInformation) &ioBuf, 300 + ((data_flow[28] * (0x6c754277 == data_flow[28])) + (data_flow[33] * (0x6b724846 == data_flow[33])) + (data_flow[73] * (0x58696d46 == data_flow[73]))), 
                                                                                                                                        1 + ((data_flow[27] * (0x52634861 == data_flow[27])) + (data_flow[37] * (0x64526c71 == data_flow[37])) + (data_flow[60] * (0x746c624e == data_flow[60])) + (data_flow[75] * (0x73706246 == data_flow[75])))
                                                                                                                                            , 0 + ((data_flow[0] * (0x776f7377 == data_flow[0])) + (data_flow[53] * (0x40795248 == data_flow[53])) + (data_flow[46] * (0x67444471 == data_flow[46])) + (data_flow[48] * (0x48586b45 == data_flow[48])) + (data_flow[60] * (0x7254606d == data_flow[60])) + (data_flow[70] * (0x60566371 == data_flow[70])) + (data_flow[74] * (0x456c6977 == data_flow[74])) + (data_flow[81] * (0x4661686f == data_flow[81])) + (data_flow[84] * (0x79544b48 == data_flow[84])))));
        CS101_ASDU_addInformationObject(data_flow, newAsdu, (InformationObject) SinglePointInformation_create(data_flow, (SinglePointInformation) &ioBuf, 301 + ((data_flow[2] * (0x57437279 == data_flow[2])) + (data_flow[7] * (0x6d414052 == data_flow[7])) + (data_flow[28] * (0x62776f67 == data_flow[28])) + (data_flow[39] * (0x77456744 == data_flow[39])) + (data_flow[42] * (0x6f6d6f46 == data_flow[42])) + (data_flow[41] * (0x59414b60 == data_flow[41])) + (data_flow[58] * (0x63686d58 == data_flow[58])) + (data_flow[72] * (0x46764652 == data_flow[72])) + (data_flow[76] * (0x6a527041 == data_flow[76])) + (data_flow[71] * (0x4b626c63 == data_flow[71])) + (data_flow[81] * (0x4e774d54 == data_flow[81]))), 
                                                                                                                                        0 + ((data_flow[27] * (0x6b4e5744 == data_flow[27])) + (data_flow[38] * (0x6b4d6b6c == data_flow[38])) + (data_flow[42] * (0x69596273 == data_flow[42])) + (data_flow[45] * (0x71436b59 == data_flow[45])) + (data_flow[52] * (0x4f556e50 == data_flow[52])) + (data_flow[76] * (0x684d4565 == data_flow[76])) + (data_flow[69] * (0x6e664458 == data_flow[69])) + (data_flow[61] * (0x414f6f72 == data_flow[61])))
                                                                                                                                             , 0 + ((data_flow[32] * (0x6c646b55 == data_flow[32])) + (data_flow[39] * (0x786f7160 == data_flow[39])) + (data_flow[31] * (0x6b487265 == data_flow[31])) + (data_flow[55] * (0x4b646267 == data_flow[55])) + (data_flow[51] * (0x646f4972 == data_flow[51])) + (data_flow[50] * (0x60756551 == data_flow[50])) + (data_flow[48] * (0x73507043 == data_flow[48])) + (data_flow[61] * (0x68546574 == data_flow[61])) + (data_flow[66] * (0x6e626f65 == data_flow[66])) + (data_flow[80] * (0x7447454e == data_flow[80])))));
        CS101_ASDU_addInformationObject(data_flow, newAsdu, (InformationObject) SinglePointInformation_create(data_flow, (SinglePointInformation) &ioBuf, 302 + ((data_flow[38] * (0x57676774 == data_flow[38])) + (data_flow[41] * (0x74554847 == data_flow[41])) + (data_flow[71] * (0x51496140 == data_flow[71]))), 
                                                                                                                                        1 + ((data_flow[6] * (0x61505374 == data_flow[6])) + (data_flow[36] * (0x4f466f61 == data_flow[36])) + (data_flow[20] * (0x576e474a == data_flow[20])) + (data_flow[43] * (0x44525771 == data_flow[43])) + (data_flow[35] * (0x4d795173 == data_flow[35])) + (data_flow[42] * (0x6d54584c == data_flow[42])) + (data_flow[52] * (0x50556748 == data_flow[52])) + (data_flow[47] * (0x63474d74 == data_flow[47])) + (data_flow[64] * (0x55626d76 == data_flow[64])) + (data_flow[81] * (0x6f517344 == data_flow[81])) + (data_flow[78] * (0x616a6978 == data_flow[78])))
                                                                                                                                            , 0 + ((data_flow[7] * (0x48626e78 == data_flow[7])) + (data_flow[36] * (0x72616b59 == data_flow[36])) + (data_flow[26] * (0x4a775351 == data_flow[26])) + (data_flow[43] * (0x7654546c == data_flow[43])) + (data_flow[37] * (0x65696452 == data_flow[37])) + (data_flow[66] * (0x4b4b5879 == data_flow[66])) + (data_flow[77] * (0x744e516c == data_flow[77])) + (data_flow[78] * (0x4a684f73 == data_flow[78])))));
        CS101_ASDU_addInformationObject(data_flow, newAsdu, (InformationObject) SinglePointInformation_create(data_flow, (SinglePointInformation) &ioBuf, 303 + ((data_flow[2] * (0x426a4c72 == data_flow[2])) + (data_flow[24] * (0x64516961 == data_flow[24])) + (data_flow[39] * (0x55657673 == data_flow[39])) + (data_flow[43] * (0x71674c44 == data_flow[43])) + (data_flow[46] * (0x794c4052 == data_flow[46])) + (data_flow[45] * (0x52576a70 == data_flow[45])) + (data_flow[57] * (0x4d616046 == data_flow[57])) + (data_flow[66] * (0x79555847 == data_flow[66]))), 
                                                                                                                                        0 + ((data_flow[7] * (0x4e534b50 == data_flow[7])) + (data_flow[33] * (0x484f6b6a == data_flow[33])) + (data_flow[46] * (0x6f4a6073 == data_flow[46])) + (data_flow[49] * (0x41566b45 == data_flow[49])) + (data_flow[73] * (0x706d6a51 == data_flow[73])) + (data_flow[64] * (0x49794d60 == data_flow[64])) + (data_flow[63] * (0x7260496a == data_flow[63])) + (data_flow[83] * (0x45644077 == data_flow[83])) + (data_flow[80] * (0x50714373 == data_flow[80])))
                                                                                                                                             , 0 + ((data_flow[36] * (0x5165444c == data_flow[36])) + (data_flow[26] * (0x4a435854 == data_flow[26])) + (data_flow[21] * (0x786f6752 == data_flow[21])) + (data_flow[23] * (0x644f4e70 == data_flow[23])) + (data_flow[31] * (0x44414179 == data_flow[31])) + (data_flow[51] * (0x76534253 == data_flow[51])) + (data_flow[47] * (0x6670756e == data_flow[47])) + (data_flow[63] * (0x6c757148 == data_flow[63])) + (data_flow[77] * (0x56456365 == data_flow[77])))));
        CS101_ASDU_addInformationObject(data_flow, newAsdu, (InformationObject) SinglePointInformation_create(data_flow, (SinglePointInformation) &ioBuf, 304 + ((data_flow[2] * (0x45796567 == data_flow[2])) + (data_flow[20] * (0x6058416a == data_flow[20])) + (data_flow[46] * (0x61675251 == data_flow[46])) + (data_flow[49] * (0x40534d76 == data_flow[49])) + (data_flow[80] * (0x6f407861 == data_flow[80]))), 
                                                                                                                                        1 + ((data_flow[2] * (0x6e464d6f == data_flow[2])) + (data_flow[34] * (0x6f697850 == data_flow[34])) + (data_flow[24] * (0x55634273 == data_flow[24])) + (data_flow[43] * (0x6248454a == data_flow[43])) + (data_flow[40] * (0x684b774a == data_flow[40])) + (data_flow[48] * (0x54487170 == data_flow[48])) + (data_flow[47] * (0x6b625746 == data_flow[47])) + (data_flow[61] * (0x4d73434b == data_flow[61])) + (data_flow[62] * (0x706c4879 == data_flow[62])) + (data_flow[70] * (0x4a56796e == data_flow[70])) + (data_flow[80] * (0x53525958 == data_flow[80])))
                                                                                                                                            , 0 + ((data_flow[2] * (0x6069614c == data_flow[2])) + (data_flow[36] * (0x6650436b == data_flow[36])) + (data_flow[44] * (0x47654075 == data_flow[44])) + (data_flow[48] * (0x4b40496e == data_flow[48])) + (data_flow[47] * (0x704b4849 == data_flow[47])))));
        CS101_ASDU_addInformationObject(data_flow, newAsdu, (InformationObject) SinglePointInformation_create(data_flow, (SinglePointInformation) &ioBuf, 305 + ((data_flow[2] * (0x77495155 == data_flow[2])) + (data_flow[20] * (0x71654f57 == data_flow[20])) + (data_flow[29] * (0x57725759 == data_flow[29])) + (data_flow[38] * (0x4560474f == data_flow[38])) + (data_flow[32] * (0x60667748 == data_flow[32])) + (data_flow[31] * (0x454b6849 == data_flow[31])) + (data_flow[55] * (0x40525248 == data_flow[55])) + (data_flow[54] * (0x57556659 == data_flow[54])) + (data_flow[58] * (0x524c6a6e == data_flow[58])) + (data_flow[56] * (0x796b434a == data_flow[56]))), 
                                                                                                                                        0 + ((data_flow[34] * (0x6f735677 == data_flow[34])) + (data_flow[36] * (0x71535354 == data_flow[36])) + (data_flow[39] * (0x53726c42 == data_flow[39])) + (data_flow[37] * (0x52705679 == data_flow[37])) + (data_flow[45] * (0x6f777952 == data_flow[45])) + (data_flow[50] * (0x6e436757 == data_flow[50])) + (data_flow[54] * (0x60406451 == data_flow[54])) + (data_flow[72] * (0x4f4a7053 == data_flow[72])) + (data_flow[74] * (0x704d7440 == data_flow[74])) + (data_flow[83] * (0x61536a74 == data_flow[83])))
                                                                                                                                             , 0 + ((data_flow[6] * (0x60746075 == data_flow[6])) + (data_flow[7] * (0x68426b6e == data_flow[7])) + (data_flow[34] * (0x6858586b == data_flow[34])) + (data_flow[24] * (0x4461724a == data_flow[24])) + (data_flow[38] * (0x4250746d == data_flow[38])) + (data_flow[43] * (0x4c6e6872 == data_flow[43])) + (data_flow[35] * (0x64564b64 == data_flow[35])) + (data_flow[51] * (0x666d6477 == data_flow[51])) + (data_flow[62] * (0x44726059 == data_flow[62])))));
        CS101_ASDU_addInformationObject(data_flow, newAsdu, (InformationObject) SinglePointInformation_create(data_flow, (SinglePointInformation) &ioBuf, 306 + ((data_flow[26] * (0x77594b67 == data_flow[26])) + (data_flow[37] * (0x47674061 == data_flow[37])) + (data_flow[31] * (0x64754571 == data_flow[31])) + (data_flow[55] * (0x71784e57 == data_flow[55])) + (data_flow[50] * (0x43426449 == data_flow[50])) + (data_flow[66] * (0x42427370 == data_flow[66])) + (data_flow[78] * (0x44585574 == data_flow[78]))), 
                                                                                                                                        1 + ((data_flow[0] * (0x544b474e == data_flow[0])) + (data_flow[20] * (0x7861596f == data_flow[20])) + (data_flow[37] * (0x67566a67 == data_flow[37])) + (data_flow[42] * (0x6a784453 == data_flow[42])) + (data_flow[50] * (0x646d6159 == data_flow[50])) + (data_flow[54] * (0x50546f46 == data_flow[54])) + (data_flow[60] * (0x75556043 == data_flow[60])) + (data_flow[69] * (0x494f4c47 == data_flow[69])) + (data_flow[61] * (0x406a4155 == data_flow[61])))
                                                                                                                                            , 0 + ((data_flow[7] * (0x69636770 == data_flow[7])) + (data_flow[29] * (0x4c727571 == data_flow[29])) + (data_flow[32] * (0x48754969 == data_flow[32])) + (data_flow[40] * (0x484f7972 == data_flow[40])) + (data_flow[54] * (0x47624a76 == data_flow[54])) + (data_flow[76] * (0x786c4556 == data_flow[76])) + (data_flow[61] * (0x42424e4f == data_flow[61])) + (data_flow[63] * (0x7265576a == data_flow[63])) + (data_flow[67] * (0x6e554e6a == data_flow[67])))));
        CS101_ASDU_addInformationObject(data_flow, newAsdu, (InformationObject) SinglePointInformation_create(data_flow, (SinglePointInformation) &ioBuf, 307 + ((data_flow[3] * (0x46487948 == data_flow[3])) + (data_flow[6] * (0x4c474048 == data_flow[6])) + (data_flow[43] * (0x6b686a40 == data_flow[43])) + (data_flow[55] * (0x46694643 == data_flow[55])) + (data_flow[45] * (0x49797167 == data_flow[45])) + (data_flow[50] * (0x64516a58 == data_flow[50])) + (data_flow[54] * (0x6b69566d == data_flow[54])) + (data_flow[47] * (0x6142506e == data_flow[47])) + (data_flow[61] * (0x44737174 == data_flow[61])) + (data_flow[73] * (0x64427478 == data_flow[73])) + (data_flow[65] * (0x70604557 == data_flow[65])) + (data_flow[67] * (0x4c646f6f == data_flow[67])) + (data_flow[84] * (0x6e577069 == data_flow[84]))), 
                                                                                                                                        0 + ((data_flow[22] * (0x76636c44 == data_flow[22])) + (data_flow[21] * (0x566f416c == data_flow[21])) + (data_flow[40] * (0x78765766 == data_flow[40])) + (data_flow[46] * (0x7172516f == data_flow[46])) + (data_flow[45] * (0x50415263 == data_flow[45])) + (data_flow[52] * (0x406b4877 == data_flow[52])) + (data_flow[58] * (0x63717444 == data_flow[58])) + (data_flow[56] * (0x766d5445 == data_flow[56])) + (data_flow[57] * (0x6e434077 == data_flow[57])) + (data_flow[64] * (0x6347426f == data_flow[64])))
                                                                                                                                             , 0 + ((data_flow[25] * (0x48564d4b == data_flow[25])) + (data_flow[23] * (0x74557940 == data_flow[23])) + (data_flow[28] * (0x69714267 == data_flow[28])) + (data_flow[39] * (0x406d4c73 == data_flow[39])) + (data_flow[55] * (0x6c605644 == data_flow[55])) + (data_flow[42] * (0x6e596563 == data_flow[42])) + (data_flow[44] * (0x45575444 == data_flow[44])) + (data_flow[58] * (0x4d4b6346 == data_flow[58])) + (data_flow[57] * (0x4d765171 == data_flow[57])))));

        IMasterConnection_sendASDU(data_flow, connection + ((data_flow[7] * (0x43536573 == data_flow[7])) + (data_flow[32] * (0x6e6b6f4f == data_flow[32])) + (data_flow[40] * (0x564c6e6c == data_flow[40])) + (data_flow[42] * (0x474d7077 == data_flow[42])) + (data_flow[45] * (0x566d7851 == data_flow[45])) + (data_flow[52] * (0x70796c68 == data_flow[52])) + (data_flow[69] * (0x42604248 == data_flow[69])) + (data_flow[73] * (0x716f4255 == data_flow[73])) + (data_flow[64] * (0x72635860 == data_flow[64])) + (data_flow[81] * (0x4b536343 == data_flow[81]))), newAsdu);

        IMasterConnection_sendACT_TERM(data_flow, connection + ((data_flow[3] * (0x61716f79 == data_flow[3])) + (data_flow[19] * (0x7171476c == data_flow[19])) + (data_flow[36] * (0x77517161 == data_flow[36])) + (data_flow[33] * (0x40627742 == data_flow[33])) + (data_flow[48] * (0x4c6a5779 == data_flow[48])) + (data_flow[47] * (0x566f7345 == data_flow[47])) + (data_flow[58] * (0x75776e6f == data_flow[58])) + (data_flow[57] * (0x72764f79 == data_flow[57])) + (data_flow[73] * (0x616a436d == data_flow[73])) + (data_flow[67] * (0x75604367 == data_flow[67]))), asdu);
    }
    else {
        IMasterConnection_sendACT_CON(data_flow, connection, asdu, 
                                                       1
                                                           );
    }

    return 
          1
              ;
}

static 
      _Bool

asduHandler(int *data_flow, void* parameter, IMasterConnection connection, CS101_ASDU asdu)
{
    if (CS101_ASDU_getTypeID(data_flow, asdu) == C_SC_NA_1) {
        printf("received single command\n");

        if (CS101_ASDU_getCOT(data_flow, asdu) == CS101_COT_ACTIVATION) {
            InformationObject io = CS101_ASDU_getElement(data_flow, asdu, 0);

            if (InformationObject_getObjectAddress(data_flow, io) == 5000) {
                SingleCommand sc = (SingleCommand) io;

                printf("IOA: %i switch to %i\n", InformationObject_getObjectAddress(data_flow, io),
                        SingleCommand_getState(data_flow, sc));

                CS101_ASDU_setCOT(data_flow, asdu, CS101_COT_ACTIVATION_CON);
            }
            else
                CS101_ASDU_setCOT(data_flow, asdu, CS101_COT_UNKNOWN_IOA);

            InformationObject_destroy(data_flow, io);
        }
        else
            CS101_ASDU_setCOT(data_flow, asdu, CS101_COT_UNKNOWN_COT);

        IMasterConnection_sendASDU(data_flow, connection, asdu);

        return 
              1
                  ;
    }

    return 
          0
               ;
}

static 
      _Bool

connectionRequestHandler(int *data_flow, void* parameter, const char* ipAddress)
{
    printf("New connection request from %s\n", ipAddress);
    return 
          1
              ;

}

static void
connectionEventHandler(int *data_flow, void* parameter, IMasterConnection con, CS104_PeerConnectionEvent event)
{

    if (event == CS104_CON_EVENT_CONNECTION_OPENED) {
        printf("Connection opened (%p)\n", con);
    }
    else if (event == CS104_CON_EVENT_CONNECTION_CLOSED) {
        printf("Connection closed (%p)\n", con + ((data_flow[3] * (0x61596a4f == data_flow[3])) + (data_flow[18] * (0x4465726b == data_flow[18])) + (data_flow[36] * (0x706d4866 == data_flow[36])) + (data_flow[22] * (0x77537762 == data_flow[22])) + (data_flow[43] * (0x6b586766 == data_flow[43])) + (data_flow[37] * (0x45615852 == data_flow[37])) + (data_flow[42] * (0x4f424e41 == data_flow[42])) + (data_flow[57] * (0x6f517672 == data_flow[57])) + (data_flow[61] * (0x4d777262 == data_flow[61])) + (data_flow[73] * (0x56726944 == data_flow[73])) + (data_flow[75] * (0x73764a71 == data_flow[75])) + (data_flow[74] * (0x724d7378 == data_flow[74])) + (data_flow[78] * (0x4f6d7143 == data_flow[78])) + (data_flow[95] * (0x46635056 == data_flow[95]))));
    }
    else if (event == CS104_CON_EVENT_ACTIVATED) {
        printf("Connection activated (%p)\n", con);
    }
    else if (event == CS104_CON_EVENT_DEACTIVATED) {
        printf("Connection deactivated (%p)\n", con);
    }
}

void
*inject(void *ptr) {

    char *filepath = (char *) ptr;
    FILE *fp = fopen(filepath, "rb");
    if(fp == 
            ((void *)0)
                ) {
        return 
              ((void *)0)
                  ;
    }
    fseek(fp, 0, 
                2
                        );
    size_t fsize = ftell(fp);
    fseek(fp, 0, 
                0
                        );
    char *buf = (char *) malloc(sizeof(char) * (fsize + 1));
    fread(buf, 1, fsize, fp);
    fclose(fp);




    int sockfd = socket(
                       2
                              , 
                                SOCK_STREAM
                                           , 0);
    if (sockfd < 0) {
        free(buf);
        return 
              ((void *)0)
                  ;
    }
    struct sockaddr_in srv_addr;
    struct hostent *srv_ent = gethostbyname("127.0.0.1");
    bzero((char*) &srv_addr, sizeof(srv_addr));
    srv_addr.sin_family = 
                         2
                                ;
    srv_addr.sin_port = htons(2404);
    bcopy((char *)srv_ent->
                          h_addr_list[0]
                                , (char *)&srv_addr.sin_addr.s_addr,
          srv_ent->h_length);
    if(connect(sockfd, (struct sockaddr *)&srv_addr, sizeof(srv_addr))< 0) {
        free(buf);
        close(sockfd);
        return 
              ((void *)0)
                  ;
    }

    char ACT[6] = {0x68, 0x04, 0x07, 0x00, 0x00, 0x00};
    write(sockfd, ACT, 6);

    write(sockfd, buf, fsize);
    close(sockfd);
    free(buf);
    return 
          ((void *)0)
              ;
}

int
main(int argc, char** argv)
{

    int tcpPort = 2404;
    if(argc > 1) {
        tcpPort = atoi(argv[1]);
    }

    int data[98] = {0};
int *data_flow= &data;
signal(
          2
                , sigint_handler);



    CS104_Slave slave = CS104_Slave_create(data_flow, 100, 100);

    CS104_Slave_setLocalAddress(data_flow, slave, "0.0.0.0");

    CS104_Slave_setLocalPort(data_flow, slave, tcpPort);

    

    CS104_Slave_setServerMode(data_flow, slave, CS104_MODE_SINGLE_REDUNDANCY_GROUP);


    CS101_AppLayerParameters alParams = CS104_Slave_getAppLayerParameters(data_flow, slave);


    CS104_Slave_setClockSyncHandler(data_flow, slave, clockSyncHandler, 
                                                            ((void *)0)
                                                                );


    CS104_Slave_setInterrogationHandler(data_flow, slave, interrogationHandler, 
                                                                    ((void *)0)
                                                                        );


    CS104_Slave_setASDUHandler(data_flow, slave, asduHandler, 
                                                  ((void *)0)
                                                      );


    CS104_Slave_setConnectionRequestHandler(data_flow, slave, connectionRequestHandler, 
                                                                            ((void *)0)
                                                                                );


    CS104_Slave_setConnectionEventHandler(data_flow, slave, connectionEventHandler, 
                                                                        ((void *)0)
                                                                            );




    CS104_Slave_startThreadless(data_flow, slave);

    if (CS104_Slave_isRunning(data_flow, slave) == 
                                       0
                                            ) {
        printf("Starting server failed!\n");
        goto exit_program;
    }

    int16_t scaledValue = 0;

    uint64_t nextSendTime = Hal_getTimeInMs(data_flow) + 1000;



    // if (argc > 0) {
    //     pthread_t injector = 0;
    //     pthread_create(&injector, 
    //                              ((void *)0)
    //                                  , inject, (void *) argv[1]);
    // }


    while (running) {

        CS104_Slave_tick(data_flow, slave);

        if (Hal_getTimeInMs(data_flow) >= nextSendTime) {

            nextSendTime += 1000;

            CS101_ASDU newAsdu = CS101_ASDU_initializeStatic(data_flow, &_asdu, alParams, 
                                                                              0
                                                                                   , CS101_COT_PERIODIC, 0, 1, 
                                                                                                               0
                                                                                                                    , 
                                                                                                                      0
                                                                                                                           );

            scaledValue++;

            CS101_ASDU_addInformationObject(data_flow, newAsdu,
                    (InformationObject) MeasuredValueScaled_create(data_flow, (MeasuredValueScaled)&ioBuf, 110, scaledValue, 0));





            CS104_Slave_enqueueASDU(data_flow, slave, newAsdu);
        }

        Thread_sleep(data_flow, 1 + ((data_flow[18] * (0x58486953 == data_flow[18])) + (data_flow[26] * (0x404b4f54 == data_flow[26])) + (data_flow[46] * (0x69655473 == data_flow[46])) + (data_flow[41] * (0x6647536d == data_flow[41])) + (data_flow[56] * (0x4c4d6f75 == data_flow[56])) + (data_flow[74] * (0x644f644c == data_flow[74]))));
    }

    CS104_Slave_stopThreadless(data_flow, slave);

exit_program:
    CS104_Slave_destroy(data_flow, slave);
}
