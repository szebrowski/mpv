#ifndef MP_MSG_CONTROL_H
#define MP_MSG_CONTROL_H

#include <stdbool.h>

struct mpv_global;
void mp_msg_init(struct mpv_global *global);
void mp_msg_uninit(struct mpv_global *global);
void mp_msg_update_msglevels(struct mpv_global *global);
void mp_msg_mute(struct mpv_global *global, bool mute);
void mp_msg_force_stderr(struct mpv_global *global, bool force_stderr);
void mp_msg_flush_status_line(struct mpv_global *global);
bool mp_msg_has_status_line(struct mpv_global *global);

struct bstr;
int mp_msg_split_msglevel(struct bstr *s, struct bstr *out_mod, int *out_level);

#endif