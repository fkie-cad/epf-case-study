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
typedef __off_t off_t;
typedef __ssize_t ssize_t;







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


typedef struct sSerialPort* SerialPort;

typedef enum {
    SERIAL_PORT_ERROR_NONE = 0,
    SERIAL_PORT_ERROR_INVALID_ARGUMENT = 1,
    SERIAL_PORT_ERROR_INVALID_BAUDRATE = 2,
    SERIAL_PORT_ERROR_OPEN_FAILED = 3,
    SERIAL_PORT_ERROR_UNKNOWN = 99
} SerialPortError;
SerialPort
SerialPort_create(int *data_flow, const char* interfaceName, int baudRate, uint8_t dataBits, char parity, uint8_t stopBits);




void
SerialPort_destroy(int *data_flow, SerialPort self);







_Bool

SerialPort_open(int *data_flow, SerialPort self);




void
SerialPort_close(int *data_flow, SerialPort self);






int
SerialPort_getBaudRate(int *data_flow, SerialPort self);






void
SerialPort_setTimeout(int *data_flow, SerialPort self, int timeout);




void
SerialPort_discardInBuffer(int *data_flow, SerialPort self);






int
SerialPort_readByte(int *data_flow, SerialPort self);
int
SerialPort_write(int *data_flow, SerialPort self, uint8_t* buffer, int startPos, int numberOfBytes);




SerialPortError
SerialPort_getLastError(int *data_flow, SerialPort self);
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
typedef struct sLinkLayerParameters* LinkLayerParameters;

struct sLinkLayerParameters {
    int addressLength;
    int timeoutForAck;
    int timeoutRepeat;
    
   _Bool 
        useSingleCharACK;
};
typedef struct sCS101_Slave* CS101_Slave;
CS101_Slave
CS101_Slave_create(int *data_flow, SerialPort serialPort, LinkLayerParameters llParameters, CS101_AppLayerParameters alParameters, IEC60870_LinkLayerMode linkLayerMode);






void
CS101_Slave_destroy(int *data_flow, CS101_Slave self);
void
CS101_Slave_setDIR(int *data_flow, CS101_Slave self, 
                                    _Bool 
                                         dir);
void
CS101_Slave_setIdleTimeout(int *data_flow, CS101_Slave self, int timeoutInMs);




void
CS101_Slave_setLinkLayerStateChanged(int *data_flow, CS101_Slave self, IEC60870_LinkLayerStateChangedHandler handler, void* parameter);
void
CS101_Slave_setLinkLayerAddress(int *data_flow, CS101_Slave self, int address);







void
CS101_Slave_setLinkLayerAddressOtherStation(int *data_flow, CS101_Slave self, int address);

_Bool

CS101_Slave_isClass1QueueFull(int *data_flow, CS101_Slave self);







void
CS101_Slave_enqueueUserDataClass1(int *data_flow, CS101_Slave self, CS101_ASDU asdu);

_Bool

CS101_Slave_isClass2QueueFull(int *data_flow, CS101_Slave self);







void
CS101_Slave_enqueueUserDataClass2(int *data_flow, CS101_Slave self, CS101_ASDU asdu);






void
CS101_Slave_flushQueues(int *data_flow, CS101_Slave self);
void
CS101_Slave_run(int *data_flow, CS101_Slave self);
void
CS101_Slave_start(int *data_flow, CS101_Slave self);






void
CS101_Slave_stop(int *data_flow, CS101_Slave self);
CS101_AppLayerParameters
CS101_Slave_getAppLayerParameters(int *data_flow, CS101_Slave self);
LinkLayerParameters
CS101_Slave_getLinkLayerParameters(int *data_flow, CS101_Slave self);







void
CS101_Slave_setResetCUHandler(int *data_flow, CS101_Slave self, CS101_ResetCUHandler handler, void* parameter);







void
CS101_Slave_setInterrogationHandler(int *data_flow, CS101_Slave self, CS101_InterrogationHandler handler, void* parameter);







void
CS101_Slave_setCounterInterrogationHandler(int *data_flow, CS101_Slave self, CS101_CounterInterrogationHandler handler, void* parameter);







void
CS101_Slave_setReadHandler(int *data_flow, CS101_Slave self, CS101_ReadHandler handler, void* parameter);







void
CS101_Slave_setClockSyncHandler(int *data_flow, CS101_Slave self, CS101_ClockSynchronizationHandler handler, void* parameter);







void
CS101_Slave_setResetProcessHandler(int *data_flow, CS101_Slave self, CS101_ResetProcessHandler handler, void* parameter);







