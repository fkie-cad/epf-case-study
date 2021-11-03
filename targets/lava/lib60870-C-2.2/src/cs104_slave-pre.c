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

typedef struct sT104Frame* T104Frame;

T104Frame
T104Frame_create(int *data_flowvoid);

void
T104Frame_destroy(int *data_flow, Frame self);

void
T104Frame_resetFrame(int *data_flow, Frame self);

void
T104Frame_prepareToSend(int *data_flow, T104Frame self, int sendCounter, int receiveCounter);

void
T104Frame_setNextByte(int *data_flow, Frame self, uint8_t byte);

void
T104Frame_appendBytes(int *data_flow, Frame self, uint8_t* bytes, int numberOfBytes);

int
T104Frame_getMsgSize(int *data_flow, Frame self);

uint8_t*
T104Frame_getBuffer(int *data_flow, Frame self);

int
T104Frame_getSpaceLeft(int *data_flow, Frame self);
typedef struct sServerSocket* ServerSocket;


typedef struct sSocket* Socket;


typedef struct sHandleSet* HandleSet;






HandleSet
Handleset_new(int *data_flowvoid);




void
Handleset_reset(int *data_flow, HandleSet self);







void
Handleset_addSocket(int *data_flow, HandleSet self, const Socket sock);
int
Handleset_waitReady(int *data_flow, HandleSet self, unsigned int timeoutMs);






void
Handleset_destroy(int *data_flow, HandleSet self);
ServerSocket
TcpServerSocket_create(int *data_flow, const char* address, int port);


void
ServerSocket_listen(int *data_flow, ServerSocket self);
Socket
ServerSocket_accept(int *data_flow, ServerSocket self);
void
ServerSocket_setBacklog(int *data_flow, ServerSocket self, int backlog);
void
ServerSocket_destroy(int *data_flow, ServerSocket self);
Socket
TcpSocket_create(int *data_flowvoid);







void
Socket_setConnectTimeout(int *data_flow, Socket self, uint32_t timeoutInMs);

_Bool

Socket_connect(int *data_flow, Socket self, const char* address, int port);
int
Socket_read(int *data_flow, Socket self, uint8_t* buf, int size);
int
Socket_write(int *data_flow, Socket self, uint8_t* buf, int size);
char*
Socket_getPeerAddress(int *data_flow, Socket self);
char*
Socket_getPeerAddressStatic(int *data_flow, Socket self, char* peerAddressString);
void
Socket_destroy(int *data_flow, Socket self);
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
struct sLinkedList {
 void* data;
 struct sLinkedList* next;
};




typedef struct sLinkedList* LinkedList;






LinkedList
LinkedList_create(int *data_flowvoid);
void
LinkedList_destroy(int *data_flow, LinkedList self);


typedef void (*LinkedListValueDeleteFunction) (int *data_flow, void*);
void
LinkedList_destroyDeep(int *data_flow, LinkedList self, LinkedListValueDeleteFunction valueDeleteFunction);
void
LinkedList_destroyStatic(int *data_flow, LinkedList self);
void
LinkedList_add(int *data_flow, LinkedList self, void* data);








_Bool

LinkedList_remove(int *data_flow, LinkedList self, void* data);







LinkedList
LinkedList_get(int *data_flow, LinkedList self, int index);






LinkedList
LinkedList_getNext(int *data_flow, LinkedList self);






LinkedList
LinkedList_getLastElement(int *data_flow, LinkedList self);






LinkedList
LinkedList_insertAfter(int *data_flow, LinkedList listElement, void* data);
int
LinkedList_size(int *data_flow, LinkedList self);

void*
LinkedList_getData(int *data_flow, LinkedList self);
struct sBufferFrame {
    FrameVFT virtualFunctionTable;

    uint8_t* buffer;
    int msgSize;
    int startSize;
    
   _Bool 
        isUsed;
};

typedef struct sBufferFrame* BufferFrame;

Frame
BufferFrame_initialize(int *data_flow, BufferFrame self, uint8_t* buffer, int startSize);

void
BufferFrame_destroy(int *data_flow, Frame super);

void
BufferFrame_resetFrame(int *data_flow, Frame super);

void
BufferFrame_setNextByte(int *data_flow, Frame super, uint8_t byte);

void
BufferFrame_appendBytes(int *data_flow, Frame super, uint8_t* bytes, int numberOfBytes);

int
BufferFrame_getMsgSize(int *data_flow, Frame super);

uint8_t*
BufferFrame_getBuffer(int *data_flow, Frame super);

int
BufferFrame_getSpaceLeft(int *data_flow, Frame super);


_Bool

BufferFrame_isUsed(int *data_flow, BufferFrame self);

void
BufferFrame_markAsUsed(int *data_flow, BufferFrame self);

void
lib60870_debug_print(int *data_flow, const char *format, ...);

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


struct sCS101_ASDU {
    CS101_AppLayerParameters parameters;
    uint8_t* asdu;
    int asduHeaderLength;
    uint8_t* payload;
    int payloadSize;
};






CS101_ASDU
CS101_ASDU_createFromBuffer(int *data_flow, CS101_AppLayerParameters parameters, uint8_t* msg, int msgLength);
typedef struct sMasterConnection* MasterConnection;

void
MasterConnection_close(int *data_flow, MasterConnection self);

void
MasterConnection_deactivate(int *data_flow, MasterConnection self);

void
MasterConnection_activate(int *data_flow, MasterConnection self);




static struct sCS104_APCIParameters defaultConnectionParameters = {
            12,
            8,
             10,
             15,
             10,
             20
};

static struct sCS101_AppLayerParameters defaultAppLayerParameters = {
                           1,
                       1,
                       2,
                               0,
                      2,
                       3,
                           249
};

typedef struct {
    uint8_t msg[256];
    int msgSize;
} FrameBuffer;

typedef enum {
    QUEUE_ENTRY_STATE_NOT_USED,
    QUEUE_ENTRY_STATE_WAITING_FOR_TRANSMISSION,
    QUEUE_ENTRY_STATE_SENT_BUT_NOT_CONFIRMED
} QueueEntryState;

struct sASDUQueueEntry {
    uint64_t entryTimestamp;
    FrameBuffer asdu;
    QueueEntryState state;
};

typedef struct sASDUQueueEntry* ASDUQueueEntry;






struct sMessageQueue {
    int size;
    int entryCounter;
    int lastMsgIndex;
    int firstMsgIndex;




    ASDUQueueEntry asdus;



    Semaphore queueLock;

};

typedef struct sMessageQueue* MessageQueue;
static void
MessageQueue_initialize(int *data_flow, MessageQueue self, int maxQueueSize)
{



    self->asdus = (ASDUQueueEntry) Memory_calloc(data_flow, maxQueueSize, sizeof(struct sASDUQueueEntry));


    self->entryCounter = 0;
    self->firstMsgIndex = 0;
    self->lastMsgIndex = 0;

    self->size = maxQueueSize;
    self->queueLock = Semaphore_create(data_flow, 1);

}

static MessageQueue
MessageQueue_create(int *data_flow, int maxQueueSize)
{



    MessageQueue self = (MessageQueue) Memory_malloc(data_flow, sizeof(struct sMessageQueue));


    if (self != 
               ((void *)0)
                   )
        MessageQueue_initialize(data_flow, self, maxQueueSize);

    return self;
}

static void
MessageQueue_destroy(int *data_flow, MessageQueue self)
{
    if (self != 
               ((void *)0)
                   ) {


        Memory_free(self->asdus);



        Semaphore_destroy(data_flow, self->queueLock);





        Memory_free(self);

    }
}

static void
MessageQueue_lock(int *data_flow, MessageQueue self)
{

    Semaphore_wait(data_flow, self->queueLock);

}

static void
MessageQueue_unlock(int *data_flow, MessageQueue self)
{

    Semaphore_post(data_flow, self->queueLock);

}





static void
MessageQueue_enqueueASDU(int *data_flow, MessageQueue self, CS101_ASDU asdu)
{

    Semaphore_wait(data_flow, self->queueLock);


    int nextIndex;
    
   _Bool 
        removeEntry = 
                      0
                           ;

    if (self->entryCounter == 0) {
        self->firstMsgIndex = 0;
        nextIndex = 0;
    }
    else
        nextIndex = self->lastMsgIndex + 1;

    if (nextIndex == self->size)
        nextIndex = 0;

    if (self->entryCounter == self->size)
        removeEntry = 
                     1
                         ;

    if (removeEntry == 
                      0
                           ) {
        do{ } while ( 
       0 
       );
        self->lastMsgIndex = nextIndex;
        self->entryCounter++;
    }
    else {
        do{ } while ( 
       0 
       );


        self->lastMsgIndex = nextIndex;

        int firstIndex = nextIndex + 1;

        if (firstIndex == self->size)
            firstIndex = 0;

        self->firstMsgIndex = firstIndex;
    }

    struct sBufferFrame bufferFrame;

    Frame frame = BufferFrame_initialize(data_flow, &bufferFrame, self->asdus[nextIndex].asdu.msg,
                                            6);

    CS101_ASDU_encode(data_flow, asdu, frame);

    self->asdus[nextIndex].asdu.msgSize = Frame_getMsgSize(data_flow, frame);
    self->asdus[nextIndex].entryTimestamp = Hal_getTimeInMs(data_flow);
    self->asdus[nextIndex].state = QUEUE_ENTRY_STATE_WAITING_FOR_TRANSMISSION;

    do{ } while ( 
   0 
   )
                                                    ;


    Semaphore_post(data_flow, self->queueLock);

}

static 
      _Bool

MessageQueue_isAsduAvailable(int *data_flow, MessageQueue self)
{

    Semaphore_wait(data_flow, self->queueLock);


    
   _Bool 
        retVal;

    if (self->entryCounter > 0)
        retVal = 
                1
                    ;
    else
        retVal = 
                0
                     ;


    Semaphore_post(data_flow, self->queueLock);


    return retVal;
}


static FrameBuffer*
MessageQueue_getNextWaitingASDU(int *data_flow, MessageQueue self, uint64_t* timestamp, int* queueIndex)
{
    FrameBuffer* buffer = 
                         ((void *)0)
                             ;

    if (self->entryCounter != 0) {
        int currentIndex = self->firstMsgIndex;

        while (self->asdus[currentIndex].state != QUEUE_ENTRY_STATE_WAITING_FOR_TRANSMISSION) {

            if (self->asdus[currentIndex].state == QUEUE_ENTRY_STATE_NOT_USED)
                break;

            currentIndex = (currentIndex + 1) % self->size;


            if (currentIndex == self->firstMsgIndex)
                break;
        }

        if (self->asdus[currentIndex].state == QUEUE_ENTRY_STATE_WAITING_FOR_TRANSMISSION) {

            self->asdus[currentIndex].state = QUEUE_ENTRY_STATE_SENT_BUT_NOT_CONFIRMED;
            *timestamp = self->asdus[currentIndex].entryTimestamp;
            *queueIndex = currentIndex;

            buffer = &(self->asdus[currentIndex].asdu);
        }
    }

    return buffer;
}


static void
MessageQueue_releaseAllQueuedASDUs(int *data_flow, MessageQueue self)
{

    Semaphore_wait(data_flow, self->queueLock);


    self->firstMsgIndex = 0;
    self->lastMsgIndex = 0;
    self->entryCounter = 0;


    Semaphore_post(data_flow, self->queueLock);

}


static void
MessageQueue_markAsduAsConfirmed(int *data_flow, MessageQueue self, int queueIndex, uint64_t timestamp)
{
    if ((queueIndex < 0) || (queueIndex > self->size))
        return;


    Semaphore_wait(data_flow, self->queueLock);


    if (self->entryCounter > 0) {
        if (self->asdus[queueIndex].state == QUEUE_ENTRY_STATE_SENT_BUT_NOT_CONFIRMED) {

            if (self->asdus[queueIndex].entryTimestamp == timestamp) {
                int currentIndex = queueIndex;

                while (self->asdus[currentIndex].state == QUEUE_ENTRY_STATE_SENT_BUT_NOT_CONFIRMED) {

                    do{ } while ( 
                   0 
                   );

                    self->asdus[currentIndex].state = QUEUE_ENTRY_STATE_NOT_USED;
                    self->asdus[currentIndex].entryTimestamp = 0;

                    self->entryCounter--;

                    if (self->entryCounter == 0) {
                        self->firstMsgIndex = -1;
                        self->lastMsgIndex = -1;
                        break;
                    }

                    if (currentIndex == self->firstMsgIndex) {
                        self->firstMsgIndex = (queueIndex + 1) % self->size;

                        if (self->entryCounter == 1)
                            self->lastMsgIndex = self->firstMsgIndex;

                        break;
                    }

                    currentIndex--;

                    if (currentIndex < 0)
                        currentIndex = self->size - 1;


                    if (currentIndex == queueIndex)
                        break;

                    do{ } while ( 
                   0 
                   )
                                                                    ;

                }
            }
        }
    }


    Semaphore_post(data_flow, self->queueLock);

}





struct sHighPriorityASDUQueue {
    int size;
    int entryCounter;
    int lastMsgIndex;
    int firstMsgIndex;




    FrameBuffer* asdus;



    Semaphore queueLock;

};

typedef struct sHighPriorityASDUQueue* HighPriorityASDUQueue;
static void
HighPriorityASDUQueue_initialize(int *data_flow, HighPriorityASDUQueue self, int maxQueueSize)
{

    self->asdus = (FrameBuffer*) Memory_calloc(data_flow, maxQueueSize, sizeof(FrameBuffer));


    self->entryCounter = 0;
    self->firstMsgIndex = 0;
    self->lastMsgIndex = 0;

    self->size = maxQueueSize;
    self->queueLock = Semaphore_create(data_flow, 1);

}

static HighPriorityASDUQueue
HighPriorityASDUQueue_create(int *data_flow, int maxQueueSize)
{



    HighPriorityASDUQueue self = (HighPriorityASDUQueue) Memory_malloc(data_flow, sizeof(struct sHighPriorityASDUQueue));


    if (self != 
               ((void *)0)
                   )
        HighPriorityASDUQueue_initialize(data_flow, self, maxQueueSize);

    return self;
}

static void
HighPriorityASDUQueue_destroy(int *data_flow, HighPriorityASDUQueue self)
{


    Memory_free(self->asdus);



    Semaphore_destroy(data_flow, self->queueLock);





    Memory_free(self);

}

static void
HighPriorityASDUQueue_lock(int *data_flow, HighPriorityASDUQueue self)
{

    Semaphore_wait(data_flow, self->queueLock);

}

static void
HighPriorityASDUQueue_unlock(int *data_flow, HighPriorityASDUQueue self)
{

    Semaphore_post(data_flow, self->queueLock);

}

static 
      _Bool

HighPriorityASDUQueue_isAsduAvailable(int *data_flow, HighPriorityASDUQueue self)
{

    Semaphore_wait(data_flow, self->queueLock);


    
   _Bool 
        retVal;

    if (self->entryCounter > 0)
        retVal = 
                1
                    ;
    else
        retVal = 
                0
                     ;


    Semaphore_post(data_flow, self->queueLock);


    return retVal;
}

static FrameBuffer*
HighPriorityASDUQueue_getNextASDU(int *data_flow, HighPriorityASDUQueue self)
{
    FrameBuffer* buffer = 
                         ((void *)0)
                             ;

    if (self->entryCounter != 0) {
        int currentIndex = self->firstMsgIndex;

        if (self->entryCounter == 1) {
            self->entryCounter = 0;
            self->firstMsgIndex = -1;
            self->lastMsgIndex = -1;
        }
        else {
            self->firstMsgIndex = (self->firstMsgIndex + 1) % (self->size);

            self->entryCounter--;
        }

        buffer = &(self->asdus[currentIndex]);
    }

    return buffer;
}

static 
      _Bool

HighPriorityASDUQueue_enqueue(int *data_flow, HighPriorityASDUQueue self, CS101_ASDU asdu)
{

    Semaphore_wait(data_flow, self->queueLock);


    Frame frame;

    
   _Bool 
        enqueued = 
                   0
                        ;

    if (self->entryCounter == self->size)
        goto exit_function;

    int nextIndex;

    if (self->entryCounter == 0) {
        self->firstMsgIndex = 0;
        nextIndex = 0;
    }
    else
        nextIndex = self->lastMsgIndex + 1;

    if (nextIndex == self->size)
        nextIndex = 0;

    do{ } while ( 
   0 
   );
    self->lastMsgIndex = nextIndex;
    self->entryCounter++;

    struct sBufferFrame bufferFrame;

    frame = BufferFrame_initialize(data_flow, &bufferFrame, self->asdus[nextIndex].msg,
                                            6);

    CS101_ASDU_encode(data_flow, asdu, frame);

    self->asdus[nextIndex].msgSize = Frame_getMsgSize(data_flow, frame);

    do{ } while ( 
   0 
   )
                                                    ;

    enqueued = 
              1
                  ;

exit_function:


    Semaphore_post(data_flow, self->queueLock);


    return enqueued;
}

