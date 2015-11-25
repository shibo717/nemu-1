#include "cpu/exec/template-start.h"

#define instr leave

static void do_execute () {
	printf ("leave %d to esp\n",REG (5) );
	REG (4)  = REG (5);
	REG (5) += DATA_BYTE;
	printf ("now ebp = %d\n",REG(5));
	print_asm("leave");
}
make_instr_helper(n)


#include "cpu/exec/template-end.h"
