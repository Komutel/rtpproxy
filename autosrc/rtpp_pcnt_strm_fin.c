/* Auto-generated by genfincode.sh - DO NOT EDIT! */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#define RTPP_FINCODE
#include "rtpp_types.h"
#include "rtpp_debug.h"
#include "rtpp_pcnt_strm.h"
#include "rtpp_pcnt_strm_fin.h"
static void rtpp_pcnt_strm_get_stats_fin(void *pub) {
    fprintf(stderr, "Method rtpp_pcnt_strm@%p::get_stats (rtpp_pcnt_strm_get_stats) is invoked after destruction\x0a", pub);
    RTPP_AUTOTRAP();
}
static void rtpp_pcnt_strm_reg_pktin_fin(void *pub) {
    fprintf(stderr, "Method rtpp_pcnt_strm@%p::reg_pktin (rtpp_pcnt_strm_reg_pktin) is invoked after destruction\x0a", pub);
    RTPP_AUTOTRAP();
}
void rtpp_pcnt_strm_fin(struct rtpp_pcnt_strm *pub) {
    RTPP_DBG_ASSERT(pub->get_stats != (rtpp_pcnt_strm_get_stats_t)NULL);
    RTPP_DBG_ASSERT(pub->get_stats != (rtpp_pcnt_strm_get_stats_t)&rtpp_pcnt_strm_get_stats_fin);
    pub->get_stats = (rtpp_pcnt_strm_get_stats_t)&rtpp_pcnt_strm_get_stats_fin;
    RTPP_DBG_ASSERT(pub->reg_pktin != (rtpp_pcnt_strm_reg_pktin_t)NULL);
    RTPP_DBG_ASSERT(pub->reg_pktin != (rtpp_pcnt_strm_reg_pktin_t)&rtpp_pcnt_strm_reg_pktin_fin);
    pub->reg_pktin = (rtpp_pcnt_strm_reg_pktin_t)&rtpp_pcnt_strm_reg_pktin_fin;
}
#if defined(RTPP_FINTEST)
#include <assert.h>
#include <stddef.h>
#include "rtpp_mallocs.h"
#include "rtpp_refcnt.h"
#include "rtpp_linker_set.h"
#define CALL_TFIN(pub, fn) ((void (*)(typeof(pub)))((pub)->fn))(pub)

void
rtpp_pcnt_strm_fintest()
{
    int naborts_s;

    struct {
        struct rtpp_pcnt_strm pub;
    } *tp;

    naborts_s = _naborts;
    tp = rtpp_rzmalloc(sizeof(*tp), offsetof(typeof(*tp), pub.rcnt));
    assert(tp != NULL);
    assert(tp->pub.rcnt != NULL);
    tp->pub.get_stats = (rtpp_pcnt_strm_get_stats_t)((void *)0x1);
    tp->pub.reg_pktin = (rtpp_pcnt_strm_reg_pktin_t)((void *)0x1);
    CALL_SMETHOD(tp->pub.rcnt, attach, (rtpp_refcnt_dtor_t)&rtpp_pcnt_strm_fin,
      &tp->pub);
    RTPP_OBJ_DECREF(&(tp->pub));
    CALL_TFIN(&tp->pub, get_stats);
    CALL_TFIN(&tp->pub, reg_pktin);
    assert((_naborts - naborts_s) == 2);
}
const static void *_rtpp_pcnt_strm_ftp = (void *)&rtpp_pcnt_strm_fintest;
DATA_SET(rtpp_fintests, _rtpp_pcnt_strm_ftp);
#endif /* RTPP_FINTEST */
