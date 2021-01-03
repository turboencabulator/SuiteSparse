AM_CPPFLAGS = -I$(top_srcdir)/Include $(AMD_CFLAGS) $(SUITESPARSECONFIG_CFLAGS)

EXTRA_DIST = \
	umfpack_di_demo.out \
	umfpack_dl_demo.out \
	umfpack_zi_demo.out \
	umfpack_zl_demo.out \
	umf4.out \
	umf4hb.out \
	umf4hb64.out \
	umf4zhb.out

# Disable the .out implicit pattern rule.  Prevents GNU make from
# adding bogus dependencies for the .out files listed above.
%.out: %

SIMPLE = \
	umfpack_simple

DEMO = \
	umfpack_di_demo \
	umfpack_dl_demo \
	umfpack_zi_demo \
	umfpack_zl_demo

READHB = \
	readhb \
	readhb_nozeros \
	readhb_size

UMF4 = \
	umf4

UMF4HB = \
	umf4hb \
	umf4hb64 \
	umf4zhb

HB = \
	HB/arc130.rua \
	HB/can_24.psa \
	HB/fs_183_6.rua \
	HB/qc324.cua \
	HB/west0067.rua

umfpack_%_demo.c: umfpack_xx_demo.c umfpack_%_demo.sed
	-sed -f umfpack_$*_demo.sed < umfpack_xx_demo.c > umfpack_$*_demo.c

dist_noinst_DATA = \
	umfpack_xx_demo.c \
	umfpack_di_demo.sed \
	umfpack_dl_demo.sed \
	umfpack_zi_demo.sed \
	umfpack_zl_demo.sed \
	$(HB)

dist_noinst_SCRIPTS = \
	dodefault \
	dospd

check_PROGRAMS = \
	$(SIMPLE) \
	$(DEMO) \
	$(READHB) \
	$(UMF4) \
	$(UMF4HB)

check_LTLIBRARIES = \
	libumf4_f77wrapper.la \
	libumf4_f77zwrapper.la \
	libumf4_f77wrapper64.la \
	libumf4_f77zwrapper64.la

umfpack_simple_SOURCES = umfpack_simple.c
umfpack_simple_LDADD = $(top_builddir)/Source/libumfpack.la

umfpack_di_demo_SOURCES = umfpack_di_demo.c
umfpack_di_demo_LDADD = $(top_builddir)/Source/libumfpack.la

umfpack_dl_demo_SOURCES = umfpack_dl_demo.c
umfpack_dl_demo_LDADD = $(top_builddir)/Source/libumfpack.la

umfpack_zi_demo_SOURCES = umfpack_zi_demo.c
umfpack_zi_demo_LDADD = $(top_builddir)/Source/libumfpack.la

umfpack_zl_demo_SOURCES = umfpack_zl_demo.c
umfpack_zl_demo_LDADD = $(top_builddir)/Source/libumfpack.la

readhb_SOURCES = readhb.f

readhb_nozeros_SOURCES = readhb_nozeros.f

readhb_size_SOURCES = readhb_size.f

umf4_SOURCES = umf4.c
umf4_LDADD = $(top_builddir)/Source/libumfpack.la $(AMD_LIBS)

umf4hb_SOURCES = umf4hb.f
umf4hb_LDADD = libumf4_f77wrapper.la

umf4zhb_SOURCES = umf4zhb.f
umf4zhb_LDADD = libumf4_f77zwrapper.la

umf4hb64_SOURCES = umf4hb64.f
umf4hb64_LDADD = libumf4_f77wrapper64.la

libumf4_f77wrapper_la_SOURCES = umf4_f77wrapper.c
libumf4_f77wrapper_la_LIBADD = $(top_builddir)/Source/libumfpack.la
libumf4_f77wrapper_la_CPPFLAGS = $(AM_CPPFLAGS)

libumf4_f77zwrapper_la_SOURCES = umf4_f77zwrapper.c
libumf4_f77zwrapper_la_LIBADD = $(top_builddir)/Source/libumfpack.la
libumf4_f77zwrapper_la_CPPFLAGS = $(AM_CPPFLAGS)

libumf4_f77wrapper64_la_SOURCES = umf4_f77wrapper.c
libumf4_f77wrapper64_la_LIBADD = $(top_builddir)/Source/libumfpack.la
libumf4_f77wrapper64_la_CPPFLAGS = $(AM_CPPFLAGS) -DDLONG

libumf4_f77zwrapper64_la_SOURCES = umf4_f77zwrapper.c
libumf4_f77zwrapper64_la_LIBADD = $(top_builddir)/Source/libumfpack.la
libumf4_f77zwrapper64_la_CPPFLAGS = $(AM_CPPFLAGS) -DZLONG

check-local: $(SIMPLE) $(DEMO) $(DEMO:=.out) $(READHB) $(HB) $(UMF4) $(UMF4HB) $(UMF4HB:=.out)
	./umfpack_simple
	./umfpack_di_demo > my_umfpack_di_demo.out
	-diff -u $(srcdir)/umfpack_di_demo.out my_umfpack_di_demo.out
	./umfpack_dl_demo > my_umfpack_dl_demo.out
	-diff -u $(srcdir)/umfpack_dl_demo.out my_umfpack_dl_demo.out
	./umfpack_zi_demo > my_umfpack_zi_demo.out
	-diff -u $(srcdir)/umfpack_zi_demo.out my_umfpack_zi_demo.out
	./umfpack_zl_demo > my_umfpack_zl_demo.out
	-diff -u $(srcdir)/umfpack_zl_demo.out my_umfpack_zl_demo.out
	-$(MKDIR_P) tmp
	-./readhb_nozeros < $(srcdir)/HB/can_24.psa > tmp/A
	-./readhb_size    < $(srcdir)/HB/can_24.psa > tmp/Asize
	-./umf4
	-./readhb_nozeros < $(srcdir)/HB/west0067.rua > tmp/A
	-./readhb_size    < $(srcdir)/HB/west0067.rua > tmp/Asize
	-./umf4
	-./readhb_nozeros < $(srcdir)/HB/fs_183_6.rua > tmp/A
	-./readhb_size    < $(srcdir)/HB/fs_183_6.rua > tmp/Asize
	-./umf4
	-./readhb         < $(srcdir)/HB/fs_183_6.rua > tmp/A
	-./readhb_size    < $(srcdir)/HB/fs_183_6.rua > tmp/Asize
	-./umf4
	-./readhb         < $(srcdir)/HB/arc130.rua > tmp/A
	-./readhb_size    < $(srcdir)/HB/arc130.rua > tmp/Asize
	-./umf4
	-./readhb_nozeros < $(srcdir)/HB/arc130.rua > tmp/A
	-./readhb_size    < $(srcdir)/HB/arc130.rua > tmp/Asize
	-./umf4
	-./readhb_nozeros < $(srcdir)/HB/arc130.rua > tmp/A
	-./readhb_size    < $(srcdir)/HB/arc130.rua > tmp/Asize
	-./umf4 a 1e-6
	-./umf4hb < $(srcdir)/HB/west0067.rua > my_umf4hb.out
	-diff -u $(srcdir)/umf4hb.out my_umf4hb.out
	-./umf4zhb < $(srcdir)/HB/qc324.cua > my_umf4zhb.out
	-diff -u $(srcdir)/umf4zhb.out my_umf4zhb.out
	-./umf4hb64 < $(srcdir)/HB/west0067.rua > my_umf4hb64.out
	-diff -u $(srcdir)/umf4hb64.out my_umf4hb64.out

CLEANFILES = my_*.out *.umf tmp/* tmp
