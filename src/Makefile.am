AUTOMAKE_OPTIONS = subdir-objects

AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\" \
	$(DEPENDENCIES_CFLAGS)

AM_CFLAGS =\
	-Wextra
	-Werror\
	-Wall\
	-g

AM_CXXFLAGS = $(AM_CFLAGS)

if ENABLE_TESTS
libgateway_framework_for_c_la_includedir = $(includedir)/gateway_framework_for_c

lib_LTLIBRARIES = libgateway_framework_for_c.la

libgateway_framework_for_c_la_SOURCES = \
	main.c \
	iot_platform/IoTPlatform.c \
	iot_platform/AWSIoTPlatform.c \
	iot_platform/IoTPlatformFactory.c

libgateway_framework_for_c_la_LIBADD = $(DEPENDENCIES_LIBS)
endif

bin_PROGRAMS = gateway_framework_for_c

gateway_framework_for_c_SOURCES = \
	main.c \
	iot_platform/IoTPlatform.c \
	iot_platform/AWSIoTPlatform.c \
	iot_platform/IoTPlatformFactory.c

gateway_framework_for_c_CFLAGS = $(AM_CFLAGS)
gateway_framework_for_c_LDFLAGS = $(AM_LDFLAGS)
gateway_framework_for_c_LDADD = $(DEPENDENCIES_LIBS)

if ENABLE_TESTS
if ENABLE_COVERAGE
AM_CFLAGS +=\
	-fprofile-arcs\
	-ftest-coverage

libgateway_framework_for_c_la_LIBADD += -lgcov
endif
endif
