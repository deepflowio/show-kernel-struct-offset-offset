#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/skbuff.h>
#include <linux/socket.h>
#include <linux/hash.h>
#include <linux/in.h>
#include <linux/net.h>
#include <linux/ip.h>
#include <linux/tcp.h>
#include <linux/version.h>
#include <net/tcp.h>

int STRUCT_TCP_SOCK_COPIED_SEQ_OFFSET(void)
{
	return offsetof(typeof(struct tcp_sock), copied_seq);
}

int STRUCT_TCP_SOCK_WRITE_SEQ_OFFSET(void)
{
	return offsetof(typeof(struct tcp_sock), write_seq);
}

int STRUCT_TASK_FILES_OFFSET(void)
{
	return offsetof(typeof(struct task_struct), files);
}

int STRUCT_SOCK_FLAGS_OFFSET(void)
{
#if (LINUX_VERSION_CODE < KERNEL_VERSION(5, 6, 0))
	return offsetof(typeof(struct sock), __sk_flags_offset);
#else
	return offsetof(typeof(struct sock), sk_pacing_shift) - 1;
#endif
}

int STRUCT_FILES_PRIVATE_DATA_OFFSET(void)
{
	return offsetof(typeof(struct file), private_data);
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
