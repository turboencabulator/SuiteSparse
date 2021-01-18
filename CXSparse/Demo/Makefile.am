AM_CPPFLAGS = -I$(top_srcdir)/Include $(SUITESPARSECONFIG_CFLAGS)
LDADD = $(top_builddir)/Source/libcxsparse.la

check_PROGRAMS = \
	cs_demo1 \
	cs_demo2 \
	cs_demo3 \
	cs_di_demo1 \
	cs_di_demo2 \
	cs_di_demo3 \
	cs_dl_demo1 \
	cs_dl_demo2 \
	cs_dl_demo3 \
	cs_ci_demo1 \
	cs_ci_demo2 \
	cs_ci_demo3 \
	cs_cl_demo1 \
	cs_cl_demo2 \
	cs_cl_demo3 \
	cs_idemo \
	cs_ldemo

check_LTLIBRARIES = \
	libcs_demo.la \
	libcs_di_demo.la \
	libcs_dl_demo.la \
	libcs_ci_demo.la \
	libcs_cl_demo.la

cs_demo1_SOURCES = cs_demo1.c
cs_demo2_SOURCES = cs_demo2.c
cs_demo3_SOURCES = cs_demo3.c
libcs_demo_la_SOURCES = cs_demo.c cs_demo.h
cs_demo2_LDADD = libcs_demo.la $(LDADD)
cs_demo3_LDADD = libcs_demo.la $(LDADD)

cs_di_demo1_SOURCES = cs_di_demo1.c
cs_di_demo2_SOURCES = cs_di_demo2.c
cs_di_demo3_SOURCES = cs_di_demo3.c
libcs_di_demo_la_SOURCES = cs_di_demo.c cs_di_demo.h
cs_di_demo2_LDADD = libcs_di_demo.la $(LDADD)
cs_di_demo3_LDADD = libcs_di_demo.la $(LDADD)

cs_dl_demo1_SOURCES = cs_dl_demo1.c
cs_dl_demo2_SOURCES = cs_dl_demo2.c
cs_dl_demo3_SOURCES = cs_dl_demo3.c
libcs_dl_demo_la_SOURCES = cs_dl_demo.c cs_dl_demo.h
cs_dl_demo2_LDADD = libcs_dl_demo.la $(LDADD)
cs_dl_demo3_LDADD = libcs_dl_demo.la $(LDADD)
cs_dl_demo1_CPPFLAGS = $(AM_CPPFLAGS) -DCS_LONG
cs_dl_demo2_CPPFLAGS = $(AM_CPPFLAGS) -DCS_LONG
cs_dl_demo3_CPPFLAGS = $(AM_CPPFLAGS) -DCS_LONG
libcs_dl_demo_la_CPPFLAGS = $(AM_CPPFLAGS) -DCS_LONG

cs_ci_demo1_SOURCES = cs_ci_demo1.c
cs_ci_demo2_SOURCES = cs_ci_demo2.c
cs_ci_demo3_SOURCES = cs_ci_demo3.c
libcs_ci_demo_la_SOURCES = cs_ci_demo.c cs_ci_demo.h
libcs_ci_demo_la_LIBADD = $(POSIX_LIBS)
cs_ci_demo2_LDADD = libcs_ci_demo.la $(LDADD)
cs_ci_demo3_LDADD = libcs_ci_demo.la $(LDADD)
cs_ci_demo1_CPPFLAGS = $(AM_CPPFLAGS) -DCS_COMPLEX
cs_ci_demo2_CPPFLAGS = $(AM_CPPFLAGS) -DCS_COMPLEX
cs_ci_demo3_CPPFLAGS = $(AM_CPPFLAGS) -DCS_COMPLEX
libcs_ci_demo_la_CPPFLAGS = $(AM_CPPFLAGS) -DCS_COMPLEX

cs_cl_demo1_SOURCES = cs_cl_demo1.c
cs_cl_demo2_SOURCES = cs_cl_demo2.c
cs_cl_demo3_SOURCES = cs_cl_demo3.c
libcs_cl_demo_la_SOURCES = cs_cl_demo.c cs_cl_demo.h
libcs_cl_demo_la_LIBADD = $(POSIX_LIBS)
cs_cl_demo2_LDADD = libcs_cl_demo.la $(LDADD)
cs_cl_demo3_LDADD = libcs_cl_demo.la $(LDADD)
cs_cl_demo1_CPPFLAGS = $(AM_CPPFLAGS) -DCS_LONG -DCS_COMPLEX
cs_cl_demo2_CPPFLAGS = $(AM_CPPFLAGS) -DCS_LONG -DCS_COMPLEX
cs_cl_demo3_CPPFLAGS = $(AM_CPPFLAGS) -DCS_LONG -DCS_COMPLEX
libcs_cl_demo_la_CPPFLAGS = $(AM_CPPFLAGS) -DCS_LONG -DCS_COMPLEX

