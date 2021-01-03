AM_CPPFLAGS = -I$(top_srcdir)/Include
LDADD = $(top_builddir)/Source/libcsparse.la

EXTRA_DIST = \
	README.txt \
	cs_demo.out

# Disable the .out implicit pattern rule.  Prevents GNU make from
# adding bogus dependencies for the .out files listed above.
%.out: %

check_PROGRAMS = \
	cs_demo1 \
	cs_demo2 \
	cs_demo3

check_LTLIBRARIES = \
	libcs_demo.la

cs_demo1_SOURCES = cs_demo1.c
cs_demo2_SOURCES = cs_demo2.c
cs_demo3_SOURCES = cs_demo3.c
libcs_demo_la_SOURCES = cs_demo.c cs_demo.h
cs_demo2_LDADD = libcs_demo.la $(LDADD)
cs_demo3_LDADD = libcs_demo.la $(LDADD)

if !CODE_COVERAGE_ENABLED
MATRICES = \
	$(top_srcdir)/Matrix/ash219 \
	$(top_srcdir)/Matrix/bcsstk01 \
	$(top_srcdir)/Matrix/bcsstk16 \
	$(top_srcdir)/Matrix/fs_183_1 \
	$(top_srcdir)/Matrix/lp_afiro \
	$(top_srcdir)/Matrix/mbeacxc \
	$(top_srcdir)/Matrix/t1 \
	$(top_srcdir)/Matrix/west0067

check-local: $(check_PROGRAMS) $(MATRICES)
	-./cs_demo1 < $(top_srcdir)/Matrix/t1
	-./cs_demo2 < $(top_srcdir)/Matrix/t1
	-./cs_demo2 < $(top_srcdir)/Matrix/ash219
	-./cs_demo2 < $(top_srcdir)/Matrix/bcsstk01
	-./cs_demo2 < $(top_srcdir)/Matrix/fs_183_1
	-./cs_demo2 < $(top_srcdir)/Matrix/mbeacxc
	-./cs_demo2 < $(top_srcdir)/Matrix/west0067
	-./cs_demo2 < $(top_srcdir)/Matrix/lp_afiro
	-./cs_demo2 < $(top_srcdir)/Matrix/bcsstk16
	-./cs_demo3 < $(top_srcdir)/Matrix/bcsstk01
	-./cs_demo3 < $(top_srcdir)/Matrix/bcsstk16

else
MATRICES = \
	$(top_srcdir)/Tcov/nil \
	$(top_srcdir)/Tcov/zero \
	$(top_srcdir)/Matrix/ash219 \
	$(top_srcdir)/Matrix/bcsstk01 \
	$(top_srcdir)/Matrix/bcsstk16 \
	$(top_srcdir)/Matrix/fs_183_1 \
	$(top_srcdir)/Matrix/ibm32a \
	$(top_srcdir)/Matrix/ibm32b \
	$(top_srcdir)/Matrix/lp_afiro \
	$(top_srcdir)/Matrix/mbeacxc \
	$(top_srcdir)/Matrix/t1 \
	$(top_srcdir)/Matrix/west0067

check-local: $(check_PROGRAMS) $(MATRICES)
# tiny tests
	-./cs_demo1 < $(top_srcdir)/Tcov/nil
	-./cs_demo1 < $(top_srcdir)/Tcov/zero
	-./cs_demo2 < $(top_srcdir)/Tcov/nil
	-./cs_demo2 < $(top_srcdir)/Tcov/zero
	-./cs_demo3 < $(top_srcdir)/Tcov/nil
# test coverage for book:
	-./cs_demo1 < $(top_srcdir)/Matrix/t1
	-./cs_demo2 < $(top_srcdir)/Matrix/bcsstk01
	-./cs_demo2 < $(top_srcdir)/Matrix/fs_183_1
	-./cs_demo2 < $(top_srcdir)/Matrix/mbeacxc
	-./cs_demo2 < $(top_srcdir)/Matrix/west0067
	-./cs_demo2 < $(top_srcdir)/Matrix/lp_afiro
	-./cs_demo3 < $(top_srcdir)/Matrix/bcsstk16
# other tests
	-./cs_demo2 < $(top_srcdir)/Matrix/t1
	-./cs_demo2 < $(top_srcdir)/Matrix/ash219
	-./cs_demo3 < $(top_srcdir)/Matrix/bcsstk01
	-./cs_demo2 < $(top_srcdir)/Matrix/bcsstk16
	-./cs_demo2 < $(top_srcdir)/Matrix/ibm32a
	-./cs_demo2 < $(top_srcdir)/Matrix/ibm32b
endif
