/* Entry 0x08972110 | file offset 0x0016F0E8 | FUN_08972110 | bytes 20 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089dc9bc. Boundary still requires runtime validation. */

undefined4 FUN_08972110(undefined4 param_1,int param_2)

{
  return *(undefined4 *)((param_2 + 0xfU & 0xfffffff0) + 8);
}

