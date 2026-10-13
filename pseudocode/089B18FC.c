/* Entry 0x089B18FC | file offset 0x001AE8D4 | FUN_089b18fc | bytes 100 */

void FUN_089b18fc(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x2c) = param_1;
    uVar2 = param_3 & 0xffff;
    *(short *)(param_2 + 0x2a) = (short)param_3;
    if ((param_3 + 1 & 0xffff0000) == 0) {
      iVar1 = param_3 * 0x30;
      param_3 = 0;
      if (uVar2 < *(ushort *)(param_2 + 0x28) + 1) {
        param_3 = *(int *)(param_2 + 0x1c) + iVar1;
      }
    }
    FUN_089b0d1c(0,param_3);
    return;
  }
  return;
}

