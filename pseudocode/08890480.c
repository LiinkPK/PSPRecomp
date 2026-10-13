/* Entry 0x08890480 | file offset 0x0008D458 | FUN_08890480 | bytes 768 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08890480(undefined4 param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = DAT_089d69f8;
  iVar6 = 0;
  bVar1 = true;
  do {
    iVar2 = func_0x08adfddc(*(int *)(iVar5 + 0x18 + iVar6 * 4) + 0x2a8);
    if (iVar2 == 1) {
      bVar1 = false;
      break;
    }
    iVar7 = *(int *)(DAT_089d6a10 + iVar6 * 4 + 0x38) + 0x784;
    iVar2 = func_0x08acaa74(iVar7);
    if ((iVar2 == 1) || (iVar2 = func_0x08acaa9c(iVar7), iVar2 == 1)) {
      bVar1 = false;
      break;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  if (bVar1) {
    iVar5 = 0;
    bVar1 = false;
    if (0 < param_2[9]) {
      do {
        if (*(char *)((int)param_2 + iVar5 + 0x28) == '\x01') {
          iVar6 = *(int *)param_2[iVar5 + 4];
          iVar6 = (**(code **)(iVar6 + 0x24))
                            (param_2[iVar5 + 4] + (int)*(short *)(iVar6 + 0x20),
                             *(undefined4 *)(DAT_089d6a10 + 0x54));
          *param_2 = iVar6;
          iVar6 = *(int *)param_2[iVar5 + 4];
          iVar6 = (**(code **)(iVar6 + 0x2c))(param_2[iVar5 + 4] + (int)*(short *)(iVar6 + 0x28));
          param_2[1] = iVar6;
          iVar6 = *(int *)param_2[iVar5 + 4];
          iVar6 = (**(code **)(iVar6 + 0x34))(param_2[iVar5 + 4] + (int)*(short *)(iVar6 + 0x30));
          iVar2 = *param_2;
          param_2[2] = iVar6;
          if (iVar6 != 0) {
            *(uint *)(iVar6 + 0x10) = *(uint *)(iVar6 + 0x10) | 0x8000;
            if (*(int *)(iVar2 + 0x34) == 0) {
              *(int *)(iVar2 + 0x34) = iVar6;
              *(int *)(iVar2 + 0x30) = iVar6;
              *(undefined4 *)(iVar6 + 0x4c) = 0;
              *(undefined4 *)(iVar6 + 0x54) = 0;
            }
            else {
              *(int *)(*(int *)(iVar2 + 0x34) + 0x4c) = iVar6;
              uVar4 = *(undefined4 *)(iVar2 + 0x34);
              *(undefined4 *)(iVar6 + 0x4c) = 0;
              *(undefined4 *)(iVar6 + 0x54) = uVar4;
              *(int *)(iVar2 + 0x34) = iVar6;
            }
            *(int *)(iVar2 + 0x38) = *(int *)(iVar2 + 0x38) + 1;
          }
          param_2[0xe] = param_2[iVar5 + 4];
          *(undefined1 *)((int)param_2 + iVar5 + 0x28) = 0;
          bVar1 = true;
          break;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_2[9]);
    }
    if (bVar1) {
      *(undefined1 *)(_DAT_08b3d6b8 + 0x8bc) = 0;
      iVar5 = FUN_08864d84();
      if (iVar5 == 1) {
        iVar5 = func_0x08a62184(_DAT_08a62280,4);
      }
      else {
        iVar5 = -0x40800000;
      }
      param_2[0xd] = iVar5;
      func_0x08a62020(0,_DAT_08a62280,4);
      param_2[0xc] = 0;
      param_2[3] = 2;
    }
    else {
      iVar5 = 0;
      if (0 < param_2[9]) {
        iVar6 = 0;
        do {
          piVar3 = *(int **)((int)param_2 + iVar6 + 0x10);
          iVar6 = *piVar3;
          iVar6 = (**(code **)(iVar6 + 0x14))(param_1,(int)piVar3 + (int)*(short *)(iVar6 + 0x10));
          if (iVar6 == 1) {
            *(undefined1 *)((int)param_2 + iVar5 + 0x28) = 1;
          }
          iVar5 = iVar5 + 1;
          iVar6 = iVar5 * 4;
        } while (iVar5 < param_2[9]);
      }
    }
  }
  return;
}

