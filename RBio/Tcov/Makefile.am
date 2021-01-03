AM_CPPFLAGS = -I$(top_srcdir)/Include $(SUITESPARSECONFIG_CFLAGS)
LDADD = $(top_builddir)/Source/librbio.la $(SUITESPARSECONFIG_LIBS)

EXTRA_DIST = \
	README.txt

dist_noinst_DATA = \
	matrices/Tina_DisCog.tar.gz \
	matrices/dwg961a.tar.gz \
	matrices/m4.rb \
	matrices/m4b.rb \
	matrices/mhd1280a.tar.gz \
	matrices/mhd1280b.tar.gz \
	matrices/plskz362.tar.gz \
	matrices/qc324.tar.gz \
	matrices/s4.rb \
	matrices/west0067.tar.gz \
	mangled/1.rb \
	mangled/2.rb \
	mangled/3.rb \
	mangled/4.rb \
	mangled/5.rb \
	mangled/6.rb \
	mangled/7.rb \
	mangled/8.rb \
	mangled/9.rb \
	mangled/10.rb \
	mangled/11.rb \
	mangled/12.rb \
	mangled/13.rb \
	mangled/14.rb \
	mangled/15.rb

if CODE_COVERAGE_ENABLED
check_PROGRAMS = \
	RBtest

RBtest_SOURCES = \
	RBtest.c

check-local: $(check_PROGRAMS)
	-./RBtest
endif

CLEANFILES = temp*.rb
