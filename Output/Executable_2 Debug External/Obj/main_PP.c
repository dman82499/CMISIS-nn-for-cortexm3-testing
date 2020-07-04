# 1 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1\\main.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 365 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1\\main.c" 2
# 50 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1\\main.c"
# 1 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdio.h" 1 3
# 50 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdio.h" 3
# 1 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include/__crossworks.h" 1 3
# 76 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include/__crossworks.h" 3
typedef __builtin_va_list __va_list;
# 130 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include/__crossworks.h" 3
struct __mbstate_s {
  int __state;
  long __wchar;
};

typedef int (__RAL_mb_encode_t)(char *s, unsigned int wc, struct __mbstate_s *codec);
typedef int (__RAL_mb_decode_t)(unsigned int *pwc, const char *s, unsigned len, struct __mbstate_s *codec);

typedef struct {

  const char *decimal_point;
  const char *thousands_sep;
  const char *grouping;

  const char *int_curr_symbol;
  const char *currency_symbol;
  const char *mon_decimal_point;
  const char *mon_thousands_sep;
  const char *mon_grouping;
  const char *positive_sign;
  const char *negative_sign;

  char int_frac_digits;
  char frac_digits;
  char p_cs_precedes;
  char p_sep_by_space;
  char n_cs_precedes;
  char n_sep_by_space;
  char p_sign_posn;
  char n_sign_posn;
  char int_p_cs_precedes;
  char int_n_cs_precedes;
  char int_p_sep_by_space;
  char int_n_sep_by_space;
  char int_p_sign_posn;
  char int_n_sign_posn;




  const char *day_names;
  const char *abbrev_day_names;
  const char *month_names;
  const char *abbrev_month_names;
  const char *am_pm_indicator;
  const char *date_format;
  const char *time_format;
  const char *date_time_format;
} __RAL_locale_data_t;

enum {
  __RAL_WC_ALNUM = 1,
  __RAL_WC_ALPHA,
  __RAL_WC_CNTRL,
  __RAL_WC_DIGIT,
  __RAL_WC_GRAPH,
  __RAL_WC_LOWER,
  __RAL_WC_UPPER,
  __RAL_WC_SPACE,
  __RAL_WC_PRINT,
  __RAL_WC_PUNCT,
  __RAL_WC_BLANK,
  __RAL_WC_XDIGIT
};

enum {
  __RAL_WT_TOLOWER = 1,
  __RAL_WT_TOUPPER
};

typedef struct {

  int (*__isctype)(int, int);
  int (*__toupper)(int);
  int (*__tolower)(int);


  int (*__iswctype)(long, int);
  long (*__towupper)(long);
  long (*__towlower)(long);


  int (*__wctomb)(char *s, unsigned int wc, struct __mbstate_s *state);
  int (*__mbtowc)(unsigned int *pwc, const char *s, unsigned len, struct __mbstate_s *state);
} __RAL_locale_codeset_t;

typedef struct {
  const char *name;
  const __RAL_locale_data_t *data;
  const __RAL_locale_codeset_t *codeset;
} __RAL_locale_t;



typedef struct __locale_s {
  const __RAL_locale_t *__category[5];
} *__locale_t;


const __RAL_locale_t *__user_find_locale(const char *locale);
# 243 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include/__crossworks.h" 3
const __RAL_locale_t *__RAL_find_locale(const char *locale);







const __RAL_locale_t *__RAL_global_locale_category(int __category);







const __RAL_locale_t *__RAL_locale_category(__locale_t __locale, int __category);






extern struct __locale_s __RAL_global_locale;






extern const __RAL_locale_t __RAL_c_locale;


extern const __RAL_locale_codeset_t __RAL_codeset_ascii;
extern const __RAL_locale_codeset_t __RAL_codeset_utf8;

extern const unsigned char __RAL_ascii_ctype_map[128];

extern const char __RAL_c_locale_day_names[];
extern const char __RAL_c_locale_abbrev_day_names[];
extern const char __RAL_c_locale_month_names[];
extern const char __RAL_c_locale_abbrev_month_names[];

extern const char __RAL_data_utf8_period[];
extern const char __RAL_data_utf8_comma[];
extern const char __RAL_data_utf8_space[];
extern const char __RAL_data_utf8_plus[];
extern const char __RAL_data_utf8_minus[];
extern const char __RAL_data_empty_string[];

const char *__RAL_string_list_decode(const char *str, int index);
int __RAL_string_list_encode(const char *list, const char *str);


void __RAL_init_mbstate(struct __mbstate_s *state);

int __RAL_ascii_wctomb(char *s, unsigned int wc, struct __mbstate_s *state);
int __RAL_ascii_mbtowc(unsigned int *pwc, const char *s, unsigned len, struct __mbstate_s *state);

int __RAL_utf8_wctomb(char *s, unsigned int wc, struct __mbstate_s *state);
int __RAL_utf8_mbtowc(unsigned int *pwc, const char *s, unsigned len, struct __mbstate_s *state);

int __RAL_mb_max(const struct __locale_s *loc);

struct timeval;


int __RAL_compare_locale_name(const char *str0, const char *str1);


extern int (*__user_set_time_of_day)(const struct timeval *tp);
extern int (*__user_get_time_of_day)(struct timeval *tp);


typedef struct { unsigned short min, max, map; } __RAL_unicode_map_bmp_range_t;
typedef struct { unsigned short cp, map; } __RAL_unicode_map_bmp_singleton_t;


typedef struct { unsigned short min, max; } __RAL_unicode_set_bmp_range_t;
typedef struct { long min, max; } __RAL_unicode_set_nonbmp_range_t;


int __RAL_unicode_iswctype(long ch, int ty);
long __RAL_unicode_towupper(long ch);
long __RAL_unicode_towlower(long ch);


int __RAL_unicode_map_range_search(const void *k0, const void *k1);
int __RAL_unicode_map_singleton_search(const void *k0, const void *k1);


int __RAL_unicode_set_bmp_range_search(const void *k0, const void *k1);
int __RAL_unicode_set_nonbmp_range_search(const void *k0, const void *k1);

typedef const char * (*__RAL_error_decoder_fn_t)(int error);

typedef struct __RAL_error_decoder_s
{
  __RAL_error_decoder_fn_t decode;
  struct __RAL_error_decoder_s *next;
} __RAL_error_decoder_t;

void __RAL_register_error_decoder(__RAL_error_decoder_t *decoder);

extern __RAL_error_decoder_t *__RAL_error_decoder_head;

const char *__RAL_decode_error(int num);
# 51 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdio.h" 2 3
# 66 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdio.h" 3
typedef unsigned size_t;
# 78 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdio.h" 3
int putchar(int __c);
# 87 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdio.h" 3
int getchar(void);
# 99 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdio.h" 3
int puts(const char *__s);
# 116 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdio.h" 3
char *gets(char *__s);
# 135 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdio.h" 3
int sprintf(char *__s, const char *__format, ...);
# 163 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdio.h" 3
int snprintf(char *__s, size_t __n, const char *__format, ...);
# 199 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdio.h" 3
int vsnprintf(char *__s, size_t __n, const char *__format, __va_list __arg);
# 445 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdio.h" 3
int printf(const char *__format, ...);
# 465 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdio.h" 3
int vprintf(const char *__format, __va_list __arg);
# 494 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdio.h" 3
int vsprintf(char *__s, const char *__format, __va_list __arg);
# 695 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdio.h" 3
int scanf(const char *__format, ...);
# 715 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdio.h" 3
int sscanf(const char *__s, const char *__format, ...);
# 741 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdio.h" 3
int vscanf(const char *__format, __va_list __arg);
# 765 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdio.h" 3
int vsscanf(const char *__s, const char *__format, __va_list __arg);





typedef struct __printf_tag *__printf_tag_ptr;

int __putchar(int, __printf_tag_ptr);
# 791 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdio.h" 3
typedef struct __RAL_FILE FILE;


typedef long fpos_t;
extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;
void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE *, fpos_t *);
char *fgets(char *, int, FILE *);
int fileno(FILE *);
FILE *fopen(const char *, const char *);
int fprintf(FILE *, const char *, ...);
int fputc(int, FILE *);
int fputs(const char *, FILE *);
size_t fread(void *, size_t, size_t, FILE *);
FILE *freopen(const char *, const char *, FILE *);
int fscanf(FILE *, const char *, ...);
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void *, size_t, size_t, FILE *);
int getc(FILE *);
void perror(const char *);
int putc(int, FILE *);
int remove(const char *);
int rename(const char *, const char *);
void rewind(FILE *);
void setbuf(FILE *, char *);
int setvbuf(FILE *, char *, int, size_t);
FILE *tmpfile(void);
char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE *, const char *, __va_list);
int vfscanf(FILE *, const char *, __va_list);
# 51 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1\\main.c" 2
# 1 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 1 3
# 60 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
typedef unsigned int wchar_t;
# 104 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
typedef struct
{
  int quot;
  int rem;
} div_t;





typedef struct
{
  long quot;
  long rem;
} ldiv_t;






typedef struct
{
  long long quot;
  long rem;
} lldiv_t;






int abs(int __j);






long int labs(long int __j);






long long int llabs(long long int __j);
# 166 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
div_t div(int __numer, int __denom);
# 182 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
ldiv_t ldiv(long int __numer, long int __denom);
# 199 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
lldiv_t lldiv(long long int __numer, long long int __denom);
# 211 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
void *malloc(size_t __size);
# 223 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
void *calloc(size_t __nobj, size_t __size);
# 246 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
void *realloc(void *p, size_t __size);
# 259 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
void free(void *__p);
# 277 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
double atof(const char *__nptr);
# 317 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
double strtod(const char *__nptr, char **__endptr);
# 357 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
float strtof(const char *__nptr, char **__endptr);
# 375 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
int atoi(const char *__nptr);
# 393 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
long int atol(const char *__nptr);
# 412 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
long long int atoll(const char *__nptr);
# 470 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
long int strtol(const char *__nptr, char **__endptr, int __base);
# 528 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
long long int strtoll(const char *__nptr, char **__endptr, int __base);
# 586 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
unsigned long int strtoul(const char *__nptr, char **__endptr, int __base);
# 644 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
unsigned long long int strtoull(const char *__nptr, char **__endptr, int __base);
# 654 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
int rand(void);
# 670 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
void srand(unsigned int __seed);
# 684 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
void *bsearch(const void *__key,
              const void *__buf,
              size_t __num,
              size_t __size,
              int (*__compare)(const void *, const void *));
# 699 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
void qsort(void *__buf,
           size_t __num,
           size_t __size,
           int (*__compare)(const void *, const void *));

void abort(void);






void exit(int __exit_code);
# 721 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
int atexit(void (*__func)(void));

char *getenv(const char *__name);
int system(const char *__command);
# 743 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
char *itoa(int __val, char *__buf, int __radix);
# 757 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
char *utoa(unsigned val, char *buf, int radix);
# 775 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
char *ltoa(long __val, char *__buf, int __radix);
# 789 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
char *ultoa(unsigned long __val, char *__buf, int __radix);
# 807 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
char *lltoa(long long __val, char *__buf, int __radix);
# 821 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
char *ulltoa(unsigned long long __val, char *__buf, int __radix);
# 849 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
int mblen(const char *__s, size_t __n);
# 877 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
int mblen_l(const char *__s, size_t __n, struct __locale_s *__loc);
# 902 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
size_t mbstowcs(wchar_t *__pwcs, const char *__s, size_t __n);
# 913 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
size_t mbstowcs_l(wchar_t *__pwcs, const char *__s, size_t __n, struct __locale_s *__loc);
# 937 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
int mbtowc(wchar_t *__pwc, const char *__s, size_t __n);
# 962 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdlib.h" 3
int mbtowc_l(wchar_t *__pwc, const char *__s, size_t __n, struct __locale_s *__loc);


int wctomb(char *__s, wchar_t __wc);
int wctomb_l(char *__s, wchar_t __wc, struct __locale_s *__loc);

size_t wcstombs(char *__s, const wchar_t *__pwcs, size_t __n);
size_t wcstombs_l(char *__s, const wchar_t *__pwcs, size_t __n, struct __locale_s *__loc);
# 52 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1\\main.c" 2
# 1 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h" 1
# 61 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef enum {

  Reset_IRQn = -15,
  NonMaskableInt_IRQn = -14,
  HardFault_IRQn = -13,
  MemoryManagement_IRQn = -12,

  BusFault_IRQn = -11,

  UsageFault_IRQn = -10,
  SecureFault_IRQn = -9,
  SVCall_IRQn = -5,
  DebugMonitor_IRQn = -4,
  PendSV_IRQn = -2,
  SysTick_IRQn = -1,

  FPU_IRQn = 0,
  CACHE_IRQn = 1,
  SPU_IRQn = 3,
  CLOCK_POWER_IRQn = 5,
  SPIM0_SPIS0_TWIM0_TWIS0_UARTE0_IRQn= 8,
  SPIM1_SPIS1_TWIM1_TWIS1_UARTE1_IRQn= 9,
  SPIM4_IRQn = 10,
  SPIM2_SPIS2_TWIM2_TWIS2_UARTE2_IRQn= 11,
  SPIM3_SPIS3_TWIM3_TWIS3_UARTE3_IRQn= 12,
  GPIOTE0_IRQn = 13,
  SAADC_IRQn = 14,
  TIMER0_IRQn = 15,
  TIMER1_IRQn = 16,
  TIMER2_IRQn = 17,
  RTC0_IRQn = 20,
  RTC1_IRQn = 21,
  WDT0_IRQn = 24,
  WDT1_IRQn = 25,
  COMP_LPCOMP_IRQn = 26,
  EGU0_IRQn = 27,
  EGU1_IRQn = 28,
  EGU2_IRQn = 29,
  EGU3_IRQn = 30,
  EGU4_IRQn = 31,
  EGU5_IRQn = 32,
  PWM0_IRQn = 33,
  PWM1_IRQn = 34,
  PWM2_IRQn = 35,
  PWM3_IRQn = 36,
  PDM0_IRQn = 38,
  I2S0_IRQn = 40,
  IPC_IRQn = 42,
  QSPI_IRQn = 43,
  NFCT_IRQn = 45,
  GPIOTE1_IRQn = 47,
  QDEC0_IRQn = 51,
  QDEC1_IRQn = 52,
  USBD_IRQn = 54,
  USBREGULATOR_IRQn = 55,
  KMU_IRQn = 57,
  CRYPTOCELL_IRQn = 68
} IRQn_Type;
# 140 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
# 1 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 1
# 29 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3





# 1 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdint.h" 1 3
# 47 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdint.h" 3
typedef signed char int8_t;
typedef unsigned char uint8_t;




typedef signed short int16_t;
typedef unsigned short uint16_t;





typedef signed int int32_t;
typedef unsigned int uint32_t;
# 74 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdint.h" 3
typedef signed long long int64_t;
typedef unsigned long long uint64_t;


typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;

typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int32_t int_fast8_t;
typedef int32_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;

typedef uint32_t uint_fast8_t;
typedef uint32_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;

