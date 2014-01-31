# GNU Make project makefile autogenerated by Premake
ifndef config
  config=debug
endif

ifndef verbose
  SILENT = @
endif

ifndef CC
  CC = gcc
endif

ifndef CXX
  CXX = g++
endif

ifndef AR
  AR = ar
endif

ifeq ($(config),debug)
  OBJDIR     = ../../Debug/Debug/tests
  TARGETDIR  = ../../Debug
  TARGET     = $(TARGETDIR)/tests
  DEFINES   += 
  INCLUDES  += -I../../include -I../../lib/UnitTest++/src -I../../tests
  CPPFLAGS  += -MMD -MP $(DEFINES) $(INCLUDES)
  CFLAGS    += $(CPPFLAGS) $(ARCH) -g -Wall -Wvla `icu-config --cppflags`
  CXXFLAGS  += $(CFLAGS) 
  LDFLAGS   += -Wl,-rpath=./ `icu-config --ldflags --ldflags-icuio` -L../../Debug
  LIBS      += -lpelet -lunit_test++
  RESFLAGS  += $(DEFINES) $(INCLUDES) 
  LDDEPS    += ../../Debug/libpelet.so ../../Debug/libunit_test++.a
  LINKCMD    = $(CXX) -o $(TARGET) $(OBJECTS) $(LDFLAGS) $(RESOURCES) $(ARCH) $(LIBS)
  define PREBUILDCMDS
  endef
  define PRELINKCMDS
  endef
  define POSTBUILDCMDS
  endef
endif

ifeq ($(config),release)
  OBJDIR     = ../../Release/Release/tests
  TARGETDIR  = ../../Release
  TARGET     = $(TARGETDIR)/tests
  DEFINES   += 
  INCLUDES  += -I../../include -I../../lib/UnitTest++/src -I../../tests
  CPPFLAGS  += -MMD -MP $(DEFINES) $(INCLUDES)
  CFLAGS    += $(CPPFLAGS) $(ARCH) -Wall -Wvla `icu-config --cppflags`
  CXXFLAGS  += $(CFLAGS) 
  LDFLAGS   += -s -Wl,-rpath=./ `icu-config --ldflags --ldflags-icuio` -L../../Release
  LIBS      += -lpelet -lunit_test++
  RESFLAGS  += $(DEFINES) $(INCLUDES) 
  LDDEPS    += ../../Release/libpelet.so ../../Release/libunit_test++.a
  LINKCMD    = $(CXX) -o $(TARGET) $(OBJECTS) $(LDFLAGS) $(RESOURCES) $(ARCH) $(LIBS)
  define PREBUILDCMDS
  endef
  define PRELINKCMDS
  endef
  define POSTBUILDCMDS
  endef
endif

OBJECTS := \
	$(OBJDIR)/FileTestFixtureClass.o \
	$(OBJDIR)/LexicalAnalyzerTestClass.o \
	$(OBJDIR)/LanguageDiscoveryTestClass.o \
	$(OBJDIR)/Parser54TestClass.o \
	$(OBJDIR)/Parser53TestClass.o \
	$(OBJDIR)/main.o \
	$(OBJDIR)/UCharBufferedFileTestClass.o \
	$(OBJDIR)/TestObserverClass.o \

RESOURCES := \

SHELLTYPE := msdos
ifeq (,$(ComSpec)$(COMSPEC))
  SHELLTYPE := posix
endif
ifeq (/bin,$(findstring /bin,$(SHELL)))
  SHELLTYPE := posix
endif

.PHONY: clean prebuild prelink

all: $(TARGETDIR) $(OBJDIR) prebuild prelink $(TARGET)
	@:

$(TARGET): $(GCH) $(OBJECTS) $(LDDEPS) $(RESOURCES)
	@echo Linking tests
	$(SILENT) $(LINKCMD)
	$(POSTBUILDCMDS)

$(TARGETDIR):
	@echo Creating $(TARGETDIR)
ifeq (posix,$(SHELLTYPE))
	$(SILENT) mkdir -p $(TARGETDIR)
else
	$(SILENT) mkdir $(subst /,\\,$(TARGETDIR))
endif

$(OBJDIR):
	@echo Creating $(OBJDIR)
ifeq (posix,$(SHELLTYPE))
	$(SILENT) mkdir -p $(OBJDIR)
else
	$(SILENT) mkdir $(subst /,\\,$(OBJDIR))
endif

clean:
	@echo Cleaning tests
ifeq (posix,$(SHELLTYPE))
	$(SILENT) rm -f  $(TARGET)
	$(SILENT) rm -rf $(OBJDIR)
else
	$(SILENT) if exist $(subst /,\\,$(TARGET)) del $(subst /,\\,$(TARGET))
	$(SILENT) if exist $(subst /,\\,$(OBJDIR)) rmdir /s /q $(subst /,\\,$(OBJDIR))
endif

prebuild:
	$(PREBUILDCMDS)

prelink:
	$(PRELINKCMDS)

ifneq (,$(PCH))
$(GCH): $(PCH)
	@echo $(notdir $<)
	-$(SILENT) cp $< $(OBJDIR)
	$(SILENT) $(CXX) $(CXXFLAGS) -o "$@" -c "$<"
endif

$(OBJDIR)/FileTestFixtureClass.o: ../../tests/FileTestFixtureClass.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(CXXFLAGS) -o "$@" -c "$<"
$(OBJDIR)/LexicalAnalyzerTestClass.o: ../../tests/LexicalAnalyzerTestClass.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(CXXFLAGS) -o "$@" -c "$<"
$(OBJDIR)/LanguageDiscoveryTestClass.o: ../../tests/LanguageDiscoveryTestClass.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(CXXFLAGS) -o "$@" -c "$<"
$(OBJDIR)/Parser54TestClass.o: ../../tests/Parser54TestClass.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(CXXFLAGS) -o "$@" -c "$<"
$(OBJDIR)/Parser53TestClass.o: ../../tests/Parser53TestClass.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(CXXFLAGS) -o "$@" -c "$<"
$(OBJDIR)/main.o: ../../tests/main.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(CXXFLAGS) -o "$@" -c "$<"
$(OBJDIR)/UCharBufferedFileTestClass.o: ../../tests/UCharBufferedFileTestClass.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(CXXFLAGS) -o "$@" -c "$<"
$(OBJDIR)/TestObserverClass.o: ../../tests/TestObserverClass.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(CXXFLAGS) -o "$@" -c "$<"

-include $(OBJECTS:%.o=%.d)