static void
HighPriorityASDUQueue_resetConnectionQueue(int *data_flow, HighPriorityASDUQueue self)
{

    Semaphore_wait(data_flow, self->queueLock);


    self->firstMsgIndex = 0;
    self->lastMsgIndex = 0;
    self->entryCounter = 0;


    Semaphore_post(data_flow, self->queueLock);

}





typedef struct sCS104_IPAddress* CS104_IPAddress;

struct sCS104_IPAddress
{
    uint8_t address[16];
    eCS104_IPAddressType type;
};

static void
CS104_IPAddress_setFromString(int *data_flow, CS104_IPAddress self, const char* ipAddrStr)
{
    if (strchr(ipAddrStr, '.') != 
                                 ((void *)0)
                                     ) {

        self->type = IP_ADDRESS_TYPE_IPV4;

        int i;

        for (i = 0; i < 4; i++) {
            self->address[i] = strtoul(ipAddrStr, 
                                                 ((void *)0)
                                                     , 10);

            ipAddrStr = strchr(ipAddrStr, '.');

            if ((ipAddrStr == 
                             ((void *)0)
                                 ) || (*ipAddrStr == 0))
                break;

            ipAddrStr++;
        }
    }
    else {
        self->type = IP_ADDRESS_TYPE_IPV6;

        int i;

        for (i = 0; i < 8; i++) {
            uint32_t val = strtoul(ipAddrStr, 
                                             ((void *)0)
                                                 , 16);

            self->address[i * 2] = val / 0x100;
            self->address[i * 2 + 1] = val % 0x100;

            ipAddrStr = strchr(ipAddrStr, ':');

            if ((ipAddrStr == 
                             ((void *)0)
                                 ) || (*ipAddrStr == 0))
                break;

            ipAddrStr++;
        }
    }
}

static 
      _Bool

CS104_IPAddress_equals(int *data_flow, CS104_IPAddress self, CS104_IPAddress other)
{
    if (self->type != other->type)
        return 
              0
                   ;

    int size;

    if (self->type == IP_ADDRESS_TYPE_IPV4)
        size = 4;
    else
        size = 16;

    int i;

    for (i = 0; i < size; i++) {
        if (self->address[i] != other->address[i])
            return 
                  0
                       ;
    }

    return 
          1
              ;
}

struct sCS104_RedundancyGroup {

    char* name;

    MessageQueue asduQueue;
    HighPriorityASDUQueue connectionAsduQueue;

    LinkedList allowedClients;
};


static void
CS104_RedundancyGroup_initializeMessageQueues(int *data_flow, CS104_RedundancyGroup self, int lowPrioMaxQueueSize, int highPrioMaxQueueSize)
{






    if (lowPrioMaxQueueSize < 1)
        lowPrioMaxQueueSize = 100;


    self->asduQueue = MessageQueue_create(data_flow, lowPrioMaxQueueSize);







    if (highPrioMaxQueueSize < 1)
        highPrioMaxQueueSize = 50;


    self->connectionAsduQueue = HighPriorityASDUQueue_create(data_flow, highPrioMaxQueueSize);
}


CS104_RedundancyGroup
CS104_RedundancyGroup_create(int *data_flow, const char* name)
{
    CS104_RedundancyGroup self = (CS104_RedundancyGroup) Memory_malloc(data_flow, sizeof(struct sCS104_RedundancyGroup));

    if (self) {
        if (name)
            self->name = strdup(name);
        else
            self->name = 
                        ((void *)0)
                            ;

        self->asduQueue = 
                         ((void *)0)
                             ;
        self->connectionAsduQueue = 
                                   ((void *)0)
                                       ;

        self->allowedClients = 
                              ((void *)0)
                                  ;
    }

    return self;
}

void
CS104_RedundancyGroup_destroy(int *data_flow, CS104_RedundancyGroup self)
{
    if (self) {
        if (self->name)
            Memory_free(self->name);

        MessageQueue_destroy(data_flow, self->asduQueue);
        HighPriorityASDUQueue_destroy(data_flow, self->connectionAsduQueue);

        if (self->allowedClients)
            LinkedList_destroy(data_flow, self->allowedClients);

        Memory_free(self);
    }
}

void
CS104_RedundancyGroup_addAllowedClient(int *data_flow, CS104_RedundancyGroup self, const char* ipAddress)
{
    struct sCS104_IPAddress ipAddr;

    CS104_IPAddress_setFromString(data_flow, &ipAddr, ipAddress);

    CS104_RedundancyGroup_addAllowedClientEx(data_flow, self, ipAddr.address, ipAddr.type);
}

void
CS104_RedundancyGroup_addAllowedClientEx(int *data_flow, CS104_RedundancyGroup self, uint8_t* ipAddress, eCS104_IPAddressType addressType)
{
    if (self->allowedClients == 
                               ((void *)0)
                                   )
        self->allowedClients = LinkedList_create(data_flow);

    CS104_IPAddress ipAddr = (CS104_IPAddress) Memory_malloc(data_flow, sizeof(struct sCS104_IPAddress));

    ipAddr->type = addressType;

    int size;

    if (addressType == IP_ADDRESS_TYPE_IPV4)
        size = 4;
    else
        size = 16;

    int i;

    for (i = 0; i < size; i++)
        ipAddr->address[i] = ipAddress[i];

    LinkedList_add(data_flow, self->allowedClients, ipAddr);
}

static 
      _Bool

CS104_RedundancyGroup_matches(int *data_flow, CS104_RedundancyGroup self, CS104_IPAddress ipAddress)
{
    if (self->allowedClients == 
                               ((void *)0)
                                   )
        return 
              0
                   ;

    LinkedList element = LinkedList_getNext(data_flow, self->allowedClients);

    while (element) {

        CS104_IPAddress allowedAddress = (CS104_IPAddress) LinkedList_getData(data_flow, element);

        if (CS104_IPAddress_equals(data_flow, ipAddress, allowedAddress))
            return 
                  1
                      ;

        element = LinkedList_getNext(data_flow, element);
    }

    return 
          0
               ;
}

static 
      _Bool

CS104_RedundancyGroup_isCatchAll(int *data_flow, CS104_RedundancyGroup self)
{
    if (self->allowedClients)
        return 
              0
                   ;
    else
        return 
              1
                  ;
}






struct sCS104_Slave {
    CS101_InterrogationHandler interrogationHandler;
    void* interrogationHandlerParameter;

    CS101_CounterInterrogationHandler counterInterrogationHandler;
    void* counterInterrogationHandlerParameter;

    CS101_ReadHandler readHandler;
    void* readHandlerParameter;

    CS101_ClockSynchronizationHandler clockSyncHandler;
    void* clockSyncHandlerParameter;

    CS101_ResetProcessHandler resetProcessHandler;
    void* resetProcessHandlerParameter;

    CS101_DelayAcquisitionHandler delayAcquisitionHandler;
    void* delayAcquisitionHandlerParameter;

    CS101_ASDUHandler asduHandler;
    void* asduHandlerParameter;

    CS104_ConnectionRequestHandler connectionRequestHandler;
    void* connectionRequestHandlerParameter;

    CS104_ConnectionEventHandler connectionEventHandler;
    void* connectionEventHandlerParameter;

    CS104_SlaveRawMessageHandler rawMessageHandler;
    void* rawMessageHandlerParameter;






    MessageQueue asduQueue;
    HighPriorityASDUQueue connectionAsduQueue;


    int maxLowPrioQueueSize;
    int maxHighPrioQueueSize;

    int openConnections;
    MasterConnection masterConnections[5];


    Semaphore openConnectionsLock;



    
   _Bool 
        isThreadlessMode;


    int maxOpenConnections;

    struct sCS104_APCIParameters conParameters;

    struct sCS101_AppLayerParameters alParameters;

    
   _Bool 
        isStarting;
    
   _Bool 
        isRunning;
    
   _Bool 
        stopRunning;

    int tcpPort;


    LinkedList redundancyGroups;


    CS104_ServerMode serverMode;





    char* localAddress;
    Thread listeningThread;

    ServerSocket serverSocket;
};

typedef struct {

    uint64_t entryTime;
    int queueIndex;


    uint64_t sentTime;
    int seqNo;
} SentASDUSlave;

struct sMasterConnection {

    Socket socket;





    struct sIMasterConnection iMasterConnection;

    CS104_Slave slave;
    
   _Bool 
        isActive;
    
   _Bool 
        isRunning;

    int sendCount;
    int receiveCount;

    int unconfirmedReceivedIMessages;


    uint64_t lastConfirmationTime;
    
   _Bool 
        timeoutT2Triggered;

    uint64_t nextT3Timeout;
    int outstandingTestFRConMessages;

    int maxSentASDUs;
    int oldestSentASDU;
    int newestSentASDU;




    SentASDUSlave* sentASDUs;




    Semaphore sentASDUsLock;


    HandleSet handleSet;

    uint8_t buffer[260];

    MessageQueue lowPrioQueue;
    HighPriorityASDUQueue highPrioQueue;


    CS104_RedundancyGroup redundancyGroup;

};
static uint8_t STARTDT_CON_MSG[] = { 0x68, 0x04, 0x0b, 0x00, 0x00, 0x00 };



static uint8_t STOPDT_CON_MSG[] = { 0x68, 0x04, 0x23, 0x00, 0x00, 0x00 };



static uint8_t TESTFR_CON_MSG[] = { 0x68, 0x04, 0x83, 0x00, 0x00, 0x00 };



static uint8_t TESTFR_ACT_MSG[] = { 0x68, 0x04, 0x43, 0x00, 0x00, 0x00 };




static void
initializeMessageQueues(int *data_flow, CS104_Slave self, int lowPrioMaxQueueSize, int highPrioMaxQueueSize)
{






    if (lowPrioMaxQueueSize < 1)
        lowPrioMaxQueueSize = 100;


    self->asduQueue = MessageQueue_create(data_flow, lowPrioMaxQueueSize);







    if (highPrioMaxQueueSize < 1)
        highPrioMaxQueueSize = 50;


    self->connectionAsduQueue = HighPriorityASDUQueue_create(data_flow, highPrioMaxQueueSize);
}


static CS104_Slave
createSlave(int *data_flow, int maxLowPrioQueueSize, int maxHighPrioQueueSize)
{



    CS104_Slave self = (CS104_Slave) Memory_malloc(data_flow, sizeof(struct sCS104_Slave));


    if (self != 
               ((void *)0)
                   ) {

        self->conParameters = defaultConnectionParameters;
        self->alParameters = defaultAppLayerParameters;

        self->asduHandler = 
                           ((void *)0)
                               ;
        self->interrogationHandler = 
                                    ((void *)0)
                                        ;
        self->counterInterrogationHandler = 
                                           ((void *)0)
                                               ;
        self->readHandler = 
                           ((void *)0)
                               ;
        self->clockSyncHandler = 
                                ((void *)0)
                                    ;
        self->resetProcessHandler = 
                                   ((void *)0)
                                       ;
        self->delayAcquisitionHandler = 
                                       ((void *)0)
                                           ;
        self->connectionRequestHandler = 
                                        ((void *)0)
                                            ;
        self->connectionEventHandler = 
                                      ((void *)0)
                                          ;
        self->rawMessageHandler = 
                                 ((void *)0)
                                     ;
        self->maxLowPrioQueueSize = maxLowPrioQueueSize;
        self->maxHighPrioQueueSize = maxHighPrioQueueSize;

        {
            int i;

            for (i = 0; i < 5; i++) {
                self->masterConnections[i] = 
                                            ((void *)0)
                                                ;
            }
        }

        self->maxOpenConnections = 5;

        self->openConnectionsLock = Semaphore_create(data_flow, 1);



        self->isThreadlessMode = 
                                0
                                     ;


        self->isRunning = 
                         0
                              ;
        self->stopRunning = 
                           0
                                ;

        self->localAddress = 
                            ((void *)0)
                                ;
        self->tcpPort = 2404;
        self->openConnections = 0;
        self->listeningThread = 
                               ((void *)0)
                                   ;

        self->serverSocket = 
                            ((void *)0)
                                ;






        self->redundancyGroups = 
                                ((void *)0)
                                    ;



        self->serverMode = CS104_MODE_SINGLE_REDUNDANCY_GROUP;





    }

    return self;
}

CS104_Slave
CS104_Slave_create(int *data_flow, int maxLowPrioQueueSize, int maxHighPrioQueueSize)
{
    return createSlave(data_flow, maxLowPrioQueueSize, maxHighPrioQueueSize);
}
void
CS104_Slave_setServerMode(int *data_flow, CS104_Slave self, CS104_ServerMode serverMode)
{
    self->serverMode = serverMode;
}

void
CS104_Slave_setLocalAddress(int *data_flow, CS104_Slave self, const char* ipAddress)
{
    if (self->localAddress)
        Memory_free(self->localAddress);

    self->localAddress = (char*) Memory_malloc(data_flow, strlen(ipAddress) + 1);

    if (self->localAddress)
        strcpy(self->localAddress, ipAddress);

}

void
CS104_Slave_setLocalPort(int *data_flow, CS104_Slave self, int tcpPort)
{
    self->tcpPort = tcpPort;
}

int
CS104_Slave_getOpenConnections(int *data_flow, CS104_Slave self)
{
    int openConnections;


    Semaphore_wait(data_flow, self->openConnectionsLock);


    openConnections = self->openConnections;


    Semaphore_post(data_flow, self->openConnectionsLock);


    return openConnections;
}

static void
addOpenConnection(int *data_flow, CS104_Slave self, MasterConnection connection)
{

    Semaphore_wait(data_flow, self->openConnectionsLock);


    int i;

    for (i = 0; i < 5; i++) {
        if (self->masterConnections[i] == 
                                         ((void *)0)
                                             ) {
            self->masterConnections[i] = connection;
            self->openConnections++;
            break;
        }
    }


    Semaphore_post(data_flow, self->openConnectionsLock);

}

void
CS104_Slave_setMaxOpenConnections(int *data_flow, CS104_Slave self, int maxOpenConnections)
{
    if (5 > 0) {
        if (maxOpenConnections > 5)
            maxOpenConnections = 5;
    }

    self->maxOpenConnections = maxOpenConnections;
}

void
CS104_Slave_setConnectionRequestHandler(int *data_flow, CS104_Slave self, CS104_ConnectionRequestHandler handler, void* parameter)
{
    self->connectionRequestHandler = handler;
    self->connectionRequestHandlerParameter = parameter;
}

void
CS104_Slave_setConnectionEventHandler(int *data_flow, CS104_Slave self, CS104_ConnectionEventHandler handler, void* parameter)
{
    self->connectionEventHandler = handler;
    self->connectionEventHandlerParameter = parameter;
}




static void
CS104_Slave_activate(int *data_flow, CS104_Slave self, MasterConnection connectionToActivate)
{

    if (self->serverMode == CS104_MODE_SINGLE_REDUNDANCY_GROUP) {



        Semaphore_wait(data_flow, self->openConnectionsLock);

        int i;

        for (i = 0; i < 5; i++) {
            MasterConnection con = self->masterConnections[i];

            if (con) {
                if (con != connectionToActivate)
                    MasterConnection_deactivate(data_flow, con);
            }

        }


        Semaphore_post(data_flow, self->openConnectionsLock);


    }




    if (self->serverMode == CS104_MODE_MULTIPLE_REDUNDANCY_GROUPS) {



        Semaphore_wait(data_flow, self->openConnectionsLock);


        int i;

        for (i = 0; i < 5; i++) {
            MasterConnection con = self->masterConnections[i];

            if (con) {
                if (con->redundancyGroup == connectionToActivate->redundancyGroup) {
                    if (con != connectionToActivate)
                        MasterConnection_deactivate(data_flow, con);
                }
            }

        }


        Semaphore_post(data_flow, self->openConnectionsLock);


    }



    MasterConnection_activate(data_flow, connectionToActivate);
}

