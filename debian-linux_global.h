#ifndef DEBIANLINUX_GLOBAL_H
#define DEBIANLINUX_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DEBIANLINUX_LIBRARY)
#  define DEBIANLINUXSHARED_EXPORT Q_DECL_EXPORT
#else
#  define DEBIANLINUXSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // DEBIANLINUX_GLOBAL_H