/* Auto-generated by genfincode_stat.sh - DO NOT EDIT! */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "rtpp_types.h"
#include "rtpp_debug.h"
#include "rtpp_stream.h"
static void rtpp_stream_drain_skt_fin(void *pub) {
    fprintf(stderr, "Method %p->drain_skt (rtpp_stream_drain_skt) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_stream_finish_playback_fin(void *pub) {
    fprintf(stderr, "Method %p->finish_playback (rtpp_stream_finish_playback) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_stream_get_actor_fin(void *pub) {
    fprintf(stderr, "Method %p->get_actor (rtpp_stream_get_actor) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_stream_get_proto_fin(void *pub) {
    fprintf(stderr, "Method %p->get_proto (rtpp_stream_get_proto) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_stream_get_rem_addr_fin(void *pub) {
    fprintf(stderr, "Method %p->get_rem_addr (rtpp_stream_get_rem_addr) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_stream_get_skt_fin(void *pub) {
    fprintf(stderr, "Method %p->get_skt (rtpp_stream_get_skt) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_stream_get_stats_fin(void *pub) {
    fprintf(stderr, "Method %p->get_stats (rtpp_stream_get_stats) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_stream_guess_addr_fin(void *pub) {
    fprintf(stderr, "Method %p->guess_addr (rtpp_stream_guess_addr) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_stream_handle_noplay_fin(void *pub) {
    fprintf(stderr, "Method %p->handle_noplay (rtpp_stream_handle_noplay) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_stream_handle_play_fin(void *pub) {
    fprintf(stderr, "Method %p->handle_play (rtpp_stream_handle_play) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_stream_isplayer_active_fin(void *pub) {
    fprintf(stderr, "Method %p->isplayer_active (rtpp_stream_isplayer_active) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_stream_issendable_fin(void *pub) {
    fprintf(stderr, "Method %p->issendable (rtpp_stream_issendable) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_stream_locklatch_fin(void *pub) {
    fprintf(stderr, "Method %p->locklatch (rtpp_stream_locklatch) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_stream_prefill_addr_fin(void *pub) {
    fprintf(stderr, "Method %p->prefill_addr (rtpp_stream_prefill_addr) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_stream_reg_onhold_fin(void *pub) {
    fprintf(stderr, "Method %p->reg_onhold (rtpp_stream_reg_onhold) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_stream_rx_fin(void *pub) {
    fprintf(stderr, "Method %p->rx (rtpp_stream_rx) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_stream_send_pkt_fin(void *pub) {
    fprintf(stderr, "Method %p->send_pkt (rtpp_stream_send_pkt) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_stream_set_skt_fin(void *pub) {
    fprintf(stderr, "Method %p->set_skt (rtpp_stream_set_skt) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_stream_update_skt_fin(void *pub) {
    fprintf(stderr, "Method %p->update_skt (rtpp_stream_update_skt) is invoked after destruction\x0a", pub);
    abort();
}
static const struct rtpp_stream_smethods rtpp_stream_smethods_fin = {
    .drain_skt = (rtpp_stream_drain_skt_t)&rtpp_stream_drain_skt_fin,
    .finish_playback = (rtpp_stream_finish_playback_t)&rtpp_stream_finish_playback_fin,
    .get_actor = (rtpp_stream_get_actor_t)&rtpp_stream_get_actor_fin,
    .get_proto = (rtpp_stream_get_proto_t)&rtpp_stream_get_proto_fin,
    .get_rem_addr = (rtpp_stream_get_rem_addr_t)&rtpp_stream_get_rem_addr_fin,
    .get_skt = (rtpp_stream_get_skt_t)&rtpp_stream_get_skt_fin,
    .get_stats = (rtpp_stream_get_stats_t)&rtpp_stream_get_stats_fin,
    .guess_addr = (rtpp_stream_guess_addr_t)&rtpp_stream_guess_addr_fin,
    .handle_noplay = (rtpp_stream_handle_noplay_t)&rtpp_stream_handle_noplay_fin,
    .handle_play = (rtpp_stream_handle_play_t)&rtpp_stream_handle_play_fin,
    .isplayer_active = (rtpp_stream_isplayer_active_t)&rtpp_stream_isplayer_active_fin,
    .issendable = (rtpp_stream_issendable_t)&rtpp_stream_issendable_fin,
    .locklatch = (rtpp_stream_locklatch_t)&rtpp_stream_locklatch_fin,
    .prefill_addr = (rtpp_stream_prefill_addr_t)&rtpp_stream_prefill_addr_fin,
    .reg_onhold = (rtpp_stream_reg_onhold_t)&rtpp_stream_reg_onhold_fin,
    .rx = (rtpp_stream_rx_t)&rtpp_stream_rx_fin,
    .send_pkt = (rtpp_stream_send_pkt_t)&rtpp_stream_send_pkt_fin,
    .set_skt = (rtpp_stream_set_skt_t)&rtpp_stream_set_skt_fin,
    .update_skt = (rtpp_stream_update_skt_t)&rtpp_stream_update_skt_fin,
};
void rtpp_stream_fin(struct rtpp_stream *pub) {
    RTPP_DBG_ASSERT(pub->smethods != &rtpp_stream_smethods_fin &&
      pub->smethods != NULL);
    pub->smethods = &rtpp_stream_smethods_fin;
}