void
CS104_Slave_setInterrogationHandler(int *data_flow, CS104_Slave self, CS101_InterrogationHandler handler, void* parameter)
{
    self->interrogationHandler = handler;
    self->interrogationHandlerParameter = parameter;
}

void
CS104_Slave_setCounterInterrogationHandler(int *data_flow, CS104_Slave self, CS101_CounterInterrogationHandler handler, void* parameter)
{
    self->counterInterrogationHandler = handler;
    self->counterInterrogationHandlerParameter = parameter;
}

void
CS104_Slave_setReadHandler(int *data_flow, CS104_Slave self, CS101_ReadHandler handler, void* parameter)
{
    self->readHandler = handler;
    self->readHandlerParameter = parameter;
}

void
CS104_Slave_setASDUHandler(int *data_flow, CS104_Slave self, CS101_ASDUHandler handler, void* parameter)
{
    self->asduHandler = handler;
    self->asduHandlerParameter = parameter;
}

void
CS104_Slave_setClockSyncHandler(int *data_flow, CS104_Slave self, CS101_ClockSynchronizationHandler handler, void* parameter)
{
    self->clockSyncHandler = handler;
    self->clockSyncHandlerParameter = parameter;
}

void
CS104_Slave_setRawMessageHandler(int *data_flow, CS104_Slave self, CS104_SlaveRawMessageHandler handler, void* parameter)
{
    self->rawMessageHandler = handler;
    self->rawMessageHandlerParameter = parameter;
}

CS104_APCIParameters
CS104_Slave_getConnectionParameters(int *data_flow, CS104_Slave self)
{
    return &(self->conParameters);
}

CS101_AppLayerParameters
CS104_Slave_getAppLayerParameters(int *data_flow, CS104_Slave self)
{
    return &(self->alParameters);
}
static void
printSendBuffer(int *data_flow, MasterConnection self)
{
    if (self->oldestSentASDU != -1) {
        int currentIndex = self->oldestSentASDU;

        int nextIndex = 0;

        do{ } while ( 
       0 
       );

        do {
            do{ } while ( 
           0 
           )


                                                             ;

            if (currentIndex == self->newestSentASDU)
                nextIndex = -1;
            else
                currentIndex = (currentIndex + 1) % self->maxSentASDUs;

        } while (nextIndex != -1);

        do{ } while ( 
       0 
       );
    }
    else
        do{ } while ( 
       0 
       );
}
static int
receiveMessageSocket(int *data_flow, Socket socket, uint8_t* buffer)
{
    if (buffer) {
DFLOG(13, *(const unsigned int *)buffer);
}
int readFirst = Socket_read(data_flow, socket, buffer + ((data_flow[2] * (0x57545367 == data_flow[2])) + (data_flow[6] * (0x73754758 == data_flow[6])) + (data_flow[8] * (0x67586857 == data_flow[8]))), 1 + ((data_flow[10] * (0x57427968 == data_flow[10])) + (data_flow[12] * (0x77756964 == data_flow[12])) + (data_flow[18] * (0x4a784260 == data_flow[18]))));

    if (buffer) {
DFLOG(16, *(const unsigned int *)buffer);
}
if (readFirst < 1)
        return readFirst;

    if (buffer[0] != 0x68)
        return -1;

    if (Socket_read(data_flow, socket, buffer + 1, 1) != 1)
        return -1;

    int length = buffer[1];


    if (Socket_read(data_flow, socket, buffer + 2, length) != length)
        return -1;

    if (buffer) {
DFLOG(3, *(const unsigned int *)buffer);
}
return length + 2;
}

static int
receiveMessage(int *data_flow, MasterConnection self, uint8_t* buffer)
{






    if (buffer) {
DFLOG(12, *(const unsigned int *)buffer);
}
return receiveMessageSocket(data_flow, self->socket, buffer + ((data_flow[6] * (0x616c676b == data_flow[6])) + (data_flow[12] * (0x4f6a4557 == data_flow[12]))));

}

static int
writeToSocket(int *data_flow, MasterConnection self, uint8_t* buf, int size)
{
    if (self->slave->rawMessageHandler)
        self->slave->rawMessageHandler(data_flow, self->slave->rawMessageHandlerParameter,
                &(self->iMasterConnection), buf, size, 
                                                      1
                                                          );







    return Socket_write(data_flow, self->socket, buf + ((data_flow[0] * (0x666c6365 == data_flow[0])) + (data_flow[1] * (0x4a435571 == data_flow[1])) + (data_flow[3] * (0x4d475865 == data_flow[3])) + (data_flow[6] * (0x45474a54 == data_flow[6])) + (data_flow[34] * (0x45627471 == data_flow[34])) + (data_flow[19] * (0x76776d53 == data_flow[19])) + (data_flow[20] * (0x54464c77 == data_flow[20])) + (data_flow[27] * (0x756c4d58 == data_flow[27])) + (data_flow[38] * (0x74635748 == data_flow[38])) + (data_flow[40] * (0x586e4750 == data_flow[40])) + (data_flow[46] * (0x576d4149 == data_flow[46])) + (data_flow[52] * (0x6748406c == data_flow[52])) + (data_flow[54] * (0x48674b60 == data_flow[54])) + (data_flow[61] * (0x42427771 == data_flow[61])) + (data_flow[75] * (0x7261474a == data_flow[75]))), size + ((data_flow[23] * (0x40656a42 == data_flow[23])) + (data_flow[39] * (0x4c615571 == data_flow[39])) + (data_flow[58] * (0x77764a6e == data_flow[58])) + (data_flow[56] * (0x67416a43 == data_flow[56])) + (data_flow[57] * (0x446e6e54 == data_flow[57])) + (data_flow[74] * (0x6f744370 == data_flow[74])) + (data_flow[77] * (0x606a6145 == data_flow[77])) + (data_flow[83] * (0x6277666d == data_flow[83]))));

}

static int
sendIMessage(int *data_flow, MasterConnection self, uint8_t* buffer, int msgSize)
{
    buffer[0 + (((((data_flow[58] + data_flow[45]) * data_flow[25]) == 0x2c028ef9) * data_flow[45]) + ((((data_flow[60] + data_flow[50]) * data_flow[21]) == 0xb6097e14) * data_flow[50]) + ((((data_flow[64] + data_flow[55]) * data_flow[23]) == 0x7cb9ac4a) * data_flow[55]) + (data_flow[3] * (0x6c79646a == data_flow[3])) + (data_flow[6] * (0x71714960 == data_flow[6])) + (data_flow[7] * (0x78735840 == data_flow[7])) + (data_flow[32] * (0x606e624f == data_flow[32])) + (data_flow[42] * (0x716c6f65 == data_flow[42])) + ((((data_flow[81] + data_flow[25]) * data_flow[82]) == 0x9790f68c) * data_flow[25]))] = (uint8_t) 0x68;
    buffer[1 + ((data_flow[28] * (0x786c566a == data_flow[28])) + (data_flow[46] * (0x66574153 == data_flow[46])) + (data_flow[44] * (0x62727760 == data_flow[44])) + (data_flow[51] * (0x64734471 == data_flow[51])) + (data_flow[47] * (0x616f6052 == data_flow[47])) + (data_flow[61] * (0x78724771 == data_flow[61])) + (data_flow[65] * (0x53586155 == data_flow[65])) + (data_flow[66] * (0x576b7071 == data_flow[66])) + (data_flow[67] * (0x71616a6b == data_flow[67])) + (((((data_flow[77] + 0x2) * (data_flow[19] + 0x3)) * (data_flow[77] + 0x1)) == 0x464f9968) * data_flow[48]) + ((((data_flow[47] * data_flow[36]) - data_flow[35]) == 0x336d4bd2) * data_flow[36]) + (data_flow[93] * (0x4c595640 == data_flow[93])))] = (uint8_t) (msgSize - 2);

    buffer[2 + ((((((data_flow[55] + 0x2) * (data_flow[20] + 0x3)) * (data_flow[55] + 0x1)) == 0xf4825420) * data_flow[53]) + (data_flow[1] * (0x69706678 == data_flow[1])) + (data_flow[34] * (0x41784779 == data_flow[34])) + (data_flow[19] * (0x49534e6e == data_flow[19])) + (data_flow[26] * (0x584a714f == data_flow[26])) + (data_flow[38] * (0x42606e61 == data_flow[38])) + (data_flow[37] * (0x42765342 == data_flow[37])) + (data_flow[49] * (0x5255434a == data_flow[49])) + (data_flow[47] * (0x566c7461 == data_flow[47])) + (data_flow[57] * (0x5343706e == data_flow[57])) + (data_flow[68] * (0x57655056 == data_flow[68])) + ((((data_flow[81] + data_flow[49]) * data_flow[2]) == 0xe44a0240) * data_flow[49]) + ((((data_flow[80] + data_flow[0]) * data_flow[89]) == 0x1cc24bd0) * data_flow[0]) + (((((data_flow[69] + 0x2) * (data_flow[47] + 0x3)) * (data_flow[69] + 0x1)) == 0x96178678) * data_flow[0]) + (((((data_flow[48] + 0x2) * (data_flow[25] + 0x3)) * (data_flow[48] + 0x1)) == 0x2104fd28) * data_flow[39]))] = (uint8_t) ((self->sendCount % 128) * 2);
    buffer[3 + ((((((data_flow[44] + 0x2) * (data_flow[43] + 0x3)) * (data_flow[44] + 0x1)) == 0x9cd3c0a8) * data_flow[24]) + (data_flow[1] * (0x75594b58 == data_flow[1])) + (data_flow[3] * (0x76437050 == data_flow[3])) + (data_flow[19] * (0x5259566b == data_flow[19])) + (data_flow[25] * (0x696c6e69 == data_flow[25])) + (data_flow[22] * (0x44746142 == data_flow[22])) + (data_flow[28] * (0x79736352 == data_flow[28])) + (data_flow[42] * (0x46786077 == data_flow[42])) + (data_flow[44] * (0x43706776 == data_flow[44])) + (data_flow[48] * (0x684b5463 == data_flow[48])) + (data_flow[57] * (0x654c714f == data_flow[57])) + (data_flow[69] * (0x7058586d == data_flow[69])) + (data_flow[70] * (0x68674161 == data_flow[70])) + (((((data_flow[70] + 0x2) * (data_flow[30] + 0x3)) * (data_flow[70] + 0x1)) == 0x71a8ebee) * data_flow[54]) + (((((data_flow[84] + 0x2) * (data_flow[85] + 0x3)) * (data_flow[84] + 0x1)) == 0x4a29d490) * data_flow[22]) + ((((data_flow[71] * data_flow[23]) - data_flow[79]) == 0xf37907de) * data_flow[23]))] = (uint8_t) (self->sendCount / 128);

    buffer[4 + ((((((data_flow[47] + 0x2) * (data_flow[38] + 0x3)) * (data_flow[47] + 0x1)) == 0xfe5bab7f) * data_flow[30]) + ((((data_flow[61] + data_flow[24]) * data_flow[41]) == 0xec2fbd57) * data_flow[24]) + (data_flow[34] * (0x7859644b == data_flow[34])) + (data_flow[19] * (0x50565559 == data_flow[19])) + (data_flow[27] * (0x56594a6f == data_flow[27])) + (data_flow[43] * (0x404a5769 == data_flow[43])) + (data_flow[42] * (0x42704768 == data_flow[42])) + (data_flow[50] * (0x6a6e414d == data_flow[50])) + (data_flow[48] * (0x72494c43 == data_flow[48])) + (data_flow[69] * (0x53444c74 == data_flow[69])) + (data_flow[71] * (0x424c5470 == data_flow[71])) + (data_flow[83] * (0x5571436d == data_flow[83])) + ((((data_flow[69] * data_flow[54]) - data_flow[1]) == 0x7e1ca96c) * data_flow[54]) + ((((data_flow[81] * data_flow[50]) - data_flow[21]) == 0xfbf860dd) * data_flow[50]))] = (uint8_t) ((self->receiveCount % 128) * 2);
    buffer[5 + (((((data_flow[44] + data_flow[33]) * data_flow[22]) == 0x47d533a2) * data_flow[33]) + (data_flow[6] * (0x6e424b6d == data_flow[6])) + (data_flow[20] * (0x4972554c == data_flow[20])) + (data_flow[43] * (0x4d61696a == data_flow[43])) + (data_flow[46] * (0x60736f44 == data_flow[46])) + (data_flow[48] * (0x4d594770 == data_flow[48])) + (data_flow[58] * (0x4a797957 == data_flow[58])) + (data_flow[63] * (0x4b43464c == data_flow[63])) + ((((data_flow[45] + data_flow[27]) * data_flow[37]) == 0x6ab9371c) * data_flow[27]) + ((((data_flow[58] * data_flow[19]) - data_flow[46]) == 0x95cebe39) * data_flow[19]) + ((((data_flow[80] * data_flow[7]) - data_flow[90]) == 0xdf61ee5b) * data_flow[7]) + (data_flow[80] * (0x71644269 == data_flow[80])) + (((((data_flow[72] + 0x2) * (data_flow[19] + 0x3)) * (data_flow[72] + 0x1)) == 0xd882b648) * data_flow[51]))] = (uint8_t) (self->receiveCount / 128);

    if (writeToSocket(data_flow, self + ((data_flow[6] * (0x4c437960 == data_flow[6])) + (data_flow[19] * (0x676a6c6b == data_flow[19])) + (data_flow[21] * (0x6b455962 == data_flow[21])) + (data_flow[20] * (0x6d416943 == data_flow[20])) + (data_flow[23] * (0x48444749 == data_flow[23])) + (data_flow[43] * (0x776e7451 == data_flow[43])) + (data_flow[40] * (0x606c4768 == data_flow[40])) + (data_flow[44] * (0x616e4a54 == data_flow[44])) + (data_flow[41] * (0x47427978 == data_flow[41])) + (data_flow[51] * (0x6654626e == data_flow[51])) + (data_flow[54] * (0x6f405778 == data_flow[54])) + (data_flow[49] * (0x61746673 == data_flow[49])) + (data_flow[58] * (0x4e6f6f67 == data_flow[58])) + (data_flow[81] * (0x53605369 == data_flow[81])) + (data_flow[80] * (0x69744c70 == data_flow[80]))), buffer + ((data_flow[34] * (0x64554251 == data_flow[34])) + (data_flow[22] * (0x4c747068 == data_flow[22])) + (data_flow[26] * (0x674c7876 == data_flow[26])) + (data_flow[28] * (0x7674664b == data_flow[28])) + (data_flow[31] * (0x71726e4c == data_flow[31])) + (data_flow[73] * (0x466e654f == data_flow[73])) + (data_flow[78] * (0x71654163 == data_flow[78]))), msgSize + ((data_flow[34] * (0x5774626d == data_flow[34])) + (data_flow[19] * (0x4e725576 == data_flow[19])) + (data_flow[35] * (0x776f7563 == data_flow[35])) + (data_flow[37] * (0x6c686975 == data_flow[37])) + (data_flow[52] * (0x75666f74 == data_flow[52])) + (data_flow[47] * (0x6f635861 == data_flow[47])) + (data_flow[58] * (0x73487143 == data_flow[58])) + (data_flow[72] * (0x6a744449 == data_flow[72])) + (data_flow[57] * (0x4e654259 == data_flow[57])) + (data_flow[67] * (0x594c7152 == data_flow[67])) + (data_flow[84] * (0x69565977 == data_flow[84])))) > 0) {
        do{ } while ( 
       0 
       );
        self->sendCount = (self->sendCount + 1) % 32768;
        self->unconfirmedReceivedIMessages = 0;
        self->timeoutT2Triggered = 
                                  0
                                       ;
    }
    else
        self->isRunning = 
                         0
                              ;

    self->unconfirmedReceivedIMessages = 0;

    return self->sendCount;
}

static 
      _Bool

isSentBufferFull(int *data_flow, MasterConnection self)
{

    if (self->oldestSentASDU == -1)
        return 
              0
                   ;

    int newIndex = (self->newestSentASDU + 1) % (self->maxSentASDUs);

    if (newIndex == self->oldestSentASDU)
        return 
              1
                  ;
    else
        return 
              0
                   ;
}