void
CS101_Slave_setDelayAcquisitionHandler(int *data_flow, CS101_Slave self, CS101_DelayAcquisitionHandler handler, void* parameter);
void
CS101_Slave_setASDUHandler(int *data_flow, CS101_Slave self, CS101_ASDUHandler handler, void* parameter);







void
CS101_Slave_setRawMessageHandler(int *data_flow, CS101_Slave self, IEC60870_RawMessageHandler handler, void* parameter);

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
typedef __pid_t pid_t;





typedef __id_t id_t;
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
void
lib60870_debug_print(int *data_flow, const char *format, ...);



typedef struct sSerialTransceiverFT12* SerialTransceiverFT12;

typedef void (*SerialTXMessageHandler) (int *data_flow, void* parameter, uint8_t* msg, int msgSize);

SerialTransceiverFT12
SerialTransceiverFT12_create(int *data_flow, SerialPort serialPort, LinkLayerParameters linkLayerParameters);

void
SerialTransceiverFT12_destroy(int *data_flow, SerialTransceiverFT12 self);

void
SerialTransceiverFT12_setTimeouts(int *data_flow, SerialTransceiverFT12 self, int messageTimeout, int characterTimeout);

void
SerialTransceiverFT12_setRawMessageHandler(int *data_flow, SerialTransceiverFT12 self, IEC60870_RawMessageHandler handler, void* parameter);

int
SerialTransceiverFT12_getBaudRate(int *data_flow, SerialTransceiverFT12 self);

void
SerialTransceiverFT12_sendMessage(int *data_flow, SerialTransceiverFT12 self, uint8_t* msg, int msgSize);

void
SerialTransceiverFT12_readNextMessage(int *data_flow, SerialTransceiverFT12 self, uint8_t* buffer,
        SerialTXMessageHandler, void* parameter);


typedef struct sLinkLayer* LinkLayer;

typedef struct sLinkLayerBalanced* LinkLayerBalanced;

typedef struct sLinkLayerSecondaryUnbalanced* LinkLayerSecondaryUnbalanced;

typedef struct sLinkLayerPrimaryUnbalanced* LinkLayerPrimaryUnbalanced;

typedef struct sISecondaryApplicationLayer* ISecondaryApplicationLayer;

struct sISecondaryApplicationLayer {
    
   _Bool 
        (*IsClass1DataAvailable) (int *data_flow, void* parameter);
    Frame (*GetClass1Data) (int *data_flow, void* parameter, Frame frame);
    Frame (*GetClass2Data) (int *data_flow, void* parameter, Frame frame);
    
   _Bool 
        (*HandleReceivedData) (int *data_flow, void* parameter, uint8_t* msg, 
                                                              _Bool 
                                                                   isBroadcast, int userDataStart, int userDataLength);
    void (*ResetCUReceived) (int *data_flow, void* parameter, 
                                             _Bool 
                                                  onlyFCB);
};

typedef struct sIPrimaryApplicationLayer* IPrimaryApplicationLayer;

struct sIPrimaryApplicationLayer {
    void (*AccessDemand) (int *data_flow, void* parameter, int slaveAddress);
    void (*UserData) (int *data_flow, void* parameter, int slaveAddress, uint8_t* msg, int start, int length);
    void (*Timeout) (int *data_flow, void* parameter, int slaveAddress);
};

typedef struct sIBalancedApplicationLayer* IBalancedApplicationLayer;

struct sIBalancedApplicationLayer {
    Frame (*GetUserData) (int *data_flow, void* parameter, Frame frame);
    
   _Bool 
        (*HandleReceivedData) (int *data_flow, void* parameter, uint8_t* msg, 
                                                              _Bool 
                                                                   isBroadcast, int userDataStart, int userDataLength);
};


LinkLayerPrimaryUnbalanced
LinkLayerPrimaryUnbalanced_create(int *data_flow, 
        SerialTransceiverFT12 transceiver,
        LinkLayerParameters linkLayerParameters,
        IPrimaryApplicationLayer applicationLayer,
        void* applicationLayerParameter
        );

void
LinkLayerPrimaryUnbalanced_destroy(int *data_flow, LinkLayerPrimaryUnbalanced self);

void
LinkLayerPrimaryUnbalanced_setStateChangeHandler(int *data_flow, LinkLayerPrimaryUnbalanced self,
        IEC60870_LinkLayerStateChangedHandler handler, void* parameter);

void
LinkLayerPrimaryUnbalanced_addSlaveConnection(int *data_flow, LinkLayerPrimaryUnbalanced self, int slaveAddress);

void
LinkLayerPrimaryUnbalanced_resetCU(int *data_flow, LinkLayerPrimaryUnbalanced self, int slaveAddress);


_Bool

LinkLayerPrimaryUnbalanced_isChannelAvailable(int *data_flow, LinkLayerPrimaryUnbalanced self, int slaveAddress);