typedef int32_t intptr_t;
typedef uint32_t uintptr_t;
# 124 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\stdint.h" 3
typedef int64_t intmax_t;
typedef uint64_t uintmax_t;
# 35 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 2 3
# 63 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
# 1 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_version.h" 1 3
# 29 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_version.h" 3
# 64 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 2 3
# 206 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
# 1 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_compiler.h" 1 3
# 48 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_compiler.h" 3
# 1 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 1 3
# 29 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wunused-parameter"
# 71 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
 struct __attribute__((packed)) T_UINT32 { uint32_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
 struct __attribute__((packed, aligned(1))) T_UINT16_WRITE { uint16_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
 struct __attribute__((packed, aligned(1))) T_UINT16_READ { uint16_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
 struct __attribute__((packed, aligned(1))) T_UINT32_WRITE { uint32_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
 struct __attribute__((packed, aligned(1))) T_UINT32_READ { uint32_t v; };
#pragma GCC diagnostic pop
# 129 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline void __enable_irq(void)
{
  __asm volatile ("cpsie i" : : : "memory");
}







__attribute__((always_inline)) static inline void __disable_irq(void)
{
  __asm volatile ("cpsid i" : : : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_CONTROL(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, control" : "=r" (result) );
  return(result);
}
# 181 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline void __set_CONTROL(uint32_t control)
{
  __asm volatile ("MSR control, %0" : : "r" (control) : "memory");
}
# 205 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __get_IPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, ipsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_APSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, apsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_xPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, xpsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_PSP(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, psp" : "=r" (result) );
  return(result);
}
# 277 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline void __set_PSP(uint32_t topOfProcStack)
{
  __asm volatile ("MSR psp, %0" : : "r" (topOfProcStack) : );
}
# 301 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __get_MSP(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, msp" : "=r" (result) );
  return(result);
}
# 331 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline void __set_MSP(uint32_t topOfMainStack)
{
  __asm volatile ("MSR msp, %0" : : "r" (topOfMainStack) : );
}
# 382 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __get_PRIMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, primask" : "=r" (result) :: "memory");
  return(result);
}
# 412 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline void __set_PRIMASK(uint32_t priMask)
{
  __asm volatile ("MSR primask, %0" : : "r" (priMask) : "memory");
}
# 439 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline void __enable_fault_irq(void)
{
  __asm volatile ("cpsie f" : : : "memory");
}







__attribute__((always_inline)) static inline void __disable_fault_irq(void)
{
  __asm volatile ("cpsid f" : : : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_BASEPRI(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, basepri" : "=r" (result) );
  return(result);
}
# 491 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline void __set_BASEPRI(uint32_t basePri)
{
  __asm volatile ("MSR basepri, %0" : : "r" (basePri) : "memory");
}
# 516 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline void __set_BASEPRI_MAX(uint32_t basePri)
{
  __asm volatile ("MSR basepri_max, %0" : : "r" (basePri) : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_FAULTMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, faultmask" : "=r" (result) );
  return(result);
}
# 557 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline void __set_FAULTMASK(uint32_t faultMask)
{
  __asm volatile ("MSR faultmask, %0" : : "r" (faultMask) : "memory");
}
# 592 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __get_PSPLIM(void)
{





  uint32_t result;
  __asm volatile ("MRS %0, psplim" : "=r" (result) );
  return result;

}
# 637 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline void __set_PSPLIM(uint32_t ProcStackPtrLimit)
{





  __asm volatile ("MSR psplim, %0" : : "r" (ProcStackPtrLimit));

}
# 679 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __get_MSPLIM(void)
{





  uint32_t result;
  __asm volatile ("MRS %0, msplim" : "=r" (result) );
  return result;

}
# 725 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline void __set_MSPLIM(uint32_t MainStackPtrLimit)
{





  __asm volatile ("MSR msplim, %0" : : "r" (MainStackPtrLimit));

}
# 766 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __get_FPSCR(void)
{






  return __builtin_arm_get_fpscr();
# 784 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
}







__attribute__((always_inline)) static inline void __set_FPSCR(uint32_t fpscr)
{






  __builtin_arm_set_fpscr(fpscr);






}
# 866 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline void __ISB(void)
{
  __asm volatile ("isb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DSB(void)
{
  __asm volatile ("dsb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DMB(void)
{
  __asm volatile ("dmb 0xF":::"memory");
}
# 900 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __REV(uint32_t value)
{



  uint32_t result;

  __asm volatile ("rev %0, %1" : "=r" (result) : "r" (value) );
  return result;

}
# 919 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __REV16(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rev16 %0, %1" : "=r" (result) : "r" (value) );
  return result;
}
# 934 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline int16_t __REVSH(int16_t value)
{



  int16_t result;

  __asm volatile ("revsh %0, %1" : "=r" (result) : "r" (value) );
  return result;

}
# 954 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __ROR(uint32_t op1, uint32_t op2)
{
  op2 %= 32U;
  if (op2 == 0U)
  {
    return op1;
  }
  return (op1 >> op2) | (op1 << (32U - op2));
}
# 981 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __RBIT(uint32_t value)
{
  uint32_t result;




   __asm volatile ("rbit %0, %1" : "=r" (result) : "r" (value) );
# 1001 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
  return result;
}
# 1024 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint8_t __LDREXB(volatile uint8_t *addr)
{
    uint32_t result;







   __asm volatile ("ldrexb %0, [%1]" : "=r" (result) : "r" (addr) : "memory" );

   return ((uint8_t) result);
}
# 1046 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint16_t __LDREXH(volatile uint16_t *addr)
{
    uint32_t result;







   __asm volatile ("ldrexh %0, [%1]" : "=r" (result) : "r" (addr) : "memory" );

   return ((uint16_t) result);
}
# 1068 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __LDREXW(volatile uint32_t *addr)
{
    uint32_t result;

   __asm volatile ("ldrex %0, %1" : "=r" (result) : "Q" (*addr) );
   return(result);
}
# 1085 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __STREXB(uint8_t value, volatile uint8_t *addr)
{
   uint32_t result;

   __asm volatile ("strexb %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}
# 1102 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __STREXH(uint16_t value, volatile uint16_t *addr)
{
   uint32_t result;

   __asm volatile ("strexh %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}
# 1119 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __STREXW(uint32_t value, volatile uint32_t *addr)
{
   uint32_t result;

   __asm volatile ("strex %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" (value) );
   return(result);
}






__attribute__((always_inline)) static inline void __CLREX(void)
{
  __asm volatile ("clrex" ::: "memory");
}
# 1185 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __RRX(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rrx %0, %1" : "=r" (result) : "r" (value) );
  return(result);
}
# 1200 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint8_t __LDRBT(volatile uint8_t *ptr)
{
    uint32_t result;







   __asm volatile ("ldrbt %0, [%1]" : "=r" (result) : "r" (ptr) : "memory" );

   return ((uint8_t) result);
}
# 1222 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint16_t __LDRHT(volatile uint16_t *ptr)
{
    uint32_t result;







   __asm volatile ("ldrht %0, [%1]" : "=r" (result) : "r" (ptr) : "memory" );

   return ((uint16_t) result);
}
# 1244 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __LDRT(volatile uint32_t *ptr)
{
    uint32_t result;

   __asm volatile ("ldrt %0, %1" : "=r" (result) : "Q" (*ptr) );
   return(result);
}
# 1259 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline void __STRBT(uint8_t value, volatile uint8_t *ptr)
{
   __asm volatile ("strbt %1, %0" : "=Q" (*ptr) : "r" ((uint32_t)value) );
}
# 1271 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline void __STRHT(uint16_t value, volatile uint16_t *ptr)
{
   __asm volatile ("strht %1, %0" : "=Q" (*ptr) : "r" ((uint32_t)value) );
}
# 1283 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline void __STRT(uint32_t value, volatile uint32_t *ptr)
{
   __asm volatile ("strt %1, %0" : "=Q" (*ptr) : "r" (value) );
}
# 1354 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint8_t __LDAB(volatile uint8_t *ptr)
{
    uint32_t result;

   __asm volatile ("ldab %0, %1" : "=r" (result) : "Q" (*ptr) );
   return ((uint8_t) result);
}
# 1369 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint16_t __LDAH(volatile uint16_t *ptr)
{
    uint32_t result;

   __asm volatile ("ldah %0, %1" : "=r" (result) : "Q" (*ptr) );
   return ((uint16_t) result);
}
# 1384 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __LDA(volatile uint32_t *ptr)
{
    uint32_t result;

   __asm volatile ("lda %0, %1" : "=r" (result) : "Q" (*ptr) );
   return(result);
}
# 1399 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline void __STLB(uint8_t value, volatile uint8_t *ptr)
{
   __asm volatile ("stlb %1, %0" : "=Q" (*ptr) : "r" ((uint32_t)value) );
}
# 1411 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline void __STLH(uint16_t value, volatile uint16_t *ptr)
{
   __asm volatile ("stlh %1, %0" : "=Q" (*ptr) : "r" ((uint32_t)value) );
}
# 1423 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline void __STL(uint32_t value, volatile uint32_t *ptr)
{
   __asm volatile ("stl %1, %0" : "=Q" (*ptr) : "r" ((uint32_t)value) );
}
# 1435 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint8_t __LDAEXB(volatile uint8_t *ptr)
{
    uint32_t result;

   __asm volatile ("ldaexb %0, %1" : "=r" (result) : "Q" (*ptr) );
   return ((uint8_t) result);
}
# 1450 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint16_t __LDAEXH(volatile uint16_t *ptr)
{
    uint32_t result;

   __asm volatile ("ldaexh %0, %1" : "=r" (result) : "Q" (*ptr) );
   return ((uint16_t) result);
}
# 1465 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __LDAEX(volatile uint32_t *ptr)
{
    uint32_t result;

   __asm volatile ("ldaex %0, %1" : "=r" (result) : "Q" (*ptr) );
   return(result);
}
# 1482 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __STLEXB(uint8_t value, volatile uint8_t *ptr)
{
   uint32_t result;

   __asm volatile ("stlexb %0, %2, %1" : "=&r" (result), "=Q" (*ptr) : "r" ((uint32_t)value) );
   return(result);
}
# 1499 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __STLEXH(uint16_t value, volatile uint16_t *ptr)
{
   uint32_t result;

   __asm volatile ("stlexh %0, %2, %1" : "=&r" (result), "=Q" (*ptr) : "r" ((uint32_t)value) );
   return(result);
}
# 1516 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __STLEX(uint32_t value, volatile uint32_t *ptr)
{
   uint32_t result;

   __asm volatile ("stlex %0, %2, %1" : "=&r" (result), "=Q" (*ptr) : "r" ((uint32_t)value) );
   return(result);
}
# 1538 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __SADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}


__attribute__((always_inline)) static inline uint32_t __SSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}


__attribute__((always_inline)) static inline uint32_t __SADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USAD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usad8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USADA8(uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("usada8 %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}
# 1858 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __UXTB16(uint32_t op1)
{
  uint32_t result;

  __asm volatile ("uxtb16 %0, %1" : "=r" (result) : "r" (op1));
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UXTAB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uxtab16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SXTB16(uint32_t op1)
{
  uint32_t result;

  __asm volatile ("sxtb16 %0, %1" : "=r" (result) : "r" (op1));
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SXTAB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sxtab16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMUAD (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smuad %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMUADX (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smuadx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMLAD (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlad %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMLADX (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smladx %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__((always_inline)) static inline uint64_t __SMLALD (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlald %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__((always_inline)) static inline uint64_t __SMLALDX (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlaldx %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__((always_inline)) static inline uint32_t __SMUSD (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smusd %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMUSDX (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smusdx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMLSD (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlsd %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMLSDX (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlsdx %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__((always_inline)) static inline uint64_t __SMLSLD (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlsld %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__((always_inline)) static inline uint64_t __SMLSLDX (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlsldx %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__((always_inline)) static inline uint32_t __SEL (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sel %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline int32_t __QADD( int32_t op1, int32_t op2)
{
  int32_t result;

  __asm volatile ("qadd %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline int32_t __QSUB( int32_t op1, int32_t op2)
{
  int32_t result;

  __asm volatile ("qsub %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}
# 2071 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline int32_t __SMMLA (int32_t op1, int32_t op2, int32_t op3)
{
 int32_t result;

 __asm volatile ("smmla %0, %1, %2, %3" : "=r" (result): "r" (op1), "r" (op2), "r" (op3) );
 return(result);
}





#pragma GCC diagnostic pop
# 49 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/cmsis_compiler.h" 2 3
# 207 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 2 3
# 314 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
typedef union
{
  struct
  {
    uint32_t _reserved0:16;
    uint32_t GE:4;
    uint32_t _reserved1:7;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} APSR_Type;
# 353 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:23;
  } b;
  uint32_t w;
} IPSR_Type;
# 371 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:7;
    uint32_t GE:4;
    uint32_t _reserved1:4;
    uint32_t T:1;
    uint32_t IT:2;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} xPSR_Type;
# 422 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
typedef union
{
  struct
  {
    uint32_t nPRIV:1;
    uint32_t SPSEL:1;
    uint32_t FPCA:1;
    uint32_t SFPA:1;
    uint32_t _reserved1:28;
  } b;
  uint32_t w;
} CONTROL_Type;
# 461 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
typedef struct
{
  volatile uint32_t ISER[16U];
        uint32_t RESERVED0[16U];
  volatile uint32_t ICER[16U];
        uint32_t RSERVED1[16U];
  volatile uint32_t ISPR[16U];
        uint32_t RESERVED2[16U];
  volatile uint32_t ICPR[16U];
        uint32_t RESERVED3[16U];
  volatile uint32_t IABR[16U];
        uint32_t RESERVED4[16U];
  volatile uint32_t ITNS[16U];
        uint32_t RESERVED5[16U];
  volatile uint8_t IPR[496U];
        uint32_t RESERVED6[580U];
  volatile uint32_t STIR;
} NVIC_Type;
# 497 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
typedef struct
{
  volatile const uint32_t CPUID;
  volatile uint32_t ICSR;
  volatile uint32_t VTOR;
  volatile uint32_t AIRCR;
  volatile uint32_t SCR;
  volatile uint32_t CCR;
  volatile uint8_t SHPR[12U];
  volatile uint32_t SHCSR;
  volatile uint32_t CFSR;
  volatile uint32_t HFSR;
  volatile uint32_t DFSR;
  volatile uint32_t MMFAR;
  volatile uint32_t BFAR;
  volatile uint32_t AFSR;
  volatile const uint32_t ID_PFR[2U];
  volatile const uint32_t ID_DFR;
  volatile const uint32_t ID_ADR;
  volatile const uint32_t ID_MMFR[4U];
  volatile const uint32_t ID_ISAR[6U];
  volatile const uint32_t CLIDR;
  volatile const uint32_t CTR;
  volatile const uint32_t CCSIDR;
  volatile uint32_t CSSELR;
  volatile uint32_t CPACR;
  volatile uint32_t NSACR;
        uint32_t RESERVED3[92U];
  volatile uint32_t STIR;
        uint32_t RESERVED4[15U];
  volatile const uint32_t MVFR0;
  volatile const uint32_t MVFR1;
  volatile const uint32_t MVFR2;
        uint32_t RESERVED5[1U];
  volatile uint32_t ICIALLU;
        uint32_t RESERVED6[1U];
  volatile uint32_t ICIMVAU;
  volatile uint32_t DCIMVAC;
  volatile uint32_t DCISW;
  volatile uint32_t DCCMVAU;
  volatile uint32_t DCCMVAC;
  volatile uint32_t DCCSW;
  volatile uint32_t DCCIMVAC;
  volatile uint32_t DCCISW;
        uint32_t RESERVED7[6U];
  volatile uint32_t ITCMCR;
  volatile uint32_t DTCMCR;
  volatile uint32_t AHBPCR;
  volatile uint32_t CACR;
  volatile uint32_t AHBSCR;
        uint32_t RESERVED8[1U];
  volatile uint32_t ABFSR;
} SCB_Type;
# 1009 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
typedef struct
{
        uint32_t RESERVED0[1U];
  volatile const uint32_t ICTR;
  volatile uint32_t ACTLR;
  volatile uint32_t CPPWR;
} SCnSCB_Type;
# 1034 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t LOAD;
  volatile uint32_t VAL;
  volatile const uint32_t CALIB;
} SysTick_Type;
# 1086 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
typedef struct
{
  volatile union
  {
    volatile uint8_t u8;
    volatile uint16_t u16;
    volatile uint32_t u32;
  } PORT [32U];
        uint32_t RESERVED0[864U];
  volatile uint32_t TER;
        uint32_t RESERVED1[15U];
  volatile uint32_t TPR;
        uint32_t RESERVED2[15U];
  volatile uint32_t TCR;
        uint32_t RESERVED3[29U];
  volatile uint32_t IWR;
  volatile const uint32_t IRR;
  volatile uint32_t IMCR;
        uint32_t RESERVED4[43U];
  volatile uint32_t LAR;
  volatile const uint32_t LSR;
        uint32_t RESERVED5[1U];
  volatile const uint32_t DEVARCH;
        uint32_t RESERVED6[4U];
  volatile const uint32_t PID4;
  volatile const uint32_t PID5;
  volatile const uint32_t PID6;
  volatile const uint32_t PID7;
  volatile const uint32_t PID0;
  volatile const uint32_t PID1;
  volatile const uint32_t PID2;
  volatile const uint32_t PID3;
  volatile const uint32_t CID0;
  volatile const uint32_t CID1;
  volatile const uint32_t CID2;
  volatile const uint32_t CID3;
} ITM_Type;
# 1201 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t CYCCNT;
  volatile uint32_t CPICNT;
  volatile uint32_t EXCCNT;
  volatile uint32_t SLEEPCNT;
  volatile uint32_t LSUCNT;
  volatile uint32_t FOLDCNT;
  volatile const uint32_t PCSR;
  volatile uint32_t COMP0;
        uint32_t RESERVED1[1U];
  volatile uint32_t FUNCTION0;
        uint32_t RESERVED2[1U];
  volatile uint32_t COMP1;
        uint32_t RESERVED3[1U];
  volatile uint32_t FUNCTION1;
        uint32_t RESERVED4[1U];
  volatile uint32_t COMP2;
        uint32_t RESERVED5[1U];
  volatile uint32_t FUNCTION2;
        uint32_t RESERVED6[1U];
  volatile uint32_t COMP3;
        uint32_t RESERVED7[1U];
  volatile uint32_t FUNCTION3;
        uint32_t RESERVED8[1U];
  volatile uint32_t COMP4;
        uint32_t RESERVED9[1U];
  volatile uint32_t FUNCTION4;
        uint32_t RESERVED10[1U];
  volatile uint32_t COMP5;
        uint32_t RESERVED11[1U];
  volatile uint32_t FUNCTION5;
        uint32_t RESERVED12[1U];
  volatile uint32_t COMP6;
        uint32_t RESERVED13[1U];
  volatile uint32_t FUNCTION6;
        uint32_t RESERVED14[1U];
  volatile uint32_t COMP7;
        uint32_t RESERVED15[1U];
  volatile uint32_t FUNCTION7;
        uint32_t RESERVED16[1U];
  volatile uint32_t COMP8;
        uint32_t RESERVED17[1U];
  volatile uint32_t FUNCTION8;
        uint32_t RESERVED18[1U];
  volatile uint32_t COMP9;
        uint32_t RESERVED19[1U];
  volatile uint32_t FUNCTION9;
        uint32_t RESERVED20[1U];
  volatile uint32_t COMP10;
        uint32_t RESERVED21[1U];
  volatile uint32_t FUNCTION10;
        uint32_t RESERVED22[1U];
  volatile uint32_t COMP11;
        uint32_t RESERVED23[1U];
  volatile uint32_t FUNCTION11;
        uint32_t RESERVED24[1U];
  volatile uint32_t COMP12;
        uint32_t RESERVED25[1U];
  volatile uint32_t FUNCTION12;
        uint32_t RESERVED26[1U];
  volatile uint32_t COMP13;
        uint32_t RESERVED27[1U];
  volatile uint32_t FUNCTION13;
        uint32_t RESERVED28[1U];
  volatile uint32_t COMP14;
        uint32_t RESERVED29[1U];
  volatile uint32_t FUNCTION14;
        uint32_t RESERVED30[1U];
  volatile uint32_t COMP15;
        uint32_t RESERVED31[1U];
  volatile uint32_t FUNCTION15;
        uint32_t RESERVED32[934U];
  volatile const uint32_t LSR;
        uint32_t RESERVED33[1U];
  volatile const uint32_t DEVARCH;
} DWT_Type;
# 1387 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
typedef struct
{
  volatile const uint32_t SSPSR;
  volatile uint32_t CSPSR;
        uint32_t RESERVED0[2U];
  volatile uint32_t ACPR;
        uint32_t RESERVED1[55U];
  volatile uint32_t SPPR;
        uint32_t RESERVED2[131U];
  volatile const uint32_t FFSR;
  volatile uint32_t FFCR;
  volatile uint32_t PSCR;
        uint32_t RESERVED3[759U];
  volatile const uint32_t TRIGGER;
  volatile const uint32_t ITFTTD0;
  volatile uint32_t ITATBCTR2;
        uint32_t RESERVED4[1U];
  volatile const uint32_t ITATBCTR0;
  volatile const uint32_t ITFTTD1;
  volatile uint32_t ITCTRL;
        uint32_t RESERVED5[39U];
  volatile uint32_t CLAIMSET;
  volatile uint32_t CLAIMCLR;
        uint32_t RESERVED7[8U];
  volatile const uint32_t DEVID;
  volatile const uint32_t DEVTYPE;
} TPI_Type;
# 1561 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
typedef struct
{
  volatile const uint32_t TYPE;
  volatile uint32_t CTRL;
  volatile uint32_t RNR;
  volatile uint32_t RBAR;
  volatile uint32_t RLAR;
  volatile uint32_t RBAR_A1;
  volatile uint32_t RLAR_A1;
  volatile uint32_t RBAR_A2;
  volatile uint32_t RLAR_A2;
  volatile uint32_t RBAR_A3;
  volatile uint32_t RLAR_A3;
        uint32_t RESERVED0[1];
  union {
  volatile uint32_t MAIR[2];
  struct {
  volatile uint32_t MAIR0;
  volatile uint32_t MAIR1;
  };
  };
} MPU_Type;
# 1760 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
typedef struct
{
        uint32_t RESERVED0[1U];
  volatile uint32_t FPCCR;
  volatile uint32_t FPCAR;
  volatile uint32_t FPDSCR;
  volatile const uint32_t MVFR0;
  volatile const uint32_t MVFR1;
} FPU_Type;
# 1890 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
typedef struct
{
  volatile uint32_t DHCSR;
  volatile uint32_t DCRSR;
  volatile uint32_t DCRDR;
  volatile uint32_t DEMCR;
        uint32_t RESERVED4[1U];
  volatile uint32_t DAUTHCTRL;
  volatile uint32_t DSCSR;
} CoreDebug_Type;
# 2191 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
static inline void __NVIC_SetPriorityGrouping(uint32_t PriorityGroup)
{
  uint32_t reg_value;
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);

  reg_value = ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR;
  reg_value &= ~((uint32_t)((0xFFFFUL << 16U) | (7UL << 8U)));
  reg_value = (reg_value |
                ((uint32_t)0x5FAUL << 16U) |
                (PriorityGroupTmp << 8U) );
  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR = reg_value;
}







static inline uint32_t __NVIC_GetPriorityGrouping(void)
{
  return ((uint32_t)((((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR & (7UL << 8U)) >> 8U));
}
# 2222 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
static inline void __NVIC_EnableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}
# 2239 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
static inline uint32_t __NVIC_GetEnableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 2258 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
static inline void __NVIC_DisableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICER[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
    __DSB();
    __ISB();
  }
}
# 2277 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
static inline uint32_t __NVIC_GetPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 2296 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
static inline void __NVIC_SetPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}
# 2311 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
static inline void __NVIC_ClearPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICPR[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}
# 2328 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
static inline uint32_t __NVIC_GetActive(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IABR[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 2417 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
static inline void __NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IPR[((uint32_t)IRQn)] = (uint8_t)((priority << (8U - 3)) & (uint32_t)0xFFUL);
  }
  else
  {
    ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHPR[(((uint32_t)IRQn) & 0xFUL)-4UL] = (uint8_t)((priority << (8U - 3)) & (uint32_t)0xFFUL);
  }
}
# 2439 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
static inline uint32_t __NVIC_GetPriority(IRQn_Type IRQn)
{

  if ((int32_t)(IRQn) >= 0)
  {
    return(((uint32_t)((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IPR[((uint32_t)IRQn)] >> (8U - 3)));
  }
  else
  {
    return(((uint32_t)((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHPR[(((uint32_t)IRQn) & 0xFUL)-4UL] >> (8U - 3)));
  }
}
# 2464 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
static inline uint32_t NVIC_EncodePriority (uint32_t PriorityGroup, uint32_t PreemptPriority, uint32_t SubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(3)) ? (uint32_t)(3) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits = ((PriorityGroupTmp + (uint32_t)(3)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(3));

  return (
           ((PreemptPriority & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL)) << SubPriorityBits) |
           ((SubPriority & (uint32_t)((1UL << (SubPriorityBits )) - 1UL)))
         );
}
# 2491 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
static inline void NVIC_DecodePriority (uint32_t Priority, uint32_t PriorityGroup, uint32_t* const pPreemptPriority, uint32_t* const pSubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(3)) ? (uint32_t)(3) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits = ((PriorityGroupTmp + (uint32_t)(3)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(3));

  *pPreemptPriority = (Priority >> SubPriorityBits) & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL);
  *pSubPriority = (Priority ) & (uint32_t)((1UL << (SubPriorityBits )) - 1UL);
}
# 2514 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
static inline void __NVIC_SetVector(IRQn_Type IRQn, uint32_t vector)
{
  uint32_t *vectors = (uint32_t *)((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->VTOR;
  vectors[(int32_t)IRQn + 16] = vector;
}
# 2529 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
static inline uint32_t __NVIC_GetVector(IRQn_Type IRQn)
{
  uint32_t *vectors = (uint32_t *)((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->VTOR;
  return vectors[(int32_t)IRQn + 16];
}






__attribute__((__noreturn__)) static inline void __NVIC_SystemReset(void)
{
  __DSB();

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR = (uint32_t)((0x5FAUL << 16U) |
                           (((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR & (7UL << 8U)) |
                            (1UL << 2U) );
  __DSB();

  for(;;)
  {
    __asm volatile ("nop");
  }
}
# 2763 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
# 1 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/mpu_armv8.h" 1 3
# 29 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/mpu_armv8.h" 3
# 107 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/mpu_armv8.h" 3
typedef struct {
  uint32_t RBAR;
  uint32_t RLAR;
} ARM_MPU_Region_t;




static inline void ARM_MPU_Enable(uint32_t MPU_Control)
{
  __DSB();
  __ISB();
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->CTRL = MPU_Control | (1UL );

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHCSR |= (1UL << 16U);

}



static inline void ARM_MPU_Disable(void)
{
  __DSB();
  __ISB();

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHCSR &= ~(1UL << 16U);

  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->CTRL &= ~(1UL );
}
# 169 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/mpu_armv8.h" 3
static inline void ARM_MPU_SetMemAttrEx(MPU_Type* mpu, uint8_t idx, uint8_t attr)
{
  const uint8_t reg = idx / 4U;
  const uint32_t pos = ((idx % 4U) * 8U);
  const uint32_t mask = 0xFFU << pos;

  if (reg >= (sizeof(mpu->MAIR) / sizeof(mpu->MAIR[0]))) {
    return;
  }

  mpu->MAIR[reg] = ((mpu->MAIR[reg] & ~mask) | ((attr << pos) & mask));
}





static inline void ARM_MPU_SetMemAttr(uint8_t idx, uint8_t attr)
{
  ARM_MPU_SetMemAttrEx(((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) ), idx, attr);
}
# 206 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/mpu_armv8.h" 3
static inline void ARM_MPU_ClrRegionEx(MPU_Type* mpu, uint32_t rnr)
{
  mpu->RNR = rnr;
  mpu->RLAR = 0U;
}




static inline void ARM_MPU_ClrRegion(uint32_t rnr)
{
  ARM_MPU_ClrRegionEx(((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) ), rnr);
}
# 236 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/mpu_armv8.h" 3
static inline void ARM_MPU_SetRegionEx(MPU_Type* mpu, uint32_t rnr, uint32_t rbar, uint32_t rlar)
{
  mpu->RNR = rnr;
  mpu->RBAR = rbar;
  mpu->RLAR = rlar;
}






static inline void ARM_MPU_SetRegion(uint32_t rnr, uint32_t rbar, uint32_t rlar)
{
  ARM_MPU_SetRegionEx(((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) ), rnr, rbar, rlar);
}
# 270 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include/mpu_armv8.h" 3
static inline void orderedCpy(volatile uint32_t* dst, const uint32_t* __restrict src, uint32_t len)
{
  uint32_t i;
  for (i = 0U; i < len; ++i)
  {
    dst[i] = src[i];
  }
}







static inline void ARM_MPU_LoadEx(MPU_Type* mpu, uint32_t rnr, ARM_MPU_Region_t const* table, uint32_t cnt)
{
  const uint32_t rowWordSize = sizeof(ARM_MPU_Region_t)/4U;
  if (cnt == 1U) {
    mpu->RNR = rnr;
    orderedCpy(&(mpu->RBAR), &(table->RBAR), rowWordSize);
  } else {
    uint32_t rnrBase = rnr & ~(4U -1U);
    uint32_t rnrOffset = rnr % 4U;

    mpu->RNR = rnrBase;
    while ((rnrOffset + cnt) > 4U) {
      uint32_t c = 4U - rnrOffset;
      orderedCpy(&(mpu->RBAR)+(rnrOffset*2U), &(table->RBAR), c*rowWordSize);
      table += c;
      cnt -= c;
      rnrOffset = 0U;
      rnrBase += 4U;
      mpu->RNR = rnrBase;
    }

    orderedCpy(&(mpu->RBAR)+(rnrOffset*2U), &(table->RBAR), cnt*rowWordSize);
  }
}






static inline void ARM_MPU_Load(uint32_t rnr, ARM_MPU_Region_t const* table, uint32_t cnt)
{
  ARM_MPU_LoadEx(((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) ), rnr, table, cnt);
}
# 2764 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 2 3
# 2783 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
static inline uint32_t SCB_GetFPUType(void)
{
  uint32_t mvfr0;

  mvfr0 = ((FPU_Type *) ((0xE000E000UL) + 0x0F30UL) )->MVFR0;
  if ((mvfr0 & ((0xFUL << 4U) | (0xFUL << 8U))) == 0x220U)
  {
    return 2U;
  }
  else if ((mvfr0 & ((0xFUL << 4U) | (0xFUL << 8U))) == 0x020U)
  {
    return 1U;
  }
  else
  {
    return 0U;
  }
}
# 2865 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
static inline uint32_t SysTick_Config(uint32_t ticks)
{
  if ((ticks - 1UL) > (0xFFFFFFUL ))
  {
    return (1UL);
  }

  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->LOAD = (uint32_t)(ticks - 1UL);
  __NVIC_SetPriority (SysTick_IRQn, (1UL << 3) - 1UL);
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->VAL = 0UL;
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->CTRL = (1UL << 2U) |
                   (1UL << 1U) |
                   (1UL );
  return (0UL);
}
# 2925 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
extern volatile int32_t ITM_RxBuffer;
# 2937 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
static inline uint32_t ITM_SendChar (uint32_t ch)
{
  if (((((ITM_Type *) (0xE0000000UL) )->TCR & (1UL )) != 0UL) &&
      ((((ITM_Type *) (0xE0000000UL) )->TER & 1UL ) != 0UL) )
  {
    while (((ITM_Type *) (0xE0000000UL) )->PORT[0U].u32 == 0UL)
    {
      __asm volatile ("nop");
    }
    ((ITM_Type *) (0xE0000000UL) )->PORT[0U].u8 = (uint8_t)ch;
  }
  return (ch);
}
# 2958 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
static inline int32_t ITM_ReceiveChar (void)
{
  int32_t ch = -1;

  if (ITM_RxBuffer != ((int32_t)0x5AA55AA5U))
  {
    ch = ITM_RxBuffer;
    ITM_RxBuffer = ((int32_t)0x5AA55AA5U);
  }

  return (ch);
}
# 2978 "C:/Users/Devan/AppData/Local/SEGGER/SEGGER Embedded Studio/v3/packages/CMSIS_5/CMSIS/Core/Include\\core_cm33.h" 3
static inline int32_t ITM_CheckChar (void)
{

  if (ITM_RxBuffer == ((int32_t)0x5AA55AA5U))
  {
    return (0);
  }
  else
  {
    return (1);
  }
}
# 141 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h" 2
# 1 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include/system_nrf5340_application.h" 1
# 33 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include/system_nrf5340_application.h"
extern uint32_t SystemCoreClock;
# 44 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include/system_nrf5340_application.h"
extern void SystemInit (void);
# 55 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include/system_nrf5340_application.h"
extern void SystemCoreClockUpdate (void);
# 142 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h" 2
# 167 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile uint32_t DATA0;

  volatile uint32_t DATA1;

  volatile uint32_t DATA2;

  volatile uint32_t DATA3;

} CACHEDATA_SET_WAY_Type;





typedef struct {
  volatile CACHEDATA_SET_WAY_Type WAY[2];
} CACHEDATA_SET_Type;





typedef struct {
  volatile uint32_t WAY[2];

} CACHEINFO_SET_Type;





typedef struct {
  volatile const uint32_t CONFIGID;
  volatile const uint32_t DEVICEID[2];
  volatile const uint32_t PART;
  volatile const uint32_t VARIANT;

  volatile const uint32_t PACKAGE;
  volatile const uint32_t RAM;
  volatile const uint32_t FLASH;
  volatile const uint32_t CODEPAGESIZE;
  volatile const uint32_t CODESIZE;
  volatile const uint32_t DEVICETYPE;
} FICR_INFO_Type;





typedef struct {
  volatile uint32_t* ADDR;

  volatile const uint32_t DATA;
} FICR_TRIMCNF_Type;





typedef struct {
  volatile const uint32_t TAGHEADER0;


  volatile const uint32_t TAGHEADER1;


  volatile const uint32_t TAGHEADER2;


  volatile const uint32_t TAGHEADER3;


} FICR_NFC_Type;





typedef struct {
  volatile const uint32_t BYTES;
  volatile const uint32_t RCCUTOFF;
  volatile const uint32_t APCUTOFF;
  volatile const uint32_t STARTUP;
  volatile const uint32_t ROSC1;
  volatile const uint32_t ROSC2;
  volatile const uint32_t ROSC3;
  volatile const uint32_t ROSC4;
} FICR_TRNG90B_Type;





typedef struct {
  volatile uint32_t DEST;







  volatile uint32_t PERM;


} UICR_KEYSLOT_CONFIG_Type;





typedef struct {
  volatile uint32_t VALUE[4];

} UICR_KEYSLOT_KEY_Type;





typedef struct {
  volatile UICR_KEYSLOT_CONFIG_Type CONFIG[128];
  volatile UICR_KEYSLOT_KEY_Type KEY[128];
} UICR_KEYSLOT_Type;





typedef struct {
  volatile uint32_t TRACECLK;
  volatile uint32_t TRACEDATA0;
  volatile uint32_t TRACEDATA1;
  volatile uint32_t TRACEDATA2;
  volatile uint32_t TRACEDATA3;
} TAD_PSEL_Type;





typedef struct {
  volatile uint32_t PROTECT;

} DCNF_EXTPERI_Type;





typedef struct {
  volatile uint32_t PROTECT;

} DCNF_EXTRAM_Type;





typedef struct {
  volatile uint32_t PROTECT;

} DCNF_EXTCODE_Type;





typedef struct {
  volatile const uint32_t IHIT;


  volatile const uint32_t IMISS;


  volatile const uint32_t DHIT;


  volatile const uint32_t DMISS;


  volatile const uint32_t RESERVED[4];
} CACHE_PROFILING_Type;





typedef struct {
  volatile uint32_t PERM;


} SPU_EXTDOMAIN_Type;





typedef struct {
  volatile uint32_t PERM;

  volatile uint32_t LOCK;

} SPU_DPPI_Type;





typedef struct {
  volatile uint32_t PERM;


  volatile uint32_t LOCK;

} SPU_GPIOPORT_Type;





typedef struct {
  volatile uint32_t REGION;


  volatile uint32_t SIZE;

} SPU_FLASHNSC_Type;





typedef struct {
  volatile uint32_t REGION;


  volatile uint32_t SIZE;

} SPU_RAMNSC_Type;





typedef struct {
  volatile uint32_t PERM;

} SPU_FLASHREGION_Type;





typedef struct {
  volatile uint32_t PERM;

} SPU_RAMREGION_Type;





typedef struct {
  volatile uint32_t PERM;

} SPU_PERIPHID_Type;





typedef struct {
  volatile uint32_t BYPASS;

  volatile const uint32_t RESERVED[3];
  volatile uint32_t INTCAP;
} OSCILLATORS_XOSC32KI_Type;





typedef struct {
  volatile uint32_t DCDCEN;
} REGULATORS_VREGMAIN_Type;





typedef struct {
  volatile const uint32_t RESERVED;
  volatile uint32_t DCDCEN;
} REGULATORS_VREGRADIO_Type;





typedef struct {
  volatile uint32_t DCDCEN;
} REGULATORS_VREGH_Type;





typedef struct {
  volatile uint32_t FREQUENCY;

} CLOCK_HFCLKAUDIO_Type;





typedef struct {
  volatile const uint32_t RESERVED;
  volatile uint32_t FORCEOFF;
} RESET_NETWORK_Type;





typedef struct {
  volatile const uint32_t RXDATA;
  volatile const uint32_t RXSTATUS;

  volatile const uint32_t RESERVED[30];
  volatile uint32_t TXDATA;
  volatile const uint32_t TXSTATUS;

} CTRLAPPERI_MAILBOX_Type;





typedef struct {
  volatile uint32_t LOCK;

  volatile uint32_t DISABLE;
} CTRLAPPERI_ERASEPROTECT_Type;





typedef struct {
  volatile uint32_t LOCK;

  volatile uint32_t DISABLE;

} CTRLAPPERI_APPROTECT_Type;





typedef struct {
  volatile uint32_t LOCK;

  volatile uint32_t DISABLE;

} CTRLAPPERI_SECUREAPPROTECT_Type;





typedef struct {
  volatile uint32_t SCK;
  volatile uint32_t MOSI;
  volatile uint32_t MISO;
  volatile uint32_t CSN;
} SPIM_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} SPIM_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} SPIM_TXD_Type;





typedef struct {
  volatile uint32_t RXDELAY;
  volatile uint32_t CSNDUR;


} SPIM_IFTIMING_Type;





typedef struct {
  volatile uint32_t SCK;
  volatile uint32_t MISO;
  volatile uint32_t MOSI;
  volatile uint32_t CSN;
} SPIS_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} SPIS_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} SPIS_TXD_Type;





typedef struct {
  volatile uint32_t SCL;
  volatile uint32_t SDA;
} TWIM_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} TWIM_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} TWIM_TXD_Type;





typedef struct {
  volatile uint32_t SCL;
  volatile uint32_t SDA;
} TWIS_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} TWIS_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} TWIS_TXD_Type;





typedef struct {
  volatile uint32_t RTS;
  volatile uint32_t TXD;
  volatile uint32_t CTS;
  volatile uint32_t RXD;
} UARTE_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} UARTE_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} UARTE_TXD_Type;





typedef struct {
  volatile uint32_t LIMITH;

  volatile uint32_t LIMITL;

} SAADC_EVENTS_CH_Type;





typedef struct {
  volatile uint32_t LIMITH;

  volatile uint32_t LIMITL;

} SAADC_PUBLISH_CH_Type;





typedef struct {
  volatile uint32_t PSELP;

  volatile uint32_t PSELN;

  volatile uint32_t CONFIG;

  volatile uint32_t LIMIT;

} SAADC_CH_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;

} SAADC_RESULT_Type;





typedef struct {
  volatile uint32_t EN;
  volatile uint32_t DIS;
} DPPIC_TASKS_CHG_Type;





typedef struct {
  volatile uint32_t EN;

  volatile uint32_t DIS;

} DPPIC_SUBSCRIBE_CHG_Type;





typedef struct {
  volatile uint32_t PTR;

  volatile uint32_t CNT;

  volatile uint32_t REFRESH;


  volatile uint32_t ENDDELAY;
  volatile const uint32_t RESERVED[4];
} PWM_SEQ_Type;





typedef struct {
  volatile uint32_t OUT[4];

} PWM_PSEL_Type;





typedef struct {
  volatile uint32_t CLK;
  volatile uint32_t DIN;
} PDM_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;

  volatile uint32_t MAXCNT;

} PDM_SAMPLE_Type;





typedef struct {
  volatile uint32_t MODE;
  volatile uint32_t RXEN;
  volatile uint32_t TXEN;
  volatile uint32_t MCKEN;
  volatile uint32_t MCKFREQ;
  volatile uint32_t RATIO;
  volatile uint32_t SWIDTH;
  volatile uint32_t ALIGN;
  volatile uint32_t FORMAT;
  volatile uint32_t CHANNELS;
  volatile uint32_t CLKCONFIG;
} I2S_CONFIG_Type;





typedef struct {
  volatile uint32_t PTR;
} I2S_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
} I2S_TXD_Type;





typedef struct {
  volatile uint32_t MAXCNT;
} I2S_RXTXD_Type;





typedef struct {
  volatile uint32_t MCK;
  volatile uint32_t SCK;
  volatile uint32_t LRCK;
  volatile uint32_t SDIN;
  volatile uint32_t SDOUT;
} I2S_PSEL_Type;





typedef struct {
  volatile uint32_t SRC;
  volatile uint32_t DST;
  volatile uint32_t CNT;
} QSPI_READ_Type;





typedef struct {
  volatile uint32_t DST;
  volatile uint32_t SRC;
  volatile uint32_t CNT;
} QSPI_WRITE_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t LEN;
} QSPI_ERASE_Type;





typedef struct {
  volatile uint32_t SCK;
  volatile uint32_t CSN;
  volatile const uint32_t RESERVED;
  volatile uint32_t IO0;
  volatile uint32_t IO1;
  volatile uint32_t IO2;
  volatile uint32_t IO3;
} QSPI_PSEL_Type;





typedef struct {
  volatile uint32_t KEY0;
  volatile uint32_t KEY1;
  volatile uint32_t KEY2;
  volatile uint32_t KEY3;
  volatile uint32_t NONCE0;
  volatile uint32_t NONCE1;
  volatile uint32_t NONCE2;
  volatile uint32_t ENABLE;
} QSPI_XIP_ENC_Type;





typedef struct {
  volatile uint32_t KEY0;
  volatile uint32_t KEY1;
  volatile uint32_t KEY2;
  volatile uint32_t KEY3;
  volatile uint32_t NONCE0;
  volatile uint32_t NONCE1;
  volatile uint32_t NONCE2;
  volatile uint32_t ENABLE;
} QSPI_DMA_ENC_Type;





typedef struct {
  volatile uint32_t RX;
} NFCT_FRAMESTATUS_Type;





typedef struct {
  volatile uint32_t FRAMECONFIG;
  volatile uint32_t AMOUNT;
} NFCT_TXD_Type;





typedef struct {
  volatile uint32_t FRAMECONFIG;
  volatile const uint32_t AMOUNT;
} NFCT_RXD_Type;





typedef struct {
  volatile uint32_t LED;
  volatile uint32_t A;
  volatile uint32_t B;
} QDEC_PSEL_Type;





typedef struct {
  volatile const uint32_t EPIN[8];


  volatile const uint32_t RESERVED;
  volatile const uint32_t EPOUT[8];


} USBD_HALTED_Type;





typedef struct {
  volatile uint32_t EPOUT[8];

  volatile const uint32_t ISOOUT;

} USBD_SIZE_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;

  volatile const uint32_t AMOUNT;

  volatile const uint32_t RESERVED[2];
} USBD_EPIN_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} USBD_ISOIN_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;

  volatile const uint32_t AMOUNT;

  volatile const uint32_t RESERVED[2];
} USBD_EPOUT_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} USBD_ISOOUT_Type;





typedef struct {
  volatile uint32_t POWER;
  volatile uint32_t POWERSET;

  volatile uint32_t POWERCLR;

  volatile const uint32_t RESERVED;
} VMC_RAM_Type;
# 1090 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile CACHEDATA_SET_Type SET[256];
} NRF_CACHEDATA_Type;
# 1105 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile CACHEINFO_SET_Type SET[256];
} NRF_CACHEINFO_Type;
# 1120 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile const uint32_t RESERVED[128];
  volatile FICR_INFO_Type INFO;
  volatile const uint32_t RESERVED1[53];
  volatile FICR_TRIMCNF_Type TRIMCNF[32];
  volatile const uint32_t RESERVED2[20];
  volatile FICR_NFC_Type NFC;
  volatile const uint32_t RESERVED3[488];
  volatile FICR_TRNG90B_Type TRNG90B;
  volatile const uint32_t XOSC32MTRIM;
} NRF_FICR_Type;
# 1143 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile uint32_t APPROTECT;
  volatile const uint32_t RESERVED[2];
  volatile uint32_t EXTSUPPLY;


  volatile uint32_t VREGHVOUT;

  volatile uint32_t HFXOCNT;
  volatile const uint32_t RESERVED1;
  volatile uint32_t SECUREAPPROTECT;
  volatile uint32_t ERASEPROTECT;
  volatile uint32_t TINSTANCE;
  volatile uint32_t NFCPINS;

  volatile const uint32_t RESERVED2[53];
  volatile uint32_t OTP[192];

  volatile UICR_KEYSLOT_Type KEYSLOT;
} NRF_UICR_Type;
# 1175 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile uint32_t CTICONTROL;
  volatile const uint32_t RESERVED[3];
  volatile uint32_t CTIINTACK;
  volatile uint32_t CTIAPPSET;
  volatile uint32_t CTIAPPCLEAR;
  volatile uint32_t CTIAPPPULSE;
  volatile uint32_t CTIINEN[8];
  volatile const uint32_t RESERVED1[24];
  volatile uint32_t CTIOUTEN[8];
  volatile const uint32_t RESERVED2[28];
  volatile const uint32_t CTITRIGINSTATUS;
  volatile const uint32_t CTITRIGOUTSTATUS;
  volatile const uint32_t CTICHINSTATUS;
  volatile const uint32_t RESERVED3;
  volatile uint32_t CTIGATE;
  volatile const uint32_t RESERVED4[926];
  volatile const uint32_t DEVARCH;
  volatile const uint32_t RESERVED5[2];
  volatile const uint32_t DEVID;
  volatile const uint32_t DEVTYPE;
  volatile const uint32_t PIDR4;
  volatile const uint32_t PIDR5;
  volatile const uint32_t PIDR6;
  volatile const uint32_t PIDR7;
  volatile const uint32_t PIDR0;
  volatile const uint32_t PIDR1;
  volatile const uint32_t PIDR2;
  volatile const uint32_t PIDR3;
  volatile const uint32_t CIDR0;
  volatile const uint32_t CIDR1;
  volatile const uint32_t CIDR2;
  volatile const uint32_t CIDR3;
} NRF_CTI_Type;
# 1221 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile const uint32_t RESERVED;
  volatile uint32_t CLOCKSTART;
  volatile uint32_t CLOCKSTOP;
  volatile const uint32_t RESERVED1[317];
  volatile uint32_t ENABLE;
  volatile TAD_PSEL_Type PSEL;
  volatile uint32_t TRACEPORTSPEED;
} NRF_TAD_Type;
# 1242 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile const uint32_t RESERVED[264];
  volatile const uint32_t CPUID;
  volatile const uint32_t RESERVED1[7];
  volatile DCNF_EXTPERI_Type EXTPERI[1];
  volatile const uint32_t RESERVED2[7];
  volatile DCNF_EXTRAM_Type EXTRAM[1];
  volatile const uint32_t RESERVED3[7];
  volatile DCNF_EXTCODE_Type EXTCODE[1];
} NRF_DCNF_Type;
# 1264 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile const uint32_t RESERVED[64];
  volatile uint32_t EVENTS_INVALIDOPERATION;

  volatile uint32_t EVENTS_DIVIDEBYZERO;


  volatile uint32_t EVENTS_OVERFLOW;

  volatile uint32_t EVENTS_UNDERFLOW;

  volatile uint32_t EVENTS_INEXACT;

  volatile uint32_t EVENTS_DENORMALINPUT;

  volatile const uint32_t RESERVED1[122];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
} NRF_FPU_Type;
# 1296 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile const uint32_t RESERVED[256];
  volatile CACHE_PROFILING_Type PROFILING[2];
  volatile const uint32_t RESERVED1[48];
  volatile uint32_t ENABLE;
  volatile uint32_t INVALIDATE;
  volatile uint32_t ERASE;
  volatile uint32_t PROFILINGENABLE;
  volatile uint32_t PROFILINGCLEAR;
  volatile uint32_t MODE;



  volatile uint32_t DEBUGLOCK;
  volatile uint32_t ERASESTATUS;
  volatile uint32_t WRITELOCK;




} NRF_CACHE_Type;
# 1329 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile const uint32_t RESERVED[64];
  volatile uint32_t EVENTS_RAMACCERR;

  volatile uint32_t EVENTS_FLASHACCERR;

  volatile uint32_t EVENTS_PERIPHACCERR;

  volatile const uint32_t RESERVED1[29];
  volatile uint32_t PUBLISH_RAMACCERR;
  volatile uint32_t PUBLISH_FLASHACCERR;
  volatile uint32_t PUBLISH_PERIPHACCERR;
  volatile const uint32_t RESERVED2[93];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[61];
  volatile const uint32_t CAP;
  volatile uint32_t CPULOCK;
  volatile const uint32_t RESERVED4[14];
  volatile SPU_EXTDOMAIN_Type EXTDOMAIN[1];
  volatile const uint32_t RESERVED5[15];
  volatile SPU_DPPI_Type DPPI[1];
  volatile const uint32_t RESERVED6[14];
  volatile SPU_GPIOPORT_Type GPIOPORT[2];
  volatile const uint32_t RESERVED7[12];
  volatile SPU_FLASHNSC_Type FLASHNSC[2];
  volatile const uint32_t RESERVED8[12];
  volatile SPU_RAMNSC_Type RAMNSC[2];
  volatile const uint32_t RESERVED9[44];
  volatile SPU_FLASHREGION_Type FLASHREGION[64];
  volatile SPU_RAMREGION_Type RAMREGION[64];
  volatile SPU_PERIPHID_Type PERIPHID[256];
} NRF_SPU_Type;
# 1375 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile const uint32_t RESERVED[369];
  volatile uint32_t XOSC32MCAPS;
  volatile const uint32_t RESERVED1[62];
  volatile OSCILLATORS_XOSC32KI_Type XOSC32KI;
} NRF_OSCILLATORS_Type;
# 1393 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile const uint32_t RESERVED[266];
  volatile const uint32_t MAINREGSTATUS;
  volatile const uint32_t RESERVED1[53];
  volatile uint32_t SYSTEMOFF;
  volatile const uint32_t RESERVED2[3];
  volatile uint32_t POFCON;
  volatile const uint32_t RESERVED3[124];
  volatile REGULATORS_VREGMAIN_Type VREGMAIN;
  volatile const uint32_t RESERVED4[126];
  volatile REGULATORS_VREGRADIO_Type VREGRADIO;
  volatile const uint32_t RESERVED5[126];
  volatile REGULATORS_VREGH_Type VREGH;
} NRF_REGULATORS_Type;
# 1419 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile uint32_t TASKS_HFCLKSTART;

  volatile uint32_t TASKS_HFCLKSTOP;
  volatile uint32_t TASKS_LFCLKSTART;
  volatile uint32_t TASKS_LFCLKSTOP;
  volatile uint32_t TASKS_CAL;
  volatile const uint32_t RESERVED;
  volatile uint32_t TASKS_HFCLKAUDIOSTART;
  volatile uint32_t TASKS_HFCLKAUDIOSTOP;
  volatile uint32_t TASKS_HFCLK192MSTART;
  volatile uint32_t TASKS_HFCLK192MSTOP;
  volatile const uint32_t RESERVED1[22];
  volatile uint32_t SUBSCRIBE_HFCLKSTART;
  volatile uint32_t SUBSCRIBE_HFCLKSTOP;
  volatile uint32_t SUBSCRIBE_LFCLKSTART;
  volatile uint32_t SUBSCRIBE_LFCLKSTOP;
  volatile uint32_t SUBSCRIBE_CAL;
  volatile const uint32_t RESERVED2;
  volatile uint32_t SUBSCRIBE_HFCLKAUDIOSTART;
  volatile uint32_t SUBSCRIBE_HFCLKAUDIOSTOP;
  volatile uint32_t SUBSCRIBE_HFCLK192MSTART;
  volatile uint32_t SUBSCRIBE_HFCLK192MSTOP;
  volatile const uint32_t RESERVED3[22];
  volatile uint32_t EVENTS_HFCLKSTARTED;
  volatile uint32_t EVENTS_LFCLKSTARTED;
  volatile const uint32_t RESERVED4[5];
  volatile uint32_t EVENTS_DONE;
  volatile uint32_t EVENTS_HFCLKAUDIOSTARTED;
  volatile uint32_t EVENTS_HFCLK192MSTARTED;
  volatile const uint32_t RESERVED5[22];
  volatile uint32_t PUBLISH_HFCLKSTARTED;
  volatile uint32_t PUBLISH_LFCLKSTARTED;
  volatile const uint32_t RESERVED6[5];
  volatile uint32_t PUBLISH_DONE;
  volatile uint32_t PUBLISH_HFCLKAUDIOSTARTED;
  volatile uint32_t PUBLISH_HFCLK192MSTARTED;
  volatile const uint32_t RESERVED7[86];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t INTPEND;
  volatile const uint32_t RESERVED8[62];
  volatile const uint32_t HFCLKRUN;

  volatile const uint32_t HFCLKSTAT;




  volatile const uint32_t RESERVED9;
  volatile const uint32_t LFCLKRUN;

  volatile const uint32_t LFCLKSTAT;



  volatile const uint32_t LFCLKSRCCOPY;

  volatile const uint32_t RESERVED10[12];
  volatile const uint32_t HFCLKAUDIORUN;

  volatile const uint32_t HFCLKAUDIOSTAT;

  volatile const uint32_t HFCLK192MRUN;

  volatile const uint32_t HFCLK192MSTAT;
  volatile const uint32_t RESERVED11[45];
  volatile uint32_t HFCLKSRC;
  volatile uint32_t LFCLKSRC;
  volatile const uint32_t RESERVED12[15];
  volatile uint32_t HFCLKCTRL;
  volatile CLOCK_HFCLKAUDIO_Type HFCLKAUDIO;
  volatile const uint32_t RESERVED13[4];
  volatile const uint32_t HFCLKALWAYSRUN;
  volatile const uint32_t LFCLKALWAYSRUN;
  volatile const uint32_t RESERVED14;
  volatile const uint32_t HFCLKAUDIOALWAYSRUN;
  volatile uint32_t HFCLK192MSRC;
  volatile const uint32_t HFCLK192MALWAYSRUN;
  volatile const uint32_t RESERVED15[12];
  volatile uint32_t HFCLK192MCTRL;
} NRF_CLOCK_Type;
# 1514 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile const uint32_t RESERVED[30];
  volatile uint32_t TASKS_CONSTLAT;
  volatile uint32_t TASKS_LOWPWR;
  volatile const uint32_t RESERVED1[30];
  volatile uint32_t SUBSCRIBE_CONSTLAT;
  volatile uint32_t SUBSCRIBE_LOWPWR;
  volatile const uint32_t RESERVED2[2];
  volatile uint32_t EVENTS_POFWARN;
  volatile const uint32_t RESERVED3[2];
  volatile uint32_t EVENTS_SLEEPENTER;
  volatile uint32_t EVENTS_SLEEPEXIT;
  volatile const uint32_t RESERVED4[27];
  volatile uint32_t PUBLISH_POFWARN;
  volatile const uint32_t RESERVED5[2];
  volatile uint32_t PUBLISH_SLEEPENTER;
  volatile uint32_t PUBLISH_SLEEPEXIT;
  volatile const uint32_t RESERVED6[89];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED7[132];
  volatile uint32_t GPREGRET[2];

} NRF_POWER_Type;
# 1551 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile const uint32_t RESERVED[256];
  volatile uint32_t RESETREAS;
  volatile const uint32_t RESERVED1[131];
  volatile RESET_NETWORK_Type NETWORK;
} NRF_RESET_Type;
# 1569 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile const uint32_t RESERVED[256];
  volatile CTRLAPPERI_MAILBOX_Type MAILBOX;
  volatile const uint32_t RESERVED1[30];
  volatile CTRLAPPERI_ERASEPROTECT_Type ERASEPROTECT;
  volatile const uint32_t RESERVED2[14];
  volatile CTRLAPPERI_APPROTECT_Type APPROTECT;
  volatile CTRLAPPERI_SECUREAPPROTECT_Type SECUREAPPROTECT;
  volatile const uint32_t RESERVED3[44];
  volatile const uint32_t STATUS;
} NRF_CTRLAPPERI_Type;
# 1592 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile const uint32_t RESERVED[4];
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED1;
  volatile uint32_t TASKS_SUSPEND;
  volatile uint32_t TASKS_RESUME;
  volatile const uint32_t RESERVED2[27];
  volatile uint32_t SUBSCRIBE_START;
  volatile uint32_t SUBSCRIBE_STOP;
  volatile const uint32_t RESERVED3;
  volatile uint32_t SUBSCRIBE_SUSPEND;
  volatile uint32_t SUBSCRIBE_RESUME;
  volatile const uint32_t RESERVED4[24];
  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED5[2];
  volatile uint32_t EVENTS_ENDRX;
  volatile const uint32_t RESERVED6;
  volatile uint32_t EVENTS_END;
  volatile const uint32_t RESERVED7;
  volatile uint32_t EVENTS_ENDTX;
  volatile const uint32_t RESERVED8[10];
  volatile uint32_t EVENTS_STARTED;
  volatile const uint32_t RESERVED9[13];
  volatile uint32_t PUBLISH_STOPPED;
  volatile const uint32_t RESERVED10[2];
  volatile uint32_t PUBLISH_ENDRX;
  volatile const uint32_t RESERVED11;
  volatile uint32_t PUBLISH_END;
  volatile const uint32_t RESERVED12;
  volatile uint32_t PUBLISH_ENDTX;
  volatile const uint32_t RESERVED13[10];
  volatile uint32_t PUBLISH_STARTED;
  volatile const uint32_t RESERVED14[12];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED15[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED16[61];
  volatile uint32_t STALLSTAT;



  volatile const uint32_t RESERVED17[63];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED18;
  volatile SPIM_PSEL_Type PSEL;
  volatile const uint32_t RESERVED19[3];
  volatile uint32_t FREQUENCY;

  volatile const uint32_t RESERVED20[3];
  volatile SPIM_RXD_Type RXD;
  volatile SPIM_TXD_Type TXD;
  volatile uint32_t CONFIG;
  volatile const uint32_t RESERVED21[2];
  volatile SPIM_IFTIMING_Type IFTIMING;
  volatile uint32_t CSNPOL;
  volatile uint32_t PSELDCX;
  volatile uint32_t DCXCNT;
  volatile const uint32_t RESERVED22[19];
  volatile uint32_t ORC;


} NRF_SPIM_Type;
# 1668 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile const uint32_t RESERVED[9];
  volatile uint32_t TASKS_ACQUIRE;
  volatile uint32_t TASKS_RELEASE;

  volatile const uint32_t RESERVED1[30];
  volatile uint32_t SUBSCRIBE_ACQUIRE;
  volatile uint32_t SUBSCRIBE_RELEASE;
  volatile const uint32_t RESERVED2[22];
  volatile uint32_t EVENTS_END;
  volatile const uint32_t RESERVED3[2];
  volatile uint32_t EVENTS_ENDRX;
  volatile const uint32_t RESERVED4[5];
  volatile uint32_t EVENTS_ACQUIRED;
  volatile const uint32_t RESERVED5[22];
  volatile uint32_t PUBLISH_END;
  volatile const uint32_t RESERVED6[2];
  volatile uint32_t PUBLISH_ENDRX;
  volatile const uint32_t RESERVED7[5];
  volatile uint32_t PUBLISH_ACQUIRED;
  volatile const uint32_t RESERVED8[21];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED9[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED10[61];
  volatile const uint32_t SEMSTAT;
  volatile const uint32_t RESERVED11[15];
  volatile uint32_t STATUS;
  volatile const uint32_t RESERVED12[47];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED13;
  volatile SPIS_PSEL_Type PSEL;
  volatile const uint32_t RESERVED14[7];
  volatile SPIS_RXD_Type RXD;
  volatile SPIS_TXD_Type TXD;
  volatile uint32_t CONFIG;
  volatile const uint32_t RESERVED15;
  volatile uint32_t DEF;

  volatile const uint32_t RESERVED16[24];
  volatile uint32_t ORC;
} NRF_SPIS_Type;
# 1723 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile uint32_t TASKS_STARTRX;
  volatile const uint32_t RESERVED;
  volatile uint32_t TASKS_STARTTX;
  volatile const uint32_t RESERVED1[2];
  volatile uint32_t TASKS_STOP;

  volatile const uint32_t RESERVED2;
  volatile uint32_t TASKS_SUSPEND;
  volatile uint32_t TASKS_RESUME;
  volatile const uint32_t RESERVED3[23];
  volatile uint32_t SUBSCRIBE_STARTRX;
  volatile const uint32_t RESERVED4;
  volatile uint32_t SUBSCRIBE_STARTTX;
  volatile const uint32_t RESERVED5[2];
  volatile uint32_t SUBSCRIBE_STOP;
  volatile const uint32_t RESERVED6;
  volatile uint32_t SUBSCRIBE_SUSPEND;
  volatile uint32_t SUBSCRIBE_RESUME;
  volatile const uint32_t RESERVED7[24];
  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED8[7];
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED9[8];
  volatile uint32_t EVENTS_SUSPENDED;


  volatile uint32_t EVENTS_RXSTARTED;
  volatile uint32_t EVENTS_TXSTARTED;
  volatile const uint32_t RESERVED10[2];
  volatile uint32_t EVENTS_LASTRX;
  volatile uint32_t EVENTS_LASTTX;

  volatile const uint32_t RESERVED11[8];
  volatile uint32_t PUBLISH_STOPPED;
  volatile const uint32_t RESERVED12[7];
  volatile uint32_t PUBLISH_ERROR;
  volatile const uint32_t RESERVED13[8];
  volatile uint32_t PUBLISH_SUSPENDED;
  volatile uint32_t PUBLISH_RXSTARTED;
  volatile uint32_t PUBLISH_TXSTARTED;
  volatile const uint32_t RESERVED14[2];
  volatile uint32_t PUBLISH_LASTRX;
  volatile uint32_t PUBLISH_LASTTX;
  volatile const uint32_t RESERVED15[7];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED16[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED17[110];
  volatile uint32_t ERRORSRC;
  volatile const uint32_t RESERVED18[14];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED19;
  volatile TWIM_PSEL_Type PSEL;
  volatile const uint32_t RESERVED20[5];
  volatile uint32_t FREQUENCY;

  volatile const uint32_t RESERVED21[3];
  volatile TWIM_RXD_Type RXD;
  volatile TWIM_TXD_Type TXD;
  volatile const uint32_t RESERVED22[13];
  volatile uint32_t ADDRESS;
} NRF_TWIM_Type;
# 1800 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile const uint32_t RESERVED[5];
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED1;
  volatile uint32_t TASKS_SUSPEND;
  volatile uint32_t TASKS_RESUME;
  volatile const uint32_t RESERVED2[3];
  volatile uint32_t TASKS_PREPARERX;
  volatile uint32_t TASKS_PREPARETX;
  volatile const uint32_t RESERVED3[23];
  volatile uint32_t SUBSCRIBE_STOP;
  volatile const uint32_t RESERVED4;
  volatile uint32_t SUBSCRIBE_SUSPEND;
  volatile uint32_t SUBSCRIBE_RESUME;
  volatile const uint32_t RESERVED5[3];
  volatile uint32_t SUBSCRIBE_PREPARERX;
  volatile uint32_t SUBSCRIBE_PREPARETX;
  volatile const uint32_t RESERVED6[19];
  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED7[7];
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED8[9];
  volatile uint32_t EVENTS_RXSTARTED;
  volatile uint32_t EVENTS_TXSTARTED;
  volatile const uint32_t RESERVED9[4];
  volatile uint32_t EVENTS_WRITE;
  volatile uint32_t EVENTS_READ;
  volatile const uint32_t RESERVED10[6];
  volatile uint32_t PUBLISH_STOPPED;
  volatile const uint32_t RESERVED11[7];
  volatile uint32_t PUBLISH_ERROR;
  volatile const uint32_t RESERVED12[9];
  volatile uint32_t PUBLISH_RXSTARTED;
  volatile uint32_t PUBLISH_TXSTARTED;
  volatile const uint32_t RESERVED13[4];
  volatile uint32_t PUBLISH_WRITE;
  volatile uint32_t PUBLISH_READ;
  volatile const uint32_t RESERVED14[5];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED15[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED16[113];
  volatile uint32_t ERRORSRC;
  volatile const uint32_t MATCH;

  volatile const uint32_t RESERVED17[10];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED18;
  volatile TWIS_PSEL_Type PSEL;
  volatile const uint32_t RESERVED19[9];
  volatile TWIS_RXD_Type RXD;
  volatile TWIS_TXD_Type TXD;
  volatile const uint32_t RESERVED20[13];
  volatile uint32_t ADDRESS[2];
  volatile const uint32_t RESERVED21;
  volatile uint32_t CONFIG;

  volatile const uint32_t RESERVED22[10];
  volatile uint32_t ORC;

} NRF_TWIS_Type;
# 1875 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile uint32_t TASKS_STARTRX;
  volatile uint32_t TASKS_STOPRX;
  volatile uint32_t TASKS_STARTTX;
  volatile uint32_t TASKS_STOPTX;
  volatile const uint32_t RESERVED[7];
  volatile uint32_t TASKS_FLUSHRX;
  volatile const uint32_t RESERVED1[20];
  volatile uint32_t SUBSCRIBE_STARTRX;
  volatile uint32_t SUBSCRIBE_STOPRX;
  volatile uint32_t SUBSCRIBE_STARTTX;
  volatile uint32_t SUBSCRIBE_STOPTX;
  volatile const uint32_t RESERVED2[7];
  volatile uint32_t SUBSCRIBE_FLUSHRX;
  volatile const uint32_t RESERVED3[20];
  volatile uint32_t EVENTS_CTS;
  volatile uint32_t EVENTS_NCTS;
  volatile uint32_t EVENTS_RXDRDY;

  volatile const uint32_t RESERVED4;
  volatile uint32_t EVENTS_ENDRX;
  volatile const uint32_t RESERVED5[2];
  volatile uint32_t EVENTS_TXDRDY;
  volatile uint32_t EVENTS_ENDTX;
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED6[7];
  volatile uint32_t EVENTS_RXTO;
  volatile const uint32_t RESERVED7;
  volatile uint32_t EVENTS_RXSTARTED;
  volatile uint32_t EVENTS_TXSTARTED;
  volatile const uint32_t RESERVED8;
  volatile uint32_t EVENTS_TXSTOPPED;
  volatile const uint32_t RESERVED9[9];
  volatile uint32_t PUBLISH_CTS;
  volatile uint32_t PUBLISH_NCTS;
  volatile uint32_t PUBLISH_RXDRDY;
  volatile const uint32_t RESERVED10;
  volatile uint32_t PUBLISH_ENDRX;
  volatile const uint32_t RESERVED11[2];
  volatile uint32_t PUBLISH_TXDRDY;
  volatile uint32_t PUBLISH_ENDTX;
  volatile uint32_t PUBLISH_ERROR;
  volatile const uint32_t RESERVED12[7];
  volatile uint32_t PUBLISH_RXTO;
  volatile const uint32_t RESERVED13;
  volatile uint32_t PUBLISH_RXSTARTED;
  volatile uint32_t PUBLISH_TXSTARTED;
  volatile const uint32_t RESERVED14;
  volatile uint32_t PUBLISH_TXSTOPPED;
  volatile const uint32_t RESERVED15[9];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED16[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED17[93];
  volatile uint32_t ERRORSRC;

  volatile const uint32_t RESERVED18[31];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED19;
  volatile UARTE_PSEL_Type PSEL;
  volatile const uint32_t RESERVED20[3];
  volatile uint32_t BAUDRATE;

  volatile const uint32_t RESERVED21[3];
  volatile UARTE_RXD_Type RXD;
  volatile const uint32_t RESERVED22;
  volatile UARTE_TXD_Type TXD;
  volatile const uint32_t RESERVED23[7];
  volatile uint32_t CONFIG;
} NRF_UARTE_Type;
# 1959 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile uint32_t TASKS_OUT[8];


  volatile const uint32_t RESERVED[4];
  volatile uint32_t TASKS_SET[8];


  volatile const uint32_t RESERVED1[4];
  volatile uint32_t TASKS_CLR[8];


  volatile uint32_t SUBSCRIBE_OUT[8];

  volatile const uint32_t RESERVED2[4];
  volatile uint32_t SUBSCRIBE_SET[8];

  volatile const uint32_t RESERVED3[4];
  volatile uint32_t SUBSCRIBE_CLR[8];

  volatile uint32_t EVENTS_IN[8];

  volatile const uint32_t RESERVED4[23];
  volatile uint32_t EVENTS_PORT;

  volatile uint32_t PUBLISH_IN[8];

  volatile const uint32_t RESERVED5[23];
  volatile uint32_t PUBLISH_PORT;
  volatile const uint32_t RESERVED6[65];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED7[129];
  volatile uint32_t CONFIG[8];

} NRF_GPIOTE_Type;
# 2007 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile uint32_t TASKS_START;

  volatile uint32_t TASKS_SAMPLE;

  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_CALIBRATEOFFSET;
  volatile const uint32_t RESERVED[28];
  volatile uint32_t SUBSCRIBE_START;
  volatile uint32_t SUBSCRIBE_SAMPLE;
  volatile uint32_t SUBSCRIBE_STOP;
  volatile uint32_t SUBSCRIBE_CALIBRATEOFFSET;
  volatile const uint32_t RESERVED1[28];
  volatile uint32_t EVENTS_STARTED;
  volatile uint32_t EVENTS_END;
  volatile uint32_t EVENTS_DONE;



  volatile uint32_t EVENTS_RESULTDONE;
  volatile uint32_t EVENTS_CALIBRATEDONE;
  volatile uint32_t EVENTS_STOPPED;
  volatile SAADC_EVENTS_CH_Type EVENTS_CH[8];
  volatile const uint32_t RESERVED2[10];
  volatile uint32_t PUBLISH_STARTED;
  volatile uint32_t PUBLISH_END;
  volatile uint32_t PUBLISH_DONE;
  volatile uint32_t PUBLISH_RESULTDONE;
  volatile uint32_t PUBLISH_CALIBRATEDONE;
  volatile uint32_t PUBLISH_STOPPED;
  volatile SAADC_PUBLISH_CH_Type PUBLISH_CH[8];
  volatile const uint32_t RESERVED3[74];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED4[61];
  volatile const uint32_t STATUS;
  volatile const uint32_t RESERVED5[63];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED6[3];
  volatile SAADC_CH_Type CH[8];
  volatile const uint32_t RESERVED7[24];
  volatile uint32_t RESOLUTION;
  volatile uint32_t OVERSAMPLE;




  volatile uint32_t SAMPLERATE;
  volatile const uint32_t RESERVED8[12];
  volatile SAADC_RESULT_Type RESULT;
} NRF_SAADC_Type;
# 2071 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_COUNT;
  volatile uint32_t TASKS_CLEAR;
  volatile uint32_t TASKS_SHUTDOWN;
  volatile const uint32_t RESERVED[11];
  volatile uint32_t TASKS_CAPTURE[6];

  volatile const uint32_t RESERVED1[10];
  volatile uint32_t SUBSCRIBE_START;
  volatile uint32_t SUBSCRIBE_STOP;
  volatile uint32_t SUBSCRIBE_COUNT;
  volatile uint32_t SUBSCRIBE_CLEAR;
  volatile uint32_t SUBSCRIBE_SHUTDOWN;

  volatile const uint32_t RESERVED2[11];
  volatile uint32_t SUBSCRIBE_CAPTURE[6];

  volatile const uint32_t RESERVED3[26];
  volatile uint32_t EVENTS_COMPARE[6];

  volatile const uint32_t RESERVED4[26];
  volatile uint32_t PUBLISH_COMPARE[6];

  volatile const uint32_t RESERVED5[10];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED6[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED7[126];
  volatile uint32_t MODE;
  volatile uint32_t BITMODE;
  volatile const uint32_t RESERVED8;
  volatile uint32_t PRESCALER;
  volatile const uint32_t RESERVED9[11];
  volatile uint32_t CC[6];

  volatile const uint32_t RESERVED10[10];
  volatile uint32_t ONESHOTEN[6];

} NRF_TIMER_Type;
# 2126 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_CLEAR;
  volatile uint32_t TASKS_TRIGOVRFLW;
  volatile const uint32_t RESERVED[12];
  volatile uint32_t TASKS_CAPTURE[4];

  volatile const uint32_t RESERVED1[12];
  volatile uint32_t SUBSCRIBE_START;
  volatile uint32_t SUBSCRIBE_STOP;
  volatile uint32_t SUBSCRIBE_CLEAR;
  volatile uint32_t SUBSCRIBE_TRIGOVRFLW;
  volatile const uint32_t RESERVED2[12];
  volatile uint32_t SUBSCRIBE_CAPTURE[4];

  volatile const uint32_t RESERVED3[12];
  volatile uint32_t EVENTS_TICK;
  volatile uint32_t EVENTS_OVRFLW;
  volatile const uint32_t RESERVED4[14];
  volatile uint32_t EVENTS_COMPARE[4];

  volatile const uint32_t RESERVED5[12];
  volatile uint32_t PUBLISH_TICK;
  volatile uint32_t PUBLISH_OVRFLW;
  volatile const uint32_t RESERVED6[14];
  volatile uint32_t PUBLISH_COMPARE[4];

  volatile const uint32_t RESERVED7[12];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED8[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED9[13];
  volatile uint32_t EVTEN;
  volatile uint32_t EVTENSET;
  volatile uint32_t EVTENCLR;
  volatile const uint32_t RESERVED10[110];
  volatile const uint32_t COUNTER;
  volatile uint32_t PRESCALER;

  volatile const uint32_t RESERVED11[13];
  volatile uint32_t CC[4];
} NRF_RTC_Type;
# 2182 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile DPPIC_TASKS_CHG_Type TASKS_CHG[6];
  volatile const uint32_t RESERVED[20];
  volatile DPPIC_SUBSCRIBE_CHG_Type SUBSCRIBE_CHG[6];
  volatile const uint32_t RESERVED1[276];
  volatile uint32_t CHEN;
  volatile uint32_t CHENSET;
  volatile uint32_t CHENCLR;
  volatile const uint32_t RESERVED2[189];
  volatile uint32_t CHG[6];



} NRF_DPPIC_Type;
# 2208 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED[30];
  volatile uint32_t SUBSCRIBE_START;
  volatile uint32_t SUBSCRIBE_STOP;
  volatile const uint32_t RESERVED1[30];
  volatile uint32_t EVENTS_TIMEOUT;
  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED2[30];
  volatile uint32_t PUBLISH_TIMEOUT;
  volatile uint32_t PUBLISH_STOPPED;
  volatile const uint32_t RESERVED3[95];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED4[6];
  volatile uint32_t NMIENSET;
  volatile uint32_t NMIENCLR;
  volatile const uint32_t RESERVED5[53];
  volatile const uint32_t RUNSTATUS;
  volatile const uint32_t REQSTATUS;
  volatile const uint32_t RESERVED6[63];
  volatile uint32_t CRV;
  volatile uint32_t RREN;
  volatile uint32_t CONFIG;
  volatile const uint32_t RESERVED7[4];
  volatile uint32_t TSEN;
  volatile const uint32_t RESERVED8[55];
  volatile uint32_t RR[8];
} NRF_WDT_Type;
# 2250 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_SAMPLE;
  volatile const uint32_t RESERVED[29];
  volatile uint32_t SUBSCRIBE_START;
  volatile uint32_t SUBSCRIBE_STOP;
  volatile uint32_t SUBSCRIBE_SAMPLE;
  volatile const uint32_t RESERVED1[29];
  volatile uint32_t EVENTS_READY;
  volatile uint32_t EVENTS_DOWN;
  volatile uint32_t EVENTS_UP;
  volatile uint32_t EVENTS_CROSS;
  volatile const uint32_t RESERVED2[28];
  volatile uint32_t PUBLISH_READY;
  volatile uint32_t PUBLISH_DOWN;
  volatile uint32_t PUBLISH_UP;
  volatile uint32_t PUBLISH_CROSS;
  volatile const uint32_t RESERVED3[28];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED4[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED5[61];
  volatile const uint32_t RESULT;
  volatile const uint32_t RESERVED6[63];
  volatile uint32_t ENABLE;
  volatile uint32_t PSEL;
  volatile uint32_t REFSEL;
  volatile uint32_t EXTREFSEL;
  volatile const uint32_t RESERVED7[8];
  volatile uint32_t TH;
  volatile uint32_t MODE;
  volatile uint32_t HYST;
  volatile uint32_t ISOURCE;
} NRF_COMP_Type;
# 2299 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_SAMPLE;
  volatile const uint32_t RESERVED[29];
  volatile uint32_t SUBSCRIBE_START;
  volatile uint32_t SUBSCRIBE_STOP;
  volatile uint32_t SUBSCRIBE_SAMPLE;
  volatile const uint32_t RESERVED1[29];
  volatile uint32_t EVENTS_READY;
  volatile uint32_t EVENTS_DOWN;
  volatile uint32_t EVENTS_UP;
  volatile uint32_t EVENTS_CROSS;
  volatile const uint32_t RESERVED2[28];
  volatile uint32_t PUBLISH_READY;
  volatile uint32_t PUBLISH_DOWN;
  volatile uint32_t PUBLISH_UP;
  volatile uint32_t PUBLISH_CROSS;
  volatile const uint32_t RESERVED3[28];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED4[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED5[61];
  volatile const uint32_t RESULT;
  volatile const uint32_t RESERVED6[63];
  volatile uint32_t ENABLE;
  volatile uint32_t PSEL;
  volatile uint32_t REFSEL;
  volatile uint32_t EXTREFSEL;
  volatile const uint32_t RESERVED7[4];
  volatile uint32_t ANADETECT;
  volatile const uint32_t RESERVED8[5];
  volatile uint32_t HYST;
} NRF_LPCOMP_Type;
# 2346 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile uint32_t TASKS_TRIGGER[16];

  volatile const uint32_t RESERVED[16];
  volatile uint32_t SUBSCRIBE_TRIGGER[16];

  volatile const uint32_t RESERVED1[16];
  volatile uint32_t EVENTS_TRIGGERED[16];


  volatile const uint32_t RESERVED2[16];
  volatile uint32_t PUBLISH_TRIGGERED[16];

  volatile const uint32_t RESERVED3[80];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
} NRF_EGU_Type;
# 2376 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile const uint32_t RESERVED;
  volatile uint32_t TASKS_STOP;


  volatile uint32_t TASKS_SEQSTART[2];




  volatile uint32_t TASKS_NEXTSTEP;



  volatile const uint32_t RESERVED1[28];
  volatile uint32_t SUBSCRIBE_STOP;
  volatile uint32_t SUBSCRIBE_SEQSTART[2];

  volatile uint32_t SUBSCRIBE_NEXTSTEP;
  volatile const uint32_t RESERVED2[28];
  volatile uint32_t EVENTS_STOPPED;

  volatile uint32_t EVENTS_SEQSTARTED[2];

  volatile uint32_t EVENTS_SEQEND[2];


  volatile uint32_t EVENTS_PWMPERIODEND;
  volatile uint32_t EVENTS_LOOPSDONE;

  volatile const uint32_t RESERVED3[25];
  volatile uint32_t PUBLISH_STOPPED;
  volatile uint32_t PUBLISH_SEQSTARTED[2];

  volatile uint32_t PUBLISH_SEQEND[2];

  volatile uint32_t PUBLISH_PWMPERIODEND;
  volatile uint32_t PUBLISH_LOOPSDONE;
  volatile const uint32_t RESERVED4[24];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED5[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED6[125];
  volatile uint32_t ENABLE;
  volatile uint32_t MODE;
  volatile uint32_t COUNTERTOP;

  volatile uint32_t PRESCALER;
  volatile uint32_t DECODER;
  volatile uint32_t LOOP;
  volatile const uint32_t RESERVED7[2];
  volatile PWM_SEQ_Type SEQ[2];
  volatile PWM_PSEL_Type PSEL;
} NRF_PWM_Type;
# 2444 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED[30];
  volatile uint32_t SUBSCRIBE_START;
  volatile uint32_t SUBSCRIBE_STOP;
  volatile const uint32_t RESERVED1[30];
  volatile uint32_t EVENTS_STARTED;
  volatile uint32_t EVENTS_STOPPED;
  volatile uint32_t EVENTS_END;


  volatile const uint32_t RESERVED2[29];
  volatile uint32_t PUBLISH_STARTED;
  volatile uint32_t PUBLISH_STOPPED;
  volatile uint32_t PUBLISH_END;
  volatile const uint32_t RESERVED3[93];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED4[125];
  volatile uint32_t ENABLE;
  volatile uint32_t PDMCLKCTRL;
  volatile uint32_t MODE;

  volatile const uint32_t RESERVED5[3];
  volatile uint32_t GAINL;
  volatile uint32_t GAINR;
  volatile uint32_t RATIO;

  volatile const uint32_t RESERVED6[7];
  volatile PDM_PSEL_Type PSEL;
  volatile const uint32_t RESERVED7;
  volatile uint32_t MCLKCONFIG;
  volatile const uint32_t RESERVED8[4];
  volatile PDM_SAMPLE_Type SAMPLE;
} NRF_PDM_Type;
# 2493 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile uint32_t TASKS_START;

  volatile uint32_t TASKS_STOP;


  volatile const uint32_t RESERVED[30];
  volatile uint32_t SUBSCRIBE_START;
  volatile uint32_t SUBSCRIBE_STOP;
  volatile const uint32_t RESERVED1[31];
  volatile uint32_t EVENTS_RXPTRUPD;




  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED2[2];
  volatile uint32_t EVENTS_TXPTRUPD;




  volatile const uint32_t RESERVED3;
  volatile uint32_t EVENTS_FRAMESTART;

  volatile const uint32_t RESERVED4[25];
  volatile uint32_t PUBLISH_RXPTRUPD;
  volatile uint32_t PUBLISH_STOPPED;
  volatile const uint32_t RESERVED5[2];
  volatile uint32_t PUBLISH_TXPTRUPD;
  volatile const uint32_t RESERVED6;
  volatile uint32_t PUBLISH_FRAMESTART;
  volatile const uint32_t RESERVED7[88];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED8[125];
  volatile uint32_t ENABLE;
  volatile I2S_CONFIG_Type CONFIG;
  volatile const uint32_t RESERVED9[2];
  volatile I2S_RXD_Type RXD;
  volatile const uint32_t RESERVED10;
  volatile I2S_TXD_Type TXD;
  volatile const uint32_t RESERVED11[3];
  volatile I2S_RXTXD_Type RXTXD;
  volatile const uint32_t RESERVED12[3];
  volatile I2S_PSEL_Type PSEL;
} NRF_I2S_Type;
# 2553 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile uint32_t TASKS_SEND[16];

  volatile const uint32_t RESERVED[16];
  volatile uint32_t SUBSCRIBE_SEND[16];

  volatile const uint32_t RESERVED1[16];
  volatile uint32_t EVENTS_RECEIVE[16];

  volatile const uint32_t RESERVED2[16];
  volatile uint32_t PUBLISH_RECEIVE[16];

  volatile const uint32_t RESERVED3[80];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t INTPEND;
  volatile const uint32_t RESERVED4[128];
  volatile uint32_t SEND_CNF[16];

  volatile const uint32_t RESERVED5[16];
  volatile uint32_t RECEIVE_CNF[16];

  volatile const uint32_t RESERVED6[16];
  volatile uint32_t GPMEM[2];
} NRF_IPC_Type;
# 2591 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile uint32_t TASKS_ACTIVATE;
  volatile uint32_t TASKS_READSTART;

  volatile uint32_t TASKS_WRITESTART;

  volatile uint32_t TASKS_ERASESTART;
  volatile uint32_t TASKS_DEACTIVATE;
  volatile const uint32_t RESERVED[27];
  volatile uint32_t SUBSCRIBE_ACTIVATE;
  volatile uint32_t SUBSCRIBE_READSTART;
  volatile uint32_t SUBSCRIBE_WRITESTART;
  volatile uint32_t SUBSCRIBE_ERASESTART;
  volatile uint32_t SUBSCRIBE_DEACTIVATE;
  volatile const uint32_t RESERVED1[27];
  volatile uint32_t EVENTS_READY;

  volatile const uint32_t RESERVED2[31];
  volatile uint32_t PUBLISH_READY;
  volatile const uint32_t RESERVED3[95];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED4[125];
  volatile uint32_t ENABLE;

  volatile QSPI_READ_Type READ;
  volatile QSPI_WRITE_Type WRITE;
  volatile QSPI_ERASE_Type ERASE;
  volatile QSPI_PSEL_Type PSEL;
  volatile uint32_t XIPOFFSET;

  volatile uint32_t IFCONFIG0;
  volatile const uint32_t RESERVED5;
  volatile uint32_t XIPEN;
  volatile const uint32_t RESERVED6[4];
  volatile QSPI_XIP_ENC_Type XIP_ENC;
  volatile QSPI_DMA_ENC_Type DMA_ENC;
  volatile const uint32_t RESERVED7[24];
  volatile uint32_t IFCONFIG1;
  volatile const uint32_t STATUS;
  volatile const uint32_t RESERVED8[3];
  volatile uint32_t DPMDUR;

  volatile const uint32_t RESERVED9[3];
  volatile uint32_t ADDRCONF;
  volatile const uint32_t RESERVED10[3];
  volatile uint32_t CINSTRCONF;
  volatile uint32_t CINSTRDAT0;
  volatile uint32_t CINSTRDAT1;
  volatile uint32_t IFTIMING;
} NRF_QSPI_Type;
# 2655 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile uint32_t TASKS_ACTIVATE;

  volatile uint32_t TASKS_DISABLE;
  volatile uint32_t TASKS_SENSE;

  volatile uint32_t TASKS_STARTTX;

  volatile const uint32_t RESERVED[3];
  volatile uint32_t TASKS_ENABLERXDATA;
  volatile const uint32_t RESERVED1;
  volatile uint32_t TASKS_GOIDLE;
  volatile uint32_t TASKS_GOSLEEP;
  volatile const uint32_t RESERVED2[21];
  volatile uint32_t SUBSCRIBE_ACTIVATE;
  volatile uint32_t SUBSCRIBE_DISABLE;
  volatile uint32_t SUBSCRIBE_SENSE;
  volatile uint32_t SUBSCRIBE_STARTTX;
  volatile const uint32_t RESERVED3[3];
  volatile uint32_t SUBSCRIBE_ENABLERXDATA;
  volatile const uint32_t RESERVED4;
  volatile uint32_t SUBSCRIBE_GOIDLE;
  volatile uint32_t SUBSCRIBE_GOSLEEP;
  volatile const uint32_t RESERVED5[21];
  volatile uint32_t EVENTS_READY;

  volatile uint32_t EVENTS_FIELDDETECTED;
  volatile uint32_t EVENTS_FIELDLOST;
  volatile uint32_t EVENTS_TXFRAMESTART;

  volatile uint32_t EVENTS_TXFRAMEEND;

  volatile uint32_t EVENTS_RXFRAMESTART;

  volatile uint32_t EVENTS_RXFRAMEEND;


  volatile uint32_t EVENTS_ERROR;

  volatile const uint32_t RESERVED6[2];
  volatile uint32_t EVENTS_RXERROR;


  volatile uint32_t EVENTS_ENDRX;

  volatile uint32_t EVENTS_ENDTX;

  volatile const uint32_t RESERVED7;
  volatile uint32_t EVENTS_AUTOCOLRESSTARTED;
  volatile const uint32_t RESERVED8[3];
  volatile uint32_t EVENTS_COLLISION;
  volatile uint32_t EVENTS_SELECTED;
  volatile uint32_t EVENTS_STARTED;
  volatile const uint32_t RESERVED9[11];
  volatile uint32_t PUBLISH_READY;
  volatile uint32_t PUBLISH_FIELDDETECTED;
  volatile uint32_t PUBLISH_FIELDLOST;
  volatile uint32_t PUBLISH_TXFRAMESTART;
  volatile uint32_t PUBLISH_TXFRAMEEND;
  volatile uint32_t PUBLISH_RXFRAMESTART;
  volatile uint32_t PUBLISH_RXFRAMEEND;
  volatile uint32_t PUBLISH_ERROR;
  volatile const uint32_t RESERVED10[2];
  volatile uint32_t PUBLISH_RXERROR;
  volatile uint32_t PUBLISH_ENDRX;
  volatile uint32_t PUBLISH_ENDTX;
  volatile const uint32_t RESERVED11;
  volatile uint32_t PUBLISH_AUTOCOLRESSTARTED;
  volatile const uint32_t RESERVED12[3];
  volatile uint32_t PUBLISH_COLLISION;
  volatile uint32_t PUBLISH_SELECTED;
  volatile uint32_t PUBLISH_STARTED;
  volatile const uint32_t RESERVED13[11];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED14[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED15[62];
  volatile uint32_t ERRORSTATUS;
  volatile const uint32_t RESERVED16;
  volatile NFCT_FRAMESTATUS_Type FRAMESTATUS;
  volatile const uint32_t NFCTAGSTATE;
  volatile const uint32_t RESERVED17[3];
  volatile const uint32_t SLEEPSTATE;
  volatile const uint32_t RESERVED18[6];
  volatile const uint32_t FIELDPRESENT;
  volatile const uint32_t RESERVED19[49];
  volatile uint32_t FRAMEDELAYMIN;
  volatile uint32_t FRAMEDELAYMAX;
  volatile uint32_t FRAMEDELAYMODE;
  volatile uint32_t PACKETPTR;

  volatile uint32_t MAXLEN;

  volatile NFCT_TXD_Type TXD;
  volatile NFCT_RXD_Type RXD;
  volatile const uint32_t RESERVED20;
  volatile uint32_t MODULATIONCTRL;

  volatile const uint32_t RESERVED21[2];
  volatile uint32_t MODULATIONPSEL;
  volatile const uint32_t RESERVED22[21];
  volatile uint32_t NFCID1_LAST;
  volatile uint32_t NFCID1_2ND_LAST;
  volatile uint32_t NFCID1_3RD_LAST;
  volatile uint32_t AUTOCOLRESCONFIG;


  volatile uint32_t SENSRES;
  volatile uint32_t SELRES;
} NRF_NFCT_Type;
# 2779 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile const uint32_t RESERVED[256];
  volatile uint32_t MUTEX[16];
} NRF_MUTEX_Type;
# 2795 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_READCLRACC;
  volatile uint32_t TASKS_RDCLRACC;
  volatile uint32_t TASKS_RDCLRDBL;
  volatile const uint32_t RESERVED[27];
  volatile uint32_t SUBSCRIBE_START;
  volatile uint32_t SUBSCRIBE_STOP;
  volatile uint32_t SUBSCRIBE_READCLRACC;
  volatile uint32_t SUBSCRIBE_RDCLRACC;
  volatile uint32_t SUBSCRIBE_RDCLRDBL;
  volatile const uint32_t RESERVED1[27];
  volatile uint32_t EVENTS_SAMPLERDY;

  volatile uint32_t EVENTS_REPORTRDY;
  volatile uint32_t EVENTS_ACCOF;
  volatile uint32_t EVENTS_DBLRDY;
  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED2[27];
  volatile uint32_t PUBLISH_SAMPLERDY;
  volatile uint32_t PUBLISH_REPORTRDY;
  volatile uint32_t PUBLISH_ACCOF;
  volatile uint32_t PUBLISH_DBLRDY;
  volatile uint32_t PUBLISH_STOPPED;
  volatile const uint32_t RESERVED3[27];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED4[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED5[125];
  volatile uint32_t ENABLE;
  volatile uint32_t LEDPOL;
  volatile uint32_t SAMPLEPER;
  volatile const int32_t SAMPLE;
  volatile uint32_t REPORTPER;

  volatile const int32_t ACC;
  volatile const int32_t ACCREAD;

  volatile QDEC_PSEL_Type PSEL;
  volatile uint32_t DBFEN;
  volatile const uint32_t RESERVED6[5];
  volatile uint32_t LEDPRE;
  volatile const uint32_t ACCDBL;

  volatile const uint32_t ACCDBLREAD;

} NRF_QDEC_Type;
# 2856 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile const uint32_t RESERVED;
  volatile uint32_t TASKS_STARTEPIN[8];



  volatile uint32_t TASKS_STARTISOIN;


  volatile uint32_t TASKS_STARTEPOUT[8];



  volatile uint32_t TASKS_STARTISOOUT;


  volatile uint32_t TASKS_EP0RCVOUT;
  volatile uint32_t TASKS_EP0STATUS;
  volatile uint32_t TASKS_EP0STALL;

  volatile uint32_t TASKS_DPDMDRIVE;

  volatile uint32_t TASKS_DPDMNODRIVE;

  volatile const uint32_t RESERVED1[9];
  volatile uint32_t SUBSCRIBE_STARTEPIN[8];

  volatile uint32_t SUBSCRIBE_STARTISOIN;
  volatile uint32_t SUBSCRIBE_STARTEPOUT[8];

  volatile uint32_t SUBSCRIBE_STARTISOOUT;
  volatile uint32_t SUBSCRIBE_EP0RCVOUT;
  volatile uint32_t SUBSCRIBE_EP0STATUS;
  volatile uint32_t SUBSCRIBE_EP0STALL;
  volatile uint32_t SUBSCRIBE_DPDMDRIVE;
  volatile uint32_t SUBSCRIBE_DPDMNODRIVE;
  volatile const uint32_t RESERVED2[8];
  volatile uint32_t EVENTS_USBRESET;

  volatile uint32_t EVENTS_STARTED;



  volatile uint32_t EVENTS_ENDEPIN[8];


  volatile uint32_t EVENTS_EP0DATADONE;

  volatile uint32_t EVENTS_ENDISOIN;

  volatile uint32_t EVENTS_ENDEPOUT[8];


  volatile uint32_t EVENTS_ENDISOOUT;

  volatile uint32_t EVENTS_SOF;

  volatile uint32_t EVENTS_USBEVENT;


  volatile uint32_t EVENTS_EP0SETUP;

  volatile uint32_t EVENTS_EPDATA;

  volatile const uint32_t RESERVED3[7];
  volatile uint32_t PUBLISH_USBRESET;
  volatile uint32_t PUBLISH_STARTED;
  volatile uint32_t PUBLISH_ENDEPIN[8];

  volatile uint32_t PUBLISH_EP0DATADONE;
  volatile uint32_t PUBLISH_ENDISOIN;
  volatile uint32_t PUBLISH_ENDEPOUT[8];

  volatile uint32_t PUBLISH_ENDISOOUT;
  volatile uint32_t PUBLISH_SOF;
  volatile uint32_t PUBLISH_USBEVENT;
  volatile uint32_t PUBLISH_EP0SETUP;
  volatile uint32_t PUBLISH_EPDATA;
  volatile const uint32_t RESERVED4[7];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED5[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED6[61];
  volatile uint32_t EVENTCAUSE;
  volatile const uint32_t RESERVED7[7];
  volatile USBD_HALTED_Type HALTED;
  volatile const uint32_t RESERVED8;
  volatile uint32_t EPSTATUS;

  volatile uint32_t EPDATASTATUS;


  volatile const uint32_t USBADDR;
  volatile const uint32_t RESERVED9[3];
  volatile const uint32_t BMREQUESTTYPE;
  volatile const uint32_t BREQUEST;
  volatile const uint32_t WVALUEL;
  volatile const uint32_t WVALUEH;
  volatile const uint32_t WINDEXL;
  volatile const uint32_t WINDEXH;
  volatile const uint32_t WLENGTHL;
  volatile const uint32_t WLENGTHH;
  volatile USBD_SIZE_Type SIZE;
  volatile const uint32_t RESERVED10[15];
  volatile uint32_t ENABLE;
  volatile uint32_t USBPULLUP;
  volatile uint32_t DPDMVALUE;



  volatile uint32_t DTOGGLE;
  volatile uint32_t EPINEN;
  volatile uint32_t EPOUTEN;
  volatile uint32_t EPSTALL;
  volatile uint32_t ISOSPLIT;
  volatile const uint32_t FRAMECNTR;

  volatile const uint32_t RESERVED11[2];
  volatile uint32_t LOWPOWER;

  volatile uint32_t ISOINCONFIG;


  volatile const uint32_t RESERVED12[51];
  volatile USBD_EPIN_Type EPIN[8];
  volatile USBD_ISOIN_Type ISOIN;
  volatile const uint32_t RESERVED13[21];
  volatile USBD_EPOUT_Type EPOUT[8];
  volatile USBD_ISOOUT_Type ISOOUT;
} NRF_USBD_Type;
# 3000 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile const uint32_t RESERVED[64];
  volatile uint32_t EVENTS_USBDETECTED;
  volatile uint32_t EVENTS_USBREMOVED;
  volatile uint32_t EVENTS_USBPWRRDY;
  volatile const uint32_t RESERVED1[29];
  volatile uint32_t PUBLISH_USBDETECTED;
  volatile uint32_t PUBLISH_USBREMOVED;
  volatile uint32_t PUBLISH_USBPWRRDY;
  volatile const uint32_t RESERVED2[93];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[61];
  volatile const uint32_t USBREGSTATUS;
} NRF_USBREG_Type;
# 3028 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile uint32_t TASKS_PUSH_KEYSLOT;
  volatile const uint32_t RESERVED[63];
  volatile uint32_t EVENTS_KEYSLOT_PUSHED;
  volatile uint32_t EVENTS_KEYSLOT_REVOKED;

  volatile uint32_t EVENTS_KEYSLOT_ERROR;

  volatile const uint32_t RESERVED1[125];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t INTPEND;
  volatile const uint32_t RESERVED2[63];
  volatile const uint32_t STATUS;
  volatile const uint32_t RESERVED3[60];
  volatile uint32_t SELECTKEYSLOT;


} NRF_KMU_Type;
# 3060 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile const uint32_t RESERVED[256];
  volatile const uint32_t READY;
  volatile const uint32_t RESERVED1;
  volatile const uint32_t READYNEXT;
  volatile const uint32_t RESERVED2[62];
  volatile uint32_t CONFIG;
  volatile const uint32_t RESERVED3;
  volatile uint32_t ERASEALL;
  volatile const uint32_t RESERVED4[3];
  volatile uint32_t ERASEPAGEPARTIALCFG;
  volatile const uint32_t RESERVED5[8];
  volatile uint32_t ICACHECNF;
  volatile const uint32_t RESERVED6;
  volatile uint32_t IHIT;
  volatile uint32_t IMISS;
  volatile const uint32_t RESERVED7[13];
  volatile uint32_t CONFIGNS;
  volatile uint32_t WRITEUICRNS;
} NRF_NVMC_Type;
# 3092 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile const uint32_t RESERVED;
  volatile uint32_t OUT;
  volatile uint32_t OUTSET;
  volatile uint32_t OUTCLR;
  volatile const uint32_t IN;
  volatile uint32_t DIR;
  volatile uint32_t DIRSET;
  volatile uint32_t DIRCLR;
  volatile uint32_t LATCH;


  volatile uint32_t DETECTMODE;

  volatile uint32_t DETECTMODE_SEC;

  volatile const uint32_t RESERVED1[117];
  volatile uint32_t PIN_CNF[32];

} NRF_GPIO_Type;
# 3124 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile const uint32_t RESERVED[320];
  volatile uint32_t ENABLE;
} NRF_CRYPTOCELL_Type;
# 3140 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf5340_application.h"
typedef struct {
  volatile const uint32_t RESERVED[384];
  volatile VMC_RAM_Type RAM[8];
} NRF_VMC_Type;
# 53 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1\\main.c" 2