cs_idemo_SOURCES = cs_idemo.c

cs_ldemo_SOURCES = cs_ldemo.c
cs_ldemo_CPPFLAGS = $(AM_CPPFLAGS) -DCS_LONG

if !CODE_COVERAGE_ENABLED
MATRICES = \
	$(top_srcdir)/Matrix/ash219 \
	$(top_srcdir)/Matrix/bcsstk01 \
	$(top_srcdir)/Matrix/bcsstk16 \
	$(top_srcdir)/Matrix/c4 \
	$(top_srcdir)/Matrix/c_mbeacxc \
	$(top_srcdir)/Matrix/c_west0067 \
	$(top_srcdir)/Matrix/fs_183_1 \
	$(top_srcdir)/Matrix/lp_afiro \
	$(top_srcdir)/Matrix/mbeacxc \
	$(top_srcdir)/Matrix/mhd1280b \
	$(top_srcdir)/Matrix/neumann \
	$(top_srcdir)/Matrix/qc324 \
	$(top_srcdir)/Matrix/t1 \
	$(top_srcdir)/Matrix/t2 \
	$(top_srcdir)/Matrix/t3 \
	$(top_srcdir)/Matrix/t4 \
	$(top_srcdir)/Matrix/west0067 \
	$(top_srcdir)/Matrix/young1c

check-local: $(check_PROGRAMS) $(MATRICES)
	-./cs_demo1 < $(top_srcdir)/Matrix/t1
	-./cs_demo2 < $(top_srcdir)/Matrix/t1
	-./cs_demo2 < $(top_srcdir)/Matrix/fs_183_1
	-./cs_demo2 < $(top_srcdir)/Matrix/west0067
	-./cs_demo2 < $(top_srcdir)/Matrix/lp_afiro
	-./cs_demo2 < $(top_srcdir)/Matrix/ash219
	-./cs_demo2 < $(top_srcdir)/Matrix/mbeacxc
	-./cs_demo2 < $(top_srcdir)/Matrix/bcsstk01
	-./cs_demo3 < $(top_srcdir)/Matrix/bcsstk01
	-./cs_demo2 < $(top_srcdir)/Matrix/bcsstk16
	-./cs_demo3 < $(top_srcdir)/Matrix/bcsstk16
	-./cs_di_demo1 < $(top_srcdir)/Matrix/t1
	-./cs_di_demo2 < $(top_srcdir)/Matrix/t1
	-./cs_di_demo2 < $(top_srcdir)/Matrix/fs_183_1
	-./cs_di_demo2 < $(top_srcdir)/Matrix/west0067
	-./cs_di_demo2 < $(top_srcdir)/Matrix/lp_afiro
	-./cs_di_demo2 < $(top_srcdir)/Matrix/ash219
	-./cs_di_demo2 < $(top_srcdir)/Matrix/mbeacxc
	-./cs_di_demo2 < $(top_srcdir)/Matrix/bcsstk01
	-./cs_di_demo3 < $(top_srcdir)/Matrix/bcsstk01
	-./cs_di_demo2 < $(top_srcdir)/Matrix/bcsstk16
	-./cs_di_demo3 < $(top_srcdir)/Matrix/bcsstk16
	-./cs_dl_demo1 < $(top_srcdir)/Matrix/t1
	-./cs_dl_demo2 < $(top_srcdir)/Matrix/t1
	-./cs_dl_demo2 < $(top_srcdir)/Matrix/fs_183_1
	-./cs_dl_demo2 < $(top_srcdir)/Matrix/west0067
	-./cs_dl_demo2 < $(top_srcdir)/Matrix/lp_afiro
	-./cs_dl_demo2 < $(top_srcdir)/Matrix/ash219
	-./cs_dl_demo2 < $(top_srcdir)/Matrix/mbeacxc
	-./cs_dl_demo2 < $(top_srcdir)/Matrix/bcsstk01
	-./cs_dl_demo3 < $(top_srcdir)/Matrix/bcsstk01
	-./cs_dl_demo2 < $(top_srcdir)/Matrix/bcsstk16
	-./cs_dl_demo3 < $(top_srcdir)/Matrix/bcsstk16
	-./cs_ci_demo1 < $(top_srcdir)/Matrix/t2
	-./cs_ci_demo2 < $(top_srcdir)/Matrix/t2
	-./cs_ci_demo2 < $(top_srcdir)/Matrix/t3
	-./cs_ci_demo2 < $(top_srcdir)/Matrix/t4
	-./cs_ci_demo2 < $(top_srcdir)/Matrix/c_west0067
	-./cs_ci_demo2 < $(top_srcdir)/Matrix/c_mbeacxc
	-./cs_ci_demo2 < $(top_srcdir)/Matrix/young1c
	-./cs_ci_demo2 < $(top_srcdir)/Matrix/qc324
	-./cs_ci_demo2 < $(top_srcdir)/Matrix/neumann
	-./cs_ci_demo2 < $(top_srcdir)/Matrix/c4
	-./cs_ci_demo3 < $(top_srcdir)/Matrix/c4
	-./cs_ci_demo2 < $(top_srcdir)/Matrix/mhd1280b
	-./cs_ci_demo3 < $(top_srcdir)/Matrix/mhd1280b
	-./cs_cl_demo1 < $(top_srcdir)/Matrix/t2
	-./cs_cl_demo2 < $(top_srcdir)/Matrix/t2
	-./cs_cl_demo2 < $(top_srcdir)/Matrix/t3
	-./cs_cl_demo2 < $(top_srcdir)/Matrix/t4
	-./cs_cl_demo2 < $(top_srcdir)/Matrix/c_west0067
	-./cs_cl_demo2 < $(top_srcdir)/Matrix/c_mbeacxc
	-./cs_cl_demo2 < $(top_srcdir)/Matrix/young1c
	-./cs_cl_demo2 < $(top_srcdir)/Matrix/qc324
	-./cs_cl_demo2 < $(top_srcdir)/Matrix/neumann
	-./cs_cl_demo2 < $(top_srcdir)/Matrix/c4
	-./cs_cl_demo3 < $(top_srcdir)/Matrix/c4
	-./cs_cl_demo2 < $(top_srcdir)/Matrix/mhd1280b
	-./cs_cl_demo3 < $(top_srcdir)/Matrix/mhd1280b
	-./cs_idemo < $(top_srcdir)/Matrix/t2
	-./cs_ldemo < $(top_srcdir)/Matrix/t2