void
LinkLayerPrimaryUnbalanced_sendLinkLayerTestFunction(int *data_flow, LinkLayerPrimaryUnbalanced self, int slaveAddress);


_Bool

LinkLayerPrimaryUnbalanced_requestClass1Data(int *data_flow, LinkLayerPrimaryUnbalanced self, int slaveAddress);


_Bool

LinkLayerPrimaryUnbalanced_requestClass2Data(int *data_flow, LinkLayerPrimaryUnbalanced self, int slaveAddress);


_Bool

LinkLayerPrimaryUnbalanced_sendConfirmed(int *data_flow, LinkLayerPrimaryUnbalanced self, int slaveAddress, BufferFrame message);


_Bool

LinkLayerPrimaryUnbalanced_sendNoReply(int *data_flow, LinkLayerPrimaryUnbalanced self, int slaveAddress, BufferFrame message);

void
LinkLayerPrimaryUnbalanced_run(int *data_flow, LinkLayerPrimaryUnbalanced self);




LinkLayerSecondaryUnbalanced
LinkLayerSecondaryUnbalanced_create(int *data_flow, 
        int linkLayerAddress,
        SerialTransceiverFT12 transceiver,
        LinkLayerParameters linkLayerParameters,
        ISecondaryApplicationLayer applicationLayer,
        void* applicationLayerParameter
);

void
LinkLayerSecondaryUnbalanced_destroy(int *data_flow, LinkLayerSecondaryUnbalanced self);

void
LinkLayerSecondaryUnbalanced_run(int *data_flow, LinkLayerSecondaryUnbalanced self);

void
LinkLayerSecondaryUnbalanced_setIdleTimeout(int *data_flow, LinkLayerSecondaryUnbalanced self, int timeoutInMs);

void
LinkLayerSecondaryUnbalanced_setStateChangeHandler(int *data_flow, LinkLayerSecondaryUnbalanced self,
        IEC60870_LinkLayerStateChangedHandler handler, void* parameter);

void
LinkLayerSecondaryUnbalanced_setAddress(int *data_flow, LinkLayerSecondaryUnbalanced self, int address);

LinkLayerBalanced
LinkLayerBalanced_create(int *data_flow, 
        int linkLayerAddress,
        SerialTransceiverFT12 transceiver,
        LinkLayerParameters linkLayerParameters,
        IBalancedApplicationLayer applicationLayer,
        void* applicationLayerParameter
        );

void
LinkLayerBalanced_setStateChangeHandler(int *data_flow, LinkLayerBalanced self,
        IEC60870_LinkLayerStateChangedHandler handler, void* parameter);

void
LinkLayerBalanced_sendLinkLayerTestFunction(int *data_flow, LinkLayerBalanced self);

void
LinkLayerBalanced_setIdleTimeout(int *data_flow, LinkLayerBalanced self, int timeoutInMs);

void
LinkLayerBalanced_setDIR(int *data_flow, LinkLayerBalanced self, 
                                                _Bool 
                                                     dir);

void
LinkLayerBalanced_setAddress(int *data_flow, LinkLayerBalanced self, int address);

void
LinkLayerBalanced_setOtherStationAddress(int *data_flow, LinkLayerBalanced self, int address);

void
LinkLayerBalanced_destroy(int *data_flow, LinkLayerBalanced self);

void
LinkLayerBalanced_run(int *data_flow, LinkLayerBalanced self);

LinkLayer
LinkLayer_init(int *data_flow, LinkLayer self, int address, SerialTransceiverFT12 transceiver, LinkLayerParameters linkLayerParameters);

void
LinkLayer_setDIR(int *data_flow, LinkLayer self, 
                                _Bool 
                                     dir);

void
LinkLayer_setAddress(int *data_flow, LinkLayer self, int address);
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
typedef struct sCS101_QueueElement* CS101_QueueElement;

struct sCS101_QueueElement {
    uint8_t size;
    uint8_t buffer[256];
};

typedef struct sCS101_Queue* CS101_Queue;

struct sCS101_Queue {

    int size;
    int entryCounter;
    int lastMsgIndex;
    int firstMsgIndex;

    struct sBufferFrame encodeFrame;

    struct sCS101_QueueElement elements[10];


    Semaphore queueLock;

};

void
CS101_Queue_initialize(int *data_flow, CS101_Queue self, int maxQueueSize);

void
CS101_Queue_dispose(int *data_flow, CS101_Queue self);

void
CS101_Queue_lock(int *data_flow, CS101_Queue self);

void
CS101_Queue_unlock(int *data_flow, CS101_Queue self);

