/* Entry 0x08973EAC | file offset 0x00170E84 | FUN_08973eac | bytes 20 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089dca8c. Boundary still requires runtime validation. */

undefined4 FUN_08973eac(undefined4 param_1,int param_2)

{
  return *(undefined4 *)((param_2 + 0xfU & 0xfffffff0) + 4);
}