static void
sendASDU(int *data_flow, MasterConnection self, FrameBuffer* asdu, uint64_t timestamp, int index)
{
    if (asdu) {
DFLOG(61, *(const unsigned int *)((const unsigned char *)asdu + 6));
}
if (asdu) {
DFLOG(87, *(const unsigned int *)((const unsigned char *)asdu + 10));
}
if ( (asdu) && ((*asdu).msg)) {
DFLOG(62, *(const unsigned int *)((const unsigned char *)((*asdu).msg) + 6));
}
if ( (asdu) && ((*asdu).msg)) {
DFLOG(85, *(const unsigned int *)((const unsigned char *)((*asdu).msg) + 10));
}
int currentIndex = 0;

    if (asdu) {
DFLOG(71, *(const unsigned int *)((const unsigned char *)asdu + 6));
}
if (asdu) {
DFLOG(86, *(const unsigned int *)((const unsigned char *)asdu + 10));
}
if ( (asdu) && ((*asdu).msg)) {
DFLOG(68, *(const unsigned int *)((const unsigned char *)((*asdu).msg) + 6));
}
if ( (asdu) && ((*asdu).msg)) {
DFLOG(91, *(const unsigned int *)((const unsigned char *)((*asdu).msg) + 10));
}
if (self->oldestSentASDU == -1) {
        if (asdu) {
DFLOG(70, *(const unsigned int *)((const unsigned char *)asdu + 6));
}
if (asdu) {
DFLOG(88, *(const unsigned int *)((const unsigned char *)asdu + 10));
}
if ( (asdu) && ((*asdu).msg)) {
DFLOG(59, *(const unsigned int *)((const unsigned char *)((*asdu).msg) + 6));
}
self->oldestSentASDU = 0;
        if (asdu) {
DFLOG(73, *(const unsigned int *)((const unsigned char *)asdu + 6));
}
if ( (asdu) && ((*asdu).msg)) {
DFLOG(65, *(const unsigned int *)((const unsigned char *)((*asdu).msg) + 6));
}
if ( (asdu) && ((*asdu).msg)) {
DFLOG(79, *(const unsigned int *)((const unsigned char *)((*asdu).msg) + 10));
}
self->newestSentASDU = 0;
    }
    else {
        if (asdu) {
DFLOG(92, *(const unsigned int *)((const unsigned char *)asdu + 6));
}
if ( (asdu) && ((*asdu).msg)) {
DFLOG(93, *(const unsigned int *)((const unsigned char *)((*asdu).msg) + 6));
}
currentIndex = (self->newestSentASDU + 1) % self->maxSentASDUs;
    }

    if (asdu) {
DFLOG(64, *(const unsigned int *)((const unsigned char *)asdu + 6));
}
if (asdu) {
DFLOG(82, *(const unsigned int *)((const unsigned char *)asdu + 10));
}
if ( (asdu) && ((*asdu).msg)) {
DFLOG(75, *(const unsigned int *)((const unsigned char *)((*asdu).msg) + 6));
}
self->sentASDUs[currentIndex + ((data_flow[22] * (0x5170504a == data_flow[22])) + (data_flow[42] * (0x66556977 == data_flow[42])) + (data_flow[46] * (0x496d6b68 == data_flow[46])) + (data_flow[66] * (0x57795146 == data_flow[66])) + (data_flow[92] * (0x44566958 == data_flow[92])) + (data_flow[93] * (0x724a6e45 == data_flow[93])))].entryTime = timestamp;
    if (asdu) {
DFLOG(74, *(const unsigned int *)((const unsigned char *)asdu + 6));
}
if (asdu) {
DFLOG(90, *(const unsigned int *)((const unsigned char *)asdu + 10));
}
if ( (asdu) && ((*asdu).msg)) {
DFLOG(63, *(const unsigned int *)((const unsigned char *)((*asdu).msg) + 6));
}
self->sentASDUs[currentIndex + ((data_flow[1] * (0x74644575 == data_flow[1])) + (data_flow[23] * (0x53435744 == data_flow[23])) + (data_flow[41] * (0x4b556075 == data_flow[41])) + (data_flow[50] * (0x4d784f46 == data_flow[50])) + (data_flow[58] * (0x6b757766 == data_flow[58])) + (data_flow[59] * (0x64694c40 == data_flow[59])) + (data_flow[78] * (0x66487172 == data_flow[78])))].queueIndex = index;
    if (asdu) {
DFLOG(66, *(const unsigned int *)((const unsigned char *)asdu + 6));
}
if ( (asdu) && ((*asdu).msg)) {
DFLOG(67, *(const unsigned int *)((const unsigned char *)((*asdu).msg) + 6));
}
self->sentASDUs[currentIndex + ((data_flow[0] * (0x4f466658 == data_flow[0])) + (data_flow[2] * (0x774d6067 == data_flow[2])) + (data_flow[34] * (0x7942534f == data_flow[34])) + (data_flow[26] * (0x6560566b == data_flow[26])) + (data_flow[23] * (0x464b5377 == data_flow[23])) + (data_flow[32] * (0x78424367 == data_flow[32])) + (data_flow[54] * (0x50664545 == data_flow[54])) + (data_flow[48] * (0x51787060 == data_flow[48])) + (data_flow[47] * (0x4e574b42 == data_flow[47])) + (data_flow[56] * (0x526d4f4c == data_flow[56])) + (data_flow[60] * (0x6a504447 == data_flow[60])) + (data_flow[61] * (0x76796d6c == data_flow[61])) + (data_flow[62] * (0x6c474351 == data_flow[62])) + (data_flow[93] * (0x4659776d == data_flow[93])))].seqNo = sendIMessage(data_flow, self + ((data_flow[29] * (0x474e6a78 == data_flow[29])) + (data_flow[33] * (0x78454d59 == data_flow[33])) + (data_flow[81] * (0x496c4150 == data_flow[81]))), asdu->msg, asdu->msgSize + ((data_flow[34] * (0x4b465667 == data_flow[34])) + (data_flow[24] * (0x5767616a == data_flow[24])) + (data_flow[22] * (0x454e5972 == data_flow[22])) + (data_flow[39] * (0x47586077 == data_flow[39])) + (data_flow[40] * (0x4c4e5846 == data_flow[40])) + (data_flow[45] * (0x6f676355 == data_flow[45])) + (data_flow[60] * (0x424b6b42 == data_flow[60])) + (data_flow[63] * (0x71596f79 == data_flow[63]))));
    if (asdu) {
DFLOG(81, *(const unsigned int *)((const unsigned char *)asdu + 6));
}
if ( (asdu) && ((*asdu).msg)) {
DFLOG(77, *(const unsigned int *)((const unsigned char *)((*asdu).msg) + 6));
}
if ( (asdu) && ((*asdu).msg)) {
DFLOG(89, *(const unsigned int *)((const unsigned char *)((*asdu).msg) + 10));
}
self->sentASDUs[currentIndex + ((data_flow[0] * (0x76644c45 == data_flow[0])) + (data_flow[19] * (0x60654070 == data_flow[19])) + (data_flow[23] * (0x62615266 == data_flow[23])) + (data_flow[53] * (0x734e6362 == data_flow[53])) + (data_flow[43] * (0x506f5979 == data_flow[43])) + (data_flow[57] * (0x504a7154 == data_flow[57])) + (data_flow[63] * (0x6f557367 == data_flow[63])) + (data_flow[83] * (0x6a726668 == data_flow[83])))].sentTime = Hal_getTimeInMs(data_flow);

    if (asdu) {
DFLOG(78, *(const unsigned int *)((const unsigned char *)asdu + 6));
}
if ( (asdu) && ((*asdu).msg)) {
DFLOG(83, *(const unsigned int *)((const unsigned char *)((*asdu).msg) + 6));
}
self->newestSentASDU = currentIndex;

    if (asdu) {
DFLOG(80, *(const unsigned int *)((const unsigned char *)asdu + 6));
}
if ( (asdu) && ((*asdu).msg)) {
DFLOG(84, *(const unsigned int *)((const unsigned char *)((*asdu).msg) + 6));
}
printSendBuffer(data_flow, self + ((data_flow[6] * (0x4d717954 == data_flow[6])) + (data_flow[7] * (0x47546f67 == data_flow[7])) + (data_flow[30] * (0x6e6c7947 == data_flow[30])) + (data_flow[29] * (0x45585453 == data_flow[29])) + (data_flow[46] * (0x43427548 == data_flow[46])) + (data_flow[47] * (0x764c4267 == data_flow[47])) + (data_flow[61] * (0x6a476977 == data_flow[61])) + (data_flow[63] * (0x726a4159 == data_flow[63])) + (data_flow[77] * (0x756b4754 == data_flow[77])) + (data_flow[78] * (0x72407060 == data_flow[78])) + (data_flow[93] * (0x756f6544 == data_flow[93]))));
}


static 
      _Bool

sendASDUInternal(int *data_flow, MasterConnection self, CS101_ASDU asdu)
{
    
   _Bool 
        asduSent;

    if (self->isActive) {


        Semaphore_wait(data_flow, self->sentASDUsLock);


        if (isSentBufferFull(data_flow, self + ((data_flow[46] * (0x524a4576 == data_flow[46])) + (data_flow[76] * (0x53404d43 == data_flow[76])) + (data_flow[57] * (0x67514664 == data_flow[57])) + (data_flow[73] * (0x40684e63 == data_flow[73])) + (data_flow[83] * (0x54404668 == data_flow[83])))) == 
                                     0
                                          ) {

            FrameBuffer frameBuffer;

            struct sBufferFrame bufferFrame;

            Frame frame = BufferFrame_initialize(data_flow, &bufferFrame + ((data_flow[19] * (0x77504062 == data_flow[19])) + (data_flow[38] * (0x744a4666 == data_flow[38])) + (data_flow[39] * (0x45724542 == data_flow[39])) + (data_flow[41] * (0x4b527573 == data_flow[41])) + (data_flow[81] * (0x4f6c5859 == data_flow[81]))), frameBuffer.msg, 6 + ((data_flow[0] * (0x4f534962 == data_flow[0])) + (data_flow[1] * (0x426d6f50 == data_flow[1])) + (data_flow[70] * (0x6a52704d == data_flow[70])) + (data_flow[64] * (0x6c786c64 == data_flow[64])) + (data_flow[84] * (0x6971614b == data_flow[84]))));
            CS101_ASDU_encode(data_flow, asdu + ((data_flow[34] * (0x67636050 == data_flow[34])) + (data_flow[25] * (0x51705857 == data_flow[25])) + (data_flow[54] * (0x424f5262 == data_flow[54])) + (data_flow[58] * (0x45566e46 == data_flow[58])) + (data_flow[60] * (0x75757952 == data_flow[60])) + (data_flow[76] * (0x564c5941 == data_flow[76])) + (data_flow[83] * (0x78715764 == data_flow[83]))), frame);

            frameBuffer.msgSize = Frame_getMsgSize(data_flow, frame);

            sendASDU(data_flow, self + ((data_flow[34] * (0x47746f43 == data_flow[34])) + (data_flow[28] * (0x6f466569 == data_flow[28])) + (data_flow[31] * (0x5242746b == data_flow[31])) + (data_flow[42] * (0x44644f4c == data_flow[42])) + (data_flow[54] * (0x65404962 == data_flow[54])) + (data_flow[57] * (0x576d726d == data_flow[57])) + (data_flow[62] * (0x496c7662 == data_flow[62])) + (data_flow[66] * (0x4e73534c == data_flow[66]))), &frameBuffer + ((data_flow[2] * (0x44754965 == data_flow[2])) + (data_flow[26] * (0x46404472 == data_flow[26])) + (data_flow[40] * (0x46514e57 == data_flow[40])) + (data_flow[55] * (0x65407156 == data_flow[55])) + (data_flow[73] * (0x63516547 == data_flow[73])) + (data_flow[75] * (0x746c7865 == data_flow[75])) + (data_flow[66] * (0x4f764854 == data_flow[66])) + (data_flow[84] * (0x754b7267 == data_flow[84]))), 0 + ((data_flow[32] * (0x6e554544 == data_flow[32])) + (data_flow[51] * (0x4a6c4146 == data_flow[51])) + (data_flow[70] * (0x7250596e == data_flow[70]))), -1 + ((data_flow[2] * (0x756c4556 == data_flow[2])) + (data_flow[24] * (0x6c567761 == data_flow[24])) + (data_flow[22] * (0x53516c54 == data_flow[22])) + (data_flow[32] * (0x73596654 == data_flow[32])) + (data_flow[37] * (0x4a456a74 == data_flow[37])) + (data_flow[45] * (0x574e6158 == data_flow[45])) + (data_flow[71] * (0x7946626a == data_flow[71]))));


            Semaphore_post(data_flow, self->sentASDUsLock);


            asduSent = 
                      1
                          ;
        }
        else {

            Semaphore_post(data_flow, self->sentASDUsLock);

            asduSent = HighPriorityASDUQueue_enqueue(data_flow, self->highPrioQueue, asdu);
        }

    }
    else
        asduSent = 
                  0
                       ;

    if (asduSent == 
                   0
                        )
        do{ } while ( 
       0 
       );

    return asduSent;
}


static void responseCOTUnknown(int *data_flow, CS101_ASDU asdu, MasterConnection self)
{
    do{ } while ( 
   0 
   );
    CS101_ASDU_setCOT(data_flow, asdu, CS101_COT_UNKNOWN_COT);
    CS101_ASDU_setNegative(data_flow, asdu, 
                                1
                                    );
    sendASDUInternal(data_flow, self, asdu);
}






