#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/skbuff.h>
#include <linux/socket.h>
#include <linux/hash.h>
#include <linux/in.h>
#include <linux/net.h>
#include <linux/ip.h>
#include <linux/tcp.h>
#include <linux/fdtable.h>
#include <linux/version.h>
#include <net/tcp.h>

int struct_tcp_sock__copied_seq_offset(void)
{
	return offsetof(typeof(struct tcp_sock), copied_seq);
}

int struct_tcp_sock__write_seq_offset(void)
{
	return offsetof(typeof(struct tcp_sock), write_seq);
}

int struct_tcp_sock__snd_nxt_offset(void)
{
	return offsetof(typeof(struct tcp_sock), snd_nxt);
}

int struct_task_struct__files_offset(void)
{
	return offsetof(typeof(struct task_struct), files);
}

int struct_sock____sk_flags_offset_offset(void)
{
#if (LINUX_VERSION_CODE < KERNEL_VERSION(5, 6, 0))
	return offsetof(typeof(struct sock), __sk_flags_offset);
#else
	return offsetof(typeof(struct sock), sk_pacing_shift) - 1;
#endif
}

int struct_files_struct_fdt_offset(void)
{
	return offsetof(typeof(struct files_struct), fdt);
}

int STRUCT_FILES_PRIVATE_DATA_OFFSET(void)
{
	return offsetof(typeof(struct file), private_data);
}

int struct_file__f_inode_offset(void)
{
	return offsetof(typeof(struct file), f_inode);
}

int struct_inode__i_mode_offset(void)
{
	return offsetof(typeof(struct inode), i_mode);
}

int struct_file__dentry__sum_offset(void)
{
	return offsetof(typeof(struct file),
			f_path) + offsetof(typeof(struct path), dentry);
}

int struct_dentry_name__sum__offset(void)
{
	return offsetof(typeof(struct dentry),
			d_name) + offsetof(typeof(struct qstr), name);
}

int struct_sock_common__skc_family_offset(void)
{
	return offsetof(typeof(struct sock_common), skc_family);
}

int struct_sock_common__skc_rcv_saddr_offset(void)
{
	return offsetof(typeof(struct sock_common), skc_rcv_saddr);
}

int struct_sock_common__skc_daddr_offset(void)
{
	return offsetof(typeof(struct sock_common), skc_daddr);
}

int struct_sock_common__skc_v6_rcv_saddr_offset(void)
{
	return offsetof(typeof(struct sock_common), skc_v6_rcv_saddr);
}

int struct_sock_common__skc_v6_daddr_offset(void)
{
	return offsetof(typeof(struct sock_common), skc_v6_daddr);
}

int struct_sock_common__skc_dport_offset(void)
{
	return offsetof(typeof(struct sock_common), skc_dport);
}

int struct_sock_common__skc_num_offset(void)
{
	return offsetof(typeof(struct sock_common), skc_num);
}

int struct_sock_common__skc_state_offset(void)
{
	return offsetof(typeof(struct sock_common), skc_state);
}

int struct_sock_common__skc_ipv6only_offset(void)
{
	return offsetof(typeof(struct sock_common), skc_state) + 1;
}

int struct_task_struct__tls_offset(void)
{
	return offsetof(typeof(struct task_struct),
			thread) + offsetof(typeof(struct thread_struct),
					   fsbase);
}

static int init_skso(void)
{
	return 0;
}

static void exit_skso(void)
{
	return;
}

module_init(init_skso);
module_exit(exit_skso);

MODULE_LICENSE("Proprietary");
