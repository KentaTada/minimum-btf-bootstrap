// SPDX-License-Identifier: (LGPL-2.1 OR BSD-2-Clause)
//
// Copyright 2022 Sony Group Corporation

#ifndef __CAPABLE_H
#define __CAPABLE_H

#define TASK_COMM_LEN	16
#define PATH_MAX	4096

struct cap_event {
	__u32	pid;
	__u32	cap;
	gid_t	tgid;
	uid_t	uid;
	int	audit;
	int	insetid;
	char	task[TASK_COMM_LEN];
};

struct key_t {
	__u32 pid;
	__u32 tgid;
	int user_stack_id;
	int kern_stack_id;
};

struct val_t {
	char comm[TASK_COMM_LEN];
};

static const char *cap_chown[] = { "CAP_CHOWN" };
static const char *cap_dac_override[] = { "CAP_DAC_OVERRIDE" };
static const char *cap_dac_read_search[] = { "CAP_DAC_READ_SEARCH" };
static const char *cap_fowner[] = { "CAP_FOWNER" };
static const char *cap_fsetid[] = { "CAP_FSETID" };
static const char *cap_kill[] = { "CAP_KILL" };
static const char *cap_setgid[] = { "CAP_SETGID" };
static const char *cap_setuid[] = { "CAP_SETUID" };
static const char *cap_setpcap[] = { "CAP_SETPCAP" };
static const char *cap_linux_immutable[] = { "CAP_LINUX_IMMUTABLE" };
static const char *cap_net_bind_service[] = { "CAP_NET_BIND_SERVICE" };
static const char *cap_net_broadcast[] = { "CAP_NET_BROADCAST" };
static const char *cap_net_admin[] = { "CAP_NET_ADMIN" };
static const char *cap_net_raw[] = { "CAP_NET_RAW" };
static const char *cap_ipc_lock[] = { "CAP_IPC_LOCK" };
static const char *cap_ipc_owner[] = { "CAP_IPC_OWNER" };
static const char *cap_sys_module[] = { "CAP_SYS_MODULE" };
static const char *cap_sys_rawio[] = { "CAP_SYS_RAWIO" };
static const char *cap_sys_chroot[] = { "CAP_SYS_CHROOT" };
static const char *cap_sys_ptrace[] = { "CAP_SYS_PTRACE" };
static const char *cap_sys_pacct[] = { "CAP_SYS_PACCT" };
static const char *cap_sys_admin[] = { "CAP_SYS_ADMIN" };
static const char *cap_sys_boot[] = { "CAP_SYS_BOOT" };
static const char *cap_sys_nice[] = { "CAP_SYS_NICE" };
static const char *cap_sys_resource[] = { "CAP_SYS_RESOURCE" };
static const char *cap_sys_time[] = { "CAP_SYS_TIME" };
static const char *cap_sys_tty_config[] = { "CAP_SYS_TTY_CONFIG" };
static const char *cap_mknod[] = { "CAP_MKNOD" };
static const char *cap_lease[] = { "CAP_LEASE" };
static const char *cap_audit_write[] = { "CAP_AUDIT_WRITE" };
static const char *cap_audit_control[] = { "CAP_AUDIT_CONTROL" };
static const char *cap_setfcap[] = { "CAP_SETFCAP" };
static const char *cap_mac_override[] = { "CAP_MAC_OVERRIDE" };
static const char *cap_mac_admin[] = { "CAP_MAC_ADMIN" };
static const char *cap_syslog[] = { "CAP_SYSLOG" };
static const char *cap_wake_alarm[] = { "CAP_WAKE_ALARM" };
static const char *cap_block_suspend[] = { "CAP_BLOCK_SUSPEND" };
static const char *cap_audit_read[] = { "CAP_AUDIT_READ" };
static const char *cap_perfmon[] = { "CAP_PERFMON" };
static const char *cap_bpf[] = { "CAP_BPF" };
static const char *cap_checkpoint_restore[] = { "CAP_CHECKPOINT_RESTORE" };

/* DO NOT CHANGE THE ORDER */
const char **cap_name[] = {
	cap_chown,
	cap_dac_override,
	cap_dac_read_search,
	cap_fowner,
	cap_fsetid,
	cap_kill,
	cap_setgid,
	cap_setuid,
	cap_setpcap,
	cap_linux_immutable,
	cap_net_bind_service,
	cap_net_broadcast,
	cap_net_admin,
	cap_net_raw,
	cap_ipc_lock,
	cap_ipc_owner,
	cap_sys_module,
	cap_sys_rawio,
	cap_sys_chroot,
	cap_sys_ptrace,
	cap_sys_pacct,
	cap_sys_admin,
	cap_sys_boot,
	cap_sys_nice,
	cap_sys_resource,
	cap_sys_time,
	cap_sys_tty_config,
	cap_mknod,
	cap_lease,
	cap_audit_write,
	cap_audit_control,
	cap_setfcap,
	cap_mac_override,
	cap_mac_admin,
	cap_syslog,
	cap_wake_alarm,
	cap_block_suspend,
	cap_audit_read,
	cap_perfmon,
	cap_bpf,
	cap_checkpoint_restore,
};

enum uniqueness {
	UNQ_OFF, UNQ_PID, UNQ_CGROUP
};

#endif /* __CAPABLE_H */