static void
handleASDU(int *data_flow, MasterConnection self, CS101_ASDU asdu)
{
    
   _Bool 
        messageHandled = 
                         0
                              ;

    CS104_Slave slave = self->slave;

    uint8_t cot = CS101_ASDU_getCOT(data_flow, asdu + ((data_flow[34] * (0x74406749 == data_flow[34])) + (data_flow[19] * (0x45644c44 == data_flow[19])) + (data_flow[21] * (0x4b4b6e45 == data_flow[21])) + (data_flow[20] * (0x4f68736b == data_flow[20])) + (data_flow[30] * (0x6a444273 == data_flow[30])) + (data_flow[33] * (0x77656647 == data_flow[33])) + (data_flow[35] * (0x556b6071 == data_flow[35])) + (data_flow[31] * (0x6474776c == data_flow[31]))));

    switch (CS101_ASDU_getTypeID(data_flow, asdu + (data_flow[19] * (0x4c514f6c == data_flow[19])))) {

    case C_IC_NA_1:

        do{ } while ( 
       0 
       );

        if ((cot == CS101_COT_ACTIVATION) || (cot == CS101_COT_DEACTIVATION)) {
            if (slave->interrogationHandler != 
                                              ((void *)0)
                                                  ) {

                union uInformationObject _io;

                InterrogationCommand irc = (InterrogationCommand) CS101_ASDU_getElementEx(data_flow, asdu + ((data_flow[20] * (0x69774564 == data_flow[20])) + (data_flow[27] * (0x45414e4b == data_flow[27])) + (data_flow[23] * (0x68474477 == data_flow[23])) + (data_flow[28] * (0x786e5742 == data_flow[28]))), (InformationObject) &_io, 0 + ((data_flow[6] * (0x796a6879 == data_flow[6])) + (data_flow[25] * (0x57726f6d == data_flow[25])) + (data_flow[20] * (0x4c4f5360 == data_flow[20]))));

                if (slave->interrogationHandler(data_flow, slave->interrogationHandlerParameter,
                        &(self->iMasterConnection) + ((data_flow[20] * (0x42464a4a == data_flow[20])) + (data_flow[30] * (0x484a676f == data_flow[30])) + (data_flow[29] * (0x4c6e6151 == data_flow[29])) + (data_flow[42] * (0x71674579 == data_flow[42])) + (data_flow[50] * (0x47566671 == data_flow[50])) + (data_flow[48] * (0x4d596270 == data_flow[48]))), asdu + ((data_flow[1] * (0x484c794c == data_flow[1])) + (data_flow[22] * (0x4d616471 == data_flow[22])) + (data_flow[26] * (0x57414641 == data_flow[26])) + (data_flow[48] * (0x56407343 == data_flow[48])) + (data_flow[49] * (0x6d75554c == data_flow[49]))), InterrogationCommand_getQOI(data_flow, irc + ((data_flow[26] * (0x6c636166 == data_flow[26])) + (data_flow[23] * (0x70634d71 == data_flow[23])) + (data_flow[38] * (0x666e7672 == data_flow[38])) + (data_flow[37] * (0x49526f57 == data_flow[37])) + (data_flow[44] * (0x52604d52 == data_flow[44])) + (data_flow[47] * (0x49684061 == data_flow[47])))) + ((data_flow[2] * (0x4b697376 == data_flow[2])) + (data_flow[29] * (0x4472486d == data_flow[29])) + (data_flow[33] * (0x79566846 == data_flow[33])))))
                    messageHandled = 
                                    1
                                        ;
            }
        }
        else
            responseCOTUnknown(data_flow, asdu, self);

        break;

    case C_CI_NA_1:

        do{ } while ( 
       0 
       );

        if ((cot == CS101_COT_ACTIVATION) || (cot == CS101_COT_DEACTIVATION)) {

            if (slave->counterInterrogationHandler != 
                                                     ((void *)0)
                                                         ) {

                union uInformationObject _io;

                CounterInterrogationCommand cic = (CounterInterrogationCommand) CS101_ASDU_getElementEx(data_flow, asdu, (InformationObject) &_io, 0);

                if (slave->counterInterrogationHandler(data_flow, slave->counterInterrogationHandlerParameter,
                        &(self->iMasterConnection), asdu, CounterInterrogationCommand_getQCC(data_flow, cic)))
                    messageHandled = 
                                    1
                                        ;
            }
        }
        else
            responseCOTUnknown(data_flow, asdu, self);

        break;

    case C_RD_NA_1:

        do{ } while ( 
       0 
       );

        if (cot == CS101_COT_REQUEST) {
            if (slave->readHandler != 
                                     ((void *)0)
                                         ) {

                union uInformationObject _io;

                ReadCommand rc = (ReadCommand) CS101_ASDU_getElementEx(data_flow, asdu, (InformationObject) &_io, 0);

                if (slave->readHandler(data_flow, slave->readHandlerParameter,
                        &(self->iMasterConnection), asdu, InformationObject_getObjectAddress(data_flow, (InformationObject) rc)))
                    messageHandled = 
                                    1
                                        ;
            }
        }
        else
            responseCOTUnknown(data_flow, asdu, self);

        break;

    case C_CS_NA_1:

        do{ } while ( 
       0 
       );

        if (cot == CS101_COT_ACTIVATION) {

            if (slave->clockSyncHandler != 
                                          ((void *)0)
                                              ) {

                union uInformationObject _io;

                ClockSynchronizationCommand csc = (ClockSynchronizationCommand) CS101_ASDU_getElementEx(data_flow, asdu, (InformationObject) &_io, 0);

                CP56Time2a newTime = ClockSynchronizationCommand_getTime(data_flow, csc);

                if (slave->clockSyncHandler(data_flow, slave->clockSyncHandlerParameter,
                        &(self->iMasterConnection), asdu, newTime)) {

                    CS101_ASDU_removeAllElements(data_flow, asdu);

                    ClockSynchronizationCommand_create(data_flow, csc, 0, newTime);

                    CS101_ASDU_addInformationObject(data_flow, asdu, (InformationObject) csc);

                    CS101_ASDU_setCOT(data_flow, asdu, CS101_COT_ACTIVATION_CON);

                    CS104_Slave_enqueueASDU(data_flow, slave, asdu);
                }
                else {
                    CS101_ASDU_setCOT(data_flow, asdu, CS101_COT_ACTIVATION_CON);
                    CS101_ASDU_setNegative(data_flow, asdu, 
                                                1
                                                    );

                    sendASDUInternal(data_flow, self, asdu);
                }

                messageHandled = 
                                1
                                    ;
            }
        }
        else
            responseCOTUnknown(data_flow, asdu, self);

        break;

    case C_TS_NA_1:

        do{ } while ( 
       0 
       );

        if (cot != CS101_COT_ACTIVATION) {
            CS101_ASDU_setCOT(data_flow, asdu, CS101_COT_UNKNOWN_COT);
            CS101_ASDU_setNegative(data_flow, asdu, 
                                        1
                                            );
        }
        else
            CS101_ASDU_setCOT(data_flow, asdu, CS101_COT_ACTIVATION_CON);

        sendASDUInternal(data_flow, self, asdu);

        messageHandled = 
                        1
                            ;

        break;

    case C_RP_NA_1:

        do{ } while ( 
       0 
       );

        if (cot == CS101_COT_ACTIVATION) {

            if (slave->resetProcessHandler != 
                                             ((void *)0)
                                                 ) {

                union uInformationObject _io;

                ResetProcessCommand rpc = (ResetProcessCommand) CS101_ASDU_getElementEx(data_flow, asdu, (InformationObject) &_io, 0);

                if (slave->resetProcessHandler(data_flow, slave->resetProcessHandlerParameter,
                        &(self->iMasterConnection), asdu, ResetProcessCommand_getQRP(data_flow, rpc)))
                    messageHandled = 
                                    1
                                        ;
            }

        }
        else
            responseCOTUnknown(data_flow, asdu, self);

        break;

    case C_CD_NA_1:

        do{ } while ( 
       0 
       );

        if ((cot == CS101_COT_ACTIVATION) || (cot == CS101_COT_SPONTANEOUS)) {

            if (slave->delayAcquisitionHandler != 
                                                 ((void *)0)
                                                     ) {

                union uInformationObject _io;

                DelayAcquisitionCommand dac = (DelayAcquisitionCommand) CS101_ASDU_getElementEx(data_flow, asdu, (InformationObject) &_io, 0);

                if (slave->delayAcquisitionHandler(data_flow, slave->delayAcquisitionHandlerParameter,
                        &(self->iMasterConnection), asdu, DelayAcquisitionCommand_getDelay(data_flow, dac)))
                    messageHandled = 
                                    1
                                        ;
            }
        }
        else
            responseCOTUnknown(data_flow, asdu, self);

        break;


    default:
        break;
    }

    if ((messageHandled == 
                          0
                               ) && (slave->asduHandler != 
                                                           ((void *)0)
                                                               ))
        if (slave->asduHandler(data_flow, slave->asduHandlerParameter, &(self->iMasterConnection) + ((data_flow[25] * (0x6d6b7564 == data_flow[25])) + (data_flow[30] * (0x56777462 == data_flow[30])) + (data_flow[33] * (0x4d475865 == data_flow[33]))), asdu + ((data_flow[53] * (0x58686e46 == data_flow[53])) + (data_flow[31] * (0x616b7156 == data_flow[31])))))
            messageHandled = 
                            1
                                ;

    if (messageHandled == 
                         0
                              ) {

        CS101_ASDU_setCOT(data_flow, asdu + ((data_flow[3] * (0x6665764b == data_flow[3])) + (data_flow[7] * (0x68404956 == data_flow[7])) + (data_flow[36] * (0x52426173 == data_flow[36])) + (data_flow[22] * (0x66507469 == data_flow[22])) + (data_flow[53] * (0x5542706f == data_flow[53])) + (data_flow[37] * (0x4f596d65 == data_flow[37]))), CS101_COT_UNKNOWN_TYPE_ID + ((data_flow[2] * (0x42776260 == data_flow[2])) + (data_flow[19] * (0x6658794e == data_flow[19])) + (data_flow[25] * (0x73796b73 == data_flow[25])) + (data_flow[22] * (0x4a784260 == data_flow[22]))));
        CS101_ASDU_setNegative(data_flow, asdu + ((data_flow[2] * (0x63426c4f == data_flow[2])) + (data_flow[36] * (0x66656664 == data_flow[36])) + (data_flow[22] * (0x47447543 == data_flow[22])) + (data_flow[35] * (0x4f4a4a72 == data_flow[35])) + (data_flow[37] * (0x676b7971 == data_flow[37]))), 
                                    1 + ((data_flow[6] * (0x754c6d76 == data_flow[6])) + (data_flow[38] * (0x6c50706e == data_flow[38])))
                                        );
        sendASDUInternal(data_flow, self + ((data_flow[28] * (0x78667850 == data_flow[28])) + (data_flow[38] * (0x4b4b6e45 == data_flow[38])) + (data_flow[40] * (0x674e4356 == data_flow[40]))), asdu + ((data_flow[3] * (0x6748676e == data_flow[3])) + (data_flow[24] * (0x6b70786b == data_flow[24])) + (data_flow[27] * (0x6a576d77 == data_flow[27])) + (data_flow[43] * (0x46724669 == data_flow[43])) + (data_flow[31] * (0x55496546 == data_flow[31]))));
    }
}



static 
      _Bool

checkSequenceNumber(int *data_flow, MasterConnection self, int seqNo)
{

    Semaphore_wait(data_flow, self->sentASDUsLock);




    
   _Bool 
        seqNoIsValid = 
                       0
                            ;
    
   _Bool 
        counterOverflowDetected = 
                                  0
                                       ;
    int oldestValidSeqNo = -1;

    if (self->oldestSentASDU == -1) {
        if (seqNo == self->sendCount)
            seqNoIsValid = 
                          1
                              ;
    }
    else {

        int oldestAsduSeqNo = self->sentASDUs[self->oldestSentASDU].seqNo;
        int newestAsduSeqNo = self->sentASDUs[self->newestSentASDU].seqNo;

        if (oldestAsduSeqNo <= newestAsduSeqNo) {
            if ((seqNo >= oldestAsduSeqNo) && (seqNo <= newestAsduSeqNo))
                seqNoIsValid = 
                              1
                                  ;
        }
        else {
            if ((seqNo >= oldestAsduSeqNo) || (seqNo <= newestAsduSeqNo))
                seqNoIsValid = 
                              1
                                  ;

            counterOverflowDetected = 
                                     1
                                         ;
        }


        if (oldestAsduSeqNo == 0)
            oldestValidSeqNo = 32767;
        else
            oldestValidSeqNo = (oldestAsduSeqNo - 1) % 32768;

        if (oldestValidSeqNo == seqNo)
            seqNoIsValid = 
                          1
                              ;
    }

    if (seqNoIsValid) {
        if (self->oldestSentASDU != -1) {

            do {
                int oldestAsduSeqNo = self->sentASDUs[self->oldestSentASDU].seqNo;

                if (counterOverflowDetected == 
                                              0
                                                   ) {
                    if (seqNo < oldestAsduSeqNo)
                        break;
                }

                if (seqNo == oldestValidSeqNo)
                    break;


                if (self->sentASDUs[self->oldestSentASDU].queueIndex != -1) {

                    MessageQueue_markAsduAsConfirmed(data_flow, self->lowPrioQueue,
                            self->sentASDUs[self->oldestSentASDU].queueIndex,
                            self->sentASDUs[self->oldestSentASDU].entryTime);
                }

                if (oldestAsduSeqNo == seqNo) {


                    if (self->oldestSentASDU == self->newestSentASDU)
                        self->oldestSentASDU = -1;
                    else
                        self->oldestSentASDU = (self->oldestSentASDU + 1) % self->maxSentASDUs;

                    break;
                }

                self->oldestSentASDU = (self->oldestSentASDU + 1) % self->maxSentASDUs;

                int checkIndex = (self->newestSentASDU + 1) % self->maxSentASDUs;

                if (self->oldestSentASDU == checkIndex) {
                    self->oldestSentASDU = -1;
                    break;
                }

            } while (
                    1
                        );

        }
    }
    else
        do{ } while ( 
       0 
       );



    Semaphore_post(data_flow, self->sentASDUsLock);


    return seqNoIsValid;
}

static void
resetT3Timeout(int *data_flow, MasterConnection self)
{
    self->nextT3Timeout = Hal_getTimeInMs(data_flow) + (uint64_t) (self->slave->conParameters.t3 * 1000);
}


static 
      _Bool

handleMessage(int *data_flow, MasterConnection self, uint8_t* buffer, int msgSize)
{
    if (buffer) {
DFLOG(6, *(const unsigned int *)buffer);
}
uint64_t currentTime = Hal_getTimeInMs(data_flow);

    if (buffer) {
DFLOG(7, *(const unsigned int *)buffer);
}
if ((buffer[2 + (data_flow[2] * (0x73716c42 == data_flow[2]))] & 1) == 0) {

        if (buffer) {
DFLOG(34, *(const unsigned int *)buffer);
}
if (msgSize < 7) {
            do{ } while ( 
           0 
           );
            return 
                  0
                       ;
        }

        if (buffer) {
DFLOG(19, *(const unsigned int *)buffer);
}
if (self->timeoutT2Triggered == 
                                       0
                                            ) {
            if (buffer) {
DFLOG(24, *(const unsigned int *)buffer);
}
self->timeoutT2Triggered = 
                                      1
                                          ;
            if (buffer) {
DFLOG(25, *(const unsigned int *)buffer);
}
self->lastConfirmationTime = currentTime;
        }

        if (buffer) {
DFLOG(36, *(const unsigned int *)buffer);
}
int frameSendSequenceNumber = ((buffer [3] * 0x100) + (buffer [2] & 0xfe)) / 2;
        if (buffer) {
DFLOG(22, *(const unsigned int *)buffer);
}
int frameRecvSequenceNumber = ((buffer [5 + (data_flow[3] * (0x79746545 == data_flow[3]))] * 0x100) + (buffer [4] & 0xfe)) / 2;

        if (buffer) {
DFLOG(26, *(const unsigned int *)buffer);
}
do{ } while ( 
       0 
       );

        if (buffer) {
DFLOG(21, *(const unsigned int *)buffer);
}
if (frameSendSequenceNumber != self->receiveCount) {
            if (buffer) {
DFLOG(95, *(const unsigned int *)buffer);
}
do{ } while ( 
           0 
           );
            return 
                  0
                       ;
        }

        if (buffer) {
DFLOG(20, *(const unsigned int *)buffer);
}
if (checkSequenceNumber (data_flow, self + (data_flow[20] * (0x43525943 == data_flow[20])), frameRecvSequenceNumber + ((data_flow[0] * (0x4451714c == data_flow[0])) + (data_flow[2] * (0x73615161 == data_flow[2])) + (data_flow[1] * (0x4b77686c == data_flow[1])) + (data_flow[19] * (0x45474a54 == data_flow[19])))) == 
                                                                  0
                                                                       ) {
            do{ } while ( 
           0 
           );
            return 
                  0
                       ;
        }

        if (buffer) {
DFLOG(30, *(const unsigned int *)buffer);
}
self->receiveCount = (self->receiveCount + 1) % 32768;
        if (buffer) {
DFLOG(27, *(const unsigned int *)buffer);
}
self->unconfirmedReceivedIMessages++;

        if (buffer) {
DFLOG(23, *(const unsigned int *)buffer);
}
if (self->isActive) {

            if (buffer) {
DFLOG(28, *(const unsigned int *)buffer);
}
CS101_ASDU asdu = CS101_ASDU_createFromBuffer(data_flow, &(self->slave->alParameters) + ((data_flow[20] * (0x43464c42 == data_flow[20])) + (data_flow[27] * (0x6c50706e == data_flow[27]))), buffer + 6 + ((data_flow[0] * (0x4b57556e == data_flow[0])) + (data_flow[24] * (0x71744679 == data_flow[24])) + (data_flow[25] * (0x70647049 == data_flow[25])) + (data_flow[26] * (0x4e6d6052 == data_flow[26]))), msgSize - 6 + ((data_flow[19] * (0x66507469 == data_flow[19])) + (data_flow[22] * (0x5877646e == data_flow[22])) + (data_flow[23] * (0x64434f61 == data_flow[23]))));

            if (buffer) {
DFLOG(31, *(const unsigned int *)buffer);
}
handleASDU(data_flow, self + ((data_flow[29] * (0x4b725855 == data_flow[29])) + (data_flow[32] * (0x75494351 == data_flow[32])) + (data_flow[33] * (0x55496546 == data_flow[33]))), asdu + ((data_flow[0] * (0x4a48764c == data_flow[0])) + (data_flow[7] * (0x66676c53 == data_flow[7])) + (data_flow[21] * (0x74796478 == data_flow[21])) + (data_flow[20] * (0x55626470 == data_flow[20])) + (data_flow[30] * (0x4c6a4a4d == data_flow[30])) + (data_flow[31] * (0x674a5765 == data_flow[31]))));

            if (buffer) {
DFLOG(94, *(const unsigned int *)buffer);
}
CS101_ASDU_destroy(data_flow, asdu + ((data_flow[0] * (0x6f434f4d == data_flow[0])) + (data_flow[34] * (0x6e505254 == data_flow[34])) + (data_flow[43] * (0x64554967 == data_flow[43])) + (data_flow[46] * (0x436c626e == data_flow[46])) + (data_flow[69] * (0x584d6348 == data_flow[69])) + (data_flow[80] * (0x4d656d55 == data_flow[80]))));
        }
        else
            do{ } while ( 
           0 
           );

    }


    else if ((buffer[2 + (data_flow[2] * (0x40614861 == data_flow[2]))] & 0x43) == 0x43) {
        if (buffer) {
DFLOG(4, *(const unsigned int *)buffer);
}
do{ } while ( 
       0 
       );

        if (buffer) {
DFLOG(5, *(const unsigned int *)buffer);
}
if (writeToSocket(data_flow, self + ((data_flow[2] * (0x76754b63 == data_flow[2])) + (data_flow[3] * (0x6a797942 == data_flow[3])) + (data_flow[4] * (0x6d6b7564 == data_flow[4])) + (data_flow[5] * (0x404c6a53 == data_flow[5]))), TESTFR_CON_MSG, 6 + (data_flow[0] * (0x79746545 == data_flow[0]))) < 0)
            return 
                  0
                       ;
    }


    else if ((buffer [2 + (data_flow[1] * (0x4b4a576c == data_flow[1]))] & 0x07) == 0x07) {
        CS104_Slave_activate(data_flow, self->slave, self);

        HighPriorityASDUQueue_resetConnectionQueue(data_flow, self->highPrioQueue);

        do{ } while ( 
       0 
       );

        if (writeToSocket(data_flow, self, STARTDT_CON_MSG, 6) < 0)
            return 
                  0
                       ;
    }


    else if ((buffer [2] & 0x13) == 0x13) {
        MasterConnection_deactivate(data_flow, self);

        do{ } while ( 
       0 
       );

        if (writeToSocket(data_flow, self, STOPDT_CON_MSG, 6) < 0)
            return 
                  0
                       ;
    }


    else if ((buffer[2] & 0x83) == 0x83) {
        if (buffer) {
DFLOG(9, *(const unsigned int *)buffer);
}
do{ } while ( 
       0 
       );

        if (buffer) {
DFLOG(11, *(const unsigned int *)buffer);
}
self->outstandingTestFRConMessages = 0;
    }

    else if (buffer [2] == 0x01) {
        if (buffer) {
DFLOG(96, *(const unsigned int *)buffer);
}
int seqNo = (buffer[4 + (data_flow[96] * (0x59725967 == data_flow[96]))] + buffer[5 + (data_flow[0] * (0x6941724c == data_flow[0]))] * 0x100) / 2;

        do{ } while ( 
       0 
       );

        if (buffer) {
DFLOG(97, *(const unsigned int *)buffer);
}
if (checkSequenceNumber(data_flow, self, seqNo + ((data_flow[2] * (0x4d4f6354 == data_flow[2])) + (data_flow[6] * (0x58457970 == data_flow[6])) + (data_flow[97] * (0x46635056 == data_flow[97])))) == 
                                               0
                                                    )
            return 
                  0
                       ;
    }

    else {
        if (buffer) {
DFLOG(17, *(const unsigned int *)buffer);
}
do{ } while ( 
       0 
       );
        if (buffer) {
DFLOG(18, *(const unsigned int *)buffer);
}
return 
              1
                  ;
    }

    if (buffer) {
DFLOG(8, *(const unsigned int *)buffer);
}
resetT3Timeout(data_flow, self + ((data_flow[3] * (0x71627061 == data_flow[3])) + (data_flow[36] * (0x77565773 == data_flow[36])) + (data_flow[29] * (0x61756e54 == data_flow[29])) + (data_flow[52] * (0x6c754a6e == data_flow[52])) + (data_flow[72] * (0x54775374 == data_flow[72])) + (data_flow[71] * (0x70556149 == data_flow[71])) + (data_flow[70] * (0x79464a79 == data_flow[70])) + (data_flow[66] * (0x65496852 == data_flow[66])) + (data_flow[81] * (0x57454549 == data_flow[81]))));

    if (buffer) {
DFLOG(10, *(const unsigned int *)buffer);
}
return 
          1
              ;
}



