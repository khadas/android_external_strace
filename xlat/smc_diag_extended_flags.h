/* Generated by ./xlat/gen.sh from ./xlat/smc_diag_extended_flags.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat smc_diag_extended_flags in mpers mode

#else

static
const struct xlat smc_diag_extended_flags[] = {
 XLAT(1<<(SMC_DIAG_CONNINFO-1)),
 XLAT(1<<(SMC_DIAG_LGRINFO-1)),
 XLAT_END
};

#endif /* !IN_MPERS */