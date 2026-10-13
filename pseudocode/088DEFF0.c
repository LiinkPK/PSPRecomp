/* Entry 0x088DEFF0 | file offset 0x000DBFC8 | FUN_088deff0 | bytes 92 */

undefined4 FUN_088deff0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_088df2f8(*(undefined4 *)(param_1 + 0xc));
  if (uVar1 < 2) {
    uVar2 = *(undefined4 *)(&DAT_089cc2f8 + *(int *)(param_1 + 0x14) * 8 + uVar1 * 4);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

