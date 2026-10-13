/* Entry 0x088C18A0 | file offset 0x000BE878 | FUN_088c18a0 | bytes 248 */

int FUN_088c18a0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = 0;
  iVar3 = *param_1;
  if (param_1[1] == 0) {
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 100);
    }
  }
  else {
    if (*(int *)(iVar3 + 100) == 0) {
      cVar1 = *(char *)(iVar3 + 0xf);
      iVar3 = FUN_088c7ef4((int)*(char *)(iVar3 + 0xd));
      iVar3 = (int)cVar1 * *(int *)(iVar3 + 4);
    }
    else {
      iVar3 = *(int *)(iVar3 + 100) * 2;
    }
    iVar4 = 0;
    iVar7 = 0;
    iVar6 = 0;
    iVar5 = 0;
    do {
      iVar2 = FUN_088c7e98((int)*(short *)(param_1[1] + 0x30 + iVar5));
      if (iVar2 != 0) {
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + *(int *)(iVar2 + 0x18);
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 2;
    } while (iVar6 < 2);
    if (0 < iVar7) {
      iVar4 = iVar4 / iVar7;
    }
    iVar4 = iVar4 + iVar3;
  }
  return iVar4;
}

