/* Entry 0x089541E4 | file offset 0x001511BC | FUN_089541e4 | bytes 92 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089db874. Boundary still requires runtime validation. */

void FUN_089541e4(undefined4 param_1,int param_2,short *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x8c) +
          (uint)*(ushort *)
                 (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                 *(int *)(*(int *)(param_2 + 0x90) + 4) * 2);
  *(float *)(iVar1 + 0x94) = *(float *)(iVar1 + 0x94) + ((float)(int)*param_3 / 100.0) * 0.098;
  return;
}

