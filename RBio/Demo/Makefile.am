AM_CPPFLAGS = -I$(top_srcdir)/Include $(SUITESPARSECONFIG_CFLAGS)
LDADD = $(top_builddir)/Source/librbio.la $(SUITESPARSECONFIG_LIBS)

EXTRA_DIST = \
	RBdemo.out

# Disable the .out implicit pattern rule.  Prevents GNU make from
# adding bogus dependencies for the .out files listed above.
%.out: %

check_PROGRAMS = \
	RBdemo

RBdemo_SOURCES = \
	RBdemo.c

if !CODE_COVERAGE_ENABLED
RB = \
	$(top_srcdir)/RBio/private/west0479.rua

check-local: $(check_PROGRAMS) $(RB)
	./RBdemo < $(top_srcdir)/RBio/private/west0479.rua

else
TAR = tar -O -xvvzf

RB = \
	$(top_srcdir)/RBio/private/bcsstk01.rb \
	$(top_srcdir)/RBio/private/farm.rb \
	$(top_srcdir)/RBio/private/lap_25.pse \
	$(top_srcdir)/RBio/private/lap_25.rb \
	$(top_srcdir)/RBio/private/west0479.rb \
	$(top_srcdir)/RBio/private/west0479.rua \
	$(top_srcdir)/Tcov/matrices/dwg961a.tar.gz \
	$(top_srcdir)/Tcov/matrices/mhd1280a.tar.gz \
	$(top_srcdir)/Tcov/matrices/mhd1280b.tar.gz \
	$(top_srcdir)/Tcov/matrices/qc324.tar.gz \
	$(top_srcdir)/Tcov/matrices/plskz362.tar.gz \
	$(top_srcdir)/Tcov/matrices/west0067.tar.gz \
	$(top_srcdir)/Tcov/matrices/Tina_DisCog.tar.gz \
	$(top_srcdir)/Tcov/matrices/m4.rb \
	$(top_srcdir)/Tcov/matrices/s4.rb \
	$(top_srcdir)/Tcov/matrices/m4b.rb \
	$(top_srcdir)/Tcov/mangled/1.rb \
	$(top_srcdir)/Tcov/mangled/2.rb \
	$(top_srcdir)/Tcov/mangled/3.rb \
	$(top_srcdir)/Tcov/mangled/4.rb \
	$(top_srcdir)/Tcov/mangled/5.rb \
	$(top_srcdir)/Tcov/mangled/6.rb \
	$(top_srcdir)/Tcov/mangled/7.rb \
	$(top_srcdir)/Tcov/mangled/8.rb \
	$(top_srcdir)/Tcov/mangled/9.rb \
	$(top_srcdir)/Tcov/mangled/10.rb \
	$(top_srcdir)/Tcov/mangled/11.rb \
	$(top_srcdir)/Tcov/mangled/12.rb \
	$(top_srcdir)/Tcov/mangled/13.rb \
	$(top_srcdir)/Tcov/mangled/14.rb \
	$(top_srcdir)/Tcov/mangled/15.rb

check-local: $(check_PROGRAMS) $(RB)
	-./RBdemo $(top_srcdir)/RBio/private/bcsstk01.rb
	-./RBdemo $(top_srcdir)/RBio/private/farm.rb
	-./RBdemo $(top_srcdir)/RBio/private/lap_25.pse
	-./RBdemo $(top_srcdir)/RBio/private/lap_25.rb
	-./RBdemo $(top_srcdir)/RBio/private/west0479.rb
	-./RBdemo $(top_srcdir)/RBio/private/west0479.rua
	-$(TAR) $(top_srcdir)/Tcov/matrices/dwg961a.tar.gz     dwg961a/dwg961a.rb         | ./RBdemo
	-$(TAR) $(top_srcdir)/Tcov/matrices/mhd1280a.tar.gz    mhd1280a/mhd1280a.rb       | ./RBdemo
	-$(TAR) $(top_srcdir)/Tcov/matrices/mhd1280b.tar.gz    mhd1280b/mhd1280b.rb       | ./RBdemo
	-$(TAR) $(top_srcdir)/Tcov/matrices/qc324.tar.gz       qc324/qc324.rb             | ./RBdemo
	-$(TAR) $(top_srcdir)/Tcov/matrices/plskz362.tar.gz    plskz362/plskz362.rb       | ./RBdemo
	-$(TAR) $(top_srcdir)/Tcov/matrices/west0067.tar.gz    west0067/west0067.rb       | ./RBdemo
	-$(TAR) $(top_srcdir)/Tcov/matrices/Tina_DisCog.tar.gz Tina_DisCog/Tina_DisCog.rb | ./RBdemo
	-./RBdemo $(top_srcdir)/Tcov/matrices/m4.rb
	-./RBdemo $(top_srcdir)/Tcov/matrices/s4.rb
	-./RBdemo $(top_srcdir)/Tcov/matrices/m4b.rb
	-./RBdemo $(top_srcdir)/Tcov/mangled/1.rb
	-./RBdemo $(top_srcdir)/Tcov/mangled/2.rb
	-./RBdemo $(top_srcdir)/Tcov/mangled/3.rb
	-./RBdemo $(top_srcdir)/Tcov/mangled/4.rb
	-./RBdemo $(top_srcdir)/Tcov/mangled/5.rb
	-./RBdemo $(top_srcdir)/Tcov/mangled/6.rb
	-./RBdemo $(top_srcdir)/Tcov/mangled/7.rb
	-./RBdemo $(top_srcdir)/Tcov/mangled/8.rb
	-./RBdemo $(top_srcdir)/Tcov/mangled/9.rb
	-./RBdemo $(top_srcdir)/Tcov/mangled/10.rb
	-./RBdemo $(top_srcdir)/Tcov/mangled/11.rb
	-./RBdemo $(top_srcdir)/Tcov/mangled/12.rb
	-./RBdemo $(top_srcdir)/Tcov/mangled/13.rb
	-./RBdemo $(top_srcdir)/Tcov/mangled/14.rb
	-./RBdemo $(top_srcdir)/Tcov/mangled/15.rb
endif

CLEANFILES = temp.rb