else
MATRICES = \
	$(top_srcdir)/Tcov/czero \
	$(top_srcdir)/Tcov/nil \
	$(top_srcdir)/Tcov/zero \
	$(top_srcdir)/Matrix/ash219 \
	$(top_srcdir)/Matrix/bcsstk01 \
	$(top_srcdir)/Matrix/bcsstk16 \
	$(top_srcdir)/Matrix/c4 \
	$(top_srcdir)/Matrix/c_ibm32a \
	$(top_srcdir)/Matrix/c_ibm32b \
	$(top_srcdir)/Matrix/c_mbeacxc \
	$(top_srcdir)/Matrix/c_west0067 \
	$(top_srcdir)/Matrix/fs_183_1 \
	$(top_srcdir)/Matrix/ibm32a \
	$(top_srcdir)/Matrix/ibm32b \
	$(top_srcdir)/Matrix/lp_afiro \
	$(top_srcdir)/Matrix/mbeacxc \
	$(top_srcdir)/Matrix/mhd1280b \
	$(top_srcdir)/Matrix/neumann \
	$(top_srcdir)/Matrix/qc324 \
	$(top_srcdir)/Matrix/t1 \
	$(top_srcdir)/Matrix/t2 \
	$(top_srcdir)/Matrix/t3 \
	$(top_srcdir)/Matrix/t4 \
	$(top_srcdir)/Matrix/west0067 \
	$(top_srcdir)/Matrix/young1c