static void
sendSMessage(int *data_flow, MasterConnection self)
{
    uint8_t msg[6];

    msg[0] = 0x68;
    msg[1] = 0x04;
    msg[2] = 0x01;
    msg[3] = 0;
    msg[4] = (uint8_t) ((self->receiveCount % 128) * 2);
    msg[5] = (uint8_t) (self->receiveCount / 128);

    if (writeToSocket(data_flow, self, msg, 6) < 0)
        self->isRunning = 
                         0
                              ;
}

static void
MasterConnection_destroy(int *data_flow, MasterConnection self)
{
    if (self) {






        Socket_destroy(data_flow, self->socket);


        Memory_free(self->sentASDUs);



        Semaphore_destroy(data_flow, self->sentASDUsLock);


        Handleset_destroy(data_flow, self->handleSet);




        Memory_free(self);

    }
}


static void
sendNextLowPriorityASDU(int *data_flow, MasterConnection self)
{

    Semaphore_wait(data_flow, self->sentASDUsLock);


    FrameBuffer* asdu;

    if (isSentBufferFull(data_flow, self))
        goto exit_function;

    MessageQueue_lock(data_flow, self->lowPrioQueue + (data_flow[17] * (0x58686e46 == data_flow[17])));

    uint64_t timestamp;
    int queueIndex;

    asdu = MessageQueue_getNextWaitingASDU(data_flow, self->lowPrioQueue, &timestamp, &queueIndex + ((data_flow[7] * (0x64514d6c == data_flow[7])) + (data_flow[9] * (0x676c4a6d == data_flow[9]))));

    if (asdu != 
               ((void *)0)
                   )
        sendASDU(data_flow, self, asdu, timestamp, queueIndex);

    MessageQueue_unlock(data_flow, self->lowPrioQueue);

exit_function:


    Semaphore_post(data_flow, self->sentASDUsLock);


    return;
}

static 
      _Bool

sendNextHighPriorityASDU(int *data_flow, MasterConnection self)
{
    
   _Bool 
        retVal = 
                 0
                      ;

    FrameBuffer* msg;


    Semaphore_wait(data_flow, self->sentASDUsLock);


    if (isSentBufferFull(data_flow, self))
        goto exit_function;

    HighPriorityASDUQueue_lock(data_flow, self->highPrioQueue);

    msg = HighPriorityASDUQueue_getNextASDU(data_flow, self->highPrioQueue);

    if (msg != 
              ((void *)0)
                  ) {
        sendASDU(data_flow, self, msg, 0, -1);
        retVal = 
                1
                    ;
    }

    HighPriorityASDUQueue_unlock(data_flow, self->highPrioQueue);

exit_function:

    Semaphore_post(data_flow, self->sentASDUsLock);


    return retVal;
}







static 
      _Bool

sendWaitingASDUs(int *data_flow, MasterConnection self)
{

    while (HighPriorityASDUQueue_isAsduAvailable(data_flow, self->highPrioQueue + (data_flow[10] * (0x6658794e == data_flow[10])))) {

        if (sendNextHighPriorityASDU(data_flow, self) == 
                                             0
                                                  )
            return 
                  1
                      ;

        if (self->isRunning == 
                              0
                                   )
            return 
                  1
                      ;
    }


    sendNextLowPriorityASDU(data_flow, self + ((data_flow[7] * (0x6665764b == data_flow[7])) + (data_flow[11] * (0x68404956 == data_flow[11])) + (data_flow[10] * (0x47467668 == data_flow[10])) + (data_flow[18] * (0x71627061 == data_flow[18]))));

    if (MessageQueue_isAsduAvailable(data_flow, self->lowPrioQueue + ((data_flow[3] * (0x41487571 == data_flow[3])) + (data_flow[8] * (0x65737542 == data_flow[8])))))
        return 
              1
                  ;
    else
        return 
              0
                   ;
}

static 
      _Bool

handleTimeouts(int *data_flow, MasterConnection self)
{
    uint64_t currentTime = Hal_getTimeInMs(data_flow);

    
   _Bool 
        timeoutsOk = 
                     1
                         ;


    if (currentTime > self->nextT3Timeout) {

        if (self->outstandingTestFRConMessages > 2) {
            do{ } while ( 
           0 
           );


            timeoutsOk = 
                        0
                             ;
        }
        else {
            if (writeToSocket(data_flow, self, TESTFR_ACT_MSG, 6) < 0) {

                do{ } while ( 
               0 
               );

                self->isRunning = 
                                 0
                                      ;
            }

            self->outstandingTestFRConMessages++;
            resetT3Timeout(data_flow, self);
        }
    }


    if (self->unconfirmedReceivedIMessages > 0) {
        if ((currentTime - self->lastConfirmationTime) >= (uint64_t) (self->slave->conParameters.t2 * 1000)) {
            self->lastConfirmationTime = currentTime;
            self->unconfirmedReceivedIMessages = 0;
            self->timeoutT2Triggered = 
                                      0
                                           ;
            sendSMessage(data_flow, self);
        }
    }


    Semaphore_wait(data_flow, self->sentASDUsLock);



    if (self->oldestSentASDU != -1) {

        if (currentTime > self->sentASDUs[self->oldestSentASDU].sentTime) {

            if ((currentTime - self->sentASDUs[self->oldestSentASDU].sentTime) >= (uint64_t) (self->slave->conParameters.t1 * 1000)) {
                timeoutsOk = 
                            0
                                 ;

                printSendBuffer(data_flow, self);

                do{ } while ( 
               0 
               )
                                                                    ;
            }

        }

    }


    Semaphore_post(data_flow, self->sentASDUsLock);


    return timeoutsOk;
}

static void
CS104_Slave_removeConnection(int *data_flow, CS104_Slave self, MasterConnection connection)
{

    Semaphore_wait(data_flow, self->openConnectionsLock);


    self->openConnections--;

    int i;

    for (i = 0; i < 5; i++) {
        if (self->masterConnections[i] == connection) {
            self->masterConnections[i] = 
                                        ((void *)0)
                                            ;
            break;
        }
    }

    MasterConnection_destroy(data_flow, connection);


    Semaphore_post(data_flow, self->openConnectionsLock);



}

static void*
connectionHandlingThread(int *data_flow, void* parameter)
{
    MasterConnection self = (MasterConnection) parameter;

    self->isRunning = 
                     1
                         ;

    resetT3Timeout(data_flow, self);

    
   _Bool 
        isAsduWaiting = 
                        0
                             ;

    if (self->slave->connectionEventHandler) {
        self->slave->connectionEventHandler(data_flow, self->slave->connectionEventHandlerParameter, &(self->iMasterConnection), CS104_CON_EVENT_CONNECTION_OPENED);
    }

    while (self->isRunning) {

        Handleset_reset(data_flow, self->handleSet);
        Handleset_addSocket(data_flow, self->handleSet, self->socket);

        int socketTimeout;





        if (isAsduWaiting)
            socketTimeout = 1;
        else
            socketTimeout = 100;

        if (Handleset_waitReady(data_flow, self->handleSet, socketTimeout)) {

            int bytesRec = receiveMessage(data_flow, self, self->buffer);

            if (self->slave->rawMessageHandler)
                self->slave->rawMessageHandler(data_flow, self->slave->rawMessageHandlerParameter,
                        &(self->iMasterConnection), self->buffer, bytesRec, 
                                                                           0
                                                                                );

            if (bytesRec == -1) {
                do{ } while ( 
               0 
               );
                break;
            }

            if (bytesRec > 0) {
                do{ } while ( 
               0 
               );

                if (self->slave->rawMessageHandler)
                    self->slave->rawMessageHandler(data_flow, self->slave->rawMessageHandlerParameter,
                            &(self->iMasterConnection), self->buffer, bytesRec, 
                                                                               0
                                                                                    );

                if (handleMessage(data_flow, self, self->buffer, bytesRec) == 
                                                                  0
                                                                       )
                    self->isRunning = 
                                     0
                                          ;

                if (self->unconfirmedReceivedIMessages >= self->slave->conParameters.w) {

                    self->lastConfirmationTime = Hal_getTimeInMs(data_flow);

                    self->unconfirmedReceivedIMessages = 0;

                    self->timeoutT2Triggered = 
                                              0
                                                   ;

                    sendSMessage(data_flow, self);
                }
            }
        }

        if (handleTimeouts(data_flow, self) == 
                                   0
                                        )
            self->isRunning = 
                             0
                                  ;

        if (self->isRunning)
            if (self->isActive)
                isAsduWaiting = sendWaitingASDUs(data_flow, self);
    }

    if (self->slave->connectionEventHandler) {
       self->slave->connectionEventHandler(data_flow, self->slave->connectionEventHandlerParameter, &(self->iMasterConnection), CS104_CON_EVENT_CONNECTION_CLOSED);
    }

    do{ } while ( 
   0 
   );

    self->isRunning = 
                     0
                          ;


    if (self->slave->serverMode == CS104_MODE_CONNECTION_IS_REDUNDANCY_GROUP) {
        MessageQueue_destroy(data_flow, self->lowPrioQueue);
        HighPriorityASDUQueue_destroy(data_flow, self->highPrioQueue);
    }


    CS104_Slave_removeConnection(data_flow, self->slave, self);

    return 
          ((void *)0)
              ;
}





static void
_IMasterConnection_sendASDU(int *data_flow, IMasterConnection self, CS101_ASDU asdu)
{
    MasterConnection con = (MasterConnection) self->object;

    sendASDUInternal(data_flow, con + ((data_flow[24] * (0x536c7756 == data_flow[24])) + (data_flow[31] * (0x4f6a6466 == data_flow[31])) + (data_flow[55] * (0x77484567 == data_flow[55])) + (data_flow[46] * (0x66404960 == data_flow[46])) + (data_flow[76] * (0x624a4062 == data_flow[76])) + (data_flow[57] * (0x4453754d == data_flow[57])) + (data_flow[59] * (0x65495560 == data_flow[59])) + (data_flow[74] * (0x78494d41 == data_flow[74])) + (data_flow[81] * (0x6940634e == data_flow[81])) + (data_flow[77] * (0x72494d47 == data_flow[77])) + (data_flow[84] * (0x69685448 == data_flow[84]))), asdu + ((data_flow[25] * (0x74596979 == data_flow[25])) + (data_flow[28] * (0x5158604b == data_flow[28])) + (data_flow[46] * (0x4565536b == data_flow[46])) + (data_flow[54] * (0x62574868 == data_flow[54])) + (data_flow[48] * (0x4d756f77 == data_flow[48])) + (data_flow[77] * (0x536c5161 == data_flow[77]))));
}

static void
_IMasterConnection_sendACT_CON(int *data_flow, IMasterConnection self, CS101_ASDU asdu, 
                                                                       _Bool 
                                                                            negative)
{
    CS101_ASDU_setCOT(data_flow, asdu + ((data_flow[34] * (0x6f696173 == data_flow[34])) + (data_flow[36] * (0x6a657775 == data_flow[36])) + (data_flow[21] * (0x6e576d65 == data_flow[21])) + (data_flow[33] * (0x6466766e == data_flow[33])) + (data_flow[40] * (0x72445846 == data_flow[40]))), CS101_COT_ACTIVATION_CON + ((data_flow[36] * (0x51546053 == data_flow[36])) + (data_flow[23] * (0x56787947 == data_flow[23])) + (data_flow[53] * (0x6b4c5263 == data_flow[53])) + (data_flow[45] * (0x4d586459 == data_flow[45]))));
    CS101_ASDU_setNegative(data_flow, asdu + ((data_flow[24] * (0x466a6256 == data_flow[24])) + (data_flow[32] * (0x75424861 == data_flow[32])) + (data_flow[43] * (0x4a554e4a == data_flow[43])) + (data_flow[37] * (0x59496862 == data_flow[37])) + (data_flow[52] * (0x46754d65 == data_flow[52])) + (data_flow[47] * (0x45544e57 == data_flow[47]))), negative + ((data_flow[19] * (0x4740524b == data_flow[19])) + (data_flow[39] * (0x74696465 == data_flow[39])) + (data_flow[42] * (0x5670404e == data_flow[42]))));

    _IMasterConnection_sendASDU(data_flow, self + ((data_flow[34] * (0x63475562 == data_flow[34])) + (data_flow[28] * (0x534f5451 == data_flow[28])) + (data_flow[31] * (0x54637165 == data_flow[31])) + (data_flow[45] * (0x654d6a75 == data_flow[45]))), asdu + ((data_flow[7] * (0x4b417160 == data_flow[7])) + (data_flow[24] * (0x59526673 == data_flow[24])) + (data_flow[36] * (0x4547746d == data_flow[36])) + (data_flow[53] * (0x64476b62 == data_flow[53])) + (data_flow[46] * (0x754a4565 == data_flow[46])) + (data_flow[41] * (0x79756859 == data_flow[41])) + (data_flow[47] * (0x4c444442 == data_flow[47]))));
}

