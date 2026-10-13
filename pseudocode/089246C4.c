/* Entry 0x089246C4 | file offset 0x0012169C | FUN_089246c4 | bytes 1044 */

void FUN_089246c4(int param_1)

{
  short sVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_90 [52];
  undefined1 auStack_5c [52];
  
  sVar1 = *(short *)(param_1 + 2);
  if (sVar1 < 1) {
    if (-1 < sVar1) {
      return;
    }
  }
  else if (sVar1 == 3) {
    return;
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  }
  FUN_0892262c(auStack_90);
  FUN_089227f0(auStack_90,param_1);
  FUN_089227e0(auStack_90,0x20);
  sVar1 = *(short *)(*(int *)(param_1 + 0x20) + 0x12);
  if (sVar1 < 4) {
    if (sVar1 < 3) goto LAB_08924790;
  }
  else if (sVar1 != 5) goto LAB_08924790;
  FUN_0891fbec(DAT_089d8528,auStack_90);
LAB_08924790:
  FUN_0892262c(auStack_5c);
  FUN_089227f0(auStack_5c,param_1);
  FUN_089227e0(auStack_5c,0x1f);
  iVar6 = -1;
  bVar2 = false;
  switch(*(undefined2 *)(*(int *)(param_1 + 0x20) + 0x12)) {
  case 3:
  case 4:
  case 5:
    iVar7 = *(int *)(param_1 + 0x1c);
    if (iVar7 < 0x10) {
      iVar4 = iVar7 << 2;
      do {
        iVar5 = *(int *)(*(int *)(param_1 + 0x20) + iVar4 + 0x74);
        if (iVar5 == 0) break;
        if (bVar2) {
          uVar3 = FUN_089227d8(iVar5);
          iVar5 = *(int *)(*(int *)(param_1 + 0x20) + iVar4 + 0x74);
          switch(uVar3) {
          case 1:
          case 2:
          case 3:
          case 5:
          case 6:
          case 0x15:
            break;
          default:
            bVar2 = false;
            iVar6 = iVar7;
          }
        }
        iVar5 = FUN_089227d8(iVar5);
        if (iVar5 < 4) {
          if (0 < iVar5) {
LAB_089249e8:
            bVar2 = true;
          }
        }
        else if (iVar5 == 0x15) goto LAB_089249e8;
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar7 < 0x10);
    }
    if (iVar6 == -1) {
      FUN_0891fbec(DAT_089d8528,auStack_5c);
    }
    iVar7 = 0xf;
    iVar4 = 0x3c;
    if (*(int *)(param_1 + 0x1c) < 0x10) {
      do {
        iVar5 = *(int *)(*(int *)(param_1 + 0x20) + iVar4 + 0x74);
        if (iVar5 != 0) {
          FUN_089227f0(iVar5,param_1);
          FUN_0891fbec(DAT_089d8528,*(undefined4 *)(*(int *)(param_1 + 0x20) + iVar4 + 0x74));
          if (iVar6 == iVar7) {
            FUN_0891fbec(DAT_089d8528,auStack_5c);
          }
        }
        iVar7 = iVar7 + -1;
        iVar4 = iVar4 + -4;
      } while (*(int *)(param_1 + 0x1c) <= iVar7);
    }
    break;
  case 6:
  case 0xc:
    iVar6 = 0xf;
    if (*(int *)(param_1 + 0x1c) < 0x10) {
      iVar7 = 0x3c;
      do {
        iVar4 = *(int *)(*(int *)(param_1 + 0x20) + iVar7 + 0x74);
        if (iVar4 != 0) {
          FUN_089227f0(iVar4,param_1);
          FUN_0891fbec(DAT_089d8528,*(undefined4 *)(*(int *)(param_1 + 0x20) + iVar7 + 0x74));
        }
        iVar6 = iVar6 + -1;
        iVar7 = iVar7 + -4;
      } while (*(int *)(param_1 + 0x1c) <= iVar6);
    }
    FUN_0891fbec(DAT_089d8528,auStack_5c);
    break;
  default:
    iVar7 = 0xf;
    iVar6 = 0x3c;
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0x20) + iVar6 + 0x74);
      if (iVar4 != 0) {
        FUN_089227f0(iVar4,param_1);
        FUN_0891fbec(DAT_089d8528,*(undefined4 *)(*(int *)(param_1 + 0x20) + iVar6 + 0x74));
      }
      iVar7 = iVar7 + -1;
      iVar6 = iVar6 + -4;
    } while (-1 < iVar7);
    break;
  case 0xd:
    iVar7 = 0xf;
    iVar6 = 0x3c;
    if (*(int *)(param_1 + 0x1c) < 0x10) {
      do {
        iVar4 = *(int *)(*(int *)(param_1 + 0x20) + iVar6 + 0x74);
        if (iVar4 != 0) {
          FUN_089227f0(iVar4,param_1);
          FUN_0891fbec(DAT_089d8528,*(undefined4 *)(*(int *)(param_1 + 0x20) + iVar6 + 0x74));
        }
        iVar7 = iVar7 + -1;
        iVar6 = iVar6 + -4;
      } while (*(int *)(param_1 + 0x1c) <= iVar7);
    }
  }
  FUN_08922654(auStack_5c,2);
  FUN_08922654(auStack_90,2);
  return;
}

