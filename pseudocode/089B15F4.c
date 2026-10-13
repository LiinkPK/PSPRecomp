/* Entry 0x089B15F4 | file offset 0x001AE5CC | FUN_089b15f4 | bytes 80 */

void FUN_089b15f4(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    uVar2 = param_2 & 0xffff;
    if ((param_2 + 1 & 0xffff0000) == 0) {
      iVar1 = param_2 * 0x40;
      param_2 = 0;
      if (uVar2 < *(ushort *)(param_1 + 0xc)) {
        param_2 = *(int *)(param_1 + 8) + iVar1;
      }
    }
    FUN_089b152c(param_2,param_3);
    return;
  }
  return;
}

