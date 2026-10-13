/* Entry 0x0899075C | file offset 0x0018D734 | FUN_0899075c | bytes 156 */

void FUN_0899075c(int param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  
  param_3 = param_3 * 0x10;
  *(int *)(DAT_089da420 + param_3 + 0x34) = param_1;
  *(undefined1 *)(DAT_089da420 + param_3 + 0x38) = 1;
  if (*(ushort *)(param_1 + 0x12) == 0) {
    if (599 < *(int *)(param_1 + 0x14)) {
      iVar2 = *(int *)(param_1 + 0x14) * 100;
      goto LAB_089907d8;
    }
    uVar1 = *(ushort *)(param_1 + 0x10);
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x10);
  }
  iVar2 = (uint)uVar1 * 10000 + (uint)*(ushort *)(param_1 + 0x12) * 100 + -10000;
LAB_089907d8:
  *(int *)(DAT_089da420 + param_3 + 0x3c) = iVar2;
  *(undefined4 *)(DAT_089da420 + param_3 + 0x40) = *(undefined4 *)(param_1 + 0xc);
  return;
}