# 1 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf.h" 1
# 185 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf.h"
# 1 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include/nrf5340_application_bitfields.h" 1
# 186 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf.h" 2
# 200 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf.h"
# 1 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include/compiler_abstraction.h" 1
# 160 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include/compiler_abstraction.h"
    static inline unsigned int gcc_current_sp(void)
    {
        unsigned int stack_pointer = 0;
        __asm__ __volatile__ ("mov %0, sp" : "=r"(stack_pointer));
        return stack_pointer;
    }
# 201 "C:/Users/Devan/Documents/SEGGER Embedded Studio for ARM Projects/Executable_1/nRF/Device/Include\\nrf.h" 2
# 55 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1\\main.c" 2
# 1 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_nn_tables.h" 1
# 32 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_nn_tables.h"
# 1 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h" 1
# 354 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wunused-parameter"
# 390 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
# 1 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/cmsis_compiler.h" 1
# 391 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h" 2




# 1 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 1 3
# 90 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
void *memcpy(void *__s1, const void *__s2, size_t __n);
# 105 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
void *memcpy_fast(void *__s1, const void *__s2, size_t __n);
# 124 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
void *memccpy(void *__s1, const void *__s2, int __c, size_t __n);
# 138 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
void *mempcpy(void *__s1, const void *__s2, size_t __n);
# 153 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
void *memmove(void *__s1, const void *__s2, size_t __n);
# 164 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
int memcmp(const void *__s1, const void *__s2, size_t __n);
# 178 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
void *memchr(const void *__s, int __c, size_t __n);
# 188 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
void *memset(void *__s, int __c, size_t __n);
# 199 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
char *strcpy(char *__s1, const char *__s2);
# 219 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
char *strncpy(char *__s1, const char *__s2, size_t __n);
# 236 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
size_t strlcpy(char *__s1, const char *__s2, size_t __n);
# 249 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
char *strcat(char *__s1, const char *__s2);
# 263 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
char *strncat(char *__s1, const char *__s2, size_t __n);
# 284 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
size_t strlcat(char *__s1, const char *__s2, size_t __n);
# 294 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
int strcmp(const char *__s1, const char *__s2);
# 307 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
int strncmp(const char *__s1, const char *__s2, size_t __n);
# 319 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
int strcasecmp(const char *__s1, const char *__s2);
# 334 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
int strncasecmp(const char *__s1, const char *__s2, size_t __n);
# 346 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
char *strchr(const char *__s, int __c);
# 358 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
char *strnchr(const char *__str, size_t __n, int __ch);
# 369 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
size_t strcspn(const char *__s1, const char *__s2);
# 380 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
char *strpbrk(const char *__s1, const char *__s2);
# 392 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
char *strrchr(const char *__s, int __c);
# 403 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
size_t strspn(const char *__s1, const char *__s2);
# 416 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
char *strstr(const char *__s1, const char *__s2);
# 431 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
char *strnstr(const char *__s1, const char *__s2, size_t __n);
# 446 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
char *strcasestr(const char *__s1, const char *__s2);
# 462 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
char *strncasestr(const char *__s1, const char *__s2, size_t __n);







