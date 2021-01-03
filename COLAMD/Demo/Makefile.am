AM_CPPFLAGS = -I$(top_srcdir)/Include $(SUITESPARSECONFIG_CFLAGS)
LDADD = $(top_builddir)/Source/libcolamd.la

EXTRA_DIST = \
	colamd_example.out \
	colamd_l_example.out

# Disable the .out implicit pattern rule.  Prevents GNU make from
# adding bogus dependencies for the .out files listed above.
%.out: %

check_PROGRAMS = \
	colamd_example \
	colamd_l_example

colamd_example_SOURCES = colamd_example.c
colamd_l_example_SOURCES = colamd_l_example.c

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