void
CS101_Queue_enqueue(int *data_flow, CS101_Queue self, CS101_ASDU asdu);




Frame
CS101_Queue_dequeue(int *data_flow, CS101_Queue self, Frame resultStorage);


_Bool

CS101_Queue_isFull(int *data_flow, CS101_Queue self);


_Bool

CS101_Queue_isEmpty(int *data_flow, CS101_Queue self);

void
CS101_Queue_flush(int *data_flow, CS101_Queue self);


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





struct sCS101_Slave
{
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

    CS101_ResetCUHandler resetCUHandler;
    void* resetCUHandlerParameter;

    SerialTransceiverFT12 transceiver;

    LinkLayerSecondaryUnbalanced unbalancedLinkLayer;
    LinkLayerBalanced balancedLinkLayer;

    struct sLinkLayerParameters linkLayerParameters;

    struct sCS101_AppLayerParameters alParameters;

    struct sCS101_Queue userDataClass1Queue;

    struct sCS101_Queue userDataClass2Queue;

    struct sIMasterConnection iMasterConnection;

    IEC60870_LinkLayerMode linkLayerMode;


    
   _Bool 
        isRunning;
    Thread workerThread;

};

static void
handleASDU(int *data_flow, CS101_Slave self, CS101_ASDU asdu);







static 
      _Bool

IsClass1DataAvailable (int *data_flow, void* parameter)
{
    CS101_Slave self = (CS101_Slave) parameter;

    return (CS101_Queue_isEmpty(data_flow, &(self->userDataClass1Queue)) == 
                                                                0
                                                                     );
}

static Frame
GetClass1Data (int *data_flow, void* parameter, Frame frame)
{
    CS101_Slave self = (CS101_Slave) parameter;

    CS101_Queue_lock(data_flow, &(self->userDataClass1Queue));

    Frame userData = CS101_Queue_dequeue(data_flow, &(self->userDataClass1Queue), frame);

    CS101_Queue_unlock(data_flow, &(self->userDataClass1Queue));

    return userData;
}

static Frame
GetClass2Data (int *data_flow, void* parameter, Frame frame)
{
    CS101_Slave self = (CS101_Slave) parameter;

    CS101_Queue_lock(data_flow, &(self->userDataClass2Queue));

    Frame userData = CS101_Queue_dequeue(data_flow, &(self->userDataClass2Queue), frame);

    CS101_Queue_unlock(data_flow, &(self->userDataClass2Queue));

    return userData;
}

static 
      _Bool

HandleReceivedData (int *data_flow, void* parameter, uint8_t* msg, 
                                                  _Bool 
                                                       isBroadcast, int userDataStart, int userDataLength)
{
    CS101_Slave self = (CS101_Slave) parameter;

    CS101_ASDU asdu = CS101_ASDU_createFromBuffer(data_flow, &(self->alParameters), msg + userDataStart, userDataLength);

    handleASDU(data_flow, self, asdu);

    CS101_ASDU_destroy(data_flow, asdu);

    return 
          1
              ;
}

static void
ResetCUReceived (int *data_flow, void* parameter, 
                                 _Bool 
                                      onlyFCB)
{
    CS101_Slave self = (CS101_Slave) parameter;

    if (onlyFCB) {
        do{ } while ( 
       0 
       );

    }
    else {
        do{ } while ( 
       0 
       );

        if (self->resetCUHandler)
            self->resetCUHandler(data_flow, self->resetCUHandlerParameter);

    }
}

static struct sISecondaryApplicationLayer cs101UnbalancedAppLayerInterface = {
        IsClass1DataAvailable,
        GetClass1Data,
        GetClass2Data,
        HandleReceivedData,
        ResetCUReceived
};
static 
      _Bool

IsClass2DataAvailable (int *data_flow, void* parameter)
{
    CS101_Slave self = (CS101_Slave) parameter;

    return (CS101_Queue_isEmpty(data_flow, &(self->userDataClass2Queue)) == 
                                                                0
                                                                     );
}

static Frame
IBalancedApplicationLayer_GetUserData (int *data_flow, void* parameter, Frame frame)
{
    if (IsClass1DataAvailable(data_flow, parameter))
        return GetClass1Data(data_flow, parameter, frame);
    else if (IsClass2DataAvailable(data_flow, parameter))
        return GetClass2Data(data_flow, parameter, frame);
    else
        return 
              ((void *)0)
                  ;
}

static 
      _Bool

IBalancedApplicationLayer_HandleReceivedData (int *data_flow, void* parameter, uint8_t* msg, 
                                                                            _Bool 
                                                                                 isBroadcast, int userDataStart, int userDataLength)
{
    return HandleReceivedData(data_flow, parameter, msg, isBroadcast, userDataStart, userDataLength);
}

