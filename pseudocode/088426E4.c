/* Entry 0x088426E4 | file offset 0x0003F6BC | FUN_088426e4 | bytes 144 */

undefined4 FUN_088426e4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_089d6c88;
  iVar3 = 0;
  while ((*(int *)(param_1 + 8) == -1 ||
         (iVar2 = FUN_088a1678(uVar1,*(int *)(param_1 + 8)), iVar2 != 0))) {
    iVar3 = iVar3 + 1;
    param_1 = param_1 + 0xc;
    if (2 < iVar3) {
      return 1;
    }
  }
  return 0;
}

