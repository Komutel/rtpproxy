/* Auto-generated by genfincode.sh - DO NOT EDIT! */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "rtpp_types.h"
#include "rtpp_debug.h"
#define rtpp_pcount_h_fin 1
#include "rtpp_pcount.h"
static void rtpp_pcount_get_stats_fin(void *pub) {
    fprintf(stderr, "Method %p->get_stats (rtpp_pcount_get_stats) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_pcount_reg_drop_fin(void *pub) {
    fprintf(stderr, "Method %p->reg_drop (rtpp_pcount_reg_drop) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_pcount_reg_ignr_fin(void *pub) {
    fprintf(stderr, "Method %p->reg_ignr (rtpp_pcount_reg_ignr) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_pcount_reg_reld_fin(void *pub) {
    fprintf(stderr, "Method %p->reg_reld (rtpp_pcount_reg_reld) is invoked after destruction\x0a", pub);
    abort();
}
void rtpp_pcount_fin(struct rtpp_pcount *pub) {
    RTPP_DBG_ASSERT(pub->get_stats != (rtpp_pcount_get_stats_t)&rtpp_pcount_get_stats_fin);
    pub->get_stats = (rtpp_pcount_get_stats_t)&rtpp_pcount_get_stats_fin;
    RTPP_DBG_ASSERT(pub->reg_drop != (rtpp_pcount_reg_drop_t)&rtpp_pcount_reg_drop_fin);
    pub->reg_drop = (rtpp_pcount_reg_drop_t)&rtpp_pcount_reg_drop_fin;
    RTPP_DBG_ASSERT(pub->reg_ignr != (rtpp_pcount_reg_ignr_t)&rtpp_pcount_reg_ignr_fin);
    pub->reg_ignr = (rtpp_pcount_reg_ignr_t)&rtpp_pcount_reg_ignr_fin;
    RTPP_DBG_ASSERT(pub->reg_reld != (rtpp_pcount_reg_reld_t)&rtpp_pcount_reg_reld_fin);
    pub->reg_reld = (rtpp_pcount_reg_reld_t)&rtpp_pcount_reg_reld_fin;
}