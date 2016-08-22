#include "asm.h"
#include "memlayout.h"
#include "mmu.h"

.global exit_start
exit_start:

pushl   %eax
pushl 	$0
movl 	$2,%eax
int 	$64

.global exit_end
must_exit_end: