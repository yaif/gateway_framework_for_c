ACLOCAL_AMFLAGS = -I build-aux

SUBDIRS = src

if ENABLE_TESTS
SUBDIRS += tests
endif

DIST_SUBDIRS = $(SUBDIRS)

device_framework_for_cdocdir = ${prefix}/doc/device_framework_for_c
device_framework_for_cdoc_DATA = \
	README\
	COPYING\
	AUTHORS\
	ChangeLog\
	INSTALL\
	NEWS


EXTRA_DIST = $(device_framework_for_cdoc_DATA)


# Remove doc directory on uninstall
uninstall-local:
	-rm -r $(device_framework_for_cdocdir)

coverage:
if ENABLE_COVERAGE
	gcovr -x -r .. -e ".+\.test\.cpp" --object-directory=src > coverage.xml
else
	@echo "To generate coverage report, please run ./configure with --enable-coverage"
endif
