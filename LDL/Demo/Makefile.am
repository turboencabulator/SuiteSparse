AM_CPPFLAGS = -I$(top_srcdir)/Include $(AMD_CFLAGS) $(SUITESPARSECONFIG_CFLAGS)
LDADD = $(top_builddir)/Source/libldl.la

EXTRA_DIST = \
	ldlamd.out \
	ldllamd.out \
	ldlmain.out \
	ldllmain.out \
	ldlsimple.out \
	ldllsimple.out

# Disable the .out implicit pattern rule.  Prevents GNU make from
# adding bogus dependencies for the .out files listed above.
%.out: %

check_PROGRAMS = \
	ldlmain \
	ldllmain \
	ldlsimple \
	ldllsimple

if AMD
check_PROGRAMS += \
	ldlamd \
	ldllamd

ldlamd_SOURCES = ldlmain.c
ldlamd_LDADD = $(LDADD) $(AMD_LIBS)
ldlamd_CPPFLAGS = $(AM_CPPFLAGS) -DUSE_AMD

ldllamd_SOURCES = ldlmain.c
ldllamd_LDADD = $(LDADD) $(AMD_LIBS)
ldllamd_CPPFLAGS = $(AM_CPPFLAGS) -DUSE_AMD -DLDL_LONG
endif

ldlmain_SOURCES = ldlmain.c

ldllmain_SOURCES = ldlmain.c
ldllmain_CPPFLAGS = $(AM_CPPFLAGS) -DLDL_LONG

ldlsimple_SOURCES = ldlsimple.c

ldllsimple_SOURCES = ldlsimple.c
ldllsimple_CPPFLAGS = $(AM_CPPFLAGS) -DLDL_LONG

check-local: $(check_PROGRAMS) $(check_PROGRAMS:=.out)
	@for i in $(check_PROGRAMS); do \
		echo "Testing $$i"; \
		(cd $(srcdir) && $(abs_builddir)/$$i$(EXEEXT)) > my_$$i.out; \
		if diff -u $(srcdir)/$$i.out my_$$i.out; then \
			echo "Test $$i PASSED."; \
		else \
			echo "Test $$i FAILED."; \
		fi; \
	done

CLEANFILES = my_*.out
