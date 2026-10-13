/* Entry 0x089542A4 | file offset 0x0015127C | FUN_089542a4 | bytes 60 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089db944. Boundary still requires runtime validation. */

void FUN_089542a4(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x8c) +
          (uint)*(ushort *)
                 (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                 (*(int *)(*(int *)(param_2 + 0x90) + 4) + 1) * 2);
  *(undefined4 *)(iVar1 + 0x68) = *(undefined4 *)(param_4 + 8);
  *(undefined4 *)(iVar1 + 0x60) = *(undefined4 *)(param_4 + 0xc);
  return;
}

