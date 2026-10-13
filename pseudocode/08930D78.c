/* Entry 0x08930D78 | file offset 0x0012DD50 | FUN_08930d78 | bytes 152 */

undefined4 FUN_08930d78(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x260);
  if ((iVar2 < 0) || (6 < iVar2)) {
    uVar1 = 0;
  }
  else {
    FUN_089303e4(param_1 + iVar2 * 0x5c + 0x38,*(undefined4 *)(param_1 + 0x30),
                 *(undefined4 *)(param_1 + 0x34),(&DAT_089cf1dc)[iVar2],param_2);
    uVar1 = 1;
    *(int *)(param_1 + 0x260) = *(int *)(param_1 + 0x260) + 1;
  }
  return uVar1;
}

