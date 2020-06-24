/*   -*- buffer-read-only: t -*- vi: set ro:
 *
 *  DO NOT EDIT THIS FILE   (cli-debug-args.c)
 *
 *  It has been AutoGen-ed
 *  From the definitions    cli-debug-args.def
 *  and the template file   options
 *
 * Generated from AutoOpts 41:1:16 templates.
 *
 *  AutoOpts is a copyrighted work.  This source file is not encumbered
 *  by AutoOpts licensing, but is provided under the licensing terms chosen
 *  by the gnutls-cli-debug author or copyright holder.  AutoOpts is
 *  licensed under the terms of the LGPL.  The redistributable library
 *  (``libopts'') is licensed under the terms of either the LGPL or, at the
 *  users discretion, the BSD license.  See the AutoOpts and/or libopts sources
 *  for details.
 *
 * The gnutls-cli-debug program is copyrighted and licensed
 * under the following terms:
 *
 *  Copyright (C) 2000-2017 Free Software Foundation, and others, all rights reserved.
 *  This is free software. It is licensed for use, modification and
 *  redistribution under the terms of the GNU General Public License,
 *  version 3 or later <http://gnu.org/licenses/gpl.html>
 *
 *  gnutls-cli-debug is free software: you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by the
 *  Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  gnutls-cli-debug is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __doxygen__
#define OPTION_CODE_COMPILE 1
#include "cli-debug-args.h"
#include <sys/types.h>

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef  __cplusplus
extern "C" {
#endif
extern FILE * option_usage_fp;
#define zCopyright      (gnutls_cli_debug_opt_strs+0)
#define zLicenseDescrip (gnutls_cli_debug_opt_strs+291)


#ifndef NULL
#  define NULL 0
#endif

/**
 *  static const strings for gnutls-cli-debug options
 */
static char const gnutls_cli_debug_opt_strs[2007] =
/*     0 */ "gnutls-cli-debug 3.5.9\n"
            "Copyright (C) 2000-2017 Free Software Foundation, and others, all rights reserved.\n"
            "This is free software. It is licensed for use, modification and\n"
            "redistribution under the terms of the GNU General Public License,\n"
            "version 3 or later <http://gnu.org/licenses/gpl.html>\n\0"
/*   291 */ "gnutls-cli-debug is free software: you can redistribute it and/or modify it\n"
            "under the terms of the GNU General Public License as published by the Free\n"
            "Software Foundation, either version 3 of the License, or (at your option)\n"
            "any later version.\n\n"
            "gnutls-cli-debug is distributed in the hope that it will be useful, but\n"
            "WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY\n"
            "or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License\n"
            "for more details.\n\n"
            "You should have received a copy of the GNU General Public License along\n"
            "with this program.  If not, see <http://www.gnu.org/licenses/>.\n\0"
/*   912 */ "Enable debugging\0"
/*   929 */ "DEBUG\0"
/*   935 */ "debug\0"
/*   941 */ "More verbose output\0"
/*   961 */ "VERBOSE\0"
/*   969 */ "verbose\0"
/*   977 */ "The port to connect to\0"
/*  1000 */ "PORT\0"
/*  1005 */ "port\0"
/*  1010 */ "an alias for the 'starttls-proto' option\0"
/*  1051 */ "app-proto\0"
/*  1061 */ "The application protocol to be used to obtain the server's certificate\n"
            "(https, ftp, smtp, imap, ldap, xmpp)\0"
/*  1169 */ "STARTTLS_PROTO\0"
/*  1184 */ "starttls-proto\0"
/*  1199 */ "display extended usage information and exit\0"
/*  1243 */ "help\0"
/*  1248 */ "extended usage information passed thru pager\0"
/*  1293 */ "more-help\0"
/*  1303 */ "output version information and exit\0"
/*  1339 */ "version\0"
/*  1347 */ "GNUTLS_CLI_DEBUG\0"
/*  1364 */ "gnutls-cli-debug - GnuTLS debug client\n"
            "Usage:  %s [ -<flag> [<val>] | --<name>[{=| }<val>] ]... \n\0"
/*  1462 */ "bugs@gnutls.org\0"
/*  1478 */ "\n\0"
/*  1480 */ "TLS debug client.  It sets up multiple TLS connections to a server and\n"
            "queries its capabilities.  It was created to assist in debugging GnuTLS,\n"
            "but it might be useful to extract a TLS server's capabilities.  It connects\n"
            "to a TLS server, performs tests and print the server's capabilities.  If\n"
            "called with the `-v' parameter more checks will be performed.  Can be used\n"
            "to check for servers with special needs or bugs.\n\0"
/*  1898 */ "gnutls-cli-debug 3.5.9\0"
/*  1921 */ "Usage: gnutls-cli-debug [options] hostname\n"
            "gnutls-cli --help for usage instructions.\n";

/**
 *  debug option description:
 */
/** Descriptive text for the debug option */
#define DEBUG_DESC      (gnutls_cli_debug_opt_strs+912)
/** Upper-cased name for the debug option */
#define DEBUG_NAME      (gnutls_cli_debug_opt_strs+929)
/** Name string for the debug option */
#define DEBUG_name      (gnutls_cli_debug_opt_strs+935)
/** Compiled in flag settings for the debug option */
#define DEBUG_FLAGS     (OPTST_DISABLED \
        | OPTST_SET_ARGTYPE(OPARG_TYPE_NUMERIC))

