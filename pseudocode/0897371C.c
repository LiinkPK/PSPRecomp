/* Entry 0x0897371C | file offset 0x001706F4 | FUN_0897371c | bytes 256 */

void FUN_0897371c(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_089a0384(9);
  FUN_089a0df4(*(undefined4 *)(&DAT_089d0648 + param_2 * 4),
               *(undefined4 *)(&DAT_089d0648 + param_3 * 4));
  FUN_089a0e20(0,0);
  FUN_089a0e8c(0,0);
  FUN_089a0db8(*(undefined4 *)(&DAT_089d0628 + *(int *)(param_1 + 0x2c) * 4),0,0,0);
  FUN_089a0fc8();
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x40) == 0) {
    FUN_089a0f04(0,uVar1,*(undefined4 *)(param_1 + 0x28),uVar1,*(undefined4 *)(param_1 + 0xc));
    iVar2 = *(int *)(param_1 + 0x10);
  }
  else {
    FUN_089a0f04(0,uVar1,*(undefined4 *)(param_1 + 0x28),uVar1,*(undefined4 *)(param_1 + 8));
    iVar2 = *(int *)(param_1 + 0x10);
  }
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x18) = 0xfffffffe;
  }
  return;
}

