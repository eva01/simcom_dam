#define ULONG unsigned long

extern ULONG (*_txm_module_kernel_call_dispatcher)(ULONG type, ULONG param_1, ULONG param_2, ULONG param3);

typedef struct {
	ULONG arg3;
	ULONG arg4;
	ULONG arg5;
	ULONG arg6;
	ULONG arg7;
	ULONG arg8;
	ULONG arg9;
} args_t;

ULONG  _txm_module_system_call9( ULONG request, ULONG param_1, ULONG param_2, ULONG param_3, ULONG param_4, ULONG param_5, ULONG param_6, ULONG param_7, ULONG param_8, ULONG param_9) {
	args_t a;
	a.arg3 = param_3;
	a.arg4 = param_4;
	a.arg5 = param_5;
	a.arg6 = param_6;
	a.arg7 = param_7;
	a.arg8 = param_8;
	a.arg9 = param_9;

	return _txm_module_kernel_call_dispatcher(request, param_1, param_2, (ULONG)&a);
}
