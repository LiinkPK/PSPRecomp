/* Entry 0x0886EB84 | file offset 0x0006BB5C | FUN_0886eb84 | bytes 656 */

void FUN_0886eb84(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  
  FUN_0886a8b4(param_1);
  iVar2 = DAT_089d5f94;
  iVar8 = 0;
  piVar4 = param_1;
  if ('\0' < (char)param_1[0x23]) {
    do {
      FUN_089acdbc(piVar4[3]);
      FUN_089acdfc(piVar4[3]);
      piVar4[3] = 0;
      if (((param_1[0x24] & 2U) != 0) && (iVar1 = piVar4[1], iVar1 != 0)) {
        iVar3 = 0;
        uVar7 = *(undefined4 *)(iVar2 + 4);
        if (0 < piVar4[2]) {
          iVar5 = 0;
          do {
            iVar6 = iVar1 + iVar5;
            if (*(int *)(iVar6 + 0x5c) != 0) {
              FUN_0885c538(uVar7,*(int *)(iVar6 + 0x5c),0);
              *(undefined4 *)(piVar4[1] + iVar5 + 0x5c) = 0;
              iVar1 = piVar4[1];
              uVar7 = *(undefined4 *)(iVar2 + 4);
              iVar6 = iVar1 + iVar5;
            }
            if (*(int *)(iVar6 + 0x58) != 0) {
              FUN_0885c538(uVar7,*(int *)(iVar6 + 0x58),0);
              *(undefined4 *)(piVar4[1] + iVar5 + 0x58) = 0;
              iVar1 = piVar4[1];
              uVar7 = *(undefined4 *)(iVar2 + 4);
              iVar6 = iVar1 + iVar5;
            }
            if (*(int *)(iVar6 + 0x54) != 0) {
              FUN_0885c538(uVar7,*(int *)(iVar6 + 0x54),0);
              *(undefined4 *)(piVar4[1] + iVar5 + 0x54) = 0;
              iVar1 = piVar4[1];
              uVar7 = *(undefined4 *)(iVar2 + 4);
            }
            iVar3 = iVar3 + 1;
            iVar5 = iVar5 + 0x60;
          } while (iVar3 < piVar4[2]);
        }
        FUN_0885c538(uVar7,iVar1,0);
      }
      piVar4[1] = 0;
      piVar4[2] = 0;
      iVar8 = iVar8 + 1;
      piVar4 = piVar4 + 4;
    } while (iVar8 < (char)param_1[0x23]);
  }
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x21] = 0;
  iVar8 = 0;
  piVar4 = param_1;
  do {
    if (piVar4[0x25] != 0) {
      FUN_0885c538(*(undefined4 *)(iVar2 + 0x14),piVar4[0x25],0);
      piVar4[0x25] = 0;
      piVar4[0x27] = 0;
    }
    iVar8 = iVar8 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar8 < 2);
  FUN_0886caa0(param_1);
  if (param_1[0x42] != 0) {
    FUN_0885c538(*(undefined4 *)(DAT_089d5f94 + 4),param_1[0x42],0);
    param_1[0x42] = 0;
  }
  FUN_0886a140(param_1);
  param_1[0x24] = 0;
  iVar2 = 0;
  iVar8 = *param_1;
  piVar4 = param_1;
  do {
    piVar4[0x29] = -1;
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar2 < 0x19);
  *(undefined1 *)(param_1 + 0x44) = 0;
  if (iVar8 != 0) {
    FUN_0885c538(*(undefined4 *)(DAT_089d5f94 + 4),iVar8,0);
  }
  *param_1 = 0;
  return;
}

