/* Entry 0x088A4FC4 | file offset 0x000A1F9C | FUN_088a4fc4 | bytes 144 */

void FUN_088a4fc4(uint param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = DAT_089d6d58;
  if (DAT_089d6d60 == 0) {
    bVar1 = false;
    if ((DAT_089d6d58 <= param_1) && (bVar1 = false, param_1 < DAT_089d6d58 + 0x1400)) {
      bVar1 = true;
    }
    if (bVar1) {
      iVar3 = *(int *)(DAT_089d6d58 + 0x1500);
      *(int *)(DAT_089d6d58 + 0x1500) = iVar3 + 1;
      *(uint *)(uVar2 + iVar3 * 4 + 0x1400) = param_1;
    }
  }
  else {
    FUN_0885c538(DAT_089d6d60,param_1,0);
  }
  return;
}