size_t strlen(const char *__s);
# 481 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
size_t strnlen(const char *__s, size_t __n);
# 515 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
char *strtok(char *__s1, const char *__s2);
# 534 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
char *strsep(char **__stringp, const char *__delim);
# 547 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
char *strtok_r(char *__s1, const char *__s2, char **__s3);
# 561 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
char *strdup(const char *__s1);
# 579 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
char *strndup(const char *__s1, size_t __n);
# 592 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\string.h" 3
char *strerror(int __num);



int strcoll(const char *__str1, const char *__str2);
size_t strxfrm( char *__str1, const char *__str2, size_t __num);
# 396 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h" 2
# 1 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 1 3
# 99 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
int __float32_isinf(float);
int __float64_isinf(double);
int __float32_isnan(float);
int __float64_isnan(double);
int __float32_isfinite(float);
int __float64_isfinite(double);
int __float32_isnormal(float);
int __float64_isnormal(double);
int __float32_signbit(float);
int __float64_signbit(double);
int __float32_classify(float);
int __float64_classify(double);
# 261 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
typedef float float_t;
typedef double double_t;
# 274 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
float cosf(float __x);
# 293 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double cos(double __x);
# 305 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
float sinf(float __x);
# 324 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double sin(double __x);
# 337 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
float tanf(float __x);
# 356 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double tan(double __x);
# 370 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
float acosf(float __x);
# 390 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double acos(double __x);
# 405 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
float asinf(float __x);
# 426 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double asin(double __x);
# 436 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
float atanf(float __x);
# 451 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double atan(double __x);
# 475 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
float atan2f(float __y, float __x);
# 505 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double atan2(double __y, double __x);
# 524 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
float frexpf(float __x, int *__exp);
# 549 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double frexp(double __x, int *__exp);
# 565 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
float ldexpf(float __x, int __exp);
# 586 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double ldexp(double __x, int __exp);
# 608 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
float scalbnf(float __x, int __exp);
# 635 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double scalbn(double __x, int __exp);
# 651 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
float logf(float __x);
# 673 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double log(double __x);
# 689 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
float log10f(float __x);
# 711 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double log10(double __x);
# 730 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
float fmodf(float __x, float __y);
# 755 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double fmod(double __x, double __y);
# 768 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
float modff(float __x, float *__iptr);
# 787 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double modf(double __x, double *__iptr);
# 819 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
float powf(float __x, float __y);
# 857 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double pow(double __x, double __y);
# 873 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
float sqrtf(float __x);
# 895 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double sqrt(double __x);







