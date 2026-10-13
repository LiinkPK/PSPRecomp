/* Entry 0x0884C4A8 | file offset 0x00049480 | FUN_0884c4a8 | bytes 52 */

void FUN_0884c4a8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 + (uint)*(byte *)(param_2 + 0x38) * 0x14 + 0x258c +
          (uint)*(byte *)(param_2 + 0x39) * 4;
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
  return;
}

