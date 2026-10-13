/* Entry 0x088371C4 | file offset 0x0003419C | FUN_088371c4 | bytes 204 */

void FUN_088371c4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_088312d0(param_1,0xa4);
  iVar2 = 0;
  if (iVar1 != 0) {
    FUN_0883e054(iVar1,param_1);
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 0x3ac) = iVar2;
  iVar1 = FUN_088312d0(param_1,0x310);
  iVar2 = 0;
  if (iVar1 != 0) {
    FUN_08993560(iVar1,6,0x40,&LAB_08837190);
    FUN_08993560(iVar1 + 0x180,6,0x40,&LAB_08837190);
    *(undefined1 *)(iVar1 + 0x303) = 0;
    *(undefined1 *)(iVar1 + 0x302) = 0;
    *(undefined1 *)(iVar1 + 0x301) = 0;
    *(undefined1 *)(iVar1 + 0x300) = 0;
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 0x534) = iVar2;
  return;
}