float cbrtf(float __x);
# 917 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double cbrt(double __x);
# 928 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
float ceilf(float __x);
# 946 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double ceil(double __x);







float fabsf(float __x);
# 968 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double fabs(double __x);
# 979 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
float fminf(float __x, float __y);
# 996 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double fmin(double __x, double __y);
# 1007 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
float fmaxf(float __x, float __y);
# 1024 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double fmax(double __x, double __y);
# 1035 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
float floorf(float);
# 1052 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double floor(double);
# 1066 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
float hypotf(float __x, float __y);
# 1086 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double hypot(double __x, double __y);
# 1100 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
float coshf(float __x);
# 1120 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double cosh(double __x);
# 1133 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
float sinhf(float __x);
# 1152 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double sinh(double __x);
# 1163 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
float tanhf(float __x);
# 1180 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double tanh(double __x);
# 1194 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
float expf(float __x);
# 1214 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double exp(double __x);
# 1229 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
float acoshf(float __x);
# 1251 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double acosh(double __x);
# 1264 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
float asinhf(float __x);
# 1284 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double asinh(double __x);
# 1297 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
float atanhf(float __x);
# 1319 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double atanh(double __x);







float fmaf(float __x, float __y, float __z);
# 1341 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double fma(double __x, double __y, double __z);







float copysignf(float __x, float __y);
# 1363 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double copysign(double __x, double __y);







float erff(float __x);
# 1385 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double erf(double __x);







float erfcf(float __x);
# 1407 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double erfc(double __x);







float exp2f(float __x);
# 1429 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double exp2(double __x);







float expm1f(float __x);
# 1451 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double expm1(double __x);







float fdimf(float __x, float __y);
# 1473 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double fdim(double __x, double __y);







int ilogbf(float __x);
# 1496 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
int ilogb(double __x);







float lgammaf(float __x);
# 1518 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double lgamma(double __x);







long long int llrintf(float __x);
# 1540 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
long long int llrint(double __x);







long long int llroundf(float __x);
# 1562 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
long long int llround(double __x);







float log1pf(float __x);
# 1584 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double log1p(double __x);







float log2f(float __x);
# 1606 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double log2(double __x);







float logbf(float __x);
# 1628 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double logb(double __x);






long int lrintf(float __x);
# 1649 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
long int lrint(double __x);







long int lroundf(float __x);
# 1671 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
long int lround(double __x);







float nearbyintf(float);
# 1693 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double nearbyint(double);







float nextafterf(float __x, float __y);
# 1715 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double nextafter(double __x, double __y);







float remainderf(float numer, float denom);
# 1737 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double remainder(double numer, double denom);







float remquof(float numer, float denom, int *quot);
# 1759 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double remquo(double numer, double denom, int *quot);







float rintf(float __x);
# 1781 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double rint(double __x);







float roundf(float __x);
# 1803 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double round(double __x);







float scalblnf(float __x, long int __exp);
# 1825 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double scalbln(double __x, long int __exp);







float tgammaf(float __x);
# 1847 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double tgamma(double __x);







float truncf(float __x);
# 1869 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\math.h" 3
double trunc(double __x);
# 397 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h" 2
# 1 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\float.h" 1 3
# 398 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h" 2
# 1 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include\\limits.h" 1 3
# 399 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h" 2
# 507 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  typedef enum
  {
    ARM_MATH_SUCCESS = 0,
    ARM_MATH_ARGUMENT_ERROR = -1,
    ARM_MATH_LENGTH_ERROR = -2,
    ARM_MATH_SIZE_MISMATCH = -3,
    ARM_MATH_NANINF = -4,
    ARM_MATH_SINGULAR = -5,
    ARM_MATH_TEST_FAILURE = -6
  } arm_status;




  typedef int8_t q7_t;




  typedef int16_t q15_t;




  typedef int32_t q31_t;




  typedef int64_t q63_t;




  typedef float float32_t;




  typedef double float64_t;
# 903 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
__attribute__((always_inline)) static inline q31_t read_q15x2 (
  q15_t * pQ15)
{
  q31_t val;


  memcpy (&val, pQ15, 4);




  return (val);
}






__attribute__((always_inline)) static inline q31_t read_q15x2_ia (
  q15_t ** pQ15)
{
  q31_t val;


  memcpy (&val, *pQ15, 4);




 *pQ15 += 2;
 return (val);
}






__attribute__((always_inline)) static inline q31_t read_q15x2_da (
  q15_t ** pQ15)
{
  q31_t val;


  memcpy (&val, *pQ15, 4);




  *pQ15 -= 2;
  return (val);
}







__attribute__((always_inline)) static inline void write_q15x2_ia (
  q15_t ** pQ15,
  q31_t value)
{
  q31_t val = value;

  memcpy (*pQ15, &val, 4);





 *pQ15 += 2;
}







__attribute__((always_inline)) static inline void write_q15x2 (
  q15_t * pQ15,
  q31_t value)
{
  q31_t val = value;


  memcpy (pQ15, &val, 4);




}







__attribute__((always_inline)) static inline q31_t read_q7x4_ia (
  q7_t ** pQ7)
{
  q31_t val;



  memcpy (&val, *pQ7, 4);




  *pQ7 += 4;

  return (val);
}






__attribute__((always_inline)) static inline q31_t read_q7x4_da (
  q7_t ** pQ7)
{
  q31_t val;

  memcpy (&val, *pQ7, 4);



  *pQ7 -= 4;

  return (val);
}







__attribute__((always_inline)) static inline void write_q7x4_ia (
  q7_t ** pQ7,
  q31_t value)
{
  q31_t val = value;

  memcpy (*pQ7, &val, 4);







  *pQ7 += 4;
}
# 1157 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  __attribute__((always_inline)) static inline q31_t clip_q63_to_q31(
  q63_t x)
  {
    return ((q31_t) (x >> 32) != ((q31_t) x >> 31)) ?
      ((0x7FFFFFFF ^ ((q31_t) (x >> 63)))) : (q31_t) x;
  }




  __attribute__((always_inline)) static inline q15_t clip_q63_to_q15(
  q63_t x)
  {
    return ((q31_t) (x >> 32) != ((q31_t) x >> 31)) ?
      ((0x7FFF ^ ((q15_t) (x >> 63)))) : (q15_t) (x >> 15);
  }




  __attribute__((always_inline)) static inline q7_t clip_q31_to_q7(
  q31_t x)
  {
    return ((q31_t) (x >> 24) != ((q31_t) x >> 23)) ?
      ((0x7F ^ ((q7_t) (x >> 31)))) : (q7_t) x;
  }




  __attribute__((always_inline)) static inline q15_t clip_q31_to_q15(
  q31_t x)
  {
    return ((q31_t) (x >> 16) != ((q31_t) x >> 15)) ?
      ((0x7FFF ^ ((q15_t) (x >> 31)))) : (q15_t) x;
  }




  __attribute__((always_inline)) static inline q63_t mult32x64(
  q63_t x,
  q31_t y)
  {
    return ((((q63_t) (x & 0x00000000FFFFFFFF) * y) >> 32) +
            (((q63_t) (x >> 32) * y) ) );
  }




  __attribute__((always_inline)) static inline uint32_t arm_recip_q31(
        q31_t in,
        q31_t * dst,
  const q31_t * pRecipTable)
  {
    q31_t out;
    uint32_t tempVal;
    uint32_t index, i;
    uint32_t signBits;

    if (in > 0)
    {
      signBits = ((uint32_t) ((uint8_t)__builtin_clz( in) - 1));
    }
    else
    {
      signBits = ((uint32_t) ((uint8_t)__builtin_clz(-in) - 1));
    }


    in = (in << signBits);


    index = (uint32_t)(in >> 24);
    index = (index & 0x0000003F);


    out = pRecipTable[index];



    for (i = 0U; i < 2U; i++)
    {
      tempVal = (uint32_t) (((q63_t) in * out) >> 31);
      tempVal = 0x7FFFFFFFu - tempVal;


      out = clip_q63_to_q31(((q63_t) out * tempVal) >> 30);
    }


    *dst = out;


    return (signBits + 1U);
  }





  __attribute__((always_inline)) static inline uint32_t arm_recip_q15(
        q15_t in,
        q15_t * dst,
  const q15_t * pRecipTable)
  {
    q15_t out = 0;
    uint32_t tempVal = 0;
    uint32_t index = 0, i = 0;
    uint32_t signBits = 0;

    if (in > 0)
    {
      signBits = ((uint32_t)((uint8_t)__builtin_clz( in) - 17));
    }
    else
    {
      signBits = ((uint32_t)((uint8_t)__builtin_clz(-in) - 17));
    }


    in = (in << signBits);


    index = (uint32_t)(in >> 8);
    index = (index & 0x0000003F);


    out = pRecipTable[index];



    for (i = 0U; i < 2U; i++)
    {
      tempVal = (uint32_t) (((q31_t) in * out) >> 15);
      tempVal = 0x7FFFu - tempVal;

      out = (q15_t) (((q31_t) out * tempVal) >> 14);

    }


    *dst = out;


    return (signBits + 1);
  }
# 1313 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
static inline float32_t arm_exponent_f32(float32_t x, int32_t nb)
{
    float32_t r = x;
    nb --;
    while(nb > 0)
    {
        r = r * x;
        nb--;
    }
    return(r);
}







static inline void arm_norm_64_to_32u(uint64_t in, int32_t * normalized, int32_t *norm)
{
    int32_t n1;
    int32_t hi = (int32_t) (in >> 32);
    int32_t lo = (int32_t) ((in << 32) >> 32);

    n1 = (uint8_t)__builtin_clz(hi) - 32;
    if (!n1)
    {



        n1 = (uint8_t)__builtin_clz(lo);
        if (!n1)
        {



            *norm = -1;
            *normalized = (((uint32_t) lo) >> 1);
        } else
        {
            if (n1 == 32)
            {



                *norm = 0;
                *normalized = 0;
            } else
            {



                *norm = n1 - 1;
                *normalized = lo << *norm;
            }
        }
    } else
    {



        n1 = 1 - n1;
        *norm = -n1;



        *normalized = (((uint32_t) lo) >> n1) | (hi << (32 - n1));
    }
}

static inline q31_t arm_div_q63_to_q31(q63_t num, q31_t den)
{
    q31_t result;
    uint64_t absNum;
    int32_t normalized;
    int32_t norm;





    absNum = num > 0 ? num : -num;
    arm_norm_64_to_32u(absNum, &normalized, &norm);
    if (norm > 0)



        result = (q31_t) num / den;
    else



        result = (q31_t) (num / den);

    return result;
}
# 1749 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  typedef struct
  {
          uint16_t numTaps;
          q7_t *pState;
    const q7_t *pCoeffs;
  } arm_fir_instance_q7;




  typedef struct
  {
          uint16_t numTaps;
          q15_t *pState;
    const q15_t *pCoeffs;
  } arm_fir_instance_q15;




  typedef struct
  {
          uint16_t numTaps;
          q31_t *pState;
    const q31_t *pCoeffs;
  } arm_fir_instance_q31;




  typedef struct
  {
          uint16_t numTaps;
          float32_t *pState;
    const float32_t *pCoeffs;
  } arm_fir_instance_f32;
# 1793 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_q7(
  const arm_fir_instance_q7 * S,
  const q7_t * pSrc,
        q7_t * pDst,
        uint32_t blockSize);
# 1807 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_init_q7(
        arm_fir_instance_q7 * S,
        uint16_t numTaps,
  const q7_t * pCoeffs,
        q7_t * pState,
        uint32_t blockSize);
# 1821 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_q15(
  const arm_fir_instance_q15 * S,
  const q15_t * pSrc,
        q15_t * pDst,
        uint32_t blockSize);
# 1834 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_fast_q15(
  const arm_fir_instance_q15 * S,
  const q15_t * pSrc,
        q15_t * pDst,
        uint32_t blockSize);
# 1851 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  arm_status arm_fir_init_q15(
        arm_fir_instance_q15 * S,
        uint16_t numTaps,
  const q15_t * pCoeffs,
        q15_t * pState,
        uint32_t blockSize);
# 1865 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_q31(
  const arm_fir_instance_q31 * S,
  const q31_t * pSrc,
        q31_t * pDst,
        uint32_t blockSize);
# 1878 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_fast_q31(
  const arm_fir_instance_q31 * S,
  const q31_t * pSrc,
        q31_t * pDst,
        uint32_t blockSize);
# 1892 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_init_q31(
        arm_fir_instance_q31 * S,
        uint16_t numTaps,
  const q31_t * pCoeffs,
        q31_t * pState,
        uint32_t blockSize);
# 1906 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_f32(
  const arm_fir_instance_f32 * S,
  const float32_t * pSrc,
        float32_t * pDst,
        uint32_t blockSize);
# 1920 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_init_f32(
        arm_fir_instance_f32 * S,
        uint16_t numTaps,
  const float32_t * pCoeffs,
        float32_t * pState,
        uint32_t blockSize);




  typedef struct
  {
          int8_t numStages;
          q15_t *pState;
    const q15_t *pCoeffs;
          int8_t postShift;
  } arm_biquad_casd_df1_inst_q15;




  typedef struct
  {
          uint32_t numStages;
          q31_t *pState;
    const q31_t *pCoeffs;
          uint8_t postShift;
  } arm_biquad_casd_df1_inst_q31;




  typedef struct
  {
          uint32_t numStages;
          float32_t *pState;
    const float32_t *pCoeffs;
  } arm_biquad_casd_df1_inst_f32;
# 1976 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_biquad_cascade_df1_q15(
  const arm_biquad_casd_df1_inst_q15 * S,
  const q15_t * pSrc,
        q15_t * pDst,
        uint32_t blockSize);
# 1990 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_biquad_cascade_df1_init_q15(
        arm_biquad_casd_df1_inst_q15 * S,
        uint8_t numStages,
  const q15_t * pCoeffs,
        q15_t * pState,
        int8_t postShift);
# 2004 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_biquad_cascade_df1_fast_q15(
  const arm_biquad_casd_df1_inst_q15 * S,
  const q15_t * pSrc,
        q15_t * pDst,
        uint32_t blockSize);
# 2017 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_biquad_cascade_df1_q31(
  const arm_biquad_casd_df1_inst_q31 * S,
  const q31_t * pSrc,
        q31_t * pDst,
        uint32_t blockSize);
# 2030 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_biquad_cascade_df1_fast_q31(
  const arm_biquad_casd_df1_inst_q31 * S,
  const q31_t * pSrc,
        q31_t * pDst,
        uint32_t blockSize);
# 2044 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_biquad_cascade_df1_init_q31(
        arm_biquad_casd_df1_inst_q31 * S,
        uint8_t numStages,
  const q31_t * pCoeffs,
        q31_t * pState,
        int8_t postShift);
# 2058 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_biquad_cascade_df1_f32(
  const arm_biquad_casd_df1_inst_f32 * S,
  const float32_t * pSrc,
        float32_t * pDst,
        uint32_t blockSize);
# 2081 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_biquad_cascade_df1_init_f32(
        arm_biquad_casd_df1_inst_f32 * S,
        uint8_t numStages,
  const float32_t * pCoeffs,
        float32_t * pState);
# 2096 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_and_u16(
    const uint16_t * pSrcA,
    const uint16_t * pSrcB,
          uint16_t * pDst,
          uint32_t blockSize);
# 2110 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_and_u32(
    const uint32_t * pSrcA,
    const uint32_t * pSrcB,
          uint32_t * pDst,
          uint32_t blockSize);
# 2124 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_and_u8(
    const uint8_t * pSrcA,
    const uint8_t * pSrcB,
          uint8_t * pDst,
          uint32_t blockSize);
# 2138 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_or_u16(
    const uint16_t * pSrcA,
    const uint16_t * pSrcB,
          uint16_t * pDst,
          uint32_t blockSize);
# 2152 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_or_u32(
    const uint32_t * pSrcA,
    const uint32_t * pSrcB,
          uint32_t * pDst,
          uint32_t blockSize);
# 2166 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_or_u8(
    const uint8_t * pSrcA,
    const uint8_t * pSrcB,
          uint8_t * pDst,
          uint32_t blockSize);
# 2179 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_not_u16(
    const uint16_t * pSrc,
          uint16_t * pDst,
          uint32_t blockSize);
# 2191 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_not_u32(
    const uint32_t * pSrc,
          uint32_t * pDst,
          uint32_t blockSize);
# 2203 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_not_u8(
    const uint8_t * pSrc,
          uint8_t * pDst,
          uint32_t blockSize);
# 2216 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_xor_u16(
    const uint16_t * pSrcA,
    const uint16_t * pSrcB,
          uint16_t * pDst,
          uint32_t blockSize);
# 2230 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_xor_u32(
    const uint32_t * pSrcA,
    const uint32_t * pSrcB,
          uint32_t * pDst,
          uint32_t blockSize);
# 2244 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_xor_u8(
    const uint8_t * pSrcA,
    const uint8_t * pSrcB,
          uint8_t * pDst,
    uint32_t blockSize);




  typedef enum
  {
    ARM_SORT_BITONIC = 0,

    ARM_SORT_BUBBLE = 1,

    ARM_SORT_HEAP = 2,

    ARM_SORT_INSERTION = 3,

    ARM_SORT_QUICK = 4,

    ARM_SORT_SELECTION = 5

  } arm_sort_alg;




  typedef enum
  {
    ARM_SORT_DESCENDING = 0,

    ARM_SORT_ASCENDING = 1

  } arm_sort_dir;




  typedef struct
  {
    arm_sort_alg alg;
    arm_sort_dir dir;
  } arm_sort_instance_f32;







  void arm_sort_f32(
    const arm_sort_instance_f32 * S,
          float32_t * pSrc,
          float32_t * pDst,
          uint32_t blockSize);






  void arm_sort_init_f32(
    arm_sort_instance_f32 * S,
    arm_sort_alg alg,
    arm_sort_dir dir);




  typedef struct
  {
    arm_sort_dir dir;
    float32_t * buffer;
  } arm_merge_sort_instance_f32;







  void arm_merge_sort_f32(
    const arm_merge_sort_instance_f32 * S,
          float32_t *pSrc,
          float32_t *pDst,
          uint32_t blockSize);






  void arm_merge_sort_init_f32(
    arm_merge_sort_instance_f32 * S,
    arm_sort_dir dir,
    float32_t * buffer);




  typedef enum
  {
    ARM_SPLINE_NATURAL = 0,
    ARM_SPLINE_PARABOLIC_RUNOUT = 1
  } arm_spline_type;




  typedef struct
  {
    arm_spline_type type;
    const float32_t * x;
    const float32_t * y;
    uint32_t n_x;
    float32_t * coeffs;
  } arm_spline_instance_f32;
# 2370 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_spline_f32(
        arm_spline_instance_f32 * S,
  const float32_t * xq,
        float32_t * pDst,
        uint32_t blockSize);
# 2386 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_spline_init_f32(
          arm_spline_instance_f32 * S,
          arm_spline_type type,
    const float32_t * x,
    const float32_t * y,
          uint32_t n,
          float32_t * coeffs,
          float32_t * tempBuffer);




  typedef struct
  {
    uint16_t numRows;
    uint16_t numCols;
    float32_t *pData;
  } arm_matrix_instance_f32;




  typedef struct
  {
    uint16_t numRows;
    uint16_t numCols;
    float64_t *pData;
  } arm_matrix_instance_f64;




  typedef struct
  {
    uint16_t numRows;
    uint16_t numCols;
    q15_t *pData;
  } arm_matrix_instance_q15;




  typedef struct
  {
    uint16_t numRows;
    uint16_t numCols;
    q31_t *pData;
  } arm_matrix_instance_q31;
# 2443 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
arm_status arm_mat_add_f32(
  const arm_matrix_instance_f32 * pSrcA,
  const arm_matrix_instance_f32 * pSrcB,
        arm_matrix_instance_f32 * pDst);
# 2456 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
arm_status arm_mat_add_q15(
  const arm_matrix_instance_q15 * pSrcA,
  const arm_matrix_instance_q15 * pSrcB,
        arm_matrix_instance_q15 * pDst);
# 2469 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
arm_status arm_mat_add_q31(
  const arm_matrix_instance_q31 * pSrcA,
  const arm_matrix_instance_q31 * pSrcB,
        arm_matrix_instance_q31 * pDst);
# 2482 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
arm_status arm_mat_cmplx_mult_f32(
  const arm_matrix_instance_f32 * pSrcA,
  const arm_matrix_instance_f32 * pSrcB,
        arm_matrix_instance_f32 * pDst);
# 2495 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
arm_status arm_mat_cmplx_mult_q15(
  const arm_matrix_instance_q15 * pSrcA,
  const arm_matrix_instance_q15 * pSrcB,
        arm_matrix_instance_q15 * pDst,
        q15_t * pScratch);
