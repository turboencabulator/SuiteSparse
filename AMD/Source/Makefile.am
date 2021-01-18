AM_CPPFLAGS = -I$(top_srcdir)/Include $(SUITESPARSECONFIG_CFLAGS)

AMDSRC = \
	amd_1.c \
	amd_2.c \
	amd_aat.c \
	amd_control.c \
	amd_defaults.c \
	amd_dump.c \
	amd_info.c \
	amd_order.c \
	amd_postorder.c \
	amd_post_tree.c \
	amd_preprocess.c \
	amd_valid.c

lib_LTLIBRARIES = libamd.la libamdf77.la
noinst_LTLIBRARIES = libamdi.la libamdl.la

libamdi_la_SOURCES = $(AMDSRC)
libamdi_la_LIBADD = $(SUITESPARSECONFIG_LIBS) $(POSIX_LIBS) $(CODE_COVERAGE_LIBS)
libamdi_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS) -DDINT
libamdi_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libamdl_la_SOURCES = $(AMDSRC)
libamdl_la_LIBADD = $(SUITESPARSECONFIG_LIBS) $(POSIX_LIBS) $(CODE_COVERAGE_LIBS)
libamdl_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS) -DDLONG
libamdl_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libamd_la_SOURCES =
libamd_la_LIBADD = libamdl.la libamdi.la
libamd_la_LDFLAGS = -no-undefined -release $(PACKAGE_VERSION)

libamdf77_la_SOURCES = amd.f amdbar.f
libamdf77_la_LDFLAGS = -no-undefined -release $(PACKAGE_VERSION)