static struct sIBalancedApplicationLayer cs101BalancedAppLayerInterface = {
    IBalancedApplicationLayer_GetUserData,
    IBalancedApplicationLayer_HandleReceivedData
};
static void
sendASDU(int *data_flow, IMasterConnection self, CS101_ASDU asdu)
{
    CS101_Slave slave = (CS101_Slave) self->object;

    CS101_Slave_enqueueUserDataClass1(data_flow, slave, asdu);
}

static void
sendACT_CON(int *data_flow, IMasterConnection self, CS101_ASDU asdu, 
                                                    _Bool 
                                                         negative)
{
    CS101_ASDU_setCOT(data_flow, asdu, CS101_COT_ACTIVATION_CON);
    CS101_ASDU_setNegative(data_flow, asdu, negative);

    sendASDU(data_flow, self, asdu);
}

static void
sendACT_TERM(int *data_flow, IMasterConnection self, CS101_ASDU asdu)
{
    CS101_ASDU_setCOT(data_flow, asdu, CS101_COT_ACTIVATION_TERMINATION);
    CS101_ASDU_setNegative(data_flow, asdu, 
                                0
                                     );

    sendASDU(data_flow, self, asdu);
}

static CS101_AppLayerParameters
getApplicationLayerParameters(int *data_flow, IMasterConnection self)
{
    CS101_Slave slave = (CS101_Slave) self->object;

    return &(slave->alParameters);
}





static struct sCS101_AppLayerParameters defaultAppLayerParameters = {
                           1,
                       1,
                       2,
                               0,
                      2,
                       3,
                           249
};

CS101_Slave
CS101_Slave_create(int *data_flow, SerialPort serialPort, LinkLayerParameters llParameters, CS101_AppLayerParameters alParameters, IEC60870_LinkLayerMode linkLayerMode)
{
    CS101_Slave self = (CS101_Slave) Memory_malloc(data_flow, sizeof(struct sCS101_Slave));

    if (self != 
               ((void *)0)
                   ) {

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
        self->resetCUHandler = 
                              ((void *)0)
                                  ;


        self->isRunning = 
                         0
                              ;
        self->workerThread = 
                            ((void *)0)
                                ;


        if (llParameters)
            self->linkLayerParameters = *llParameters;
        else {
            self->linkLayerParameters.addressLength = 1;
            self->linkLayerParameters.timeoutForAck = 200;
            self->linkLayerParameters.timeoutRepeat = 1000;
            self->linkLayerParameters.useSingleCharACK = 
                                                        1
                                                            ;
        }

        if (alParameters)
            self->alParameters = *alParameters;
        else {
            self->alParameters = defaultAppLayerParameters;
        }

        self->transceiver = SerialTransceiverFT12_create(data_flow, serialPort, &(self->linkLayerParameters));

        self->linkLayerMode = linkLayerMode;

        if (linkLayerMode == IEC60870_LINK_LAYER_UNBALANCED) {

            self->balancedLinkLayer = 
                                     ((void *)0)
                                         ;

            self->unbalancedLinkLayer = LinkLayerSecondaryUnbalanced_create(data_flow, 0, self->transceiver,
                    &(self->linkLayerParameters),
                    &cs101UnbalancedAppLayerInterface, self);

        }
        else {

            self->unbalancedLinkLayer = 
                                       ((void *)0)
                                           ;

            self->balancedLinkLayer = LinkLayerBalanced_create(data_flow, 0, self->transceiver,
                    &(self->linkLayerParameters),
                    &cs101BalancedAppLayerInterface, self);

        }

        self->iMasterConnection.sendASDU = sendASDU;
        self->iMasterConnection.sendACT_CON = sendACT_CON;
        self->iMasterConnection.sendACT_TERM = sendACT_TERM;
        self->iMasterConnection.getApplicationLayerParameters = getApplicationLayerParameters;
        self->iMasterConnection.close = 
                                       ((void *)0)
                                           ;
        self->iMasterConnection.getPeerAddress = 
                                                ((void *)0)
                                                    ;
        self->iMasterConnection.object = self;

        CS101_Queue_initialize(data_flow, &(self->userDataClass1Queue), 10);
        CS101_Queue_initialize(data_flow, &(self->userDataClass2Queue), 10);
    }

    return self;
}

void
CS101_Slave_destroy(int *data_flow, CS101_Slave self)
{
    if (self != 
               ((void *)0)
                   ) {

        if (self->unbalancedLinkLayer)
            LinkLayerSecondaryUnbalanced_destroy(data_flow, self->unbalancedLinkLayer);

        if (self->balancedLinkLayer)
            LinkLayerBalanced_destroy(data_flow, self->balancedLinkLayer);

        SerialTransceiverFT12_destroy(data_flow, self->transceiver);

        CS101_Queue_dispose(data_flow, &(self->userDataClass1Queue));
        CS101_Queue_dispose(data_flow, &(self->userDataClass2Queue));

        Memory_free(self);
    }
}