/**
 *  verbose option description:
 */
/** Descriptive text for the verbose option */
#define VERBOSE_DESC      (gnutls_cli_debug_opt_strs+941)
/** Upper-cased name for the verbose option */
#define VERBOSE_NAME      (gnutls_cli_debug_opt_strs+961)
/** Name string for the verbose option */
#define VERBOSE_name      (gnutls_cli_debug_opt_strs+969)
/** Compiled in flag settings for the verbose option */
#define VERBOSE_FLAGS     (OPTST_DISABLED)

/**
 *  port option description:
 */
/** Descriptive text for the port option */
#define PORT_DESC      (gnutls_cli_debug_opt_strs+977)
/** Upper-cased name for the port option */
#define PORT_NAME      (gnutls_cli_debug_opt_strs+1000)
/** Name string for the port option */
#define PORT_name      (gnutls_cli_debug_opt_strs+1005)
/** Compiled in flag settings for the port option */
#define PORT_FLAGS     (OPTST_DISABLED \
        | OPTST_SET_ARGTYPE(OPARG_TYPE_NUMERIC))

/**
 *  app-proto option description:
 */
/** Descriptive text for the app-proto option */
#define APP_PROTO_DESC    (gnutls_cli_debug_opt_strs+1010)
#define APP_PROTO_NAME    NULL
/** Unmodified name string for the app-proto option */
#define APP_PROTO_name    (gnutls_cli_debug_opt_strs+1051)
/** Compiled in flag settings for the app-proto option */
#define APP_PROTO_FLAGS     (STARTTLS_PROTO_FLAGS | OPTST_ALIAS)

/**
 *  starttls-proto option description:
 */
/** Descriptive text for the starttls-proto option */
#define STARTTLS_PROTO_DESC      (gnutls_cli_debug_opt_strs+1061)
/** Upper-cased name for the starttls-proto option */
#define STARTTLS_PROTO_NAME      (gnutls_cli_debug_opt_strs+1169)
/** Name string for the starttls-proto option */
#define STARTTLS_PROTO_name      (gnutls_cli_debug_opt_strs+1184)
/** Compiled in flag settings for the starttls-proto option */
#define STARTTLS_PROTO_FLAGS     (OPTST_DISABLED \
        | OPTST_SET_ARGTYPE(OPARG_TYPE_STRING))

/*
 *  Help/More_Help/Version option descriptions:
 */
#define HELP_DESC       (gnutls_cli_debug_opt_strs+1199)
#define HELP_name       (gnutls_cli_debug_opt_strs+1243)
#ifdef HAVE_WORKING_FORK
#define MORE_HELP_DESC  (gnutls_cli_debug_opt_strs+1248)
#define MORE_HELP_name  (gnutls_cli_debug_opt_strs+1293)
#define MORE_HELP_FLAGS (OPTST_IMM | OPTST_NO_INIT)
#else
#define MORE_HELP_DESC  HELP_DESC
#define MORE_HELP_name  HELP_name
#define MORE_HELP_FLAGS (OPTST_OMITTED | OPTST_NO_INIT)
#endif
#ifdef NO_OPTIONAL_OPT_ARGS
#  define VER_FLAGS     (OPTST_IMM | OPTST_NO_INIT)
#else
#  define VER_FLAGS     (OPTST_SET_ARGTYPE(OPARG_TYPE_STRING) | \
                         OPTST_ARG_OPTIONAL | OPTST_IMM | OPTST_NO_INIT)
#endif
#define VER_DESC        (gnutls_cli_debug_opt_strs+1303)
#define VER_name        (gnutls_cli_debug_opt_strs+1339)
/**
 *  Declare option callback procedures
 */
extern tOptProc
    optionBooleanVal,   optionNestedVal,    optionNumericVal,
    optionPagedUsage,   optionPrintVersion, optionResetOpt,
    optionStackArg,     optionTimeDate,     optionTimeVal,
    optionUnstackArg,   optionVendorOption;
static tOptProc
    doOptApp_Proto, doOptDebug, doOptPort, doUsageOpt;
#define VER_PROC        optionPrintVersion

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/**
 *  Define the gnutls-cli-debug Option Descriptions.
 * This is an array of OPTION_CT entries, one for each
 * option that the gnutls-cli-debug program responds to.
 */
