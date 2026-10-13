/* Entry 0x08850574 | file offset 0x0004D54C | FUN_08850574 | bytes 764 */

int FUN_08850574(int param_1,undefined4 param_2,int param_3,undefined1 param_4,undefined4 param_5,
                undefined4 param_6,undefined1 param_7,undefined4 param_8,undefined4 uStackX_0)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar3 = FUN_08850a40(param_2);
  if (*(char *)(param_1 + 0x208) == '\0') goto LAB_08850784;
  iVar4 = 0;
  iVar5 = *(int *)(param_1 + 0x200);
  while (iVar4 = FUN_08850a90(iVar4,**(undefined1 **)(iVar5 + 0x5a4)), iVar4 != 0) {
    if ((*(ushort *)(iVar4 + 6) & 0x80) != 0) {
      DAT_09af84d0 = DAT_09af84d0 * 0x343fd + 0x269ec3;
      uVar7 = (DAT_09af84d0 >> 0x10 & 0x7fffU) % 0x65;
      iVar6 = 0;
      iVar5 = 0;
      *(undefined1 *)(param_1 + 0x204) = 0;
      goto LAB_0885065c;
    }
    iVar5 = *(int *)(param_1 + 0x200);
  }
  goto LAB_08850780;
  while (iVar6 = iVar6 + 1, iVar6 < 4) {
LAB_0885065c:
    if (((*(char *)(iVar4 + 0x38 + iVar6) != '\0') &&
        (bVar1 = iVar5 <= (int)uVar7, iVar5 = iVar5 + (uint)*(byte *)(iVar4 + 0x38 + iVar6), bVar1))
       && ((int)uVar7 < iVar5)) {
      if (iVar6 < 2) {
        if (-1 < iVar6) {
          if (iVar6 < 1) {
            *(undefined1 *)(param_1 + 0x204) = 1;
          }
          else {
            *(undefined1 *)(param_1 + 0x204) = 2;
          }
        }
      }
      else if (iVar6 < 3) {
        *(undefined1 *)(param_1 + 0x204) = 3;
      }
      else if (iVar6 < 4) {
        *(undefined1 *)(param_1 + 0x204) = 4;
      }
      break;
    }
  }
  if (*(char *)(param_1 + 0x204) != '\0') {
    uVar2 = FUN_08850a64(**(undefined1 **)(*(int *)(param_1 + 0x200) + 0x5a4),
                         (*(byte *)(*(int *)(*(int *)(param_1 + 0x200) + 0x2f8) + 8) & 8) != 0);
    *(undefined1 *)(param_1 + 0x205) = uVar2;
    uVar2 = FUN_08850a64(**(undefined1 **)(*(int *)(param_1 + 0x200) + 0x5a4),
                         (*(byte *)(*(int *)(*(int *)(param_1 + 0x200) + 0x2f8) + 8) & 8) != 0);
    *(undefined1 *)(param_1 + 0x206) = uVar2;
  }
LAB_08850780:
  *(undefined1 *)(param_1 + 0x208) = 0;
LAB_08850784:
  if (param_3 < 0) {
    param_3 = (int)*(short *)(iVar3 + 10);
  }
  iVar3 = FUN_0884f1c8(param_1,param_2,param_3,param_5,param_6);
  if (iVar3 == 0) {
    iVar3 = 0;
    do {
      if (*(short *)(param_1 + iVar3 * 0x20 + 0x12) == 0) {
        iVar3 = param_1 + iVar3 * 0x20;
        FUN_0884fa84(iVar3,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uStackX_0
                    );
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x10);
    iVar3 = 0;
  }
  return iVar3;
}

