/* Entry 0x0888B3AC | file offset 0x00088384 | FUN_0888b3ac | bytes 408 */

void FUN_0888b3ac(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_40 [4];
  undefined4 *local_3c;
  undefined1 *local_38;
  
  local_3c = &DAT_09afde48;
  iVar6 = 0;
  iVar5 = 0;
  local_38 = &DAT_09afc900;
  iVar8 = param_1 + 4;
  do {
    iVar3 = *(int *)(param_1 + 0x38);
    uVar4 = *(undefined4 *)(iVar8 + 0x38);
    iVar7 = *(int *)(DAT_089d69f8 + iVar5);
    iVar2 = 0;
    if ((*(uint *)(iVar3 + 0x388) & 2) == 0) {
      if (*(char *)(iVar7 + 0xc4) == '\x01') {
        iVar2 = func_0x08aecc50(auStack_40,iVar3);
      }
      if ((*(char *)(local_3c + 2) == '\0' && iVar6 == 0) &&
         (iVar1 = FUN_088bbd8c((int)*(short *)(local_38 + 0xf3c)), iVar1 != 0)) {
        iVar1 = func_0x08aecc18(auStack_40,uVar4,iVar1);
        iVar2 = iVar2 + iVar1;
      }
    }
    if (*(char *)(local_3c + 2) == '\x03') {
      iVar3 = func_0x08aecc34(auStack_40,iVar3);
      iVar2 = iVar2 + iVar3;
    }
    if ((iVar2 != 0) && (iVar3 = *(int *)(DAT_089d69f8 + iVar5 + 8), iVar3 != 0)) {
      func_0x08aecf30(iVar3,iVar7,iVar2,1);
    }
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 4;
    param_1 = param_1 + 4;
    iVar8 = iVar8 + -4;
  } while (iVar6 < 2);
  return;
}

