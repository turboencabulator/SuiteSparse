ACLOCAL_AMFLAGS = -I m4

SUBDIRS = Include Core
EXTRA_DIST = README.txt

pkgconfig_DATA = cholmod.pc

lib_LTLIBRARIES = libcholmod.la

libcholmod_la_SOURCES =
libcholmod_la_LIBADD = $(top_builddir)/Core/libcore.la
libcholmod_la_LDFLAGS = -no-undefined -release $(PACKAGE_VERSION)

if MOD_CHECK
SUBDIRS += Check
libcholmod_la_LIBADD += $(top_builddir)/Check/libcheck.la
endif

if MOD_CHOLESKY
SUBDIRS += Cholesky
libcholmod_la_LIBADD += $(top_builddir)/Cholesky/libcholesky.la
endif

if MOD_PARTITION
SUBDIRS += Partition
libcholmod_la_LIBADD += $(top_builddir)/Partition/libpartition.la
endif

if MOD_MATRIXOPS
SUBDIRS += MatrixOps
libcholmod_la_LIBADD += $(top_builddir)/MatrixOps/libmatrixops.la
endif

if MOD_MODIFY
SUBDIRS += Modify
libcholmod_la_LIBADD += $(top_builddir)/Modify/libmodify.la
endif

if MOD_SUPERNODAL
SUBDIRS += Supernodal
libcholmod_la_LIBADD += $(top_builddir)/Supernodal/libsupernodal.la
endif

if MOD_GPU
SUBDIRS += GPU
libcholmod_la_LIBADD += $(top_builddir)/GPU/libgpu.la
endif

SUBDIRS += . MATLAB Demo Tcov Doc

CODE_COVERAGE_BRANCH_COVERAGE = 1
@CODE_COVERAGE_RULES@
