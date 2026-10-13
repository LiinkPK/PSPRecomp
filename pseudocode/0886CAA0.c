/* Entry 0x0886CAA0 | file offset 0x00069A78 | FUN_0886caa0 | bytes 108 */

void FUN_0886caa0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_089d5f94;
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + 0x120) != 0) {
      FUN_0885c538(*(undefined4 *)(iVar1 + 0x14),*(int *)(param_1 + 0x120),0);
      *(undefined4 *)(param_1 + 0x120) = 0;
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 4;
  } while (iVar2 < 2);
  return;
}

