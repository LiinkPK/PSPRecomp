/* Entry 0x088FC6D0 | file offset 0x000F96A8 | FUN_088fc6d0 | bytes 344 */

void FUN_088fc6d0(int *param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = 0;
  *(ushort *)(param_1[0xc] + 0x16) = *(ushort *)(param_1[0xc] + 0x16) & 0xfffe;
  iVar4 = 0;
  do {
    iVar6 = param_1[0xc];
    if (*(short *)(iVar6 + iVar4 + 0x592) == -1) {
      return;
    }
    if ((*(ushort *)(iVar6 + iVar4 + 0x594) & 1) != 0) {
      *(ushort *)(iVar6 + 0x16) = *(ushort *)(iVar6 + 0x16) | 1;
    }
    iVar7 = 0;
    iVar6 = 0;
    if (0 < *(short *)(*param_1 + 0x12)) {
      do {
        iVar1 = param_1[0xc] + iVar4;
        if (*(short *)(iVar1 + 0x592) == *(short *)(param_1[2] + iVar6 + 2)) {
          if (((*(ushort *)(iVar1 + 0x594) & 1) == 0) &&
             (uVar3 = (uint)*(short *)(param_1[2] + iVar6 + 6), uVar3 != 0xffffffff)) {
            puVar2 = (uint *)(DAT_089d726c + (uVar3 >> 5) * 4);
            *puVar2 = *puVar2 | 1 << (uVar3 & 0x1f);
            iVar1 = param_1[0xc] + iVar4;
          }
          if (((*(ushort *)(iVar1 + 0x594) & 2) == 0) &&
             (uVar3 = (uint)*(short *)(param_1[2] + iVar6 + 8), uVar3 != 0xffffffff)) {
            puVar2 = (uint *)(DAT_089d726c + (uVar3 >> 5) * 4);
            *puVar2 = *puVar2 | 1 << (uVar3 & 0x1f);
          }
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 0x16;
      } while (iVar7 < *(short *)(*param_1 + 0x12));
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar5 < 0x32);
  return;
}

