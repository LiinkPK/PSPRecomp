/* Entry 0x0888A2B4 | file offset 0x0008728C | FUN_0888a2b4 | bytes 240 */

void FUN_0888a2b4(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = DAT_089d6a10;
  do {
    if ((param_1 < 0) || (param_1 == iVar3)) {
      if (param_2 == '\0') {
        if ((*(int *)(iVar2 + 0x7d8) != -1) &&
           (iVar1 = FUN_088444d4(DAT_089d4960,*(int *)(iVar2 + 0x7d8)), iVar1 != 0)) {
          FUN_08844de0(*(undefined4 *)(iVar2 + 0x7d8));
        }
        *(undefined4 *)(iVar2 + 0x7d8) = 0xffffffff;
        *(undefined4 *)(iVar2 + 0x7e0) = 0xffffffff;
      }
      if ((*(int *)(iVar2 + 0x7f0) != -1) &&
         (iVar1 = FUN_088444d4(DAT_089d4960,*(int *)(iVar2 + 0x7f0)), iVar1 != 0)) {
        FUN_08844de0(*(undefined4 *)(iVar2 + 0x7f0));
      }
      *(undefined4 *)(iVar2 + 0x7f0) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x7f8) = 0xffffffff;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 2);
  return;
}

