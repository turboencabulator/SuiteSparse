AM_CPPFLAGS = -I$(top_srcdir)/Include $(AMD_CFLAGS) $(COLAMD_CFLAGS) $(BTF_CFLAGS) $(SUITESPARSECONFIG_CFLAGS)

noinst_LTLIBRARIES = libklud.la libkluz.la libklul.la libkluzl.la

KLUSRC = \
	klu.c \
	klu_diagnostics.c \
	klu_dump.c \
	klu_extract.c \
	klu_factor.c \
	klu_free_numeric.c \
	klu_kernel.c \
	klu_refactor.c \
	klu_scale.c \
	klu_solve.c \
	klu_sort.c \
	klu_tsolve.c

CKLUSRC = \
	klu_analyze.c \
	klu_analyze_given.c \
	klu_defaults.c \
	klu_free_symbolic.c \
	klu_memory.c

libklud_la_SOURCES = $(KLUSRC) $(CKLUSRC)
libklud_la_LIBADD = $(CODE_COVERAGE_LIBS)
libklud_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS)
libklud_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libkluz_la_SOURCES = $(KLUSRC)
libkluz_la_LIBADD = $(CODE_COVERAGE_LIBS)
libkluz_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS) -DCOMPLEX
libkluz_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libklul_la_SOURCES = $(KLUSRC) $(CKLUSRC)
libklul_la_LIBADD = $(CODE_COVERAGE_LIBS)
libklul_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS) -DDLONG
libklul_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libkluzl_la_SOURCES = $(KLUSRC)
libkluzl_la_LIBADD = $(CODE_COVERAGE_LIBS)
libkluzl_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS) -DDLONG -DCOMPLEX
libkluzl_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

lib_LTLIBRARIES = libklu.la
libklu_la_SOURCES =
libklu_la_LIBADD = libklud.la libkluz.la libklul.la libkluzl.la $(AMD_LIBS) $(COLAMD_LIBS) $(BTF_LIBS) $(SUITESPARSECONFIG_LIBS)
libklu_la_LDFLAGS = -no-undefined -release $(PACKAGE_VERSION)
