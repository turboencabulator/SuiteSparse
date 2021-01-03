AM_CPPFLAGS = -I$(top_srcdir)/Include $(SUITESPARSECONFIG_CFLAGS)
LDADD = $(top_builddir)/Source/libcamd.la

EXTRA_DIST = \
	camd_demo.out \
	camd_demo2.out \
	camd_l_demo.out \
	camd_simple.out

# Disable the .out implicit pattern rule.  Prevents GNU make from
# adding bogus dependencies for the .out files listed above.
%.out: %

check_PROGRAMS = \
	camd_demo \
	camd_demo2 \
	camd_l_demo \
	camd_simple

camd_demo_SOURCES = camd_demo.c
camd_demo2_SOURCES = camd_demo2.c
camd_l_demo_SOURCES = camd_l_demo.c
camd_simple_SOURCES = camd_simple.c

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
