AM_CPPFLAGS = -I$(top_srcdir)/Include $(SUITESPARSECONFIG_CFLAGS)
LDADD = $(top_builddir)/Source/libccolamd.la

EXTRA_DIST = \
	ccolamd_example.out \
	ccolamd_l_example.out

# Disable the .out implicit pattern rule.  Prevents GNU make from
# adding bogus dependencies for the .out files listed above.
%.out: %

check_PROGRAMS = \
	ccolamd_example \
	ccolamd_l_example

ccolamd_example_SOURCES = ccolamd_example.c
ccolamd_l_example_SOURCES = ccolamd_l_example.c

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
