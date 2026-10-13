/* Entry 0x0881D7B0 | file offset 0x0001A788 | FUN_0881d7b0 | bytes 336 */

undefined4 FUN_0881d7b0(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = FUN_0881a410(param_1 + 0x34);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar6 = 0;
    iVar2 = *(int *)(DAT_089d4910 + 0xd8);
    if (0 < iVar2) {
      iVar7 = 0;
      iVar4 = DAT_089d4910;
      do {
        piVar5 = (int *)(*(int *)(iVar4 + 0xdc) + iVar7);
        if (*piVar5 == param_2) {
          iVar2 = 0;
          bVar1 = true;
          if (0 < piVar5[3]) {
            do {
              iVar4 = *(int *)(*(int *)(DAT_089d4910 + 0xf4) + (piVar5[4] + iVar2) * 4);
              if ((iVar4 == param_3) || (iVar4 = FUN_0881a410(param_1 + 0x34,iVar4), iVar4 == 0)) {
                bVar1 = false;
                break;
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < piVar5[3]);
          }
          if (bVar1) {
            return 0;
          }
          iVar2 = *(int *)(DAT_089d4910 + 0xd8);
          iVar4 = DAT_089d4910;
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x14;
      } while (iVar6 < iVar2);
    }
    uVar3 = 1;
  }
  return uVar3;
}