void
CS101_Slave_setDIR(int *data_flow, CS101_Slave self, 
                                    _Bool 
                                         dir)
{
    if (self->linkLayerMode == IEC60870_LINK_LAYER_BALANCED) {
        LinkLayerBalanced_setDIR(data_flow, self->balancedLinkLayer, dir);
    }
}

void
CS101_Slave_setIdleTimeout(int *data_flow, CS101_Slave self, int timeoutInMs)
{
    if (self->linkLayerMode == IEC60870_LINK_LAYER_UNBALANCED)
        LinkLayerSecondaryUnbalanced_setIdleTimeout(data_flow, self->unbalancedLinkLayer, timeoutInMs);
    else
        LinkLayerBalanced_setIdleTimeout(data_flow, self->balancedLinkLayer, timeoutInMs);
}

void
CS101_Slave_setLinkLayerStateChanged(int *data_flow, CS101_Slave self, IEC60870_LinkLayerStateChangedHandler handler, void* parameter)
{
    if (self->linkLayerMode == IEC60870_LINK_LAYER_UNBALANCED) {
        LinkLayerSecondaryUnbalanced_setStateChangeHandler(data_flow, self->unbalancedLinkLayer, handler, parameter);
    }
    else {
        LinkLayerBalanced_setStateChangeHandler(data_flow, self->balancedLinkLayer, handler, parameter);
    }
}

void
CS101_Slave_setLinkLayerAddress(int *data_flow, CS101_Slave self, int address)
{
    if (self->linkLayerMode == IEC60870_LINK_LAYER_UNBALANCED)
        LinkLayerSecondaryUnbalanced_setAddress(data_flow, self->unbalancedLinkLayer, address);
    else
        LinkLayerBalanced_setAddress(data_flow, self->balancedLinkLayer, address);
}

void
CS101_Slave_setLinkLayerAddressOtherStation(int *data_flow, CS101_Slave self, int address)
{
    if (self->balancedLinkLayer)
        LinkLayerBalanced_setOtherStationAddress(data_flow, self->balancedLinkLayer, address);
}


_Bool

CS101_Slave_isClass1QueueFull(int *data_flow, CS101_Slave self)
{
    return CS101_Queue_isFull(data_flow, &(self->userDataClass1Queue));
}

void
CS101_Slave_enqueueUserDataClass1(int *data_flow, CS101_Slave self, CS101_ASDU asdu)
{
    CS101_Queue_enqueue(data_flow, &(self->userDataClass1Queue), asdu);
}



_Bool

CS101_Slave_isClass2QueueFull(int *data_flow, CS101_Slave self)
{
    return CS101_Queue_isFull(data_flow, &(self->userDataClass2Queue));
}

void
CS101_Slave_enqueueUserDataClass2(int *data_flow, CS101_Slave self, CS101_ASDU asdu)
{
    CS101_Queue_enqueue(data_flow, &(self->userDataClass2Queue), asdu);
}

void
CS101_Slave_flushQueues(int *data_flow, CS101_Slave self)
{
    CS101_Queue_flush(data_flow, &(self->userDataClass1Queue));
    CS101_Queue_flush(data_flow, &(self->userDataClass2Queue));
}

void
CS101_Slave_run(int *data_flow, CS101_Slave self)
{

    if (self->unbalancedLinkLayer)
        LinkLayerSecondaryUnbalanced_run(data_flow, self->unbalancedLinkLayer);
    else
        LinkLayerBalanced_run(data_flow, self->balancedLinkLayer);


}


static void*
slaveMainThread(int *data_flow, void* parameter)
{
    CS101_Slave self = (CS101_Slave) parameter;

    self->isRunning = 
                     1
                         ;

    while (self->isRunning) {
        CS101_Slave_run(data_flow, self);
    }

    return 
          ((void *)0)
              ;
}


void
CS101_Slave_start(int *data_flow, CS101_Slave self)
{

    if (self->workerThread == 
                             ((void *)0)
                                 ) {
        self->workerThread = Thread_create(data_flow, slaveMainThread, self, 
                                                                 0
                                                                      );
        Thread_start(data_flow, self->workerThread);
    }

}

void
CS101_Slave_stop(int *data_flow, CS101_Slave self)
{

    if (self->isRunning) {
        self->isRunning = 
                         0
                              ;
        Thread_destroy(data_flow, self->workerThread);
        self->workerThread = 
                            ((void *)0)
                                ;
    }

}



