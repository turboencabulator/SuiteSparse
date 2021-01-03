AM_CFLAGS = $(OPENMP_CFLAGS)
AM_CPPFLAGS = -I$(top_srcdir)/Include $(SUITESPARSECONFIG_CFLAGS)

GPUSRC = \
	cholmod_gpu.c

EXTRA_DIST = \
	cholmod_gpu_kernels.c \
	cholmod_gpu_kernels.cu

noinst_HEADERS = \
	t_cholmod_gpu.c

noinst_LTLIBRARIES = \
	libgpui.la \
	libgpul.la \
	libgpu.la

libgpui_la_SOURCES = $(GPUSRC)
libgpui_la_LIBADD = $(CODE_COVERAGE_LIBS)
libgpui_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS)
libgpui_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libgpul_la_SOURCES = $(GPUSRC)
libgpul_la_LIBADD = $(CODE_COVERAGE_LIBS)
libgpul_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS) -DDLONG
libgpul_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libgpu_la_SOURCES =
libgpu_la_LIBADD = libgpui.la libgpul.la
