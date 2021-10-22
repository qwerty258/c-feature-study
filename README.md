# c-feature-testing
C programming language feature testing code

Just make the source code

Example:

`sizeof_data_types.c`

```bash
$ make sizeof_data_types
```

### atomic_assembly.c

Use:
```bash
$ gcc -Wa,-adhln -g atomic_assembly.c > atomic_assembly.s
```
to see assembly difference

### macro_vs_const.c

Use:
```bash
$ gcc -Wa,-adhln -g macro_vs_const.c > macro_vs_const.s
```
to see assembly difference
