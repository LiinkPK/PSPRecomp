/* Entry 0x08874180 | file offset 0x00071158 | FUN_08874180 | bytes 64 */

void FUN_08874180(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x220) * 0x20;
  if (*(float *)(param_1 + iVar1 + 0xc) != 0.0) {
    FUN_088741c0(param_1,param_1 + iVar1);
  }
  return;
}

