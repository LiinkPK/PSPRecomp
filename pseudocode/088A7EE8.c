/* Entry 0x088A7EE8 | file offset 0x000A4EC0 | FUN_088a7ee8 | bytes 208 */

void FUN_088a7ee8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_1;
  iVar2 = DAT_09b4d434;
  if (param_1 == 0) {
    iVar3 = FUN_08882118(0xa110,0x80);
    iVar1 = DAT_089d6d94;
    iVar2 = 0;
    DAT_09b4d438 = iVar3;
    if (iVar3 != 0) {
      FUN_08993560(iVar3,0x40,0x280,FUN_088a6690);
      iVar4 = 0;
      *(undefined4 *)(iVar3 + 0xa100) = 0;
      do {
        *(int *)(iVar3 + iVar4 * 4 + 0xa000) = iVar3 + (0x3f - iVar4) * 0x280;
        iVar4 = *(int *)(iVar3 + 0xa100) + 1;
        *(int *)(iVar3 + 0xa100) = iVar4;
        iVar1 = DAT_089d6d94;
        iVar2 = iVar3;
      } while (iVar4 < 0x40);
    }
  }
  DAT_09b4d434 = iVar2;
  DAT_089d6d94 = iVar1;
  return;
}

