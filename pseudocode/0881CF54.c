/* Entry 0x0881CF54 | file offset 0x00019F2C | FUN_0881cf54 | bytes 492 */

undefined4 FUN_0881cf54(char *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  if (*param_1 == '\0') {
    uVar4 = 0;
  }
  else if (param_1[8] == '\x01') {
    uVar4 = 0;
  }
  else {
    param_1 = param_1 + 0x34;
    iVar3 = FUN_0881a410(param_1,param_2);
    if (iVar3 == 1) {
      uVar4 = 0;
    }
    else {
      iVar7 = 0;
      iVar3 = *(int *)(DAT_089d4910 + 0xd8);
      bVar2 = false;
      if (0 < iVar3) {
        iVar8 = 0;
        iVar5 = DAT_089d4910;
        do {
          piVar6 = (int *)(*(int *)(iVar5 + 0xdc) + iVar8);
          if (*piVar6 == param_2) {
            iVar3 = 0;
            bVar2 = true;
            bVar1 = true;
            if (0 < piVar6[1]) {
              do {
                iVar5 = FUN_0881a410(param_1,*(undefined4 *)
                                              (*(int *)(DAT_089d4910 + 0xe8) +
                                              (piVar6[2] + iVar3) * 4));
                if (iVar5 == 1) {
                  bVar1 = false;
                  break;
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < piVar6[1]);
            }
            if ((bVar1) && (iVar3 = 0, 0 < piVar6[3])) {
              do {
                iVar5 = FUN_0881a410(param_1,*(undefined4 *)
                                              (*(int *)(DAT_089d4910 + 0xf4) +
                                              (piVar6[4] + iVar3) * 4));
                if (iVar5 == 0) {
                  bVar1 = false;
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < piVar6[3]);
            }
            if (bVar1) {
              return 1;
            }
            iVar3 = *(int *)(DAT_089d4910 + 0xd8);
            iVar5 = DAT_089d4910;
          }
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 0x14;
        } while (iVar7 < iVar3);
      }
      if (bVar2) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