CS101_AppLayerParameters
CS101_Slave_getAppLayerParameters(int *data_flow, CS101_Slave self)
{
    return &(self->alParameters);
}

LinkLayerParameters
CS101_Slave_getLinkLayerParameters(int *data_flow, CS101_Slave self)
{
    return &(self->linkLayerParameters);
}

void
CS101_Slave_setResetCUHandler(int *data_flow, CS101_Slave self, CS101_ResetCUHandler handler, void* parameter)
{
    self->resetCUHandler = handler;
    self->resetCUHandlerParameter = parameter;
}

void
CS101_Slave_setInterrogationHandler(int *data_flow, CS101_Slave self, CS101_InterrogationHandler handler, void* parameter)
{
    self->interrogationHandler = handler;
    self->interrogationHandlerParameter = parameter;
}

void
CS101_Slave_setCounterInterrogationHandler(int *data_flow, CS101_Slave self, CS101_CounterInterrogationHandler handler, void* parameter)
{
    self->counterInterrogationHandler = handler;
    self->counterInterrogationHandlerParameter = parameter;
}

void
CS101_Slave_setReadHandler(int *data_flow, CS101_Slave self, CS101_ReadHandler handler, void* parameter)
{
    self->readHandler = handler;
    self->readHandlerParameter = parameter;
}

void
CS101_Slave_setASDUHandler(int *data_flow, CS101_Slave self, CS101_ASDUHandler handler, void* parameter)
{
    self->asduHandler = handler;
    self->asduHandlerParameter = parameter;
}

void
CS101_Slave_setClockSyncHandler(int *data_flow, CS101_Slave self, CS101_ClockSynchronizationHandler handler, void* parameter)
{
    self->clockSyncHandler = handler;
    self->clockSyncHandlerParameter = parameter;
}

void
CS101_Slave_setResetProcessHandler(int *data_flow, CS101_Slave self, CS101_ResetProcessHandler handler, void* parameter)
{
    self->resetProcessHandler = handler;
    self->resetProcessHandlerParameter = parameter;
}

void
CS101_Slave_setDelayAcquisitionHandler(int *data_flow, CS101_Slave self, CS101_DelayAcquisitionHandler handler, void* parameter)
{
    self->delayAcquisitionHandler = handler;
    self->delayAcquisitionHandlerParameter = parameter;
}

static void
responseCOTUnknown(int *data_flow, CS101_ASDU asdu, IMasterConnection self)
{
    do{ } while ( 
   0 
   );
    CS101_ASDU_setCOT(data_flow, asdu, CS101_COT_UNKNOWN_COT);
    CS101_ASDU_setNegative(data_flow, asdu, 
                                1
                                    );
    sendASDU(data_flow, self, asdu);
}







