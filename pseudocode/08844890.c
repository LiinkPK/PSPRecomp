/* Entry 0x08844890 | file offset 0x00041868 | FUN_08844890 | bytes 464 */

void FUN_08844890(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 8);
  iVar6 = 0;
  while (iVar7 != 0) {
    piVar1 = (int *)(iVar7 + 0xd0);
    if (iVar7 == 0) {
      iVar7 = *(int *)(param_1 + 8);
    }
    else {
      iVar7 = *(int *)(iVar7 + 0xe8);
    }
    if (*piVar1 != 0) {
      iVar2 = FUN_088dcef8(*(undefined4 *)(*piVar1 + 0xc));
      iVar6 = ((int)(iVar2 + ((uint)(iVar2 + 0xf >> 4) >> 0x1c) + 0xf) >> 4) * 0x10 + 0x10 + iVar6;
    }
  }
  if (iVar6 != 0) {
    iVar7 = ((int)(iVar6 + ((uint)(iVar6 + 0x3f >> 4) >> 0x1c) + 0x3f) >> 4) << 4;
    uVar5 = *(undefined4 *)(DAT_089d7830 + 4);
    uVar3 = FUN_0885c6cc(uVar5,iVar7,0x40,0,1,1);
    uVar4 = FUN_0885c40c(uVar3,iVar7,"SP_MENU_GC",0x10);
    iVar6 = *(int *)(param_1 + 8);
    iVar7 = 0;
    if (iVar6 != 0) {
      do {
        piVar1 = (int *)(iVar6 + 0xd0);
        if (iVar6 == 0) {
          iVar6 = *(int *)(param_1 + 8);
        }
        else {
          iVar6 = *(int *)(iVar6 + 0xe8);
        }
        if (*piVar1 != 0) {
          FUN_088db618(*piVar1,uVar4);
        }
      } while (iVar6 != 0);
      iVar7 = *(int *)(param_1 + 8);
    }
    while (iVar7 != 0) {
      piVar1 = (int *)(iVar7 + 0xd0);
      if (iVar7 == 0) {
        iVar7 = *(int *)(param_1 + 8);
      }
      else {
        iVar7 = *(int *)(iVar7 + 0xe8);
      }
      if (*piVar1 != 0) {
        FUN_088db634(*piVar1,uVar4);
      }
    }
    FUN_0885c488(uVar4);
    FUN_0885c538(uVar5,uVar3,0x40);
  }
  return;
}