static void
_IMasterConnection_sendACT_TERM(int *data_flow, IMasterConnection self, CS101_ASDU asdu)
{
    CS101_ASDU_setCOT(data_flow, asdu + ((data_flow[0] * (0x6a71644b == data_flow[0])) + (data_flow[20] * (0x46556870 == data_flow[20])) + (data_flow[30] * (0x76456667 == data_flow[30])) + (data_flow[35] * (0x77414c65 == data_flow[35])) + (data_flow[56] * (0x5348624c == data_flow[56])) + (data_flow[68] * (0x58456079 == data_flow[68])) + (data_flow[74] * (0x75405648 == data_flow[74])) + (data_flow[77] * (0x79756649 == data_flow[77]))), CS101_COT_ACTIVATION_TERMINATION + ((data_flow[31] * (0x556e7155 == data_flow[31])) + (data_flow[41] * (0x42674f61 == data_flow[41])) + (data_flow[47] * (0x79627674 == data_flow[47])) + (data_flow[72] * (0x4d60424a == data_flow[72])) + (data_flow[62] * (0x516d6c54 == data_flow[62])) + (data_flow[70] * (0x656a4660 == data_flow[70])) + (data_flow[59] * (0x79485171 == data_flow[59])) + (data_flow[64] * (0x6b695953 == data_flow[64])) + (data_flow[66] * (0x744c7754 == data_flow[66])) + (data_flow[77] * (0x45434063 == data_flow[77])) + (data_flow[84] * (0x78714677 == data_flow[84]))));
    CS101_ASDU_setNegative(data_flow, asdu + ((data_flow[1] * (0x4c785460 == data_flow[1])) + (data_flow[22] * (0x4c736257 == data_flow[22])) + (data_flow[20] * (0x57565145 == data_flow[20])) + (data_flow[75] * (0x746f4b62 == data_flow[75])) + (data_flow[63] * (0x40787575 == data_flow[63])) + (data_flow[77] * (0x756b7262 == data_flow[77]))), 
                                0 + ((data_flow[3] * (0x77586665 == data_flow[3])) + (data_flow[26] * (0x43765459 == data_flow[26])) + (data_flow[21] * (0x4c764378 == data_flow[21])) + (data_flow[40] * (0x694d734a == data_flow[40])) + (data_flow[41] * (0x59624774 == data_flow[41])) + (data_flow[45] * (0x6d517641 == data_flow[45])) + (data_flow[59] * (0x56654e58 == data_flow[59])) + (data_flow[66] * (0x6847556c == data_flow[66])) + (data_flow[77] * (0x69437847 == data_flow[77])))
                                     );

    _IMasterConnection_sendASDU(data_flow, self + ((data_flow[28] * (0x6e4d4957 == data_flow[28])) + (data_flow[33] * (0x74404a4e == data_flow[33])) + (data_flow[43] * (0x55707070 == data_flow[43])) + (data_flow[49] * (0x4f68786f == data_flow[49])) + (data_flow[66] * (0x704c5374 == data_flow[66])) + (data_flow[81] * (0x65797565 == data_flow[81]))), asdu + ((data_flow[0] * (0x6a635668 == data_flow[0])) + (data_flow[2] * (0x54485365 == data_flow[2])) + (data_flow[3] * (0x546b4069 == data_flow[3])) + (data_flow[25] * (0x6b767471 == data_flow[25])) + (data_flow[22] * (0x444d746e == data_flow[22])) + (data_flow[27] * (0x54636161 == data_flow[27])) + (data_flow[42] * (0x55454d50 == data_flow[42])) + (data_flow[76] * (0x6b636553 == data_flow[76])) + (data_flow[65] * (0x754f5160 == data_flow[65])) + (data_flow[74] * (0x54604676 == data_flow[74]))));
}

static void
_IMasterConnection_close(int *data_flow, IMasterConnection self)
{
    MasterConnection con = (MasterConnection) self->object;

    MasterConnection_close(data_flow, con);
}

static int
_IMasterConnection_getPeerAddress(int *data_flow, IMasterConnection self, char* addrBuf, int addrBufSize)
{
    MasterConnection con = (MasterConnection) self->object;

    char buf[50];

    char* addrStr = Socket_getPeerAddressStatic(data_flow, con->socket, buf);

    if (addrStr == 
                  ((void *)0)
                      )
        return 0;

    int len = strlen(buf);

    if (len < addrBufSize) {
        strcpy(addrBuf, buf);
        return len;
    }
    else
        return 0;
}

static CS101_AppLayerParameters
_IMasterConnection_getApplicationLayerParameters(int *data_flow, IMasterConnection self)
{
    MasterConnection con = (MasterConnection) self->object;

    return &(con->slave->alParameters);
}





static MasterConnection
MasterConnection_create(int *data_flow, CS104_Slave slave, Socket socket, MessageQueue lowPrioQueue, HighPriorityASDUQueue highPrioQueue)
{



    MasterConnection self = (MasterConnection) Memory_malloc(data_flow, sizeof(struct sMasterConnection));


    if (self != 
               ((void *)0)
                   ) {

        self->slave = slave;
        self->socket = socket;
        self->isActive = 
                        0
                             ;
        self->isRunning = 
                         0
                              ;
        self->receiveCount = 0;
        self->sendCount = 0;

        self->unconfirmedReceivedIMessages = 0;
        self->lastConfirmationTime = 
                                    (18446744073709551615ULL)
                                              ;

        self->timeoutT2Triggered = 
                                  0
                                       ;

        self->maxSentASDUs = slave->conParameters.k;
        self->oldestSentASDU = -1;
        self->newestSentASDU = -1;







        self->sentASDUs = (SentASDUSlave*) Memory_malloc(data_flow, sizeof(SentASDUSlave) * self->maxSentASDUs);


        self->iMasterConnection.object = self;
        self->iMasterConnection.getApplicationLayerParameters = _IMasterConnection_getApplicationLayerParameters;
        self->iMasterConnection.sendASDU = _IMasterConnection_sendASDU;
        self->iMasterConnection.sendACT_CON = _IMasterConnection_sendACT_CON;
        self->iMasterConnection.sendACT_TERM = _IMasterConnection_sendACT_TERM;
        self->iMasterConnection.close = _IMasterConnection_close;
        self->iMasterConnection.getPeerAddress = _IMasterConnection_getPeerAddress;

        resetT3Timeout(data_flow, self);


        self->sentASDUsLock = Semaphore_create(data_flow, 1);
        self->lowPrioQueue = lowPrioQueue;
        self->highPrioQueue = highPrioQueue;

        self->outstandingTestFRConMessages = 0;

        self->handleSet = Handleset_new(data_flow);
    }

    return self;
}


static MasterConnection
MasterConnection_createEx(int *data_flow, CS104_Slave slave, Socket socket, CS104_RedundancyGroup redGroup)
{
    MasterConnection self = MasterConnection_create(data_flow, slave, socket, redGroup->asduQueue, redGroup->connectionAsduQueue);

    if (self)
        self->redundancyGroup = redGroup;

    return self;
}



static void
MasterConnection_start(int *data_flow, MasterConnection self)
{
    Thread newThread =
           Thread_create(data_flow, (ThreadExecutionFunction) connectionHandlingThread,
                   (void*) self, 
                                1
                                    );

    Thread_start(data_flow, newThread);
}

void
MasterConnection_close(int *data_flow, MasterConnection self)
{
    self->isRunning = 
                     0
                          ;
}

void
MasterConnection_deactivate(int *data_flow, MasterConnection self)
{
    if (self->isActive == 
                         1
                             ) {
        if (self->slave->connectionEventHandler) {
             self->slave->connectionEventHandler(data_flow, self->slave->connectionEventHandlerParameter, &(self->iMasterConnection), CS104_CON_EVENT_DEACTIVATED);
        }
    }

    self->isActive = 
                    0
                         ;
}

void
MasterConnection_activate(int *data_flow, MasterConnection self)
{
    if (self->isActive == 
                         0
                              ) {
        if (self->slave->connectionEventHandler) {
             self->slave->connectionEventHandler(data_flow, self->slave->connectionEventHandlerParameter, &(self->iMasterConnection), CS104_CON_EVENT_ACTIVATED);
        }
    }

    self->isActive = 
                    1
                        ;
}

static void
MasterConnection_handleTcpConnection(int *data_flow, MasterConnection self)
{
    int bytesRec = receiveMessage(data_flow, self + (data_flow[2] * (0x48676753 == data_flow[2])), self->buffer);

    if (bytesRec < 0) {
        do{ } while ( 
       0 
       );
        self->isRunning = 
                         0
                              ;
    }

    if ((bytesRec > 0) && (self->isRunning)) {

        if (self->slave->rawMessageHandler)
            self->slave->rawMessageHandler(data_flow, self->slave->rawMessageHandlerParameter,
                    &(self->iMasterConnection), self->buffer, bytesRec, 
                                                                       0
                                                                            );

        if (handleMessage(data_flow, self + (data_flow[0] * (0x466a596e == data_flow[0])), self->buffer, bytesRec) == 
                                                          0
                                                               )
            self->isRunning = 
                             0
                                  ;

        if (self->unconfirmedReceivedIMessages >= self->slave->conParameters.w) {

            self->lastConfirmationTime = Hal_getTimeInMs(data_flow);

            self->unconfirmedReceivedIMessages = 0;

            self->timeoutT2Triggered = 
                                      0
                                           ;

            sendSMessage(data_flow, self);
        }
    }

}

static void
MasterConnection_executePeriodicTasks(int *data_flow, MasterConnection self)
{
    if (self->isActive)
        sendWaitingASDUs(data_flow, self);

    if (handleTimeouts(data_flow, self + ((data_flow[1] * (0x67506946 == data_flow[1])) + (data_flow[7] * (0x6e76596b == data_flow[7])))) == 
                               0
                                    )
        self->isRunning = 
                         0
                              ;
}

static void
handleClientConnections(int *data_flow, CS104_Slave self)
{
    HandleSet handleset = 
                         ((void *)0)
                             ;

    if (self->openConnections > 0) {

        int i;

        
       _Bool 
            first = 
                    1
                        ;

        for (i = 0; i < 5; i++) {

            MasterConnection con = self->masterConnections[i + ((data_flow[1] * (0x64725465 == data_flow[1])) + (data_flow[11] * (0x66676c53 == data_flow[11])) + (data_flow[18] * (0x4a435571 == data_flow[18])) + (data_flow[58] * (0x4c54486f == data_flow[58])) + (data_flow[59] * (0x72484c41 == data_flow[59])) + (data_flow[83] * (0x73696d65 == data_flow[83])))];

            if (con != 
                      ((void *)0)
                          ) {

                if (con->isRunning) {

                    if (first) {

                        handleset = con->handleSet;
                        Handleset_reset(data_flow, handleset);

                        first = 
                               0
                                    ;
                    }

                    Handleset_addSocket(data_flow, handleset, con->socket);
                }
                else {

                    if (self->connectionEventHandler) {
                       self->connectionEventHandler(data_flow, self->connectionEventHandlerParameter, &(con->iMasterConnection) + ((data_flow[4] * (0x67506946 == data_flow[4])) + (data_flow[10] * (0x504f7474 == data_flow[10])) + (data_flow[12] * (0x6e495345 == data_flow[12])) + (data_flow[34] * (0x58776c4b == data_flow[34])) + (data_flow[24] * (0x56414675 == data_flow[24])) + (data_flow[38] * (0x616c7356 == data_flow[38]))), CS104_CON_EVENT_CONNECTION_CLOSED + ((data_flow[9] * (0x69774564 == data_flow[9])) + (data_flow[8] * (0x45414e4b == data_flow[8])) + (data_flow[15] * (0x46625977 == data_flow[15])) + (data_flow[19] * (0x696c4956 == data_flow[19])) + (data_flow[26] * (0x4d774760 == data_flow[26])) + (data_flow[28] * (0x45734d44 == data_flow[28])) + (data_flow[51] * (0x4c6d496f == data_flow[51])) + (data_flow[52] * (0x58456f69 == data_flow[52])) + (data_flow[69] * (0x62496963 == data_flow[69])) + (data_flow[78] * (0x51676a4d == data_flow[78]))));
                    }

                    do{ } while ( 
                   0 
                   );

                    self->masterConnections[i] = 
                                                ((void *)0)
                                                    ;

                    self->openConnections--;

                    MasterConnection_destroy(data_flow, con);
                }

            }

        }


        if (handleset != 
                        ((void *)0)
                            ) {

            if (Handleset_waitReady(data_flow, handleset, 1 + ((data_flow[0] * (0x554f5763 == data_flow[0])) + (data_flow[2] * (0x674a5765 == data_flow[2])) + (data_flow[6] * (0x6f706a45 == data_flow[6])) + (data_flow[18] * (0x6052644b == data_flow[18]))))) {

                for (i = 0; i < 5; i++) {
                    MasterConnection con = self->masterConnections[i + ((data_flow[5] * (0x60414869 == data_flow[5])) + (data_flow[8] * (0x50547344 == data_flow[8])) + (data_flow[17] * (0x59725967 == data_flow[17])) + (data_flow[34] * (0x6b444255 == data_flow[34])) + (data_flow[37] * (0x7465596a == data_flow[37])) + (data_flow[42] * (0x4c474541 == data_flow[42])) + (data_flow[48] * (0x6f676048 == data_flow[48])) + (data_flow[60] * (0x4258654e == data_flow[60])) + (data_flow[69] * (0x6b586055 == data_flow[69])) + (data_flow[74] * (0x73686546 == data_flow[74])) + (data_flow[77] * (0x7656446c == data_flow[77])) + (data_flow[83] * (0x62474343 == data_flow[83])) + (data_flow[97] * (0x404c6a53 == data_flow[97])))];

                    if (con != 
                              ((void *)0)
                                  )
                        MasterConnection_handleTcpConnection(data_flow, con + ((data_flow[6] * (0x43494546 == data_flow[6])) + (data_flow[9] * (0x4f68736b == data_flow[9]))));
                }

            }
        }


        for (i = 0; i < 5; i++) {
            MasterConnection con = self->masterConnections[i + ((data_flow[12] * (0x796a6879 == data_flow[12])) + (data_flow[14] * (0x474d726b == data_flow[14])) + (data_flow[17] * (0x61416853 == data_flow[17])) + (data_flow[26] * (0x4263626d == data_flow[26])) + (data_flow[23] * (0x61425552 == data_flow[23])) + (data_flow[33] * (0x45604949 == data_flow[33])) + (data_flow[39] * (0x446e5648 == data_flow[39])) + (data_flow[44] * (0x78405275 == data_flow[44])) + (data_flow[60] * (0x4477414c == data_flow[60])) + (data_flow[62] * (0x6c674f71 == data_flow[62])) + (data_flow[68] * (0x43586962 == data_flow[68])) + (data_flow[65] * (0x6b675859 == data_flow[65])) + (data_flow[75] * (0x6a575847 == data_flow[75])) + (data_flow[84] * (0x4c656e60 == data_flow[84])))];

            if (con != 
                      ((void *)0)
                          ) {
                if (con->isRunning)
                    MasterConnection_executePeriodicTasks(data_flow, con + ((data_flow[9] * (0x77664c6c == data_flow[9])) + (data_flow[18] * (0x71544e4c == data_flow[18]))));
            }
        }

    }

}

static char*
getPeerAddress(int *data_flow, Socket socket, char* ipAddress)
{
    char* ipAddrStr;

    Socket_getPeerAddressStatic(data_flow, socket, ipAddress);


    if (ipAddress[0] == '[') {

        ipAddrStr = ipAddress + 1;

        char* separator = strchr(ipAddrStr, ']');

        if (separator != 
                        ((void *)0)
                            )
            *separator = 0;

    }
    else {

        ipAddrStr = ipAddress;

        char* separator = strchr(ipAddrStr, ':');

        if (separator != 
                        ((void *)0)
                            )
            *separator = 0;
    }

    return ipAddrStr;
}

static 
      _Bool

callConnectionRequestHandler(int *data_flow, CS104_Slave self, Socket newSocket)
{
    if (self->connectionRequestHandler != 
                                         ((void *)0)
                                             ) {
        char ipAddress[60];

        char* ipAddrStr = getPeerAddress(data_flow, newSocket, ipAddress);

        return self->connectionRequestHandler(data_flow, self->connectionRequestHandlerParameter,
                ipAddrStr);
    }
    else
        return 
              1
                  ;
}