static void
handleASDU(int *data_flow, CS101_Slave self, CS101_ASDU asdu)
{
    
   _Bool 
        messageHandled = 
                         0
                              ;

    uint8_t cot = CS101_ASDU_getCOT(data_flow, asdu);

    switch (CS101_ASDU_getTypeID(data_flow, asdu)) {

    case C_IC_NA_1:

        do{ } while ( 
       0 
       );

        if ((cot == CS101_COT_ACTIVATION) || (cot == CS101_COT_DEACTIVATION)) {
            if (self->interrogationHandler != 
                                             ((void *)0)
                                                 ) {

                union uInformationObject _io;

                InterrogationCommand irc = (InterrogationCommand) CS101_ASDU_getElementEx(data_flow, asdu, (InformationObject) &_io, 0);

                if (self->interrogationHandler(data_flow, self->interrogationHandlerParameter,
                        &(self->iMasterConnection), asdu, InterrogationCommand_getQOI(data_flow, irc)))
                    messageHandled = 
                                    1
                                        ;
            }
        }
        else
            responseCOTUnknown(data_flow, asdu, &(self->iMasterConnection));

        break;

    case C_CI_NA_1:

        do{ } while ( 
       0 
       );

        if ((cot == CS101_COT_ACTIVATION) || (cot == CS101_COT_DEACTIVATION)) {

            if (self->counterInterrogationHandler != 
                                                    ((void *)0)
                                                        ) {

                union uInformationObject _io;

                CounterInterrogationCommand cic = (CounterInterrogationCommand) CS101_ASDU_getElementEx(data_flow, asdu, (InformationObject) &_io, 0);

                if (self->counterInterrogationHandler(data_flow, self->counterInterrogationHandlerParameter,
                        &(self->iMasterConnection), asdu, CounterInterrogationCommand_getQCC(data_flow, cic)))
                    messageHandled = 
                                    1
                                        ;
            }
        }
        else
            responseCOTUnknown(data_flow, asdu, &(self->iMasterConnection));

        break;

    case C_RD_NA_1:

        do{ } while ( 
       0 
       );

        if (cot == CS101_COT_REQUEST) {
            if (self->readHandler != 
                                    ((void *)0)
                                        ) {

                union uInformationObject _io;

                ReadCommand rc = (ReadCommand) CS101_ASDU_getElementEx(data_flow, asdu, (InformationObject) &_io, 0);

                if (self->readHandler(data_flow, self->readHandlerParameter,
                        &(self->iMasterConnection), asdu, InformationObject_getObjectAddress(data_flow, (InformationObject) rc)))
                    messageHandled = 
                                    1
                                        ;
            }
        }
        else
            responseCOTUnknown(data_flow, asdu, &(self->iMasterConnection));

        break;

    case C_CS_NA_1:

        do{ } while ( 
       0 
       );

        if (cot == CS101_COT_ACTIVATION) {

            if (self->clockSyncHandler != 
                                         ((void *)0)
                                             ) {

                union uInformationObject _io;

                ClockSynchronizationCommand csc = (ClockSynchronizationCommand) CS101_ASDU_getElementEx(data_flow, asdu, (InformationObject) &_io, 0);

                if (self->clockSyncHandler(data_flow, self->clockSyncHandlerParameter,
                        &(self->iMasterConnection), asdu, ClockSynchronizationCommand_getTime(data_flow, csc)))
                    messageHandled = 
                                    1
                                        ;

                if (messageHandled) {

                    CS101_ASDU_setCOT(data_flow, asdu, CS101_COT_ACTIVATION_CON);

                    CS101_Slave_enqueueUserDataClass1(data_flow, self, asdu);
                }
            }
        }
        else
            responseCOTUnknown(data_flow, asdu, &(self->iMasterConnection));

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

        CS101_Slave_enqueueUserDataClass1(data_flow, self, asdu);

        messageHandled = 
                        1
                            ;

        break;

    case C_RP_NA_1:

        do{ } while ( 
       0 
       );

        if (cot == CS101_COT_ACTIVATION) {

            if (self->resetProcessHandler != 
                                            ((void *)0)
                                                ) {

                union uInformationObject _io;

                ResetProcessCommand rpc = (ResetProcessCommand) CS101_ASDU_getElementEx(data_flow, asdu, (InformationObject) &_io, 0);

                if (self->resetProcessHandler(data_flow, self->resetProcessHandlerParameter,
                        &(self->iMasterConnection), asdu, ResetProcessCommand_getQRP(data_flow, rpc)))
                    messageHandled = 
                                    1
                                        ;
            }

        }
        else
            responseCOTUnknown(data_flow, asdu, &(self->iMasterConnection));

        break;

    case C_CD_NA_1:

        do{ } while ( 
       0 
       );

        if ((cot == CS101_COT_ACTIVATION) || (cot == CS101_COT_SPONTANEOUS)) {

            if (self->delayAcquisitionHandler != 
                                                ((void *)0)
                                                    ) {

                union uInformationObject _io;

                DelayAcquisitionCommand dac = (DelayAcquisitionCommand) CS101_ASDU_getElementEx(data_flow, asdu, (InformationObject) &_io, 0);

                if (self->delayAcquisitionHandler(data_flow, self->delayAcquisitionHandlerParameter,
                        &(self->iMasterConnection), asdu, DelayAcquisitionCommand_getDelay(data_flow, dac)))
                    messageHandled = 
                                    1
                                        ;

                DelayAcquisitionCommand_destroy(data_flow, dac);
            }
        }
        else
            responseCOTUnknown(data_flow, asdu, &(self->iMasterConnection));

        break;


    default:
        break;
    }

    if ((messageHandled == 
                          0
                               ) && (self->asduHandler != 
                                                          ((void *)0)
                                                              ))
        if (self->asduHandler(data_flow, self->asduHandlerParameter, &(self->iMasterConnection), asdu))
            messageHandled = 
                            1
                                ;

    if (messageHandled == 
                         0
                              ) {

        CS101_ASDU_setCOT(data_flow, asdu, CS101_COT_UNKNOWN_TYPE_ID);
        CS101_ASDU_setNegative(data_flow, asdu, 
                                    1
                                        );
        CS101_Slave_enqueueUserDataClass1(data_flow, self, asdu);
    }
}

void
CS101_Slave_setRawMessageHandler(int *data_flow, CS101_Slave self, IEC60870_RawMessageHandler handler, void* parameter)
{
    SerialTransceiverFT12_setRawMessageHandler(data_flow, self->transceiver, handler, parameter);
}
