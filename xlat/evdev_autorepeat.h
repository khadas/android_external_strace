/* Generated by ./xlat/gen.sh from ./xlat/evdev_autorepeat.in; do not edit. */

static const struct xlat evdev_autorepeat[] = {
#if defined(REP_DELAY) || (defined(HAVE_DECL_REP_DELAY) && HAVE_DECL_REP_DELAY)
 XLAT(REP_DELAY),
#endif
#if defined(REP_PERIOD) || (defined(HAVE_DECL_REP_PERIOD) && HAVE_DECL_REP_PERIOD)
 XLAT(REP_PERIOD),
#endif
 XLAT_END
};
