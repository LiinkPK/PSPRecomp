/* Entry 0x08883040 | file offset 0x00080018 | FUN_08883040 | bytes 332 */

void FUN_08883040(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = DAT_089d5ff0;
  if ((DAT_089d69df == '\0') && (DAT_089d69dc != '\0')) {
    bVar1 = false;
    uVar3 = FUN_088713e4(DAT_089d5ff0,param_1);
    *(undefined4 *)(param_1 + 0x68) = uVar3;
    iVar4 = FUN_08871644(uVar2,param_1);
    *(int *)(param_1 + 0x54) = iVar4;
    if (iVar4 < 1) {
      bVar1 = true;
    }
    else {
      iVar4 = FUN_0885c6cc(DAT_089d69cc,iVar4,0,0,0,0);
      *(int *)(param_1 + 0x50) = iVar4;
      if (iVar4 == 0) {
        bVar1 = true;
      }
      else {
        iVar4 = 0x4000;
        if (*(int *)(param_1 + 0x54) < 0x4000) {
          iVar4 = *(int *)(param_1 + 0x54);
        }
        DAT_089d69de = 1;
        FUN_08871818(uVar2,param_1,DAT_089d69d8,iVar4,*(undefined4 *)(param_1 + 0x58),FUN_08883afc,
                     param_1);
      }
    }
    if (bVar1) {
      FUN_08882f68(param_1,3);
      DAT_089d69d4 = 0;
      if (DAT_09b49128 == 0) {
        DAT_089d69dd = 0;
      }
    }
  }
  return;
}

