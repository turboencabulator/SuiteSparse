AM_CPPFLAGS = -I$(top_srcdir)/Include $(SUITESPARSECONFIG_CFLAGS)

CAMDSRC = \
	camd_1.c \
	camd_2.c \
	camd_aat.c \
	camd_control.c \
	camd_defaults.c \
	camd_dump.c \
	camd_info.c \
	camd_order.c \
	camd_postorder.c \
	camd_preprocess.c \
	camd_valid.c

lib_LTLIBRARIES = libcamd.la
noinst_LTLIBRARIES = libcamdi.la libcamdl.la

libcamdi_la_SOURCES = $(CAMDSRC)
libcamdi_la_LIBADD = $(SUITESPARSECONFIG_LIBS) $(POSIX_LIBS) $(CODE_COVERAGE_LIBS)
libcamdi_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS) -DDINT
libcamdi_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libcamdl_la_SOURCES = $(CAMDSRC)
libcamdl_la_LIBADD = $(SUITESPARSECONFIG_LIBS) $(POSIX_LIBS) $(CODE_COVERAGE_LIBS)
libcamdl_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS) -DDLONG
libcamdl_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libcamd_la_SOURCES =
libcamd_la_LIBADD = libcamdl.la libcamdi.la
libcamd_la_LDFLAGS = -no-undefined -release $(PACKAGE_VERSION)
