AM_CPPFLAGS = -I$(top_srcdir)/Include $(TBB_CFLAGS) $(CHOLMOD_CFLAGS) $(SUITESPARSECONFIG_CFLAGS)
if !EXPERT
AM_CPPFLAGS += -DNEXPERT
endif
if TBB
AM_CPPFLAGS += -DHAVE_TBB
endif

lib_LTLIBRARIES = libspqr.la

libspqr_la_SOURCES = \
	SuiteSparseQR.cpp \
	SuiteSparseQR_C.cpp \
	SuiteSparseQR_expert.cpp \
	SuiteSparseQR_qmult.cpp \
	spqr_1colamd.cpp \
	spqr_1factor.cpp \
	spqr_1fixed.cpp \
	spqr_analyze.cpp \
	spqr_append.cpp \
	spqr_assemble.cpp \
	spqr_cpack.cpp \
	spqr_csize.cpp \
	spqr_cumsum.cpp \
	spqr_debug.cpp \
	spqr_factorize.cpp \
	spqr_fcsize.cpp \
	spqr_freefac.cpp \
	spqr_freenum.cpp \
	spqr_freesym.cpp \
	spqr_front.cpp \
	spqr_fsize.cpp \
	spqr_happly.cpp \
	spqr_happly_work.cpp \
	spqr_hpinv.cpp \
	spqr_kernel.cpp \
	spqr_larftb.cpp \
	spqr_maxcolnorm.cpp \
	spqr_panel.cpp \
	spqr_parallel.cpp \
	spqr_rconvert.cpp \
	spqr_rcount.cpp \
	spqr_rhpack.cpp \
	spqr_rmap.cpp \
	spqr_rsolve.cpp \
	spqr_shift.cpp \
	spqr_stranspose1.cpp \
	spqr_stranspose2.cpp \
	spqr_tol.cpp \
	spqr_trapezoidal.cpp \
	spqr_type.cpp

libspqr_la_LIBADD = $(TBB_LIBS) $(CHOLMOD_LIBS) $(SUITESPARSECONFIG_LIBS) $(LAPACK_LIBS) $(BLAS_LIBS) -lm $(CODE_COVERAGE_LIBS)
libspqr_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS)
libspqr_la_CXXFLAGS = $(AM_CXXFLAGS) $(CODE_COVERAGE_CXXFLAGS)
libspqr_la_LDFLAGS = -no-undefined -release $(PACKAGE_VERSION)