# 2509 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
arm_status arm_mat_cmplx_mult_q31(
  const arm_matrix_instance_q31 * pSrcA,
  const arm_matrix_instance_q31 * pSrcB,
        arm_matrix_instance_q31 * pDst);
# 2521 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
arm_status arm_mat_trans_f32(
  const arm_matrix_instance_f32 * pSrc,
        arm_matrix_instance_f32 * pDst);
# 2532 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
arm_status arm_mat_trans_q15(
  const arm_matrix_instance_q15 * pSrc,
        arm_matrix_instance_q15 * pDst);
# 2543 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
arm_status arm_mat_trans_q31(
  const arm_matrix_instance_q31 * pSrc,
        arm_matrix_instance_q31 * pDst);
# 2555 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
arm_status arm_mat_mult_f32(
  const arm_matrix_instance_f32 * pSrcA,
  const arm_matrix_instance_f32 * pSrcB,
        arm_matrix_instance_f32 * pDst);
# 2569 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
arm_status arm_mat_mult_q15(
  const arm_matrix_instance_q15 * pSrcA,
  const arm_matrix_instance_q15 * pSrcB,
        arm_matrix_instance_q15 * pDst,
        q15_t * pState);
# 2584 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
arm_status arm_mat_mult_fast_q15(
  const arm_matrix_instance_q15 * pSrcA,
  const arm_matrix_instance_q15 * pSrcB,
        arm_matrix_instance_q15 * pDst,
        q15_t * pState);
# 2598 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
arm_status arm_mat_mult_q31(
  const arm_matrix_instance_q31 * pSrcA,
  const arm_matrix_instance_q31 * pSrcB,
        arm_matrix_instance_q31 * pDst);
# 2611 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
arm_status arm_mat_mult_fast_q31(
  const arm_matrix_instance_q31 * pSrcA,
  const arm_matrix_instance_q31 * pSrcB,
        arm_matrix_instance_q31 * pDst);
# 2624 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
arm_status arm_mat_sub_f32(
  const arm_matrix_instance_f32 * pSrcA,
  const arm_matrix_instance_f32 * pSrcB,
        arm_matrix_instance_f32 * pDst);
# 2637 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
arm_status arm_mat_sub_q15(
  const arm_matrix_instance_q15 * pSrcA,
  const arm_matrix_instance_q15 * pSrcB,
        arm_matrix_instance_q15 * pDst);
# 2650 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
arm_status arm_mat_sub_q31(
  const arm_matrix_instance_q31 * pSrcA,
  const arm_matrix_instance_q31 * pSrcB,
        arm_matrix_instance_q31 * pDst);
# 2663 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
arm_status arm_mat_scale_f32(
  const arm_matrix_instance_f32 * pSrc,
        float32_t scale,
        arm_matrix_instance_f32 * pDst);
# 2677 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
arm_status arm_mat_scale_q15(
  const arm_matrix_instance_q15 * pSrc,
        q15_t scaleFract,
        int32_t shift,
        arm_matrix_instance_q15 * pDst);
# 2692 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
arm_status arm_mat_scale_q31(
  const arm_matrix_instance_q31 * pSrc,
        q31_t scaleFract,
        int32_t shift,
        arm_matrix_instance_q31 * pDst);
# 2705 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
void arm_mat_init_q31(
        arm_matrix_instance_q31 * S,
        uint16_t nRows,
        uint16_t nColumns,
        q31_t * pData);
# 2718 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
void arm_mat_init_q15(
        arm_matrix_instance_q15 * S,
        uint16_t nRows,
        uint16_t nColumns,
        q15_t * pData);
# 2731 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
void arm_mat_init_f32(
        arm_matrix_instance_f32 * S,
        uint16_t nRows,
        uint16_t nColumns,
        float32_t * pData);





  typedef struct
  {
          q15_t A0;




          q31_t A1;

          q15_t state[3];
          q15_t Kp;
          q15_t Ki;
          q15_t Kd;
  } arm_pid_instance_q15;




  typedef struct
  {
          q31_t A0;
          q31_t A1;
          q31_t A2;
          q31_t state[3];
          q31_t Kp;
          q31_t Ki;
          q31_t Kd;
  } arm_pid_instance_q31;




  typedef struct
  {
          float32_t A0;
          float32_t A1;
          float32_t A2;
          float32_t state[3];
          float32_t Kp;
          float32_t Ki;
          float32_t Kd;
  } arm_pid_instance_f32;
# 2791 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_pid_init_f32(
        arm_pid_instance_f32 * S,
        int32_t resetStateFlag);






  void arm_pid_reset_f32(
        arm_pid_instance_f32 * S);







  void arm_pid_init_q31(
        arm_pid_instance_q31 * S,
        int32_t resetStateFlag);







  void arm_pid_reset_q31(
        arm_pid_instance_q31 * S);







  void arm_pid_init_q15(
        arm_pid_instance_q15 * S,
        int32_t resetStateFlag);






  void arm_pid_reset_q15(
        arm_pid_instance_q15 * S);





  typedef struct
  {
          uint32_t nValues;
          float32_t x1;
          float32_t xSpacing;
          float32_t *pYData;
  } arm_linear_interp_instance_f32;




  typedef struct
  {
          uint16_t numRows;
          uint16_t numCols;
          float32_t *pData;
  } arm_bilinear_interp_instance_f32;




  typedef struct
  {
          uint16_t numRows;
          uint16_t numCols;
          q31_t *pData;
  } arm_bilinear_interp_instance_q31;




  typedef struct
  {
          uint16_t numRows;
          uint16_t numCols;
          q15_t *pData;
  } arm_bilinear_interp_instance_q15;




  typedef struct
  {
          uint16_t numRows;
          uint16_t numCols;
          q7_t *pData;
  } arm_bilinear_interp_instance_q7;
# 2900 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_mult_q7(
  const q7_t * pSrcA,
  const q7_t * pSrcB,
        q7_t * pDst,
        uint32_t blockSize);
# 2914 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_mult_q15(
  const q15_t * pSrcA,
  const q15_t * pSrcB,
        q15_t * pDst,
        uint32_t blockSize);
# 2928 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_mult_q31(
  const q31_t * pSrcA,
  const q31_t * pSrcB,
        q31_t * pDst,
        uint32_t blockSize);
# 2942 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_mult_f32(
  const float32_t * pSrcA,
  const float32_t * pSrcB,
        float32_t * pDst,
        uint32_t blockSize);





  typedef struct
  {
          uint16_t fftLen;
          uint8_t ifftFlag;
          uint8_t bitReverseFlag;
    const q15_t *pTwiddle;
    const uint16_t *pBitRevTable;
          uint16_t twidCoefModifier;
          uint16_t bitRevFactor;
  } arm_cfft_radix2_instance_q15;


  arm_status arm_cfft_radix2_init_q15(
        arm_cfft_radix2_instance_q15 * S,
        uint16_t fftLen,
        uint8_t ifftFlag,
        uint8_t bitReverseFlag);


  void arm_cfft_radix2_q15(
  const arm_cfft_radix2_instance_q15 * S,
        q15_t * pSrc);





  typedef struct
  {
          uint16_t fftLen;
          uint8_t ifftFlag;
          uint8_t bitReverseFlag;
    const q15_t *pTwiddle;
    const uint16_t *pBitRevTable;
          uint16_t twidCoefModifier;
          uint16_t bitRevFactor;
  } arm_cfft_radix4_instance_q15;


  arm_status arm_cfft_radix4_init_q15(
        arm_cfft_radix4_instance_q15 * S,
        uint16_t fftLen,
        uint8_t ifftFlag,
        uint8_t bitReverseFlag);


  void arm_cfft_radix4_q15(
  const arm_cfft_radix4_instance_q15 * S,
        q15_t * pSrc);




  typedef struct
  {
          uint16_t fftLen;
          uint8_t ifftFlag;
          uint8_t bitReverseFlag;
    const q31_t *pTwiddle;
    const uint16_t *pBitRevTable;
          uint16_t twidCoefModifier;
          uint16_t bitRevFactor;
  } arm_cfft_radix2_instance_q31;


  arm_status arm_cfft_radix2_init_q31(
        arm_cfft_radix2_instance_q31 * S,
        uint16_t fftLen,
        uint8_t ifftFlag,
        uint8_t bitReverseFlag);


  void arm_cfft_radix2_q31(
  const arm_cfft_radix2_instance_q31 * S,
        q31_t * pSrc);




  typedef struct
  {
          uint16_t fftLen;
          uint8_t ifftFlag;
          uint8_t bitReverseFlag;
    const q31_t *pTwiddle;
    const uint16_t *pBitRevTable;
          uint16_t twidCoefModifier;
          uint16_t bitRevFactor;
  } arm_cfft_radix4_instance_q31;


  void arm_cfft_radix4_q31(
  const arm_cfft_radix4_instance_q31 * S,
        q31_t * pSrc);


  arm_status arm_cfft_radix4_init_q31(
        arm_cfft_radix4_instance_q31 * S,
        uint16_t fftLen,
        uint8_t ifftFlag,
        uint8_t bitReverseFlag);




  typedef struct
  {
          uint16_t fftLen;
          uint8_t ifftFlag;
          uint8_t bitReverseFlag;
    const float32_t *pTwiddle;
    const uint16_t *pBitRevTable;
          uint16_t twidCoefModifier;
          uint16_t bitRevFactor;
          float32_t onebyfftLen;
  } arm_cfft_radix2_instance_f32;


  arm_status arm_cfft_radix2_init_f32(
        arm_cfft_radix2_instance_f32 * S,
        uint16_t fftLen,
        uint8_t ifftFlag,
        uint8_t bitReverseFlag);


  void arm_cfft_radix2_f32(
  const arm_cfft_radix2_instance_f32 * S,
        float32_t * pSrc);




  typedef struct
  {
          uint16_t fftLen;
          uint8_t ifftFlag;
          uint8_t bitReverseFlag;
    const float32_t *pTwiddle;
    const uint16_t *pBitRevTable;
          uint16_t twidCoefModifier;
          uint16_t bitRevFactor;
          float32_t onebyfftLen;
  } arm_cfft_radix4_instance_f32;


  arm_status arm_cfft_radix4_init_f32(
        arm_cfft_radix4_instance_f32 * S,
        uint16_t fftLen,
        uint8_t ifftFlag,
        uint8_t bitReverseFlag);


  void arm_cfft_radix4_f32(
  const arm_cfft_radix4_instance_f32 * S,
        float32_t * pSrc);




  typedef struct
  {
          uint16_t fftLen;
    const q15_t *pTwiddle;
    const uint16_t *pBitRevTable;
          uint16_t bitRevLength;
# 3125 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  } arm_cfft_instance_q15;

arm_status arm_cfft_init_q15(
  arm_cfft_instance_q15 * S,
  uint16_t fftLen);

void arm_cfft_q15(
    const arm_cfft_instance_q15 * S,
          q15_t * p1,
          uint8_t ifftFlag,
          uint8_t bitReverseFlag);




  typedef struct
  {
          uint16_t fftLen;
    const q31_t *pTwiddle;
    const uint16_t *pBitRevTable;
          uint16_t bitRevLength;
# 3154 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  } arm_cfft_instance_q31;

arm_status arm_cfft_init_q31(
  arm_cfft_instance_q31 * S,
  uint16_t fftLen);

void arm_cfft_q31(
    const arm_cfft_instance_q31 * S,
          q31_t * p1,
          uint8_t ifftFlag,
          uint8_t bitReverseFlag);




  typedef struct
  {
          uint16_t fftLen;
    const float32_t *pTwiddle;
    const uint16_t *pBitRevTable;
          uint16_t bitRevLength;
# 3183 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  } arm_cfft_instance_f32;


  arm_status arm_cfft_init_f32(
  arm_cfft_instance_f32 * S,
  uint16_t fftLen);

  void arm_cfft_f32(
  const arm_cfft_instance_f32 * S,
        float32_t * p1,
        uint8_t ifftFlag,
        uint8_t bitReverseFlag);





  typedef struct
  {
          uint16_t fftLen;
    const float64_t *pTwiddle;
    const uint16_t *pBitRevTable;
          uint16_t bitRevLength;
  } arm_cfft_instance_f64;

  void arm_cfft_f64(
  const arm_cfft_instance_f64 * S,
        float64_t * p1,
        uint8_t ifftFlag,
        uint8_t bitReverseFlag);




  typedef struct
  {
          uint32_t fftLenReal;
          uint8_t ifftFlagR;
          uint8_t bitReverseFlagR;
          uint32_t twidCoefRModifier;
    const q15_t *pTwiddleAReal;
    const q15_t *pTwiddleBReal;



    const arm_cfft_instance_q15 *pCfft;

  } arm_rfft_instance_q15;

  arm_status arm_rfft_init_q15(
        arm_rfft_instance_q15 * S,
        uint32_t fftLenReal,
        uint32_t ifftFlagR,
        uint32_t bitReverseFlag);

  void arm_rfft_q15(
  const arm_rfft_instance_q15 * S,
        q15_t * pSrc,
        q15_t * pDst);




  typedef struct
  {
          uint32_t fftLenReal;
          uint8_t ifftFlagR;
          uint8_t bitReverseFlagR;
          uint32_t twidCoefRModifier;
    const q31_t *pTwiddleAReal;
    const q31_t *pTwiddleBReal;



    const arm_cfft_instance_q31 *pCfft;

  } arm_rfft_instance_q31;

  arm_status arm_rfft_init_q31(
        arm_rfft_instance_q31 * S,
        uint32_t fftLenReal,
        uint32_t ifftFlagR,
        uint32_t bitReverseFlag);

  void arm_rfft_q31(
  const arm_rfft_instance_q31 * S,
        q31_t * pSrc,
        q31_t * pDst);




  typedef struct
  {
          uint32_t fftLenReal;
          uint16_t fftLenBy2;
          uint8_t ifftFlagR;
          uint8_t bitReverseFlagR;
          uint32_t twidCoefRModifier;
    const float32_t *pTwiddleAReal;
    const float32_t *pTwiddleBReal;
          arm_cfft_radix4_instance_f32 *pCfft;
  } arm_rfft_instance_f32;

  arm_status arm_rfft_init_f32(
        arm_rfft_instance_f32 * S,
        arm_cfft_radix4_instance_f32 * S_CFFT,
        uint32_t fftLenReal,
        uint32_t ifftFlagR,
        uint32_t bitReverseFlag);

  void arm_rfft_f32(
  const arm_rfft_instance_f32 * S,
        float32_t * pSrc,
        float32_t * pDst);




typedef struct
  {
          arm_cfft_instance_f64 Sint;
          uint16_t fftLenRFFT;
    const float64_t * pTwiddleRFFT;
  } arm_rfft_fast_instance_f64 ;

arm_status arm_rfft_fast_init_f64 (
         arm_rfft_fast_instance_f64 * S,
         uint16_t fftLen);


void arm_rfft_fast_f64(
    arm_rfft_fast_instance_f64 * S,
    float64_t * p, float64_t * pOut,
    uint8_t ifftFlag);





typedef struct
  {
          arm_cfft_instance_f32 Sint;
          uint16_t fftLenRFFT;
    const float32_t * pTwiddleRFFT;
  } arm_rfft_fast_instance_f32 ;

arm_status arm_rfft_fast_init_f32 (
         arm_rfft_fast_instance_f32 * S,
         uint16_t fftLen);


  void arm_rfft_fast_f32(
        const arm_rfft_fast_instance_f32 * S,
        float32_t * p, float32_t * pOut,
        uint8_t ifftFlag);




  typedef struct
  {
          uint16_t N;
          uint16_t Nby2;
          float32_t normalize;
    const float32_t *pTwiddle;
    const float32_t *pCosFactor;
          arm_rfft_instance_f32 *pRfft;
          arm_cfft_radix4_instance_f32 *pCfft;
  } arm_dct4_instance_f32;
# 3365 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  arm_status arm_dct4_init_f32(
        arm_dct4_instance_f32 * S,
        arm_rfft_instance_f32 * S_RFFT,
        arm_cfft_radix4_instance_f32 * S_CFFT,
        uint16_t N,
        uint16_t Nby2,
        float32_t normalize);
# 3380 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_dct4_f32(
  const arm_dct4_instance_f32 * S,
        float32_t * pState,
        float32_t * pInlineBuffer);





  typedef struct
  {
          uint16_t N;
          uint16_t Nby2;
          q31_t normalize;
    const q31_t *pTwiddle;
    const q31_t *pCosFactor;
          arm_rfft_instance_q31 *pRfft;
          arm_cfft_radix4_instance_q31 *pCfft;
  } arm_dct4_instance_q31;
# 3411 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  arm_status arm_dct4_init_q31(
        arm_dct4_instance_q31 * S,
        arm_rfft_instance_q31 * S_RFFT,
        arm_cfft_radix4_instance_q31 * S_CFFT,
        uint16_t N,
        uint16_t Nby2,
        q31_t normalize);
# 3426 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_dct4_q31(
  const arm_dct4_instance_q31 * S,
        q31_t * pState,
        q31_t * pInlineBuffer);





  typedef struct
  {
          uint16_t N;
          uint16_t Nby2;
          q15_t normalize;
    const q15_t *pTwiddle;
    const q15_t *pCosFactor;
          arm_rfft_instance_q15 *pRfft;
          arm_cfft_radix4_instance_q15 *pCfft;
  } arm_dct4_instance_q15;
# 3457 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  arm_status arm_dct4_init_q15(
        arm_dct4_instance_q15 * S,
        arm_rfft_instance_q15 * S_RFFT,
        arm_cfft_radix4_instance_q15 * S_CFFT,
        uint16_t N,
        uint16_t Nby2,
        q15_t normalize);
# 3472 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_dct4_q15(
  const arm_dct4_instance_q15 * S,
        q15_t * pState,
        q15_t * pInlineBuffer);
# 3485 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_add_f32(
  const float32_t * pSrcA,
  const float32_t * pSrcB,
        float32_t * pDst,
        uint32_t blockSize);
# 3499 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_add_q7(
  const q7_t * pSrcA,
  const q7_t * pSrcB,
        q7_t * pDst,
        uint32_t blockSize);
# 3513 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_add_q15(
  const q15_t * pSrcA,
  const q15_t * pSrcB,
        q15_t * pDst,
        uint32_t blockSize);
# 3527 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_add_q31(
  const q31_t * pSrcA,
  const q31_t * pSrcB,
        q31_t * pDst,
        uint32_t blockSize);
# 3541 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_sub_f32(
  const float32_t * pSrcA,
  const float32_t * pSrcB,
        float32_t * pDst,
        uint32_t blockSize);
# 3555 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_sub_q7(
  const q7_t * pSrcA,
  const q7_t * pSrcB,
        q7_t * pDst,
        uint32_t blockSize);
# 3569 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_sub_q15(
  const q15_t * pSrcA,
  const q15_t * pSrcB,
        q15_t * pDst,
        uint32_t blockSize);
# 3583 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_sub_q31(
  const q31_t * pSrcA,
  const q31_t * pSrcB,
        q31_t * pDst,
        uint32_t blockSize);
# 3597 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_scale_f32(
  const float32_t * pSrc,
        float32_t scale,
        float32_t * pDst,
        uint32_t blockSize);
# 3612 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_scale_q7(
  const q7_t * pSrc,
        q7_t scaleFract,
        int8_t shift,
        q7_t * pDst,
        uint32_t blockSize);
# 3628 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_scale_q15(
  const q15_t * pSrc,
        q15_t scaleFract,
        int8_t shift,
        q15_t * pDst,
        uint32_t blockSize);
# 3644 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_scale_q31(
  const q31_t * pSrc,
        q31_t scaleFract,
        int8_t shift,
        q31_t * pDst,
        uint32_t blockSize);
# 3658 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_abs_q7(
  const q7_t * pSrc,
        q7_t * pDst,
        uint32_t blockSize);
# 3670 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_abs_f32(
  const float32_t * pSrc,
        float32_t * pDst,
        uint32_t blockSize);
# 3682 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_abs_q15(
  const q15_t * pSrc,
        q15_t * pDst,
        uint32_t blockSize);
# 3694 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_abs_q31(
  const q31_t * pSrc,
        q31_t * pDst,
        uint32_t blockSize);
# 3707 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_dot_prod_f32(
  const float32_t * pSrcA,
  const float32_t * pSrcB,
        uint32_t blockSize,
        float32_t * result);
# 3721 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_dot_prod_q7(
  const q7_t * pSrcA,
  const q7_t * pSrcB,
        uint32_t blockSize,
        q31_t * result);
# 3735 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_dot_prod_q15(
  const q15_t * pSrcA,
  const q15_t * pSrcB,
        uint32_t blockSize,
        q63_t * result);
# 3749 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_dot_prod_q31(
  const q31_t * pSrcA,
  const q31_t * pSrcB,
        uint32_t blockSize,
        q63_t * result);
# 3763 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_shift_q7(
  const q7_t * pSrc,
        int8_t shiftBits,
        q7_t * pDst,
        uint32_t blockSize);
# 3777 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_shift_q15(
  const q15_t * pSrc,
        int8_t shiftBits,
        q15_t * pDst,
        uint32_t blockSize);
# 3791 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_shift_q31(
  const q31_t * pSrc,
        int8_t shiftBits,
        q31_t * pDst,
        uint32_t blockSize);
# 3805 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_offset_f32(
  const float32_t * pSrc,
        float32_t offset,
        float32_t * pDst,
        uint32_t blockSize);
# 3819 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_offset_q7(
  const q7_t * pSrc,
        q7_t offset,
        q7_t * pDst,
        uint32_t blockSize);
# 3833 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_offset_q15(
  const q15_t * pSrc,
        q15_t offset,
        q15_t * pDst,
        uint32_t blockSize);
# 3847 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_offset_q31(
  const q31_t * pSrc,
        q31_t offset,
        q31_t * pDst,
        uint32_t blockSize);
# 3860 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_negate_f32(
  const float32_t * pSrc,
        float32_t * pDst,
        uint32_t blockSize);
# 3872 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_negate_q7(
  const q7_t * pSrc,
        q7_t * pDst,
        uint32_t blockSize);
# 3884 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_negate_q15(
  const q15_t * pSrc,
        q15_t * pDst,
        uint32_t blockSize);
# 3896 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_negate_q31(
  const q31_t * pSrc,
        q31_t * pDst,
        uint32_t blockSize);
# 3908 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_copy_f32(
  const float32_t * pSrc,
        float32_t * pDst,
        uint32_t blockSize);
# 3920 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_copy_q7(
  const q7_t * pSrc,
        q7_t * pDst,
        uint32_t blockSize);
# 3932 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_copy_q15(
  const q15_t * pSrc,
        q15_t * pDst,
        uint32_t blockSize);
# 3944 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_copy_q31(
  const q31_t * pSrc,
        q31_t * pDst,
        uint32_t blockSize);
# 3956 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fill_f32(
        float32_t value,
        float32_t * pDst,
        uint32_t blockSize);
# 3968 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fill_q7(
        q7_t value,
        q7_t * pDst,
        uint32_t blockSize);
# 3980 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fill_q15(
        q15_t value,
        q15_t * pDst,
        uint32_t blockSize);
# 3992 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fill_q31(
        q31_t value,
        q31_t * pDst,
        uint32_t blockSize);
# 4006 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_conv_f32(
  const float32_t * pSrcA,
        uint32_t srcALen,
  const float32_t * pSrcB,
        uint32_t srcBLen,
        float32_t * pDst);
# 4024 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_conv_opt_q15(
  const q15_t * pSrcA,
        uint32_t srcALen,
  const q15_t * pSrcB,
        uint32_t srcBLen,
        q15_t * pDst,
        q15_t * pScratch1,
        q15_t * pScratch2);
# 4042 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_conv_q15(
  const q15_t * pSrcA,
        uint32_t srcALen,
  const q15_t * pSrcB,
        uint32_t srcBLen,
        q15_t * pDst);
# 4058 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_conv_fast_q15(
  const q15_t * pSrcA,
        uint32_t srcALen,
  const q15_t * pSrcB,
        uint32_t srcBLen,
        q15_t * pDst);
# 4076 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_conv_fast_opt_q15(
  const q15_t * pSrcA,
        uint32_t srcALen,
  const q15_t * pSrcB,
        uint32_t srcBLen,
        q15_t * pDst,
        q15_t * pScratch1,
        q15_t * pScratch2);
# 4094 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_conv_q31(
  const q31_t * pSrcA,
        uint32_t srcALen,
  const q31_t * pSrcB,
        uint32_t srcBLen,
        q31_t * pDst);
# 4110 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_conv_fast_q31(
  const q31_t * pSrcA,
        uint32_t srcALen,
  const q31_t * pSrcB,
        uint32_t srcBLen,
        q31_t * pDst);
# 4128 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_conv_opt_q7(
  const q7_t * pSrcA,
        uint32_t srcALen,
  const q7_t * pSrcB,
        uint32_t srcBLen,
        q7_t * pDst,
        q15_t * pScratch1,
        q15_t * pScratch2);
# 4146 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_conv_q7(
  const q7_t * pSrcA,
        uint32_t srcALen,
  const q7_t * pSrcB,
        uint32_t srcBLen,
        q7_t * pDst);
# 4165 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  arm_status arm_conv_partial_f32(
  const float32_t * pSrcA,
        uint32_t srcALen,
  const float32_t * pSrcB,
        uint32_t srcBLen,
        float32_t * pDst,
        uint32_t firstIndex,
        uint32_t numPoints);
# 4188 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  arm_status arm_conv_partial_opt_q15(
  const q15_t * pSrcA,
        uint32_t srcALen,
  const q15_t * pSrcB,
        uint32_t srcBLen,
        q15_t * pDst,
        uint32_t firstIndex,
        uint32_t numPoints,
        q15_t * pScratch1,
        q15_t * pScratch2);
# 4211 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  arm_status arm_conv_partial_q15(
  const q15_t * pSrcA,
        uint32_t srcALen,
  const q15_t * pSrcB,
        uint32_t srcBLen,
        q15_t * pDst,
        uint32_t firstIndex,
        uint32_t numPoints);
# 4232 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  arm_status arm_conv_partial_fast_q15(
  const q15_t * pSrcA,
        uint32_t srcALen,
  const q15_t * pSrcB,
        uint32_t srcBLen,
        q15_t * pDst,
        uint32_t firstIndex,
        uint32_t numPoints);
# 4255 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  arm_status arm_conv_partial_fast_opt_q15(
  const q15_t * pSrcA,
        uint32_t srcALen,
  const q15_t * pSrcB,
        uint32_t srcBLen,
        q15_t * pDst,
        uint32_t firstIndex,
        uint32_t numPoints,
        q15_t * pScratch1,
        q15_t * pScratch2);
# 4278 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  arm_status arm_conv_partial_q31(
  const q31_t * pSrcA,
        uint32_t srcALen,
  const q31_t * pSrcB,
        uint32_t srcBLen,
        q31_t * pDst,
        uint32_t firstIndex,
        uint32_t numPoints);
# 4299 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  arm_status arm_conv_partial_fast_q31(
  const q31_t * pSrcA,
        uint32_t srcALen,
  const q31_t * pSrcB,
        uint32_t srcBLen,
        q31_t * pDst,
        uint32_t firstIndex,
        uint32_t numPoints);
# 4322 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  arm_status arm_conv_partial_opt_q7(
  const q7_t * pSrcA,
        uint32_t srcALen,
  const q7_t * pSrcB,
        uint32_t srcBLen,
        q7_t * pDst,
        uint32_t firstIndex,
        uint32_t numPoints,
        q15_t * pScratch1,
        q15_t * pScratch2);
# 4345 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  arm_status arm_conv_partial_q7(
  const q7_t * pSrcA,
        uint32_t srcALen,
  const q7_t * pSrcB,
        uint32_t srcBLen,
        q7_t * pDst,
        uint32_t firstIndex,
        uint32_t numPoints);





  typedef struct
  {
          uint8_t M;
          uint16_t numTaps;
    const q15_t *pCoeffs;
          q15_t *pState;
  } arm_fir_decimate_instance_q15;




  typedef struct
  {
          uint8_t M;
          uint16_t numTaps;
    const q31_t *pCoeffs;
          q31_t *pState;
  } arm_fir_decimate_instance_q31;




typedef struct
  {
          uint8_t M;
          uint16_t numTaps;
    const float32_t *pCoeffs;
          float32_t *pState;
  } arm_fir_decimate_instance_f32;
# 4396 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
void arm_fir_decimate_f32(
  const arm_fir_decimate_instance_f32 * S,
  const float32_t * pSrc,
        float32_t * pDst,
        uint32_t blockSize);