static tOptDesc optDesc[OPTION_CT] = {
  {  /* entry idx, value */ 0, VALUE_OPT_DEBUG,
     /* equiv idx, value */ 0, VALUE_OPT_DEBUG,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ DEBUG_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --debug */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ doOptDebug,
     /* desc, NAME, name */ DEBUG_DESC, DEBUG_NAME, DEBUG_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 1, VALUE_OPT_VERBOSE,
     /* equiv idx, value */ 1, VALUE_OPT_VERBOSE,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, NOLIMIT, 0,
     /* opt state flags  */ VERBOSE_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --verbose */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ NULL,
     /* desc, NAME, name */ VERBOSE_DESC, VERBOSE_NAME, VERBOSE_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 2, VALUE_OPT_PORT,
     /* equiv idx, value */ 2, VALUE_OPT_PORT,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ PORT_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --port */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ doOptPort,
     /* desc, NAME, name */ PORT_DESC, PORT_NAME, PORT_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 3, VALUE_OPT_APP_PROTO,
     /* equiv idx, value */ 3, VALUE_OPT_APP_PROTO,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ APP_PROTO_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --app-proto */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ doOptApp_Proto,
     /* desc, NAME, name */ APP_PROTO_DESC, APP_PROTO_NAME, APP_PROTO_name,
     /* disablement strs */ 0, 0 },

  {  /* entry idx, value */ 4, VALUE_OPT_STARTTLS_PROTO,
     /* equiv idx, value */ 4, VALUE_OPT_STARTTLS_PROTO,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ STARTTLS_PROTO_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --starttls-proto */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ NULL,
     /* desc, NAME, name */ STARTTLS_PROTO_DESC, STARTTLS_PROTO_NAME, STARTTLS_PROTO_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ INDEX_OPT_VERSION, VALUE_OPT_VERSION,
     /* equiv idx value  */ NO_EQUIVALENT, VALUE_OPT_VERSION,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ VER_FLAGS, AOUSE_VERSION,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ VER_PROC,
     /* desc, NAME, name */ VER_DESC, NULL, VER_name,
     /* disablement strs */ NULL, NULL },



  {  /* entry idx, value */ INDEX_OPT_HELP, VALUE_OPT_HELP,
     /* equiv idx value  */ NO_EQUIVALENT, VALUE_OPT_HELP,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ OPTST_IMM | OPTST_NO_INIT, AOUSE_HELP,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ doUsageOpt,
     /* desc, NAME, name */ HELP_DESC, NULL, HELP_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ INDEX_OPT_MORE_HELP, VALUE_OPT_MORE_HELP,
     /* equiv idx value  */ NO_EQUIVALENT, VALUE_OPT_MORE_HELP,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ MORE_HELP_FLAGS, AOUSE_MORE_HELP,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL,  NULL,
     /* option proc      */ optionPagedUsage,
     /* desc, NAME, name */ MORE_HELP_DESC, NULL, MORE_HELP_name,
     /* disablement strs */ NULL, NULL }
};


/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/** Reference to the upper cased version of gnutls-cli-debug. */
#define zPROGNAME       (gnutls_cli_debug_opt_strs+1347)
/** Reference to the title line for gnutls-cli-debug usage. */
#define zUsageTitle     (gnutls_cli_debug_opt_strs+1364)
/** There is no gnutls-cli-debug configuration file. */
#define zRcName         NULL
/** There are no directories to search for gnutls-cli-debug config files. */
#define apzHomeList     NULL
/** The gnutls-cli-debug program bug email address. */
#define zBugsAddr       (gnutls_cli_debug_opt_strs+1462)
/** Clarification/explanation of what gnutls-cli-debug does. */
#define zExplain        (gnutls_cli_debug_opt_strs+1478)
/** Extra detail explaining what gnutls-cli-debug does. */
#define zDetail         (gnutls_cli_debug_opt_strs+1480)
/** The full version string for gnutls-cli-debug. */
#define zFullVersion    (gnutls_cli_debug_opt_strs+1898)
/* extracted from optcode.tlib near line 364 */

#if defined(ENABLE_NLS)
# define OPTPROC_BASE OPTPROC_TRANSLATE | OPTPROC_NXLAT_OPT
  static tOptionXlateProc translate_option_strings;
#else
# define OPTPROC_BASE OPTPROC_NONE
# define translate_option_strings NULL
#endif /* ENABLE_NLS */

#define gnutls_cli_debug_full_usage (NULL)
#define gnutls_cli_debug_short_usage (gnutls_cli_debug_opt_strs+1921)

#endif /* not defined __doxygen__ */

/*
 *  Create the static procedure(s) declared above.
 */
/**
 * The callout function that invokes the optionUsage function.
 *
 * @param[in] opts the AutoOpts option description structure
 * @param[in] od   the descriptor for the "help" (usage) option.
 * @noreturn
 */