check-local: $(check_PROGRAMS) $(MATRICES)
	-./cs_idemo < $(top_srcdir)/Matrix/t2
	-./cs_ldemo < $(top_srcdir)/Matrix/t2
	-./cs_di_demo1 < $(top_srcdir)/Matrix/t1
	-./cs_di_demo1 < $(top_srcdir)/Tcov/nil
	-./cs_di_demo1 < $(top_srcdir)/Tcov/zero
	-./cs_di_demo2 < $(top_srcdir)/Tcov/nil
	-./cs_di_demo2 < $(top_srcdir)/Tcov/zero
	-./cs_di_demo2 < $(top_srcdir)/Matrix/t1
	-./cs_di_demo2 < $(top_srcdir)/Matrix/bcsstk01
	-./cs_di_demo2 < $(top_srcdir)/Matrix/fs_183_1
	-./cs_di_demo2 < $(top_srcdir)/Matrix/west0067
	-./cs_di_demo2 < $(top_srcdir)/Matrix/lp_afiro
	-./cs_di_demo2 < $(top_srcdir)/Matrix/ash219
	-./cs_di_demo2 < $(top_srcdir)/Matrix/mbeacxc
	-./cs_di_demo2 < $(top_srcdir)/Matrix/bcsstk16
	-./cs_di_demo2 < $(top_srcdir)/Matrix/ibm32a
	-./cs_di_demo2 < $(top_srcdir)/Matrix/ibm32b
	-./cs_di_demo3 < $(top_srcdir)/Tcov/nil
	-./cs_di_demo3 < $(top_srcdir)/Matrix/bcsstk01
	-./cs_di_demo3 < $(top_srcdir)/Matrix/bcsstk16
	-./cs_dl_demo1 < $(top_srcdir)/Matrix/t1
	-./cs_dl_demo1 < $(top_srcdir)/Tcov/nil
	-./cs_dl_demo1 < $(top_srcdir)/Tcov/zero
	-./cs_dl_demo2 < $(top_srcdir)/Tcov/nil
	-./cs_dl_demo2 < $(top_srcdir)/Tcov/zero
	-./cs_dl_demo2 < $(top_srcdir)/Matrix/t1
	-./cs_dl_demo2 < $(top_srcdir)/Matrix/bcsstk01
	-./cs_dl_demo2 < $(top_srcdir)/Matrix/fs_183_1
	-./cs_dl_demo2 < $(top_srcdir)/Matrix/west0067
	-./cs_dl_demo2 < $(top_srcdir)/Matrix/lp_afiro
	-./cs_dl_demo2 < $(top_srcdir)/Matrix/ash219
	-./cs_dl_demo2 < $(top_srcdir)/Matrix/mbeacxc
	-./cs_dl_demo2 < $(top_srcdir)/Matrix/bcsstk16
	-./cs_dl_demo2 < $(top_srcdir)/Matrix/ibm32a
	-./cs_dl_demo2 < $(top_srcdir)/Matrix/ibm32b
	-./cs_dl_demo3 < $(top_srcdir)/Tcov/nil
	-./cs_dl_demo3 < $(top_srcdir)/Matrix/bcsstk01
	-./cs_dl_demo3 < $(top_srcdir)/Matrix/bcsstk16
	-./cs_ci_demo1 < $(top_srcdir)/Matrix/t2
	-./cs_ci_demo2 < $(top_srcdir)/Matrix/t2
	-./cs_ci_demo1 < $(top_srcdir)/Tcov/czero
	-./cs_ci_demo2 < $(top_srcdir)/Tcov/czero
	-./cs_ci_demo1 < $(top_srcdir)/Matrix/t3
	-./cs_ci_demo2 < $(top_srcdir)/Matrix/t3
	-./cs_ci_demo1 < $(top_srcdir)/Matrix/t4
	-./cs_ci_demo2 < $(top_srcdir)/Matrix/t4
	-./cs_ci_demo2 < $(top_srcdir)/Matrix/c_west0067
	-./cs_ci_demo2 < $(top_srcdir)/Matrix/c_mbeacxc
	-./cs_ci_demo2 < $(top_srcdir)/Matrix/c_ibm32a
	-./cs_ci_demo2 < $(top_srcdir)/Matrix/c_ibm32b
	-./cs_ci_demo2 < $(top_srcdir)/Matrix/young1c
	-./cs_ci_demo2 < $(top_srcdir)/Matrix/qc324
	-./cs_ci_demo2 < $(top_srcdir)/Matrix/neumann
	-./cs_ci_demo2 < $(top_srcdir)/Matrix/c4
	-./cs_ci_demo3 < $(top_srcdir)/Matrix/c4
	-./cs_ci_demo2 < $(top_srcdir)/Matrix/mhd1280b
	-./cs_ci_demo3 < $(top_srcdir)/Matrix/mhd1280b
	-./cs_cl_demo1 < $(top_srcdir)/Matrix/t2
	-./cs_cl_demo2 < $(top_srcdir)/Matrix/t2
	-./cs_cl_demo1 < $(top_srcdir)/Tcov/czero
	-./cs_cl_demo2 < $(top_srcdir)/Tcov/czero
	-./cs_cl_demo1 < $(top_srcdir)/Matrix/t3
	-./cs_cl_demo2 < $(top_srcdir)/Matrix/t3
	-./cs_cl_demo1 < $(top_srcdir)/Matrix/t4
	-./cs_cl_demo2 < $(top_srcdir)/Matrix/t4
	-./cs_cl_demo2 < $(top_srcdir)/Matrix/c_west0067
	-./cs_cl_demo2 < $(top_srcdir)/Matrix/c_mbeacxc
	-./cs_cl_demo2 < $(top_srcdir)/Matrix/c_ibm32a
	-./cs_cl_demo2 < $(top_srcdir)/Matrix/c_ibm32b
	-./cs_cl_demo2 < $(top_srcdir)/Matrix/young1c
	-./cs_cl_demo2 < $(top_srcdir)/Matrix/qc324
	-./cs_cl_demo2 < $(top_srcdir)/Matrix/neumann
	-./cs_cl_demo2 < $(top_srcdir)/Matrix/c4
	-./cs_cl_demo3 < $(top_srcdir)/Matrix/c4
	-./cs_cl_demo2 < $(top_srcdir)/Matrix/mhd1280b
	-./cs_cl_demo3 < $(top_srcdir)/Matrix/mhd1280b
endif
