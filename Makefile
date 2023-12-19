ELFS=\
enum_in_struct_with_bit_field.elf \
offsetof.elf \
return_float_to_int.elf \
sequence_number.elf \
sizeof_data_types.elf \
strncpy_edge_case.elf

ASMS=\
atomic_assembly.s \
macro_vs_const.s \
void_function_param.s

# $(info ${ELFS})
# $(info ${ASMS})

ELF_SRC=$(ELFS:.elf=.c)
ASM_SRC=$(ASMS:.s=.c)

# $(info ${ELF_SRC})
# $(info ${ASM_SRC})

all: $(ELFS) $(ASMS)

%.s: %.c
	$(CC) -Wa,-adhln -g $< > $@

%.elf: %.c
	$(CC) -save-temps -o $@ $< -lm

clean:
	rm a.out *.elf *.s *.i *.o
