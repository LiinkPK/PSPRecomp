/* Entry 0x088981B4 | file offset 0x0009518C | FUN_088981b4 | bytes 532 */

void FUN_088981b4(int param_1,int param_2,ushort param_3,char param_4)

{
  bool bVar1;
  int iVar2;
  ushort *puVar3;
  ushort uVar4;
  uint uVar5;
  
  uVar4 = param_3 & 0xff;
  if (*(int *)(param_1 + 0x70) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    if ((-1 < param_2) && (bVar1 = false, param_2 < *(int *)(*(int *)(param_1 + 0x58) + 0x14))) {
      bVar1 = true;
    }
  }
  if (bVar1) {
    param_2 = param_2 * 0x4c;
    iVar2 = *(int *)(param_1 + 0x70) + param_2;
    *(ushort *)(iVar2 + 0x24) = *(ushort *)(iVar2 + 0x24) & 0xfffe | param_3 & 1;
    if ((((*(char *)(param_1 + 0xc0) != '\0') &&
         (iVar2 = FUN_08897064(param_1 + 0xac,*(int *)(param_1 + 0x70) + param_2), -1 < iVar2)) &&
        (*(char *)(param_1 + 0xc0) != '\0')) &&
       ((-1 < iVar2 && (iVar2 < **(int **)(param_1 + 0xac))))) {
      *(ushort *)(*(int *)(param_1 + 0xb0) + iVar2 * 0x24 + 0x20) = uVar4;
    }
    iVar2 = 0;
    if (*(char *)(param_1 + 200) != '\0') {
      iVar2 = *(int *)(param_1 + 0xcc);
    }
    if (((0 < iVar2) &&
        (uVar5 = (uint)*(byte *)(*(int *)(param_1 + 0x70) + param_2 + 0x27), uVar5 != 0)) &&
       ((int)uVar5 < *(int *)(param_1 + 0xcc))) {
      puVar3 = (ushort *)(*(int *)(param_1 + 0xd0) + uVar5 * 4);
      iVar2 = 0;
      if (puVar3[1] != 0) {
        do {
          FUN_08897cc0(param_1,(int)*(short *)(*(int *)(param_1 + 0xd4) +
                                              (iVar2 + (uint)*puVar3) * 2),uVar4);
          iVar2 = iVar2 + 1;
          puVar3 = (ushort *)(*(int *)(param_1 + 0xd0) + uVar5 * 4);
        } while (iVar2 < (int)(uint)puVar3[1]);
      }
    }
    if (param_4 != '\0') {
      iVar2 = *(int *)(param_1 + 0x70) + param_2;
      *(ushort *)(iVar2 + 0x24) = *(ushort *)(iVar2 + 0x24) & 0xfffd | (param_3 & 1) << 1;
      iVar2 = (int)*(short *)(*(int *)(param_1 + 0x70) + param_2 + 0x22);
      if (-1 < iVar2) {
        FUN_08893938(DAT_089d6ac8,iVar2,uVar4);
      }
    }
  }
  return;
}

