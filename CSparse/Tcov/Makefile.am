AM_CPPFLAGS = -I$(top_srcdir)/Include -I$(top_srcdir)/Demo
LDADD = $(top_builddir)/Source/libcsparse.la

EXTRA_DIST = \
	README.txt

dist_noinst_DATA = \
	nil \
	zero

if CODE_COVERAGE_ENABLED
check_PROGRAMS = \
	cstcov_test

cstcov_test_SOURCES = cstcov_test.c
cstcov_test_LDADD = $(top_builddir)/Demo/libcs_demo.la $(LDADD)

MATRICES = \
	$(top_srcdir)/Tcov/nil \
	$(top_srcdir)/Tcov/zero \
	$(top_srcdir)/Matrix/ash219 \
	$(top_srcdir)/Matrix/bcsstk01 \
	$(top_srcdir)/Matrix/fs_183_1 \
	$(top_srcdir)/Matrix/lp_afiro \
	$(top_srcdir)/Matrix/t1 \
	$(top_srcdir)/Matrix/west0067

check-local: $(check_PROGRAMS) $(MATRICES)
# exhaustive memory tests
	-./cstcov_test $(top_srcdir)/Tcov/nil > test_nil.out
	-./cstcov_test $(top_srcdir)/Tcov/zero > test_zero.out
	-./cstcov_test $(top_srcdir)/Matrix/t1 > test_t1.out
	-./cstcov_test $(top_srcdir)/Matrix/bcsstk01 > test_k1.out
	-./cstcov_test $(top_srcdir)/Matrix/fs_183_1 > test_fs.out
	-./cstcov_test $(top_srcdir)/Matrix/west0067 > test_we.out
	-./cstcov_test $(top_srcdir)/Matrix/ash219 > test_ash.out
	-./cstcov_test $(top_srcdir)/Matrix/lp_afiro > test_afiro.out
endif

CLEANFILES = *.out
