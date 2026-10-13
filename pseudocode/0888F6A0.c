/* Entry 0x0888F6A0 | file offset 0x0008C678 | FUN_0888f6a0 | bytes 52 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089ca6ec. Boundary still requires runtime validation. */

void FUN_0888f6a0(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined1 *)(param_1 + 8) = 0;
  *(int *)(param_1 + 0xc) = param_3;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(byte *)(param_2 + 0x5b9) = *(byte *)(param_2 + 0x5b9) | 1;
  *(byte *)(param_3 + 0x5b9) = *(byte *)(param_3 + 0x5b9) | 1;
  return;
}