static void
doUsageOpt(tOptions * opts, tOptDesc * od)
{
    int ex_code;
    ex_code = GNUTLS_CLI_DEBUG_EXIT_SUCCESS;
    optionUsage(&gnutls_cli_debugOptions, ex_code);
    /* NOTREACHED */
    exit(GNUTLS_CLI_DEBUG_EXIT_FAILURE);
    (void)opts;
    (void)od;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/**
 * Code to handle the debug option.
 * Specifies the debug level.
 * @param[in] pOptions the gnutls-cli-debug options data structure
 * @param[in,out] pOptDesc the option descriptor for this option.
 */
static void
doOptDebug(tOptions* pOptions, tOptDesc* pOptDesc)
{
    static struct {long rmin, rmax;} const rng[1] = {
        { 0 ,  9999 } };
    int  ix;

    if (pOptions <= OPTPROC_EMIT_LIMIT)
        goto emit_ranges;
    optionNumericVal(pOptions, pOptDesc);

    for (ix = 0; ix < 1; ix++) {
        if (pOptDesc->optArg.argInt < rng[ix].rmin)
            continue;  /* ranges need not be ordered. */
        if (pOptDesc->optArg.argInt == rng[ix].rmin)
            return;
        if (rng[ix].rmax == LONG_MIN)
            continue;
        if (pOptDesc->optArg.argInt <= rng[ix].rmax)
            return;
    }

    option_usage_fp = stderr;

 emit_ranges:
optionShowRange(pOptions, pOptDesc, VOIDP(rng), 1);
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/**
 * Code to handle the port option.
 *
 * @param[in] pOptions the gnutls-cli-debug options data structure
 * @param[in,out] pOptDesc the option descriptor for this option.
 */
static void
doOptPort(tOptions* pOptions, tOptDesc* pOptDesc)
{
    static struct {long rmin, rmax;} const rng[1] = {
        { 0 ,  65536 } };
    int  ix;

    if (pOptions <= OPTPROC_EMIT_LIMIT)
        goto emit_ranges;
    optionNumericVal(pOptions, pOptDesc);

    for (ix = 0; ix < 1; ix++) {
        if (pOptDesc->optArg.argInt < rng[ix].rmin)
            continue;  /* ranges need not be ordered. */
        if (pOptDesc->optArg.argInt == rng[ix].rmin)
            return;
        if (rng[ix].rmax == LONG_MIN)
            continue;
        if (pOptDesc->optArg.argInt <= rng[ix].rmax)
            return;
    }

    option_usage_fp = stderr;

 emit_ranges:
optionShowRange(pOptions, pOptDesc, VOIDP(rng), 1);
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/**
 * Code to handle the app-proto option.
 *
 * @param[in] pOptions the gnutls-cli-debug options data structure
 * @param[in,out] pOptDesc the option descriptor for this option.
 */
static void
doOptApp_Proto(tOptions* pOptions, tOptDesc* pOptDesc)
{
    int res = optionAlias(pOptions, pOptDesc, INDEX_OPT_STARTTLS_PROTO);
    if ((res != 0) && ((pOptions->fOptSet & OPTPROC_ERRSTOP) != 0))
        USAGE(GNUTLS_CLI_DEBUG_EXIT_USAGE_ERROR);

}
/* extracted from optmain.tlib near line 1250 */

/**
 * The directory containing the data associated with gnutls-cli-debug.
 */
#ifndef  PKGDATADIR
# define PKGDATADIR ""
#endif

/**
 * Information about the person or institution that packaged gnutls-cli-debug
 * for the current distribution.
 */
#ifndef  WITH_PACKAGER
# define gnutls_cli_debug_packager_info NULL
#else
/** Packager information for gnutls-cli-debug. */
static char const gnutls_cli_debug_packager_info[] =
    "Packaged by " WITH_PACKAGER

# ifdef WITH_PACKAGER_VERSION
        " ("WITH_PACKAGER_VERSION")"
# endif

# ifdef WITH_PACKAGER_BUG_REPORTS
    "\nReport gnutls_cli_debug bugs to " WITH_PACKAGER_BUG_REPORTS
# endif
    "\n";
#endif
#ifndef __doxygen__

#endif /* __doxygen__ */
/**
 * The option definitions for gnutls-cli-debug.  The one structure that
 * binds them all.
 */
tOptions gnutls_cli_debugOptions = {
    OPTIONS_STRUCT_VERSION,
    0, NULL,                    /* original argc + argv    */
    ( OPTPROC_BASE
    + OPTPROC_ERRSTOP
    + OPTPROC_SHORTOPT
    + OPTPROC_LONGOPT
    + OPTPROC_NO_REQ_OPT
    + OPTPROC_ARGS_REQ
    + OPTPROC_REORDER
    + OPTPROC_GNUUSAGE
    + OPTPROC_MISUSE ),
    0, NULL,                    /* current option index, current option */
    NULL,         NULL,         zPROGNAME,
    zRcName,      zCopyright,   zLicenseDescrip,
    zFullVersion, apzHomeList,  zUsageTitle,
    zExplain,     zDetail,      optDesc,
    zBugsAddr,                  /* address to send bugs to */
    NULL, NULL,                 /* extensions/saved state  */
    optionUsage, /* usage procedure */
    translate_option_strings,   /* translation procedure */
    /*
     *  Indexes to special options
     */
    { INDEX_OPT_MORE_HELP, /* more-help option index */
      NO_EQUIVALENT, /* save option index */
      NO_EQUIVALENT, /* '-#' option index */
      NO_EQUIVALENT /* index of default opt */
    },
    8 /* full option count */, 5 /* user option count */,
    gnutls_cli_debug_full_usage, gnutls_cli_debug_short_usage,
    NULL, NULL,
    PKGDATADIR, gnutls_cli_debug_packager_info
};

#if ENABLE_NLS
/**
 * This code is designed to translate translatable option text for the
 * gnutls-cli-debug program.  These translations happen upon entry
 * to optionProcess().
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#ifdef HAVE_DCGETTEXT
# include <gettext.h>
#endif
#include <autoopts/usage-txt.h>

static char * AO_gettext(char const * pz);
static void   coerce_it(void ** s);

/**
 * AutoGen specific wrapper function for gettext.  It relies on the macro _()
 * to convert from English to the target language, then strdup-duplicates the
 * result string.  It tries the "libopts" domain first, then whatever has been
 * set via the \a textdomain(3) call.
 *
 * @param[in] pz the input text used as a lookup key.
 * @returns the translated text (if there is one),
 *   or the original text (if not).
 */
static char *
AO_gettext(char const * pz)
{
    char * res;
    if (pz == NULL)
        return NULL;
#ifdef HAVE_DCGETTEXT
    /*
     * While processing the option_xlateable_txt data, try to use the
     * "libopts" domain.  Once we switch to the option descriptor data,
     * do *not* use that domain.
     */
    if (option_xlateable_txt.field_ct != 0) {
        res = dgettext("libopts", pz);
        if (res == pz)
            res = (char *)VOIDP(_(pz));
    } else
        res = (char *)VOIDP(_(pz));
#else
    res = (char *)VOIDP(_(pz));
#endif
    if (res == pz)
        return res;
    res = strdup(res);
    if (res == NULL) {
        fputs(_("No memory for duping translated strings\n"), stderr);
        exit(GNUTLS_CLI_DEBUG_EXIT_FAILURE);
    }
    return res;
}

/**
 * All the pointers we use are marked "* const", but they are stored in
 * writable memory.  Coerce the mutability and set the pointer.
 */
static void coerce_it(void ** s) { *s = AO_gettext(*s);
}

/**
 * Translate all the translatable strings in the gnutls_cli_debugOptions
 * structure defined above.  This is done only once.
 */
static void
translate_option_strings(void)
{
    tOptions * const opts = &gnutls_cli_debugOptions;

    /*
     *  Guard against re-translation.  It won't work.  The strings will have
     *  been changed by the first pass through this code.  One shot only.
     */
    if (option_xlateable_txt.field_ct != 0) {
        /*
         *  Do the translations.  The first pointer follows the field count
         *  field.  The field count field is the size of a pointer.
         */
        char ** ppz = (char**)VOIDP(&(option_xlateable_txt));
        int     ix  = option_xlateable_txt.field_ct;

        do {
            ppz++; /* skip over field_ct */
            *ppz = AO_gettext(*ppz);
        } while (--ix > 0);
        /* prevent re-translation and disable "libopts" domain lookup */
        option_xlateable_txt.field_ct = 0;

        coerce_it(VOIDP(&(opts->pzCopyright)));
        coerce_it(VOIDP(&(opts->pzCopyNotice)));
        coerce_it(VOIDP(&(opts->pzFullVersion)));
        coerce_it(VOIDP(&(opts->pzUsageTitle)));
        coerce_it(VOIDP(&(opts->pzExplain)));
        coerce_it(VOIDP(&(opts->pzDetail)));
        {
            tOptDesc * od = opts->pOptDesc;
            for (ix = opts->optCt; ix > 0; ix--, od++)
                coerce_it(VOIDP(&(od->pzText)));
        }
    }
}
#endif /* ENABLE_NLS */

#ifdef DO_NOT_COMPILE_THIS_CODE_IT_IS_FOR_GETTEXT
/** I18N function strictly for xgettext.  Do not compile. */
static void bogus_function(void) {
  /* TRANSLATORS:

     The following dummy function was crated solely so that xgettext can
     extract the correct strings.  These strings are actually referenced
     by a field name in the gnutls_cli_debugOptions structure noted in the
     comments below.  The literal text is defined in gnutls_cli_debug_opt_strs.
   
     NOTE: the strings below are segmented with respect to the source string
     gnutls_cli_debug_opt_strs.  The strings above are handed off for translation
     at run time a paragraph at a time.  Consequently, they are presented here
     for translation a paragraph at a time.
   
     ALSO: often the description for an option will reference another option
     by name.  These are set off with apostrophe quotes (I hope).  Do not
     translate option names.
   */
  /* referenced via gnutls_cli_debugOptions.pzCopyright */
  puts(_("gnutls-cli-debug 3.5.9\n\
Copyright (C) 2000-2017 Free Software Foundation, and others, all rights reserved.\n\
This is free software. It is licensed for use, modification and\n\
redistribution under the terms of the GNU General Public License,\n\
version 3 or later <http://gnu.org/licenses/gpl.html>\n"));

  /* referenced via gnutls_cli_debugOptions.pzCopyNotice */
  puts(_("gnutls-cli-debug is free software: you can redistribute it and/or modify it\n\
under the terms of the GNU General Public License as published by the Free\n\
Software Foundation, either version 3 of the License, or (at your option)\n\
any later version.\n\n"));
  puts(_("gnutls-cli-debug is distributed in the hope that it will be useful, but\n\
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY\n\
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License\n\
for more details.\n\n"));
  puts(_("You should have received a copy of the GNU General Public License along\n\
with this program.  If not, see <http://www.gnu.org/licenses/>.\n"));

  /* referenced via gnutls_cli_debugOptions.pOptDesc->pzText */
  puts(_("Enable debugging"));

  /* referenced via gnutls_cli_debugOptions.pOptDesc->pzText */
  puts(_("More verbose output"));

  /* referenced via gnutls_cli_debugOptions.pOptDesc->pzText */
  puts(_("The port to connect to"));

  /* referenced via gnutls_cli_debugOptions.pOptDesc->pzText */
  puts(_("an alias for the 'starttls-proto' option"));

  /* referenced via gnutls_cli_debugOptions.pOptDesc->pzText */
  puts(_("The application protocol to be used to obtain the server's certificate\n\
(https, ftp, smtp, imap, ldap, xmpp)"));

  /* referenced via gnutls_cli_debugOptions.pOptDesc->pzText */
  puts(_("display extended usage information and exit"));

  /* referenced via gnutls_cli_debugOptions.pOptDesc->pzText */
  puts(_("extended usage information passed thru pager"));

  /* referenced via gnutls_cli_debugOptions.pOptDesc->pzText */
  puts(_("output version information and exit"));

  /* referenced via gnutls_cli_debugOptions.pzUsageTitle */
  puts(_("gnutls-cli-debug - GnuTLS debug client\n\
Usage:  %s [ -<flag> [<val>] | --<name>[{=| }<val>] ]... \n"));

  /* referenced via gnutls_cli_debugOptions.pzExplain */
  puts(_("\n"));

  /* referenced via gnutls_cli_debugOptions.pzDetail */
  puts(_("TLS debug client.  It sets up multiple TLS connections to a server and\n\
queries its capabilities.  It was created to assist in debugging GnuTLS,\n\
but it might be useful to extract a TLS server's capabilities.  It connects\n\
to a TLS server, performs tests and print the server's capabilities.  If\n\
called with the `-v' parameter more checks will be performed.  Can be used\n\
to check for servers with special needs or bugs.\n"));

  /* referenced via gnutls_cli_debugOptions.pzFullVersion */
  puts(_("gnutls-cli-debug 3.5.9"));

  /* referenced via gnutls_cli_debugOptions.pzFullUsage */
  puts(_("<<<NOT-FOUND>>>"));

  /* referenced via gnutls_cli_debugOptions.pzShortUsage */
  puts(_("Usage: gnutls-cli-debug [options] hostname\n\
gnutls-cli --help for usage instructions.\n"));
  /* LIBOPTS-MESSAGES: */
#line 67 "../autoopts.c"
  puts(_("allocation of %d bytes failed\n"));
#line 93 "../autoopts.c"
  puts(_("allocation of %d bytes failed\n"));
#line 53 "../init.c"
  puts(_("AutoOpts function called without option descriptor\n"));
#line 86 "../init.c"
  puts(_("\tThis exceeds the compiled library version:  "));
#line 84 "../init.c"
  puts(_("Automated Options Processing Error!\n"
       "\t%s called AutoOpts function with structure version %d:%d:%d.\n"));
#line 80 "../autoopts.c"
  puts(_("realloc of %d bytes at 0x%p failed\n"));
#line 88 "../init.c"
  puts(_("\tThis is less than the minimum library version:  "));
#line 121 "../version.c"
  puts(_("Automated Options version %s\n"
       "\tCopyright (C) 1999-2014 by Bruce Korb - all rights reserved\n"));
#line 87 "../makeshell.c"
  puts(_("(AutoOpts bug):  %s.\n"));
#line 90 "../reset.c"
  puts(_("optionResetOpt() called, but reset-option not configured"));
#line 295 "../usage.c"
  puts(_("could not locate the 'help' option"));
#line 336 "../autoopts.c"
  puts(_("optionProcess() was called with invalid data"));
#line 751 "../usage.c"
  puts(_("invalid argument type specified"));
#line 598 "../find.c"
  puts(_("defaulted to option with optional arg"));
#line 76 "../alias.c"
  puts(_("aliasing option is out of range."));
#line 235 "../enum.c"
  puts(_("%s error:  the keyword '%s' is ambiguous for %s\n"));
#line 108 "../find.c"
  puts(_("  The following options match:\n"));
#line 293 "../find.c"
  puts(_("%s: ambiguous option name: %s (matches %d options)\n"));
#line 161 "../check.c"
  puts(_("%s: Command line arguments required\n"));
#line 43 "../alias.c"
  puts(_("%d %s%s options allowed\n"));
#line 94 "../makeshell.c"
  puts(_("%s error %d (%s) calling %s for '%s'\n"));
#line 306 "../makeshell.c"
  puts(_("interprocess pipe"));
#line 168 "../version.c"
  puts(_("error: version option argument '%c' invalid.  Use:\n"
       "\t'v' - version only\n"
       "\t'c' - version and copyright\n"
       "\t'n' - version and full copyright notice\n"));
#line 58 "../check.c"
  puts(_("%s error:  the '%s' and '%s' options conflict\n"));
#line 217 "../find.c"
  puts(_("%s: The '%s' option has been disabled."));
#line 430 "../find.c"
  puts(_("%s: The '%s' option has been disabled."));
#line 38 "../alias.c"
  puts(_("-equivalence"));
#line 469 "../find.c"
  puts(_("%s: illegal option -- %c\n"));
#line 110 "../reset.c"
  puts(_("%s: illegal option -- %c\n"));
#line 271 "../find.c"
  puts(_("%s: illegal option -- %s\n"));
#line 755 "../find.c"
  puts(_("%s: illegal option -- %s\n"));
#line 118 "../reset.c"
  puts(_("%s: illegal option -- %s\n"));
#line 335 "../find.c"
  puts(_("%s: unknown vendor extension option -- %s\n"));
#line 160 "../enum.c"
  puts(_("  or an integer from %d through %d\n"));
#line 170 "../enum.c"
  puts(_("  or an integer from %d through %d\n"));
#line 750 "../usage.c"
  puts(_("%s error:  invalid option descriptor for %s\n"));
#line 1084 "../usage.c"
  puts(_("%s error:  invalid option descriptor for %s\n"));
#line 385 "../find.c"
  puts(_("%s: invalid option name: %s\n"));
#line 527 "../find.c"
  puts(_("%s: The '%s' option requires an argument.\n"));
#line 156 "../autoopts.c"
  puts(_("(AutoOpts bug):  Equivalenced option '%s' was equivalenced to both\n"
       "\t'%s' and '%s'."));
#line 94 "../check.c"
  puts(_("%s error:  The %s option is required\n"));
#line 632 "../find.c"
  puts(_("%s: The '%s' option cannot have an argument.\n"));
#line 151 "../check.c"
  puts(_("%s: Command line arguments are not allowed.\n"));
#line 536 "../save.c"
  puts(_("error %d (%s) creating %s\n"));
#line 235 "../enum.c"
  puts(_("%s error:  '%s' does not match any %s keywords.\n"));
#line 93 "../reset.c"
  puts(_("%s error: The '%s' option requires an argument.\n"));
#line 186 "../save.c"
  puts(_("error %d (%s) stat-ing %s\n"));
#line 239 "../save.c"
  puts(_("error %d (%s) stat-ing %s\n"));
#line 143 "../restore.c"
  puts(_("%s error: no saved option state\n"));
#line 231 "../autoopts.c"
  puts(_("'%s' is not a command line option.\n"));
#line 113 "../time.c"
  puts(_("%s error:  '%s' is not a recognizable date/time.\n"));
#line 131 "../save.c"
  puts(_("'%s' not defined\n"));
#line 50 "../time.c"
  puts(_("%s error:  '%s' is not a recognizable time duration.\n"));
#line 92 "../check.c"
  puts(_("%s error:  The %s option must appear %d times.\n"));
#line 165 "../numeric.c"
  puts(_("%s error:  '%s' is not a recognizable number.\n"));
#line 201 "../enum.c"
  puts(_("%s error:  %s exceeds %s keyword count\n"));
#line 333 "../usage.c"
  puts(_("Try '%s %s' for more information.\n"));
#line 45 "../alias.c"
  puts(_("one %s%s option allowed\n"));
#line 208 "../makeshell.c"
  puts(_("standard output"));
#line 943 "../makeshell.c"
  puts(_("standard output"));
#line 277 "../usage.c"
  puts(_("standard output"));
#line 418 "../usage.c"
  puts(_("standard output"));
#line 628 "../usage.c"
  puts(_("standard output"));
#line 175 "../version.c"
  puts(_("standard output"));
#line 277 "../usage.c"
  puts(_("standard error"));
#line 418 "../usage.c"
  puts(_("standard error"));
#line 628 "../usage.c"
  puts(_("standard error"));
#line 175 "../version.c"
  puts(_("standard error"));
#line 208 "../makeshell.c"
  puts(_("write"));
#line 943 "../makeshell.c"
  puts(_("write"));
#line 276 "../usage.c"
  puts(_("write"));
#line 417 "../usage.c"
  puts(_("write"));
#line 627 "../usage.c"
  puts(_("write"));
#line 174 "../version.c"
  puts(_("write"));
#line 60 "../numeric.c"
  puts(_("%s error:  %s option value %ld is out of range.\n"));
#line 44 "../check.c"
  puts(_("%s error:  %s option requires the %s option\n"));
#line 130 "../save.c"
  puts(_("%s warning:  cannot save options - %s not regular file\n"));
#line 185 "../save.c"
  puts(_("%s warning:  cannot save options - %s not regular file\n"));
#line 238 "../save.c"
  puts(_("%s warning:  cannot save options - %s not regular file\n"));
#line 257 "../save.c"
  puts(_("%s warning:  cannot save options - %s not regular file\n"));
#line 535 "../save.c"
  puts(_("%s warning:  cannot save options - %s not regular file\n"));
  /* END-LIBOPTS-MESSAGES */

  /* USAGE-TEXT: */
#line 876 "../usage.c"
  puts(_("\t\t\t\t- an alternate for '%s'\n"));
#line 1151 "../usage.c"
  puts(_("Version, usage and configuration options:"));
#line 927 "../usage.c"
  puts(_("\t\t\t\t- default option for unnamed options\n"));
#line 840 "../usage.c"
  puts(_("\t\t\t\t- disabled as '--%s'\n"));
#line 1120 "../usage.c"
  puts(_(" --- %-14s %s\n"));
#line 1118 "../usage.c"
  puts(_("This option has been disabled"));
#line 867 "../usage.c"
  puts(_("\t\t\t\t- enabled by default\n"));
#line 40 "../alias.c"
  puts(_("%s error:  only "));
#line 1197 "../usage.c"
  puts(_(" - examining environment variables named %s_*\n"));
#line 168 "../file.c"
  puts(_("\t\t\t\t- file must not pre-exist\n"));
#line 172 "../file.c"
  puts(_("\t\t\t\t- file must pre-exist\n"));
#line 383 "../usage.c"
  puts(_("Options are specified by doubled hyphens and their name or by a single\n"
       "hyphen and the flag character.\n"));
#line 921 "../makeshell.c"
  puts(_("\n"
       "= = = = = = = =\n\n"
       "This incarnation of genshell will produce\n"
       "a shell script to parse the options for %s:\n\n"));
#line 167 "../enum.c"
  puts(_("  or an integer mask with any of the lower %d bits set\n"));
#line 900 "../usage.c"
  puts(_("\t\t\t\t- is a set membership option\n"));
#line 921 "../usage.c"
  puts(_("\t\t\t\t- must appear between %d and %d times\n"));
#line 385 "../usage.c"
  puts(_("Options are specified by single or double hyphens and their name.\n"));
#line 907 "../usage.c"
  puts(_("\t\t\t\t- may appear multiple times\n"));
#line 894 "../usage.c"
  puts(_("\t\t\t\t- may not be preset\n"));
#line 1312 "../usage.c"
  puts(_("   Arg Option-Name    Description\n"));
#line 1248 "../usage.c"
  puts(_("  Flg Arg Option-Name    Description\n"));
#line 1306 "../usage.c"
  puts(_("  Flg Arg Option-Name    Description\n"));
#line 1307 "../usage.c"
  puts(_(" %3s %s"));
#line 1313 "../usage.c"
  puts(_(" %3s %s"));
#line 390 "../usage.c"
  puts(_("The '-#<number>' option may omit the hash char\n"));
#line 386 "../usage.c"
  puts(_("All arguments are named options.\n"));
#line 974 "../usage.c"
  puts(_(" - reading file %s"));
#line 412 "../usage.c"
  puts(_("\n"
       "Please send bug reports to:  <%s>\n"));
#line 100 "../version.c"
  puts(_("\n"
       "Please send bug reports to:  <%s>\n"));
#line 129 "../version.c"
  puts(_("\n"
       "Please send bug reports to:  <%s>\n"));
#line 906 "../usage.c"
  puts(_("\t\t\t\t- may NOT appear - preset only\n"));
#line 947 "../usage.c"
  puts(_("\n"
       "The following option preset mechanisms are supported:\n"));
#line 1195 "../usage.c"
  puts(_("\n"
       "The following option preset mechanisms are supported:\n"));
#line 685 "../usage.c"
  puts(_("prohibits these options:\n"));
#line 680 "../usage.c"
  puts(_("prohibits the option '%s'\n"));
#line 81 "../numeric.c"
  puts(_("%s%ld to %ld"));
#line 79 "../numeric.c"
  puts(_("%sgreater than or equal to %ld"));
#line 75 "../numeric.c"
  puts(_("%s%ld exactly"));
#line 68 "../numeric.c"
  puts(_("%sit must lie in one of the ranges:\n"));
#line 68 "../numeric.c"
  puts(_("%sit must be in the range:\n"));
#line 88 "../numeric.c"
  puts(_(", or\n"));
#line 66 "../numeric.c"
  puts(_("%sis scalable with a suffix: k/K/m/M/g/G/t/T\n"));
#line 77 "../numeric.c"
  puts(_("%sless than or equal to %ld"));
#line 393 "../usage.c"
  puts(_("Operands and options may be intermixed.  They will be reordered.\n"));
#line 655 "../usage.c"
  puts(_("requires the option '%s'\n"));
#line 658 "../usage.c"
  puts(_("requires these options:\n"));
#line 1324 "../usage.c"
  puts(_("   Arg Option-Name   Req?  Description\n"));
#line 1318 "../usage.c"
  puts(_("  Flg Arg Option-Name   Req?  Description\n"));
#line 168 "../enum.c"
  puts(_("or you may use a numeric representation.  Preceding these with a '!'\n"
       "will clear the bits, specifying 'none' will clear all bits, and 'all'\n"
       "will set them all.  Multiple entries may be passed as an option\n"
       "argument list.\n"));
#line 913 "../usage.c"
  puts(_("\t\t\t\t- may appear up to %d times\n"));
#line 77 "../enum.c"
  puts(_("The valid \"%s\" option keywords are:\n"));
#line 1155 "../usage.c"
  puts(_("The next option supports vendor supported extra options:"));
#line 776 "../usage.c"
  puts(_("These additional options are:"));
  /* END-USAGE-TEXT */
}
#endif /* uncompilable code */
#ifdef  __cplusplus
}
#endif
/* cli-debug-args.c ends here */
