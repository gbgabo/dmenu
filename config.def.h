/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrainsMonoNL-Medium:size=12"
};
static const char *prompt      = "";      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
							/*     fg         bg       */
	[SchemeNorm]			= { "#c79bff", "#240041" },
	[SchemeSel] 			= { "#00ffb7", "#900048" },
	[SchemeSelHighlight] 	= { "#00ffb7", "#900048" },
	[SchemeNormHighlight] 	= { "#00ffb7", "#240041" },
	[SchemeOut] 			= { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

