/* Entry 0x08988BC4 | file offset 0x00185B9C | FUN_08988bc4 | bytes 552 */

void FUN_08988bc4(int param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  undefined4 uVar8;
  undefined1 auStack_30 [16];
  
  iVar6 = *(int *)(param_1 + 0x74);
  bVar2 = false;
  iVar3 = *(int *)(param_1 + 0x6c);
  if ((iVar6 == 0) && (iVar3 == 0)) {
    bVar2 = true;
    cVar7 = *(char *)(param_2 + 0xbb);
  }
  else if ((iVar3 == 0) && (iVar6 != 0)) {
    iVar3 = 0;
    if (0 < iVar6) {
      iVar6 = 0;
      do {
        iVar5 = *(int *)(param_1 + 0x6c);
        *(int *)(param_1 + 0x6c) = iVar5 + 1;
        FUN_089a3868(*(int *)(param_1 + 0x68) + iVar5 * 0x10,*(int *)(param_1 + 0x70) + iVar6);
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + 0x10;
      } while (iVar3 < *(int *)(param_1 + 0x74));
    }
    cVar7 = *(char *)(param_2 + 0xbb);
  }
  else {
    cVar7 = *(char *)(param_2 + 0xbb);
    if ((((cVar7 != '\0') && (*(char *)(param_2 + 0xbd) != '\0')) && (iVar6 == 0)) && (iVar3 != 0))
    {
      iVar6 = 0;
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          iVar5 = *(int *)(param_1 + 0x74);
          *(int *)(param_1 + 0x74) = iVar5 + 1;
          FUN_089a3868(*(int *)(param_1 + 0x70) + iVar5 * 0x10,*(int *)(param_1 + 0x68) + iVar3);
          iVar6 = iVar6 + 1;
          iVar3 = iVar3 + 0x10;
        } while (iVar6 < *(int *)(param_1 + 0x6c));
        cVar7 = *(char *)(param_2 + 0xbb);
      }
    }
  }
  if ((cVar7 != '\0') &&
     (bVar1 = *(byte *)(param_2 + 0xbc), uVar4 = *(int *)(param_1 + 0x88) + 1,
     *(uint *)(param_1 + 0x88) = uVar4, bVar1 <= uVar4)) {
    *(undefined4 *)(param_1 + 0x88) = 0;
    bVar2 = true;
  }
  if (bVar2) {
    FUN_089896c4(param_1,param_2);
  }
  if (((*(char *)(param_2 + 0xbb) != '\0') && (*(char *)(param_2 + 0xbd) != '\0')) &&
     (*(int *)(param_1 + 0x6c) == *(int *)(param_1 + 0x74))) {
    uVar8 = *(undefined4 *)(param_2 + 0x68);
    iVar3 = 0;
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x74)) {
      do {
        FUN_089a38e0(auStack_30,*(int *)(param_1 + 0x70) + iVar6,*(int *)(param_1 + 0x68) + iVar6);
        FUN_089a3a44(uVar8,auStack_30,auStack_30);
        iVar5 = *(int *)(param_1 + 0x68) + iVar6;
        FUN_089a38c4(iVar5,iVar5,auStack_30);
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + 0x10;
      } while (iVar3 < *(int *)(param_1 + 0x74));
    }
  }
  return;
}

