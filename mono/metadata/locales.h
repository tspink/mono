/*
 * locales.h: Culture-sensitive handling
 *
 * Authors:
 *	Dick Porter (dick@ximian.com)
 *
 * (C) 2003 Ximian, Inc.
 */

#ifndef _MONO_METADATA_LOCALES_H_
#define _MONO_METADATA_LOCALES_H_

#include <config.h>
#include <glib.h>

#include <mono/metadata/object.h>

/* This is a copy of System.Globalization.CompareOptions */
typedef enum {
	CompareOptions_None=0x00,
	CompareOptions_IgnoreCase=0x01,
	CompareOptions_IgnoreNonSpace=0x02,
	CompareOptions_IgnoreSymbols=0x04,
	CompareOptions_IgnoreKanaType=0x08,
	CompareOptions_IgnoreWidth=0x10,
	CompareOptions_StringSort=0x20000000,
	CompareOptions_Ordinal=0x40000000
} MonoCompareOptions;

extern void ves_icall_System_Globalization_CultureInfo_construct_internal_locale (MonoObject *this, MonoString *locale);
extern void ves_icall_System_Globalization_CultureInfo_construct_compareinfo (MonoObject *comp, MonoString *locale);
extern int ves_icall_System_Globalization_CompareInfo_internal_compare (MonoObject *this, MonoString *str1, MonoString *str2, gint32 options);
extern void ves_icall_System_Globalization_CompareInfo_free_internal_collator (MonoObject *this);
extern void ves_icall_System_Globalization_CompareInfo_assign_sortkey (MonoObject *this, MonoObject *key, MonoString *source, gint32 options);

#endif /* _MONO_METADATA_FILEIO_H_ */