# 4415 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
arm_status arm_fir_decimate_init_f32(
        arm_fir_decimate_instance_f32 * S,
        uint16_t numTaps,
        uint8_t M,
  const float32_t * pCoeffs,
        float32_t * pState,
        uint32_t blockSize);
# 4431 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_decimate_q15(
  const arm_fir_decimate_instance_q15 * S,
  const q15_t * pSrc,
        q15_t * pDst,
        uint32_t blockSize);
# 4445 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_decimate_fast_q15(
  const arm_fir_decimate_instance_q15 * S,
  const q15_t * pSrc,
        q15_t * pDst,
        uint32_t blockSize);
# 4463 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  arm_status arm_fir_decimate_init_q15(
        arm_fir_decimate_instance_q15 * S,
        uint16_t numTaps,
        uint8_t M,
  const q15_t * pCoeffs,
        q15_t * pState,
        uint32_t blockSize);
# 4479 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_decimate_q31(
  const arm_fir_decimate_instance_q31 * S,
  const q31_t * pSrc,
        q31_t * pDst,
        uint32_t blockSize);
# 4492 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_decimate_fast_q31(
  const arm_fir_decimate_instance_q31 * S,
  const q31_t * pSrc,
        q31_t * pDst,
        uint32_t blockSize);
# 4510 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  arm_status arm_fir_decimate_init_q31(
        arm_fir_decimate_instance_q31 * S,
        uint16_t numTaps,
        uint8_t M,
  const q31_t * pCoeffs,
        q31_t * pState,
        uint32_t blockSize);





  typedef struct
  {
        uint8_t L;
        uint16_t phaseLength;
  const q15_t *pCoeffs;
        q15_t *pState;
  } arm_fir_interpolate_instance_q15;




  typedef struct
  {
        uint8_t L;
        uint16_t phaseLength;
  const q31_t *pCoeffs;
        q31_t *pState;
  } arm_fir_interpolate_instance_q31;




  typedef struct
  {
        uint8_t L;
        uint16_t phaseLength;
  const float32_t *pCoeffs;
        float32_t *pState;
  } arm_fir_interpolate_instance_f32;
# 4560 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_interpolate_q15(
  const arm_fir_interpolate_instance_q15 * S,
  const q15_t * pSrc,
        q15_t * pDst,
        uint32_t blockSize);
# 4578 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  arm_status arm_fir_interpolate_init_q15(
        arm_fir_interpolate_instance_q15 * S,
        uint8_t L,
        uint16_t numTaps,
  const q15_t * pCoeffs,
        q15_t * pState,
        uint32_t blockSize);
# 4594 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_interpolate_q31(
  const arm_fir_interpolate_instance_q31 * S,
  const q31_t * pSrc,
        q31_t * pDst,
        uint32_t blockSize);
# 4612 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  arm_status arm_fir_interpolate_init_q31(
        arm_fir_interpolate_instance_q31 * S,
        uint8_t L,
        uint16_t numTaps,
  const q31_t * pCoeffs,
        q31_t * pState,
        uint32_t blockSize);
# 4628 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_interpolate_f32(
  const arm_fir_interpolate_instance_f32 * S,
  const float32_t * pSrc,
        float32_t * pDst,
        uint32_t blockSize);
# 4646 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  arm_status arm_fir_interpolate_init_f32(
        arm_fir_interpolate_instance_f32 * S,
        uint8_t L,
        uint16_t numTaps,
  const float32_t * pCoeffs,
        float32_t * pState,
        uint32_t blockSize);





  typedef struct
  {
          uint8_t numStages;
          q63_t *pState;
    const q31_t *pCoeffs;
          uint8_t postShift;
  } arm_biquad_cas_df1_32x64_ins_q31;
# 4673 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_biquad_cas_df1_32x64_q31(
  const arm_biquad_cas_df1_32x64_ins_q31 * S,
  const q31_t * pSrc,
        q31_t * pDst,
        uint32_t blockSize);
# 4687 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_biquad_cas_df1_32x64_init_q31(
        arm_biquad_cas_df1_32x64_ins_q31 * S,
        uint8_t numStages,
  const q31_t * pCoeffs,
        q63_t * pState,
        uint8_t postShift);





  typedef struct
  {
          uint8_t numStages;
          float32_t *pState;
    const float32_t *pCoeffs;
  } arm_biquad_cascade_df2T_instance_f32;




  typedef struct
  {
          uint8_t numStages;
          float32_t *pState;
    const float32_t *pCoeffs;
  } arm_biquad_cascade_stereo_df2T_instance_f32;




  typedef struct
  {
          uint8_t numStages;
          float64_t *pState;
    const float64_t *pCoeffs;
  } arm_biquad_cascade_df2T_instance_f64;
# 4733 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_biquad_cascade_df2T_f32(
  const arm_biquad_cascade_df2T_instance_f32 * S,
  const float32_t * pSrc,
        float32_t * pDst,
        uint32_t blockSize);
# 4747 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_biquad_cascade_stereo_df2T_f32(
  const arm_biquad_cascade_stereo_df2T_instance_f32 * S,
  const float32_t * pSrc,
        float32_t * pDst,
        uint32_t blockSize);
# 4761 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_biquad_cascade_df2T_f64(
  const arm_biquad_cascade_df2T_instance_f64 * S,
  const float64_t * pSrc,
        float64_t * pDst,
        uint32_t blockSize);
# 4781 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_biquad_cascade_df2T_init_f32(
        arm_biquad_cascade_df2T_instance_f32 * S,
        uint8_t numStages,
  const float32_t * pCoeffs,
        float32_t * pState);
# 4795 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_biquad_cascade_stereo_df2T_init_f32(
        arm_biquad_cascade_stereo_df2T_instance_f32 * S,
        uint8_t numStages,
  const float32_t * pCoeffs,
        float32_t * pState);
# 4809 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_biquad_cascade_df2T_init_f64(
        arm_biquad_cascade_df2T_instance_f64 * S,
        uint8_t numStages,
        const float64_t * pCoeffs,
        float64_t * pState);





  typedef struct
  {
          uint16_t numStages;
          q15_t *pState;
    const q15_t *pCoeffs;
  } arm_fir_lattice_instance_q15;




  typedef struct
  {
          uint16_t numStages;
          q31_t *pState;
    const q31_t *pCoeffs;
  } arm_fir_lattice_instance_q31;




  typedef struct
  {
          uint16_t numStages;
          float32_t *pState;
    const float32_t *pCoeffs;
  } arm_fir_lattice_instance_f32;
# 4854 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_lattice_init_q15(
        arm_fir_lattice_instance_q15 * S,
        uint16_t numStages,
  const q15_t * pCoeffs,
        q15_t * pState);
# 4868 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_lattice_q15(
  const arm_fir_lattice_instance_q15 * S,
  const q15_t * pSrc,
        q15_t * pDst,
        uint32_t blockSize);
# 4882 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_lattice_init_q31(
        arm_fir_lattice_instance_q31 * S,
        uint16_t numStages,
  const q31_t * pCoeffs,
        q31_t * pState);
# 4896 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_lattice_q31(
  const arm_fir_lattice_instance_q31 * S,
  const q31_t * pSrc,
        q31_t * pDst,
        uint32_t blockSize);
# 4910 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_lattice_init_f32(
        arm_fir_lattice_instance_f32 * S,
        uint16_t numStages,
  const float32_t * pCoeffs,
        float32_t * pState);
# 4924 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_lattice_f32(
  const arm_fir_lattice_instance_f32 * S,
  const float32_t * pSrc,
        float32_t * pDst,
        uint32_t blockSize);





  typedef struct
  {
          uint16_t numStages;
          q15_t *pState;
          q15_t *pkCoeffs;
          q15_t *pvCoeffs;
  } arm_iir_lattice_instance_q15;




  typedef struct
  {
          uint16_t numStages;
          q31_t *pState;
          q31_t *pkCoeffs;
          q31_t *pvCoeffs;
  } arm_iir_lattice_instance_q31;




  typedef struct
  {
          uint16_t numStages;
          float32_t *pState;
          float32_t *pkCoeffs;
          float32_t *pvCoeffs;
  } arm_iir_lattice_instance_f32;
# 4972 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_iir_lattice_f32(
  const arm_iir_lattice_instance_f32 * S,
  const float32_t * pSrc,
        float32_t * pDst,
        uint32_t blockSize);
# 4988 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_iir_lattice_init_f32(
        arm_iir_lattice_instance_f32 * S,
        uint16_t numStages,
        float32_t * pkCoeffs,
        float32_t * pvCoeffs,
        float32_t * pState,
        uint32_t blockSize);
# 5004 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_iir_lattice_q31(
  const arm_iir_lattice_instance_q31 * S,
  const q31_t * pSrc,
        q31_t * pDst,
        uint32_t blockSize);
# 5020 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_iir_lattice_init_q31(
        arm_iir_lattice_instance_q31 * S,
        uint16_t numStages,
        q31_t * pkCoeffs,
        q31_t * pvCoeffs,
        q31_t * pState,
        uint32_t blockSize);
# 5036 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_iir_lattice_q15(
  const arm_iir_lattice_instance_q15 * S,
  const q15_t * pSrc,
        q15_t * pDst,
        uint32_t blockSize);
# 5052 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_iir_lattice_init_q15(
        arm_iir_lattice_instance_q15 * S,
        uint16_t numStages,
        q15_t * pkCoeffs,
        q15_t * pvCoeffs,
        q15_t * pState,
        uint32_t blockSize);





  typedef struct
  {
          uint16_t numTaps;
          float32_t *pState;
          float32_t *pCoeffs;
          float32_t mu;
  } arm_lms_instance_f32;
# 5082 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_lms_f32(
  const arm_lms_instance_f32 * S,
  const float32_t * pSrc,
        float32_t * pRef,
        float32_t * pOut,
        float32_t * pErr,
        uint32_t blockSize);
# 5100 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_lms_init_f32(
        arm_lms_instance_f32 * S,
        uint16_t numTaps,
        float32_t * pCoeffs,
        float32_t * pState,
        float32_t mu,
        uint32_t blockSize);





  typedef struct
  {
          uint16_t numTaps;
          q15_t *pState;
          q15_t *pCoeffs;
          q15_t mu;
          uint32_t postShift;
  } arm_lms_instance_q15;
# 5132 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_lms_init_q15(
        arm_lms_instance_q15 * S,
        uint16_t numTaps,
        q15_t * pCoeffs,
        q15_t * pState,
        q15_t mu,
        uint32_t blockSize,
        uint32_t postShift);
# 5151 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_lms_q15(
  const arm_lms_instance_q15 * S,
  const q15_t * pSrc,
        q15_t * pRef,
        q15_t * pOut,
        q15_t * pErr,
        uint32_t blockSize);





  typedef struct
  {
          uint16_t numTaps;
          q31_t *pState;
          q31_t *pCoeffs;
          q31_t mu;
          uint32_t postShift;
  } arm_lms_instance_q31;
# 5182 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_lms_q31(
  const arm_lms_instance_q31 * S,
  const q31_t * pSrc,
        q31_t * pRef,
        q31_t * pOut,
        q31_t * pErr,
        uint32_t blockSize);
# 5201 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_lms_init_q31(
        arm_lms_instance_q31 * S,
        uint16_t numTaps,
        q31_t * pCoeffs,
        q31_t * pState,
        q31_t mu,
        uint32_t blockSize,
        uint32_t postShift);





  typedef struct
  {
          uint16_t numTaps;
          float32_t *pState;
          float32_t *pCoeffs;
          float32_t mu;
          float32_t energy;
          float32_t x0;
  } arm_lms_norm_instance_f32;
# 5234 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_lms_norm_f32(
        arm_lms_norm_instance_f32 * S,
  const float32_t * pSrc,
        float32_t * pRef,
        float32_t * pOut,
        float32_t * pErr,
        uint32_t blockSize);
# 5252 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_lms_norm_init_f32(
        arm_lms_norm_instance_f32 * S,
        uint16_t numTaps,
        float32_t * pCoeffs,
        float32_t * pState,
        float32_t mu,
        uint32_t blockSize);





  typedef struct
  {
          uint16_t numTaps;
          q31_t *pState;
          q31_t *pCoeffs;
          q31_t mu;
          uint8_t postShift;
    const q31_t *recipTable;
          q31_t energy;
          q31_t x0;
  } arm_lms_norm_instance_q31;
# 5286 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_lms_norm_q31(
        arm_lms_norm_instance_q31 * S,
  const q31_t * pSrc,
        q31_t * pRef,
        q31_t * pOut,
        q31_t * pErr,
        uint32_t blockSize);
# 5305 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_lms_norm_init_q31(
        arm_lms_norm_instance_q31 * S,
        uint16_t numTaps,
        q31_t * pCoeffs,
        q31_t * pState,
        q31_t mu,
        uint32_t blockSize,
        uint8_t postShift);





  typedef struct
  {
          uint16_t numTaps;
          q15_t *pState;
          q15_t *pCoeffs;
          q15_t mu;
          uint8_t postShift;
    const q15_t *recipTable;
          q15_t energy;
          q15_t x0;
  } arm_lms_norm_instance_q15;
# 5340 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_lms_norm_q15(
        arm_lms_norm_instance_q15 * S,
  const q15_t * pSrc,
        q15_t * pRef,
        q15_t * pOut,
        q15_t * pErr,
        uint32_t blockSize);
# 5359 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_lms_norm_init_q15(
        arm_lms_norm_instance_q15 * S,
        uint16_t numTaps,
        q15_t * pCoeffs,
        q15_t * pState,
        q15_t mu,
        uint32_t blockSize,
        uint8_t postShift);
# 5377 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_correlate_f32(
  const float32_t * pSrcA,
        uint32_t srcALen,
  const float32_t * pSrcB,
        uint32_t srcBLen,
        float32_t * pDst);
# 5394 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
void arm_correlate_opt_q15(
  const q15_t * pSrcA,
        uint32_t srcALen,
  const q15_t * pSrcB,
        uint32_t srcBLen,
        q15_t * pDst,
        q15_t * pScratch);
# 5411 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_correlate_q15(
  const q15_t * pSrcA,
        uint32_t srcALen,
  const q15_t * pSrcB,
        uint32_t srcBLen,
        q15_t * pDst);
# 5428 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
void arm_correlate_fast_q15(
  const q15_t * pSrcA,
        uint32_t srcALen,
  const q15_t * pSrcB,
        uint32_t srcBLen,
        q15_t * pDst);
# 5445 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
void arm_correlate_fast_opt_q15(
  const q15_t * pSrcA,
        uint32_t srcALen,
  const q15_t * pSrcB,
        uint32_t srcBLen,
        q15_t * pDst,
        q15_t * pScratch);
# 5462 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_correlate_q31(
  const q31_t * pSrcA,
        uint32_t srcALen,
  const q31_t * pSrcB,
        uint32_t srcBLen,
        q31_t * pDst);
# 5478 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
void arm_correlate_fast_q31(
  const q31_t * pSrcA,
        uint32_t srcALen,
  const q31_t * pSrcB,
        uint32_t srcBLen,
        q31_t * pDst);
# 5496 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_correlate_opt_q7(
  const q7_t * pSrcA,
        uint32_t srcALen,
  const q7_t * pSrcB,
        uint32_t srcBLen,
        q7_t * pDst,
        q15_t * pScratch1,
        q15_t * pScratch2);
# 5514 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_correlate_q7(
  const q7_t * pSrcA,
        uint32_t srcALen,
  const q7_t * pSrcB,
        uint32_t srcBLen,
        q7_t * pDst);





  typedef struct
  {
          uint16_t numTaps;
          uint16_t stateIndex;
          float32_t *pState;
    const float32_t *pCoeffs;
          uint16_t maxDelay;
          int32_t *pTapDelay;
  } arm_fir_sparse_instance_f32;




  typedef struct
  {
          uint16_t numTaps;
          uint16_t stateIndex;
          q31_t *pState;
    const q31_t *pCoeffs;
          uint16_t maxDelay;
          int32_t *pTapDelay;
  } arm_fir_sparse_instance_q31;




  typedef struct
  {
          uint16_t numTaps;
          uint16_t stateIndex;
          q15_t *pState;
    const q15_t *pCoeffs;
          uint16_t maxDelay;
          int32_t *pTapDelay;
  } arm_fir_sparse_instance_q15;




  typedef struct
  {
          uint16_t numTaps;
          uint16_t stateIndex;
          q7_t *pState;
    const q7_t *pCoeffs;
          uint16_t maxDelay;
          int32_t *pTapDelay;
  } arm_fir_sparse_instance_q7;
# 5583 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_sparse_f32(
        arm_fir_sparse_instance_f32 * S,
  const float32_t * pSrc,
        float32_t * pDst,
        float32_t * pScratchIn,
        uint32_t blockSize);
# 5601 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_sparse_init_f32(
        arm_fir_sparse_instance_f32 * S,
        uint16_t numTaps,
  const float32_t * pCoeffs,
        float32_t * pState,
        int32_t * pTapDelay,
        uint16_t maxDelay,
        uint32_t blockSize);
# 5619 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_sparse_q31(
        arm_fir_sparse_instance_q31 * S,
  const q31_t * pSrc,
        q31_t * pDst,
        q31_t * pScratchIn,
        uint32_t blockSize);
# 5637 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_sparse_init_q31(
        arm_fir_sparse_instance_q31 * S,
        uint16_t numTaps,
  const q31_t * pCoeffs,
        q31_t * pState,
        int32_t * pTapDelay,
        uint16_t maxDelay,
        uint32_t blockSize);
# 5656 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_sparse_q15(
        arm_fir_sparse_instance_q15 * S,
  const q15_t * pSrc,
        q15_t * pDst,
        q15_t * pScratchIn,
        q31_t * pScratchOut,
        uint32_t blockSize);
# 5675 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_sparse_init_q15(
        arm_fir_sparse_instance_q15 * S,
        uint16_t numTaps,
  const q15_t * pCoeffs,
        q15_t * pState,
        int32_t * pTapDelay,
        uint16_t maxDelay,
        uint32_t blockSize);
# 5694 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_sparse_q7(
        arm_fir_sparse_instance_q7 * S,
  const q7_t * pSrc,
        q7_t * pDst,
        q7_t * pScratchIn,
        q31_t * pScratchOut,
        uint32_t blockSize);
# 5713 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_fir_sparse_init_q7(
        arm_fir_sparse_instance_q7 * S,
        uint16_t numTaps,
  const q7_t * pCoeffs,
        q7_t * pState,
        int32_t * pTapDelay,
        uint16_t maxDelay,
        uint32_t blockSize);
# 5729 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_sin_cos_f32(
        float32_t theta,
        float32_t * pSinVal,
        float32_t * pCosVal);
# 5741 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_sin_cos_q31(
        q31_t theta,
        q31_t * pSinVal,
        q31_t * pCosVal);
# 5753 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_cmplx_conj_f32(
  const float32_t * pSrc,
        float32_t * pDst,
        uint32_t numSamples);







  void arm_cmplx_conj_q31(
  const q31_t * pSrc,
        q31_t * pDst,
        uint32_t numSamples);
# 5776 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_cmplx_conj_q15(
  const q15_t * pSrc,
        q15_t * pDst,
        uint32_t numSamples);
# 5788 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_cmplx_mag_squared_f32(
  const float32_t * pSrc,
        float32_t * pDst,
        uint32_t numSamples);
# 5800 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_cmplx_mag_squared_q31(
  const q31_t * pSrc,
        q31_t * pDst,
        uint32_t numSamples);
# 5812 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_cmplx_mag_squared_q15(
  const q15_t * pSrc,
        q15_t * pDst,
        uint32_t numSamples);
# 5891 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  __attribute__((always_inline)) static inline float32_t arm_pid_f32(
  arm_pid_instance_f32 * S,
  float32_t in)
  {
    float32_t out;


    out = (S->A0 * in) +
      (S->A1 * S->state[0]) + (S->A2 * S->state[1]) + (S->state[2]);


    S->state[1] = S->state[0];
    S->state[0] = in;
    S->state[2] = out;


    return (out);

  }
# 5924 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
__attribute__((always_inline)) static inline q31_t arm_pid_q31(
  arm_pid_instance_q31 * S,
  q31_t in)
  {
    q63_t acc;
    q31_t out;


    acc = (q63_t) S->A0 * in;


    acc += (q63_t) S->A1 * S->state[0];


    acc += (q63_t) S->A2 * S->state[1];


    out = (q31_t) (acc >> 31U);


    out += S->state[2];


    S->state[1] = S->state[0];
    S->state[0] = in;
    S->state[2] = out;


    return (out);
  }
# 5970 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
__attribute__((always_inline)) static inline q15_t arm_pid_q15(
  arm_pid_instance_q15 * S,
  q15_t in)
  {
    q63_t acc;
    q15_t out;





    acc = (q31_t) __SMUAD((uint32_t)S->A0, (uint32_t)in);


    acc = (q63_t)__SMLALD((uint32_t)S->A1, (uint32_t)read_q15x2 (S->state), (uint64_t)acc);
# 5995 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
    acc += (q31_t) S->state[2] << 15;


    out = (q15_t) (__extension__ ({ int32_t __RES, __ARG1 = ((q31_t)(acc >> 15)); __asm ("ssat %0, %1, %2" : "=r" (__RES) : "I" (16), "r" (__ARG1) ); __RES; }));


    S->state[1] = S->state[0];
    S->state[0] = in;
    S->state[2] = out;


    return (out);
  }
# 6021 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  arm_status arm_mat_inverse_f32(
  const arm_matrix_instance_f32 * src,
  arm_matrix_instance_f32 * dst);
# 6033 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  arm_status arm_mat_inverse_f64(
  const arm_matrix_instance_f64 * src,
  arm_matrix_instance_f64 * dst);
# 6079 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  __attribute__((always_inline)) static inline void arm_clarke_f32(
  float32_t Ia,
  float32_t Ib,
  float32_t * pIalpha,
  float32_t * pIbeta)
  {

    *pIalpha = Ia;


    *pIbeta = ((float32_t) 0.57735026919 * Ia + (float32_t) 1.15470053838 * Ib);
  }
# 6106 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
__attribute__((always_inline)) static inline void arm_clarke_q31(
  q31_t Ia,
  q31_t Ib,
  q31_t * pIalpha,
  q31_t * pIbeta)
  {
    q31_t product1, product2;


    *pIalpha = Ia;


    product1 = (q31_t) (((q63_t) Ia * 0x24F34E8B) >> 30);


    product2 = (q31_t) (((q63_t) Ib * 0x49E69D16) >> 30);


    *pIbeta = __QADD(product1, product2);
  }
# 6165 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  __attribute__((always_inline)) static inline void arm_inv_clarke_f32(
  float32_t Ialpha,
  float32_t Ibeta,
  float32_t * pIa,
  float32_t * pIb)
  {

    *pIa = Ialpha;


    *pIb = -0.5f * Ialpha + 0.8660254039f * Ibeta;
  }
# 6192 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
__attribute__((always_inline)) static inline void arm_inv_clarke_q31(
  q31_t Ialpha,
  q31_t Ibeta,
  q31_t * pIa,
  q31_t * pIb)
  {
    q31_t product1, product2;


    *pIa = Ialpha;


    product1 = (q31_t) (((q63_t) (Ialpha) * (0x40000000)) >> 31);


    product2 = (q31_t) (((q63_t) (Ibeta) * (0x6ED9EBA1)) >> 31);


    *pIb = __QSUB(product2, product1);
  }
# 6265 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  __attribute__((always_inline)) static inline void arm_park_f32(
  float32_t Ialpha,
  float32_t Ibeta,
  float32_t * pId,
  float32_t * pIq,
  float32_t sinVal,
  float32_t cosVal)
  {

    *pId = Ialpha * cosVal + Ibeta * sinVal;


    *pIq = -Ialpha * sinVal + Ibeta * cosVal;
  }
# 6296 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
__attribute__((always_inline)) static inline void arm_park_q31(
  q31_t Ialpha,
  q31_t Ibeta,
  q31_t * pId,
  q31_t * pIq,
  q31_t sinVal,
  q31_t cosVal)
  {
    q31_t product1, product2;
    q31_t product3, product4;


    product1 = (q31_t) (((q63_t) (Ialpha) * (cosVal)) >> 31);


    product2 = (q31_t) (((q63_t) (Ibeta) * (sinVal)) >> 31);



    product3 = (q31_t) (((q63_t) (Ialpha) * (sinVal)) >> 31);


    product4 = (q31_t) (((q63_t) (Ibeta) * (cosVal)) >> 31);


    *pId = __QADD(product1, product2);


    *pIq = __QSUB(product4, product3);
  }
# 6368 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  __attribute__((always_inline)) static inline void arm_inv_park_f32(
  float32_t Id,
  float32_t Iq,
  float32_t * pIalpha,
  float32_t * pIbeta,
  float32_t sinVal,
  float32_t cosVal)
  {

    *pIalpha = Id * cosVal - Iq * sinVal;


    *pIbeta = Id * sinVal + Iq * cosVal;
  }
# 6399 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
__attribute__((always_inline)) static inline void arm_inv_park_q31(
  q31_t Id,
  q31_t Iq,
  q31_t * pIalpha,
  q31_t * pIbeta,
  q31_t sinVal,
  q31_t cosVal)
  {
    q31_t product1, product2;
    q31_t product3, product4;


    product1 = (q31_t) (((q63_t) (Id) * (cosVal)) >> 31);


    product2 = (q31_t) (((q63_t) (Iq) * (sinVal)) >> 31);



    product3 = (q31_t) (((q63_t) (Id) * (sinVal)) >> 31);


    product4 = (q31_t) (((q63_t) (Iq) * (cosVal)) >> 31);


    *pIalpha = __QSUB(product1, product2);


    *pIbeta = __QADD(product4, product3);
  }
# 6483 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  __attribute__((always_inline)) static inline float32_t arm_linear_interp_f32(
  arm_linear_interp_instance_f32 * S,
  float32_t x)
  {
    float32_t y;
    float32_t x0, x1;
    float32_t y0, y1;
    float32_t xSpacing = S->xSpacing;
    int32_t i;
    float32_t *pYData = S->pYData;


    i = (int32_t) ((x - S->x1) / xSpacing);

    if (i < 0)
    {

      y = pYData[0];
    }
    else if ((uint32_t)i >= (S->nValues - 1))
    {

      y = pYData[S->nValues - 1];
    }
    else
    {

      x0 = S->x1 + i * xSpacing;
      x1 = S->x1 + (i + 1) * xSpacing;


      y0 = pYData[i];
      y1 = pYData[i + 1];


      y = y0 + (x - x0) * ((y1 - y0) / (x1 - x0));

    }


    return (y);
  }
# 6540 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  __attribute__((always_inline)) static inline q31_t arm_linear_interp_q31(
  q31_t * pYData,
  q31_t x,
  uint32_t nValues)
  {
    q31_t y;
    q31_t y0, y1;
    q31_t fract;
    int32_t index;




    index = ((x & (q31_t)0xFFF00000) >> 20);

    if (index >= (int32_t)(nValues - 1))
    {
      return (pYData[nValues - 1]);
    }
    else if (index < 0)
    {
      return (pYData[0]);
    }
    else
    {


      fract = (x & 0x000FFFFF) << 11;


      y0 = pYData[index];
      y1 = pYData[index + 1];


      y = ((q31_t) ((q63_t) y0 * (0x7FFFFFFF - fract) >> 32));


      y += ((q31_t) (((q63_t) y1 * fract) >> 32));


      return (y << 1U);
    }
  }
# 6598 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  __attribute__((always_inline)) static inline q15_t arm_linear_interp_q15(
  q15_t * pYData,
  q31_t x,
  uint32_t nValues)
  {
    q63_t y;
    q15_t y0, y1;
    q31_t fract;
    int32_t index;




    index = ((x & (int32_t)0xFFF00000) >> 20);

    if (index >= (int32_t)(nValues - 1))
    {
      return (pYData[nValues - 1]);
    }
    else if (index < 0)
    {
      return (pYData[0]);
    }
    else
    {


      fract = (x & 0x000FFFFF);


      y0 = pYData[index];
      y1 = pYData[index + 1];


      y = ((q63_t) y0 * (0xFFFFF - fract));


      y += ((q63_t) y1 * (fract));


      return (q15_t) (y >> 20);
    }
  }
