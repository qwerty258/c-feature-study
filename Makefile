all: 								\
atomic_assembly.s					\
enum_in_struct_with_bit_field.elf	\
macro_vs_const.s					\
return_float_to_int.elf				\
sequence_number.elf					\
sizeof_data_types.elf				\
void_function_param.s

atomic_assembly.s: atomic_assembly.c
	$(CC) -Wa,-adhln -g atomic_assembly.c > atomic_assembly.s

enum_in_struct_with_bit_field.elf: enum_in_struct_with_bit_field.c
	$(CC) -o enum_in_struct_with_bit_field.elf enum_in_struct_with_bit_field.c

macro_vs_const.s: macro_vs_const.c
	$(CC) -Wa,-adhln -g macro_vs_const.c > macro_vs_const.s

return_float_to_int.elf: return_float_to_int.c
	$(CC) -o return_float_to_int.elf return_float_to_int.c -lm

sequence_number.elf: sequence_number.c
	$(CC) -o sequence_number.elf sequence_number.c

sizeof_data_types.elf: sizeof_data_types.c
	$(CC) -o sizeof_data_types.elf sizeof_data_types.c

void_function_param.s: void_function_param.c
	$(CC) -Wa,-adhln -g void_function_param.c > void_function_param.s

clean:
	rm *.elf *.s
