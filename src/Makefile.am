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
libdevice_framework_for_c_la_includedir = $(includedir)/device_framework_for_c

lib_LTLIBRARIES = libdevice_framework_for_c.la

libdevice_framework_for_c_la_SOURCES = \
	main.c \
	iot_platform/IoTPlatform.c \
	iot_platform/AWSIoTPlatform.c

libdevice_framework_for_c_la_LIBADD = $(DEPENDENCIES_LIBS)
endif

bin_PROGRAMS = device_framework_for_c

device_framework_for_c_SOURCES = \
	main.c \
	iot_platform/IoTPlatform.c \
	iot_platform/AWSIoTPlatform.c

device_framework_for_c_CFLAGS = $(AM_CFLAGS)
device_framework_for_c_LDFLAGS = $(AM_LDFLAGS)
device_framework_for_c_LDADD = $(DEPENDENCIES_LIBS)

if ENABLE_TESTS
if ENABLE_COVERAGE
AM_CFLAGS +=\
	-fprofile-arcs\
	-ftest-coverage

libdevice_framework_for_c_la_LIBADD += -lgcov
endif
endif
