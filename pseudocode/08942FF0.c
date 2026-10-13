/* Entry 0x08942FF0 | file offset 0x0013FFC8 | FUN_08942ff0 | bytes 20 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089db084. Boundary still requires runtime validation. */

undefined4 FUN_08942ff0(undefined4 param_1,int param_2)

{
  return *(undefined4 *)((param_2 + 0xfU & 0xfffffff0) + 4);
}

