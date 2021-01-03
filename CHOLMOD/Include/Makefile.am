EXTRA_DIST = \
	README.txt

# Automatically generated headers
nodist_pkginclude_HEADERS = \
	cholmod_config.h

pkginclude_HEADERS = \
	cholmod.h \
	cholmod_blas.h \
	cholmod_core.h \
	cholmod_function.h \
	cholmod_gpu.h \
	cholmod_io64.h

noinst_HEADERS = \
	cholmod_complexity.h \
	cholmod_gpu_kernels.h \
	cholmod_internal.h \
	cholmod_template.h

if MOD_CHECK
pkginclude_HEADERS += cholmod_check.h
endif

if MOD_CHOLESKY
pkginclude_HEADERS += cholmod_cholesky.h
endif

if MOD_PARTITION
pkginclude_HEADERS += cholmod_camd.h
if MOD_PARTITION_METIS
pkginclude_HEADERS += cholmod_partition.h
endif
endif

if MOD_MATRIXOPS
pkginclude_HEADERS += cholmod_matrixops.h
endif

if MOD_MODIFY
pkginclude_HEADERS += cholmod_modify.h
endif

if MOD_SUPERNODAL
pkginclude_HEADERS += cholmod_supernodal.h
endif