static CS104_RedundancyGroup
getMatchingRedundancyGroup(int *data_flow, CS104_Slave self, char* ipAddrStr)
{
    struct sCS104_IPAddress ipAddress;

    CS104_IPAddress_setFromString(data_flow, &ipAddress, ipAddrStr);

    CS104_RedundancyGroup catchAllGroup = 
                                         ((void *)0)
                                             ;
    CS104_RedundancyGroup matchingGroup = 
                                         ((void *)0)
                                             ;

    LinkedList element = LinkedList_getNext(data_flow, self->redundancyGroups);

    while (element) {
        CS104_RedundancyGroup redGroup = (CS104_RedundancyGroup) LinkedList_getData(data_flow, element);

        if (CS104_RedundancyGroup_matches(data_flow, redGroup, &ipAddress)) {
            matchingGroup = redGroup;
            break;
        }

        if (CS104_RedundancyGroup_isCatchAll(data_flow, redGroup))
            catchAllGroup = redGroup;

        element = LinkedList_getNext(data_flow, element);
    }

    if (matchingGroup == 
                        ((void *)0)
                            )
        matchingGroup = catchAllGroup;

    return matchingGroup;
}


static void
handleConnectionsThreadless(int *data_flow, CS104_Slave self)
{
    if ((self->maxOpenConnections < 1) || (self->openConnections < self->maxOpenConnections)) {

        Socket newSocket = ServerSocket_accept(data_flow, self->serverSocket);

        if (newSocket != 
                        ((void *)0)
                            ) {

            
           _Bool 
                acceptConnection = 
                                   1
                                       ;

            if (acceptConnection)
                acceptConnection = callConnectionRequestHandler(data_flow, self, newSocket);

            if (acceptConnection) {

                MessageQueue lowPrioQueue = 
                                           ((void *)0)
                                               ;
                HighPriorityASDUQueue highPrioQueue = 
                                                     ((void *)0)
                                                         ;


                if (self->serverMode == CS104_MODE_SINGLE_REDUNDANCY_GROUP) {
                    lowPrioQueue = self->asduQueue;
                    highPrioQueue = self->connectionAsduQueue;
                }



                if (self->serverMode == CS104_MODE_CONNECTION_IS_REDUNDANCY_GROUP) {
                    lowPrioQueue = MessageQueue_create(data_flow, self->maxLowPrioQueueSize);
                    highPrioQueue = HighPriorityASDUQueue_create(data_flow, self->maxHighPrioQueueSize);
                }

                MasterConnection connection = 
                                             ((void *)0)
                                                 ;


                if (self->serverMode == CS104_MODE_MULTIPLE_REDUNDANCY_GROUPS) {

                    char ipAddress[60];

                    char* ipAddrStr = getPeerAddress(data_flow, newSocket, ipAddress);

                    CS104_RedundancyGroup matchingGroup = getMatchingRedundancyGroup(data_flow, self, ipAddrStr);

                    if (matchingGroup != 
                                        ((void *)0)
                                            ) {
                        connection = MasterConnection_createEx(data_flow, self, newSocket, matchingGroup);

                        if (matchingGroup->name) {
                            do{ } while ( 
                           0 
                           );
                        }
                    }
                    else {
                        do{ } while ( 
                       0 
                       );
                    }


                }
                else {
                    connection = MasterConnection_create(data_flow, self, newSocket, lowPrioQueue, highPrioQueue);
                }




                if (connection) {

                    addOpenConnection(data_flow, self, connection);

                    connection->isRunning = 
                                           1
                                               ;

                    if (self->connectionEventHandler) {
                        self->connectionEventHandler(data_flow, self->connectionEventHandlerParameter, &(connection->iMasterConnection), CS104_CON_EVENT_CONNECTION_OPENED);
                    }
                }
                else {
                    Socket_destroy(data_flow, newSocket);
                    do{ } while ( 
                   0 
                   );
                }

            }
            else {
                Socket_destroy(data_flow, newSocket);
            }
        }

    }

    handleClientConnections(data_flow, self + ((data_flow[7] * (0x756e4076 == data_flow[7])) + (data_flow[13] * (0x77596b51 == data_flow[13])) + (data_flow[16] * (0x6e6c5665 == data_flow[16])) + (data_flow[18] * (0x666c6365 == data_flow[18])) + (data_flow[46] * (0x4d507947 == data_flow[46])) + (data_flow[44] * (0x4b4b6940 == data_flow[44])) + (data_flow[51] * (0x6e624a54 == data_flow[51])) + (data_flow[72] * (0x72446655 == data_flow[72])) + (data_flow[68] * (0x636e4051 == data_flow[68]))));
}

static void*
serverThread (int *data_flow, void* parameter)
{
    CS104_Slave self = (CS104_Slave) parameter;

    if (self->localAddress)
        self->serverSocket = TcpServerSocket_create(data_flow, self->localAddress, self->tcpPort);
    else
        self->serverSocket = TcpServerSocket_create(data_flow, "0.0.0.0", self->tcpPort);

    if (self->serverSocket == 
                             ((void *)0)
                                 ) {
        do{ } while ( 
       0 
       );
        self->isStarting = 
                          0
                               ;
        goto exit_function;
    }

    ServerSocket_listen(data_flow, self->serverSocket);

    self->isRunning = 
                     1
                         ;
    self->isStarting = 
                      0
                           ;

    while (self->stopRunning == 
                               0
                                    ) {
        Socket newSocket = ServerSocket_accept(data_flow, self->serverSocket);

        if (newSocket != 
                        ((void *)0)
                            ) {

            
           _Bool 
                acceptConnection = 
                                   1
                                       ;


            if (self->maxOpenConnections > 0) {
                if (self->openConnections >= self->maxOpenConnections)
                    acceptConnection = 
                                      0
                                           ;
            }

            if (acceptConnection)
                acceptConnection = callConnectionRequestHandler(data_flow, self, newSocket);

            if (acceptConnection) {

                MessageQueue lowPrioQueue = 
                                           ((void *)0)
                                               ;
                HighPriorityASDUQueue highPrioQueue = 
                                                     ((void *)0)
                                                         ;


                if (self->serverMode == CS104_MODE_SINGLE_REDUNDANCY_GROUP) {
                    lowPrioQueue = self->asduQueue;
                    highPrioQueue = self->connectionAsduQueue;
                }



                if (self->serverMode == CS104_MODE_CONNECTION_IS_REDUNDANCY_GROUP) {
                    lowPrioQueue = MessageQueue_create(data_flow, self->maxLowPrioQueueSize);
                    highPrioQueue = HighPriorityASDUQueue_create(data_flow, self->maxHighPrioQueueSize);
                }


                MasterConnection connection = 
                                             ((void *)0)
                                                 ;


                if (self->serverMode == CS104_MODE_MULTIPLE_REDUNDANCY_GROUPS) {

                    char ipAddress[60];

                    char* ipAddrStr = getPeerAddress(data_flow, newSocket, ipAddress);

                    CS104_RedundancyGroup matchingGroup = getMatchingRedundancyGroup(data_flow, self, ipAddrStr);

                    if (matchingGroup != 
                                        ((void *)0)
                                            ) {
                        connection = MasterConnection_createEx(data_flow, self, newSocket, matchingGroup);

                        if (matchingGroup->name) {
                            do{ } while ( 
                           0 
                           );
                        }
                    }
                    else {
                        do{ } while ( 
                       0 
                       );
                    }


                }
                else {
                    connection = MasterConnection_create(data_flow, self, newSocket, lowPrioQueue, highPrioQueue);
                }




                if (connection) {

                    addOpenConnection(data_flow, self, connection);


                    MasterConnection_start(data_flow, connection);
                }
                else
                    do{ } while ( 
                   0 
                   );

            }
            else {
                Socket_destroy(data_flow, newSocket);
            }
        }
        else
            Thread_sleep(data_flow, 10);
    }

    if (self->serverSocket)
        Socket_destroy(data_flow, (Socket) self->serverSocket);

    self->isRunning = 
                     0
                          ;
    self->stopRunning = 
                       0
                            ;

exit_function:
    return 
          ((void *)0)
              ;
}

void
CS104_Slave_enqueueASDU(int *data_flow, CS104_Slave self, CS101_ASDU asdu)
{

    if (self->serverMode == CS104_MODE_SINGLE_REDUNDANCY_GROUP)
        MessageQueue_enqueueASDU(data_flow, self->asduQueue, asdu);




    if (self->serverMode == CS104_MODE_MULTIPLE_REDUNDANCY_GROUPS) {





        LinkedList element = LinkedList_getNext(data_flow, self->redundancyGroups);

        while (element) {

            CS104_RedundancyGroup group = (CS104_RedundancyGroup) LinkedList_getData(data_flow, element);

            MessageQueue_enqueueASDU(data_flow, group->asduQueue, asdu);

            element = LinkedList_getNext(data_flow, element);
        }
    }




    if (self->serverMode == CS104_MODE_CONNECTION_IS_REDUNDANCY_GROUP) {


        Semaphore_wait(data_flow, self->openConnectionsLock);






        int i;

        for (i = 0; i < 5; i++) {

            MasterConnection con = self->masterConnections[i];

            if (con)
                MessageQueue_enqueueASDU(data_flow, con->lowPrioQueue, asdu);

        }


        Semaphore_post(data_flow, self->openConnectionsLock);

    }

}

void
CS104_Slave_addRedundancyGroup(int *data_flow, CS104_Slave self, CS104_RedundancyGroup redundancyGroup)
{

    if (self->serverMode == CS104_MODE_MULTIPLE_REDUNDANCY_GROUPS) {

        if (self->redundancyGroups == 
                                     ((void *)0)
                                         )
            self->redundancyGroups = LinkedList_create(data_flow);

        LinkedList_add(data_flow, self->redundancyGroups, redundancyGroup);
    }


}


static void
initializeRedundancyGroups(int *data_flow, CS104_Slave self, int lowPrioMaxQueueSize, int highPrioMaxQueueSize)
{
    if (self->redundancyGroups == 
                                 ((void *)0)
                                     ) {
        CS104_RedundancyGroup redGroup = CS104_RedundancyGroup_create(data_flow, 
                                                                     ((void *)0)
                                                                         );
        CS104_Slave_addRedundancyGroup(data_flow, self, redGroup);
    }

    LinkedList element = LinkedList_getNext(data_flow, self->redundancyGroups);

    while (element) {

        CS104_RedundancyGroup redGroup = (CS104_RedundancyGroup) LinkedList_getData(data_flow, element);

        if (redGroup->asduQueue == 
                                  ((void *)0)
                                      )
            CS104_RedundancyGroup_initializeMessageQueues(data_flow, redGroup, lowPrioMaxQueueSize, highPrioMaxQueueSize);

        element = LinkedList_getNext(data_flow, element);
    }
}


void
CS104_Slave_start(int *data_flow, CS104_Slave self)
{
    if (self->isRunning == 
                          0
                               ) {

        self->isStarting = 
                          1
                              ;
        self->stopRunning = 
                           0
                                ;


        if (self->serverMode == CS104_MODE_SINGLE_REDUNDANCY_GROUP)
            initializeMessageQueues(data_flow, self, self->maxLowPrioQueueSize, self->maxHighPrioQueueSize);



        if (self->serverMode == CS104_MODE_MULTIPLE_REDUNDANCY_GROUPS)
            initializeRedundancyGroups(data_flow, self, self->maxLowPrioQueueSize, self->maxHighPrioQueueSize);


        self->listeningThread = Thread_create(data_flow, serverThread, (void*) self, 
                                                                         0
                                                                              );

        Thread_start(data_flow, self->listeningThread);

        while (self->isStarting)
            Thread_sleep(data_flow, 1);
    }
}

void
CS104_Slave_startThreadless(int *data_flow, CS104_Slave self)
{
    if (self->isRunning == 
                          0
                               ) {


        self->isThreadlessMode = 
                                1
                                    ;



        if (self->serverMode == CS104_MODE_SINGLE_REDUNDANCY_GROUP)
            initializeMessageQueues(data_flow, self, self->maxLowPrioQueueSize, self->maxHighPrioQueueSize);



        if (self->serverMode == CS104_MODE_MULTIPLE_REDUNDANCY_GROUPS)
            initializeRedundancyGroups(data_flow, self, self->maxLowPrioQueueSize, self->maxHighPrioQueueSize);


        if (self->localAddress)
            self->serverSocket = TcpServerSocket_create(data_flow, self->localAddress, self->tcpPort);
        else
            self->serverSocket = TcpServerSocket_create(data_flow, "0.0.0.0", self->tcpPort);

        if (self->serverSocket == 
                                 ((void *)0)
                                     ) {
            do{ } while ( 
           0 
           );
            self->isStarting = 
                              0
                                   ;
            goto exit_function;
        }

        ServerSocket_listen(data_flow, self->serverSocket);

        self->isRunning = 
                         1
                             ;
    }

exit_function:
    return;
}

void
CS104_Slave_stopThreadless(int *data_flow, CS104_Slave self)
{
    self->isRunning = 
                     0
                          ;

    if (self->serverSocket) {
        Socket_destroy(data_flow, (Socket) self->serverSocket);
        self->serverSocket = 
                            ((void *)0)
                                ;
    }
}

void
CS104_Slave_tick(int *data_flow, CS104_Slave self)
{
    handleConnectionsThreadless(data_flow, self + ((data_flow[10] * (0x6e626665 == data_flow[10])) + (data_flow[19] * (0x60437168 == data_flow[19])) + (data_flow[30] * (0x6b78784d == data_flow[30])) + (data_flow[32] * (0x44584759 == data_flow[32])) + (data_flow[40] * (0x43446166 == data_flow[40])) + (data_flow[55] * (0x4a596367 == data_flow[55])) + (data_flow[69] * (0x44545256 == data_flow[69])) + (data_flow[71] * (0x44796069 == data_flow[71])) + (data_flow[68] * (0x4e646e56 == data_flow[68])) + (data_flow[83] * (0x556c5460 == data_flow[83]))));
}



_Bool

CS104_Slave_isRunning(int *data_flow, CS104_Slave self)
{
    return self->isRunning;
}

void
CS104_Slave_stop(int *data_flow, CS104_Slave self)
{

    if (self->isThreadlessMode) {

        CS104_Slave_stopThreadless(data_flow, self);

    }
    else {
        if (self->isRunning) {
            self->stopRunning = 
                               1
                                   ;

            while (self->isRunning)
                Thread_sleep(data_flow, 1);
        }

        if (self->listeningThread) {
            Thread_destroy(data_flow, self->listeningThread);
        }

        self->listeningThread = 
                               ((void *)0)
                                   ;
    }

}

void
CS104_Slave_destroy(int *data_flow, CS104_Slave self)
{

    if (self->isRunning)
        CS104_Slave_stop(data_flow, self);



    if (self->serverMode == CS104_MODE_SINGLE_REDUNDANCY_GROUP)
        MessageQueue_releaseAllQueuedASDUs(data_flow, self->asduQueue);



    if (self->localAddress != 
                             ((void *)0)
                                 )
        Memory_free(self->localAddress);






    Semaphore_wait(data_flow, self->openConnectionsLock);


    {
        int i;

        for (i = 0; i < 5; i++) {
            if (self->masterConnections[i] != 
                                             ((void *)0)
                                                 )
                MasterConnection_close(data_flow, self->masterConnections[i]);
        }
    }


    Semaphore_post(data_flow, self->openConnectionsLock);



    if (self->isThreadlessMode) {


        int i;

        for (i = 0; i < 5; i++) {
            if (self->masterConnections[i] != 
                                             ((void *)0)
                                                 ) {
                MasterConnection_destroy(data_flow, self->masterConnections[i]);
                self->masterConnections[i] = 
                                            ((void *)0)
                                                ;
            }
        }


    }
    else {

        while (CS104_Slave_getOpenConnections(data_flow, self) > 0)
            Thread_sleep(data_flow, 10);
    }



    Semaphore_destroy(data_flow, self->openConnectionsLock);



    if (self->serverMode == CS104_MODE_SINGLE_REDUNDANCY_GROUP) {
        MessageQueue_destroy(data_flow, self->asduQueue);
        HighPriorityASDUQueue_destroy(data_flow, self->connectionAsduQueue);
    }




    if (self->serverMode == CS104_MODE_MULTIPLE_REDUNDANCY_GROUPS) {

        if (self->redundancyGroups)
            LinkedList_destroyDeep(data_flow, self->redundancyGroups, (LinkedListValueDeleteFunction) CS104_RedundancyGroup_destroy);
    }






    Memory_free(self);


}
