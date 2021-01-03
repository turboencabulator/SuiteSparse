AM_CPPFLAGS = -I$(top_srcdir)/Include $(SUITESPARSECONFIG_CFLAGS)
LDADD = $(top_builddir)/Source/libamd.la

EXTRA_DIST = \
	amd_demo.out \
	amd_demo2.out \
	amd_l_demo.out \
	amd_simple.out \
	amd_f77cross.out \
	amd_f77demo.out \
	amd_f77simple.out

# Disable the .out implicit pattern rule.  Prevents GNU make from
# adding bogus dependencies for the .out files listed above.
%.out: %

check_PROGRAMS = \
	amd_demo \
	amd_demo2 \
	amd_l_demo \
	amd_simple \
	amd_f77cross \
	amd_f77demo \
	amd_f77simple

amd_demo_SOURCES = amd_demo.c
amd_demo2_SOURCES = amd_demo2.c
amd_l_demo_SOURCES = amd_l_demo.c
amd_simple_SOURCES = amd_simple.c

check_LTLIBRARIES = libamd_f77wrapper.la
libamd_f77wrapper_la_SOURCES = amd_f77wrapper.c
libamd_f77wrapper_la_LIBADD = $(top_builddir)/Source/libamd.la
libamd_f77wrapper_la_CPPFLAGS = $(AM_CPPFLAGS) -DDINT

amd_f77cross_SOURCES = amd_f77cross.f
amd_f77cross_LDADD = libamd_f77wrapper.la
amd_f77demo_SOURCES = amd_f77demo.f
amd_f77demo_LDADD = $(top_builddir)/Source/libamdf77.la
amd_f77simple_SOURCES = amd_f77simple.f
amd_f77simple_LDADD = $(top_builddir)/Source/libamdf77.la

check-local: $(check_PROGRAMS) $(check_PROGRAMS:=.out)
	@for i in $(check_PROGRAMS); do \
		echo "Testing $$i"; \
		./$$i$(EXEEXT) > my_$$i.out; \
		if diff -u $(srcdir)/$$i.out my_$$i.out; then \
			echo "Test $$i PASSED."; \
		else \
			echo "Test $$i FAILED."; \
		fi; \
	done

CLEANFILES = my_*.out