# 6655 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  __attribute__((always_inline)) static inline q7_t arm_linear_interp_q7(
  q7_t * pYData,
  q31_t x,
  uint32_t nValues)
  {
    q31_t y;
    q7_t y0, y1;
    q31_t fract;
    uint32_t index;




    if (x < 0)
    {
      return (pYData[0]);
    }
    index = (x >> 20) & 0xfff;

    if (index >= (nValues - 1))
    {
      return (pYData[nValues - 1]);
    }
    else
    {


      fract = (x & 0x000FFFFF);


      y0 = pYData[index];
      y1 = pYData[index + 1];


      y = ((y0 * (0xFFFFF - fract)));


      y += (y1 * fract);


      return (q7_t) (y >> 20);
     }
  }
# 6708 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  float32_t arm_sin_f32(
  float32_t x);







  q31_t arm_sin_q31(
  q31_t x);







  q15_t arm_sin_q15(
  q15_t x);







  float32_t arm_cos_f32(
  float32_t x);







  q31_t arm_cos_q31(
  q31_t x);







  q15_t arm_cos_q15(
  q15_t x);
# 6764 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_vlog_f32(
  const float32_t * pSrc,
        float32_t * pDst,
        uint32_t blockSize);
# 6776 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_vexp_f32(
  const float32_t * pSrc,
        float32_t * pDst,
        uint32_t blockSize);
# 6820 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
__attribute__((always_inline)) static inline arm_status arm_sqrt_f32(
  float32_t in,
  float32_t * pOut)
  {
    if (in >= 0.0f)
    {
# 6841 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
      *pOut = sqrtf(in);


      return (ARM_MATH_SUCCESS);
    }
    else
    {
      *pOut = 0.0f;
      return (ARM_MATH_ARGUMENT_ERROR);
    }
  }
# 6862 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
arm_status arm_sqrt_q31(
  q31_t in,
  q31_t * pOut);
# 6875 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
arm_status arm_sqrt_q15(
  q15_t in,
  q15_t * pOut);
# 6887 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_vsqrt_f32(
  float32_t * pIn,
  float32_t * pOut,
  uint16_t len);

  void arm_vsqrt_q31(
  q31_t * pIn,
  q31_t * pOut,
  uint16_t len);

  void arm_vsqrt_q15(
  q15_t * pIn,
  q15_t * pOut,
  uint16_t len);
# 6910 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  __attribute__((always_inline)) static inline void arm_circularWrite_f32(
  int32_t * circBuffer,
  int32_t L,
  uint16_t * writeOffset,
  int32_t bufferInc,
  const int32_t * src,
  int32_t srcInc,
  uint32_t blockSize)
  {
    uint32_t i = 0U;
    int32_t wOffset;



    wOffset = *writeOffset;


    i = blockSize;

    while (i > 0U)
    {

      circBuffer[wOffset] = *src;


      src += srcInc;


      wOffset += bufferInc;
      if (wOffset >= L)
        wOffset -= L;


      i--;
    }


    *writeOffset = (uint16_t)wOffset;
  }






  __attribute__((always_inline)) static inline void arm_circularRead_f32(
  int32_t * circBuffer,
  int32_t L,
  int32_t * readOffset,
  int32_t bufferInc,
  int32_t * dst,
  int32_t * dst_base,
  int32_t dst_length,
  int32_t dstInc,
  uint32_t blockSize)
  {
    uint32_t i = 0U;
    int32_t rOffset;
    int32_t* dst_end;



    rOffset = *readOffset;
    dst_end = dst_base + dst_length;


    i = blockSize;

    while (i > 0U)
    {

      *dst = circBuffer[rOffset];


      dst += dstInc;

      if (dst == dst_end)
      {
        dst = dst_base;
      }


      rOffset += bufferInc;

      if (rOffset >= L)
      {
        rOffset -= L;
      }


      i--;
    }


    *readOffset = rOffset;
  }





  __attribute__((always_inline)) static inline void arm_circularWrite_q15(
  q15_t * circBuffer,
  int32_t L,
  uint16_t * writeOffset,
  int32_t bufferInc,
  const q15_t * src,
  int32_t srcInc,
  uint32_t blockSize)
  {
    uint32_t i = 0U;
    int32_t wOffset;



    wOffset = *writeOffset;


    i = blockSize;

    while (i > 0U)
    {

      circBuffer[wOffset] = *src;


      src += srcInc;


      wOffset += bufferInc;
      if (wOffset >= L)
        wOffset -= L;


      i--;
    }


    *writeOffset = (uint16_t)wOffset;
  }





  __attribute__((always_inline)) static inline void arm_circularRead_q15(
  q15_t * circBuffer,
  int32_t L,
  int32_t * readOffset,
  int32_t bufferInc,
  q15_t * dst,
  q15_t * dst_base,
  int32_t dst_length,
  int32_t dstInc,
  uint32_t blockSize)
  {
    uint32_t i = 0;
    int32_t rOffset;
    q15_t* dst_end;



    rOffset = *readOffset;

    dst_end = dst_base + dst_length;


    i = blockSize;

    while (i > 0U)
    {

      *dst = circBuffer[rOffset];


      dst += dstInc;

      if (dst == dst_end)
      {
        dst = dst_base;
      }


      rOffset += bufferInc;

      if (rOffset >= L)
      {
        rOffset -= L;
      }


      i--;
    }


    *readOffset = rOffset;
  }





  __attribute__((always_inline)) static inline void arm_circularWrite_q7(
  q7_t * circBuffer,
  int32_t L,
  uint16_t * writeOffset,
  int32_t bufferInc,
  const q7_t * src,
  int32_t srcInc,
  uint32_t blockSize)
  {
    uint32_t i = 0U;
    int32_t wOffset;



    wOffset = *writeOffset;


    i = blockSize;

    while (i > 0U)
    {

      circBuffer[wOffset] = *src;


      src += srcInc;


      wOffset += bufferInc;
      if (wOffset >= L)
        wOffset -= L;


      i--;
    }


    *writeOffset = (uint16_t)wOffset;
  }





  __attribute__((always_inline)) static inline void arm_circularRead_q7(
  q7_t * circBuffer,
  int32_t L,
  int32_t * readOffset,
  int32_t bufferInc,
  q7_t * dst,
  q7_t * dst_base,
  int32_t dst_length,
  int32_t dstInc,
  uint32_t blockSize)
  {
    uint32_t i = 0;
    int32_t rOffset;
    q7_t* dst_end;



    rOffset = *readOffset;

    dst_end = dst_base + dst_length;


    i = blockSize;

    while (i > 0U)
    {

      *dst = circBuffer[rOffset];


      dst += dstInc;

      if (dst == dst_end)
      {
        dst = dst_base;
      }


      rOffset += bufferInc;

      if (rOffset >= L)
      {
        rOffset -= L;
      }


      i--;
    }


    *readOffset = rOffset;
  }
# 7216 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_power_q31(
  const q31_t * pSrc,
        uint32_t blockSize,
        q63_t * pResult);
# 7228 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_power_f32(
  const float32_t * pSrc,
        uint32_t blockSize,
        float32_t * pResult);
# 7240 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_power_q15(
  const q15_t * pSrc,
        uint32_t blockSize,
        q63_t * pResult);
# 7252 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_power_q7(
  const q7_t * pSrc,
        uint32_t blockSize,
        q31_t * pResult);
# 7264 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_mean_q7(
  const q7_t * pSrc,
        uint32_t blockSize,
        q7_t * pResult);
# 7276 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_mean_q15(
  const q15_t * pSrc,
        uint32_t blockSize,
        q15_t * pResult);
# 7288 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_mean_q31(
  const q31_t * pSrc,
        uint32_t blockSize,
        q31_t * pResult);
# 7300 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_mean_f32(
  const float32_t * pSrc,
        uint32_t blockSize,
        float32_t * pResult);
# 7312 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_var_f32(
  const float32_t * pSrc,
        uint32_t blockSize,
        float32_t * pResult);
# 7324 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_var_q31(
  const q31_t * pSrc,
        uint32_t blockSize,
        q31_t * pResult);
# 7336 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_var_q15(
  const q15_t * pSrc,
        uint32_t blockSize,
        q15_t * pResult);
# 7348 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_rms_f32(
  const float32_t * pSrc,
        uint32_t blockSize,
        float32_t * pResult);
# 7360 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_rms_q31(
  const q31_t * pSrc,
        uint32_t blockSize,
        q31_t * pResult);
# 7372 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_rms_q15(
  const q15_t * pSrc,
        uint32_t blockSize,
        q15_t * pResult);
# 7384 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_std_f32(
  const float32_t * pSrc,
        uint32_t blockSize,
        float32_t * pResult);
# 7396 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_std_q31(
  const q31_t * pSrc,
        uint32_t blockSize,
        q31_t * pResult);
# 7408 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_std_q15(
  const q15_t * pSrc,
        uint32_t blockSize,
        q15_t * pResult);
# 7420 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_cmplx_mag_f32(
  const float32_t * pSrc,
        float32_t * pDst,
        uint32_t numSamples);
# 7432 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_cmplx_mag_q31(
  const q31_t * pSrc,
        q31_t * pDst,
        uint32_t numSamples);
# 7444 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_cmplx_mag_q15(
  const q15_t * pSrc,
        q15_t * pDst,
        uint32_t numSamples);
# 7458 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_cmplx_dot_prod_q15(
  const q15_t * pSrcA,
  const q15_t * pSrcB,
        uint32_t numSamples,
        q31_t * realResult,
        q31_t * imagResult);
# 7474 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_cmplx_dot_prod_q31(
  const q31_t * pSrcA,
  const q31_t * pSrcB,
        uint32_t numSamples,
        q63_t * realResult,
        q63_t * imagResult);
# 7490 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_cmplx_dot_prod_f32(
  const float32_t * pSrcA,
  const float32_t * pSrcB,
        uint32_t numSamples,
        float32_t * realResult,
        float32_t * imagResult);
# 7505 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_cmplx_mult_real_q15(
  const q15_t * pSrcCmplx,
  const q15_t * pSrcReal,
        q15_t * pCmplxDst,
        uint32_t numSamples);
# 7519 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_cmplx_mult_real_q31(
  const q31_t * pSrcCmplx,
  const q31_t * pSrcReal,
        q31_t * pCmplxDst,
        uint32_t numSamples);
# 7533 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_cmplx_mult_real_f32(
  const float32_t * pSrcCmplx,
  const float32_t * pSrcReal,
        float32_t * pCmplxDst,
        uint32_t numSamples);
# 7547 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_min_q7(
  const q7_t * pSrc,
        uint32_t blockSize,
        q7_t * result,
        uint32_t * index);
# 7561 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_min_q15(
  const q15_t * pSrc,
        uint32_t blockSize,
        q15_t * pResult,
        uint32_t * pIndex);
# 7575 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_min_q31(
  const q31_t * pSrc,
        uint32_t blockSize,
        q31_t * pResult,
        uint32_t * pIndex);
# 7589 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_min_f32(
  const float32_t * pSrc,
        uint32_t blockSize,
        float32_t * pResult,
        uint32_t * pIndex);
# 7603 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_max_q7(
  const q7_t * pSrc,
        uint32_t blockSize,
        q7_t * pResult,
        uint32_t * pIndex);
# 7617 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_max_q15(
  const q15_t * pSrc,
        uint32_t blockSize,
        q15_t * pResult,
        uint32_t * pIndex);
# 7631 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_max_q31(
  const q31_t * pSrc,
        uint32_t blockSize,
        q31_t * pResult,
        uint32_t * pIndex);
# 7645 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_max_f32(
  const float32_t * pSrc,
        uint32_t blockSize,
        float32_t * pResult,
        uint32_t * pIndex);
# 7658 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_max_no_idx_f32(
      const float32_t *pSrc,
      uint32_t blockSize,
      float32_t *pResult);
# 7670 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_cmplx_mult_cmplx_q15(
  const q15_t * pSrcA,
  const q15_t * pSrcB,
        q15_t * pDst,
        uint32_t numSamples);
# 7684 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_cmplx_mult_cmplx_q31(
  const q31_t * pSrcA,
  const q31_t * pSrcB,
        q31_t * pDst,
        uint32_t numSamples);
# 7698 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_cmplx_mult_cmplx_f32(
  const float32_t * pSrcA,
  const float32_t * pSrcB,
        float32_t * pDst,
        uint32_t numSamples);
# 7711 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_float_to_q31(
  const float32_t * pSrc,
        q31_t * pDst,
        uint32_t blockSize);
# 7723 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_float_to_q15(
  const float32_t * pSrc,
        q15_t * pDst,
        uint32_t blockSize);
# 7735 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_float_to_q7(
  const float32_t * pSrc,
        q7_t * pDst,
        uint32_t blockSize);
# 7747 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_q31_to_float(
  const q31_t * pSrc,
        float32_t * pDst,
        uint32_t blockSize);
# 7759 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_q31_to_q15(
  const q31_t * pSrc,
        q15_t * pDst,
        uint32_t blockSize);
# 7771 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_q31_to_q7(
  const q31_t * pSrc,
        q7_t * pDst,
        uint32_t blockSize);
# 7783 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_q15_to_float(
  const q15_t * pSrc,
        float32_t * pDst,
        uint32_t blockSize);
# 7795 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_q15_to_q31(
  const q15_t * pSrc,
        q31_t * pDst,
        uint32_t blockSize);
# 7807 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_q15_to_q7(
  const q15_t * pSrc,
        q7_t * pDst,
        uint32_t blockSize);
# 7819 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_q7_to_float(
  const q7_t * pSrc,
        float32_t * pDst,
        uint32_t blockSize);
# 7831 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_q7_to_q31(
  const q7_t * pSrc,
        q31_t * pDst,
        uint32_t blockSize);
# 7843 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  void arm_q7_to_q15(
  const q7_t * pSrc,
        q15_t * pDst,
        uint32_t blockSize);




typedef enum
{
    ARM_ML_KERNEL_LINEAR = 0,

    ARM_ML_KERNEL_POLYNOMIAL = 1,

    ARM_ML_KERNEL_RBF = 2,

    ARM_ML_KERNEL_SIGMOID = 3

} arm_ml_kernel_type;





typedef struct
{
  uint32_t nbOfSupportVectors;
  uint32_t vectorDimension;
  float32_t intercept;
  const float32_t *dualCoefficients;
  const float32_t *supportVectors;
  const int32_t *classes;
} arm_svm_linear_instance_f32;





typedef struct
{
  uint32_t nbOfSupportVectors;
  uint32_t vectorDimension;
  float32_t intercept;
  const float32_t *dualCoefficients;
  const float32_t *supportVectors;
  const int32_t *classes;
  int32_t degree;
  float32_t coef0;
  float32_t gamma;
} arm_svm_polynomial_instance_f32;




typedef struct
{
  uint32_t nbOfSupportVectors;
  uint32_t vectorDimension;
  float32_t intercept;
  const float32_t *dualCoefficients;
  const float32_t *supportVectors;
  const int32_t *classes;
  float32_t gamma;
} arm_svm_rbf_instance_f32;




typedef struct
{
  uint32_t nbOfSupportVectors;
  uint32_t vectorDimension;
  float32_t intercept;
  const float32_t *dualCoefficients;
  const float32_t *supportVectors;
  const int32_t *classes;
  float32_t coef0;
  float32_t gamma;
} arm_svm_sigmoid_instance_f32;
# 7937 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
void arm_svm_linear_init_f32(arm_svm_linear_instance_f32 *S,
  uint32_t nbOfSupportVectors,
  uint32_t vectorDimension,
  float32_t intercept,
  const float32_t *dualCoefficients,
  const float32_t *supportVectors,
  const int32_t *classes);
# 7954 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
void arm_svm_linear_predict_f32(const arm_svm_linear_instance_f32 *S,
   const float32_t * in,
   int32_t * pResult);
# 7976 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
void arm_svm_polynomial_init_f32(arm_svm_polynomial_instance_f32 *S,
  uint32_t nbOfSupportVectors,
  uint32_t vectorDimension,
  float32_t intercept,
  const float32_t *dualCoefficients,
  const float32_t *supportVectors,
  const int32_t *classes,
  int32_t degree,
  float32_t coef0,
  float32_t gamma
  );
# 7996 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
void arm_svm_polynomial_predict_f32(const arm_svm_polynomial_instance_f32 *S,
   const float32_t * in,
   int32_t * pResult);
# 8015 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
void arm_svm_rbf_init_f32(arm_svm_rbf_instance_f32 *S,
  uint32_t nbOfSupportVectors,
  uint32_t vectorDimension,
  float32_t intercept,
  const float32_t *dualCoefficients,
  const float32_t *supportVectors,
  const int32_t *classes,
  float32_t gamma
  );
# 8033 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
void arm_svm_rbf_predict_f32(const arm_svm_rbf_instance_f32 *S,
   const float32_t * in,
   int32_t * pResult);
# 8052 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
void arm_svm_sigmoid_init_f32(arm_svm_sigmoid_instance_f32 *S,
  uint32_t nbOfSupportVectors,
  uint32_t vectorDimension,
  float32_t intercept,
  const float32_t *dualCoefficients,
  const float32_t *supportVectors,
  const int32_t *classes,
  float32_t coef0,
  float32_t gamma
  );
# 8071 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
void arm_svm_sigmoid_predict_f32(const arm_svm_sigmoid_instance_f32 *S,
   const float32_t * in,
   int32_t * pResult);






typedef struct
{
  uint32_t vectorDimension;
  uint32_t numberOfClasses;
  const float32_t *theta;
  const float32_t *sigma;
  const float32_t *classPriors;
  float32_t epsilon;
} arm_gaussian_naive_bayes_instance_f32;
# 8101 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
uint32_t arm_gaussian_naive_bayes_predict_f32(const arm_gaussian_naive_bayes_instance_f32 *S,
   const float32_t * in,
   float32_t *pBuffer);
# 8130 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
float32_t arm_logsumexp_f32(const float32_t *in, uint32_t blockSize);
# 8146 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
float32_t arm_logsumexp_dot_prod_f32(const float32_t * pSrcA,
  const float32_t * pSrcB,
  uint32_t blockSize,
  float32_t *pTmpBuffer);
# 8161 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
float32_t arm_entropy_f32(const float32_t * pSrcA,uint32_t blockSize);
# 8174 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
float64_t arm_entropy_f64(const float64_t * pSrcA, uint32_t blockSize);
# 8186 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
float32_t arm_kullback_leibler_f32(const float32_t * pSrcA
  ,const float32_t * pSrcB
  ,uint32_t blockSize);
# 8200 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
float64_t arm_kullback_leibler_f64(const float64_t * pSrcA,
                const float64_t * pSrcB,
                uint32_t blockSize);
# 8215 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
float32_t arm_weighted_sum_f32(const float32_t *in
  , const float32_t *weigths
  , uint32_t blockSize);
# 8232 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
void arm_barycenter_f32(const float32_t *in
  , const float32_t *weights
  , float32_t *out
  , uint32_t nbVectors
  , uint32_t vecDim);
# 8247 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
float32_t arm_euclidean_distance_f32(const float32_t *pA,const float32_t *pB, uint32_t blockSize);
# 8257 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
float32_t arm_braycurtis_distance_f32(const float32_t *pA,const float32_t *pB, uint32_t blockSize);
# 8272 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
float32_t arm_canberra_distance_f32(const float32_t *pA,const float32_t *pB, uint32_t blockSize);
# 8283 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
float32_t arm_chebyshev_distance_f32(const float32_t *pA,const float32_t *pB, uint32_t blockSize);
# 8294 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
float32_t arm_cityblock_distance_f32(const float32_t *pA,const float32_t *pB, uint32_t blockSize);
# 8307 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
float32_t arm_correlation_distance_f32(float32_t *pA,float32_t *pB, uint32_t blockSize);
# 8319 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
float32_t arm_cosine_distance_f32(const float32_t *pA,const float32_t *pB, uint32_t blockSize);
# 8341 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
float32_t arm_jensenshannon_distance_f32(const float32_t *pA,const float32_t *pB,uint32_t blockSize);
# 8356 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
float32_t arm_minkowski_distance_f32(const float32_t *pA,const float32_t *pB, int32_t order, uint32_t blockSize);
# 8370 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
float32_t arm_dice_distance(const uint32_t *pA, const uint32_t *pB, uint32_t numberOfBools);
# 8382 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
float32_t arm_hamming_distance(const uint32_t *pA, const uint32_t *pB, uint32_t numberOfBools);
# 8394 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
float32_t arm_jaccard_distance(const uint32_t *pA, const uint32_t *pB, uint32_t numberOfBools);
# 8406 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
float32_t arm_kulsinski_distance(const uint32_t *pA, const uint32_t *pB, uint32_t numberOfBools);
# 8418 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
float32_t arm_rogerstanimoto_distance(const uint32_t *pA, const uint32_t *pB, uint32_t numberOfBools);
# 8430 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
float32_t arm_russellrao_distance(const uint32_t *pA, const uint32_t *pB, uint32_t numberOfBools);
# 8442 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
float32_t arm_sokalmichener_distance(const uint32_t *pA, const uint32_t *pB, uint32_t numberOfBools);
# 8454 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
float32_t arm_sokalsneath_distance(const uint32_t *pA, const uint32_t *pB, uint32_t numberOfBools);
# 8466 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
float32_t arm_yule_distance(const uint32_t *pA, const uint32_t *pB, uint32_t numberOfBools);
# 8538 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  __attribute__((always_inline)) static inline float32_t arm_bilinear_interp_f32(
  const arm_bilinear_interp_instance_f32 * S,
  float32_t X,
  float32_t Y)
  {
    float32_t out;
    float32_t f00, f01, f10, f11;
    float32_t *pData = S->pData;
    int32_t xIndex, yIndex, index;
    float32_t xdiff, ydiff;
    float32_t b1, b2, b3, b4;

    xIndex = (int32_t) X;
    yIndex = (int32_t) Y;



    if (xIndex < 0 || xIndex > (S->numCols - 2) || yIndex < 0 || yIndex > (S->numRows - 2))
    {
      return (0);
    }


    index = (xIndex ) + (yIndex ) * S->numCols;



    f00 = pData[index];
    f01 = pData[index + 1];


    index = (xIndex ) + (yIndex+1) * S->numCols;



    f10 = pData[index];
    f11 = pData[index + 1];


    b1 = f00;
    b2 = f01 - f00;
    b3 = f10 - f00;
    b4 = f00 - f01 - f10 + f11;


    xdiff = X - xIndex;


    ydiff = Y - yIndex;


    out = b1 + b2 * xdiff + b3 * ydiff + b4 * xdiff * ydiff;


    return (out);
  }
# 8603 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  __attribute__((always_inline)) static inline q31_t arm_bilinear_interp_q31(
  arm_bilinear_interp_instance_q31 * S,
  q31_t X,
  q31_t Y)
  {
    q31_t out;
    q31_t acc = 0;
    q31_t xfract, yfract;
    q31_t x1, x2, y1, y2;
    int32_t rI, cI;
    q31_t *pYData = S->pData;
    uint32_t nCols = S->numCols;




    rI = ((X & (q31_t)0xFFF00000) >> 20);




    cI = ((Y & (q31_t)0xFFF00000) >> 20);



    if (rI < 0 || rI > (S->numCols - 2) || cI < 0 || cI > (S->numRows - 2))
    {
      return (0);
    }



    xfract = (X & 0x000FFFFF) << 11U;


    x1 = pYData[(rI) + (int32_t)nCols * (cI) ];
    x2 = pYData[(rI) + (int32_t)nCols * (cI) + 1];



    yfract = (Y & 0x000FFFFF) << 11U;


    y1 = pYData[(rI) + (int32_t)nCols * (cI + 1) ];
    y2 = pYData[(rI) + (int32_t)nCols * (cI + 1) + 1];


    out = ((q31_t) (((q63_t) x1 * (0x7FFFFFFF - xfract)) >> 32));
    acc = ((q31_t) (((q63_t) out * (0x7FFFFFFF - yfract)) >> 32));


    out = ((q31_t) ((q63_t) x2 * (0x7FFFFFFF - yfract) >> 32));
    acc += ((q31_t) ((q63_t) out * (xfract) >> 32));


    out = ((q31_t) ((q63_t) y1 * (0x7FFFFFFF - xfract) >> 32));
    acc += ((q31_t) ((q63_t) out * (yfract) >> 32));


    out = ((q31_t) ((q63_t) y2 * (xfract) >> 32));
    acc += ((q31_t) ((q63_t) out * (yfract) >> 32));


    return ((q31_t)(acc << 2));
  }
# 8677 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  __attribute__((always_inline)) static inline q15_t arm_bilinear_interp_q15(
  arm_bilinear_interp_instance_q15 * S,
  q31_t X,
  q31_t Y)
  {
    q63_t acc = 0;
    q31_t out;
    q15_t x1, x2, y1, y2;
    q31_t xfract, yfract;
    int32_t rI, cI;
    q15_t *pYData = S->pData;
    uint32_t nCols = S->numCols;




    rI = ((X & (q31_t)0xFFF00000) >> 20);




    cI = ((Y & (q31_t)0xFFF00000) >> 20);



    if (rI < 0 || rI > (S->numCols - 2) || cI < 0 || cI > (S->numRows - 2))
    {
      return (0);
    }



    xfract = (X & 0x000FFFFF);


    x1 = pYData[((uint32_t)rI) + nCols * ((uint32_t)cI) ];
    x2 = pYData[((uint32_t)rI) + nCols * ((uint32_t)cI) + 1];



    yfract = (Y & 0x000FFFFF);


    y1 = pYData[((uint32_t)rI) + nCols * ((uint32_t)cI + 1) ];
    y2 = pYData[((uint32_t)rI) + nCols * ((uint32_t)cI + 1) + 1];





    out = (q31_t) (((q63_t) x1 * (0x0FFFFF - xfract)) >> 4U);
    acc = ((q63_t) out * (0x0FFFFF - yfract));


    out = (q31_t) (((q63_t) x2 * (0x0FFFFF - yfract)) >> 4U);
    acc += ((q63_t) out * (xfract));


    out = (q31_t) (((q63_t) y1 * (0x0FFFFF - xfract)) >> 4U);
    acc += ((q63_t) out * (yfract));


    out = (q31_t) (((q63_t) y2 * (xfract)) >> 4U);
    acc += ((q63_t) out * (yfract));



    return ((q15_t)(acc >> 36));
  }
# 8755 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
  __attribute__((always_inline)) static inline q7_t arm_bilinear_interp_q7(
  arm_bilinear_interp_instance_q7 * S,
  q31_t X,
  q31_t Y)
  {
    q63_t acc = 0;
    q31_t out;
    q31_t xfract, yfract;
    q7_t x1, x2, y1, y2;
    int32_t rI, cI;
    q7_t *pYData = S->pData;
    uint32_t nCols = S->numCols;




    rI = ((X & (q31_t)0xFFF00000) >> 20);




    cI = ((Y & (q31_t)0xFFF00000) >> 20);



    if (rI < 0 || rI > (S->numCols - 2) || cI < 0 || cI > (S->numRows - 2))
    {
      return (0);
    }



    xfract = (X & (q31_t)0x000FFFFF);


    x1 = pYData[((uint32_t)rI) + nCols * ((uint32_t)cI) ];
    x2 = pYData[((uint32_t)rI) + nCols * ((uint32_t)cI) + 1];



    yfract = (Y & (q31_t)0x000FFFFF);


    y1 = pYData[((uint32_t)rI) + nCols * ((uint32_t)cI + 1) ];
    y2 = pYData[((uint32_t)rI) + nCols * ((uint32_t)cI + 1) + 1];


    out = ((x1 * (0xFFFFF - xfract)));
    acc = (((q63_t) out * (0xFFFFF - yfract)));


    out = ((x2 * (0xFFFFF - yfract)));
    acc += (((q63_t) out * (xfract)));


    out = ((y1 * (0xFFFFF - xfract)));
    acc += (((q63_t) out * (yfract)));


    out = ((y2 * (yfract)));
    acc += (((q63_t) out * (xfract)));


    return ((q7_t)(acc >> 40));
  }
# 8944 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_math.h"
#pragma GCC diagnostic pop
# 33 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_nn_tables.h" 2






extern const q15_t sigmoidTable_q15[256];
extern const q7_t sigmoidTable_q7[256];

extern const q7_t tanhTable_q7[256];
extern const q15_t tanhTable_q15[256];
# 53 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1/arm_nn_tables.h"
extern const q15_t sigmoidHTable_q15[192];
extern const q15_t sigmoidLTable_q15[128];
# 56 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1\\main.c" 2








int main(void) {
  int i;
  arm_div_q63_to_q31(1, 2);



  for (i = 0; i < 10000000; i++) {

    printf("Hello World %d!\n", i);

    i++;
  }

 }
