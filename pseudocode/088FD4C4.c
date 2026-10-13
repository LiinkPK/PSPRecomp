/* Entry 0x088FD4C4 | file offset 0x000FA49C | FUN_088fd4c4 | bytes 1124 */

void FUN_088fd4c4(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  
  *(undefined2 *)(param_1[0xc] + 0x16) = 0;
  *(undefined2 *)(param_1[0xc] + 0x10) = 0;
  *(undefined2 *)(param_1[0xc] + 0x12) =
       *(undefined2 *)(param_1[1] + *(int *)(param_1[0xc] + 4) * 8 + 2);
  *(undefined2 *)(param_1[0xc] + 0x14) =
       *(undefined2 *)(param_1[1] + *(int *)(param_1[0xc] + 4) * 8 + 4);
  *(undefined2 *)(param_1[0xc] + 0x18) = 0;
  iVar5 = 0;
  iVar2 = 0;
  do {
    iVar5 = iVar5 + 1;
    *(undefined1 *)(param_1[0xc] + iVar2 + 0x1a) = 0xff;
    iVar2 = iVar2 + 0x1c;
  } while (iVar5 < 0x32);
  iVar5 = 0;
  iVar2 = (int)*(short *)(*param_1 + 0x12);
  if (0 < iVar2) {
    iVar11 = 0;
    do {
      iVar3 = param_1[0xc];
      if ((int)*(char *)(param_1[2] + iVar11) == *(int *)(iVar3 + 4)) {
        uVar6 = (uint)*(short *)((char *)(param_1[2] + iVar11) + 4);
        if (uVar6 == 0xffffffff) {
          sVar4 = *(short *)(iVar3 + 0x18);
        }
        else {
          if ((*(uint *)(DAT_089d726c + (uVar6 >> 5) * 4) & 1 << (uVar6 & 0x1f)) == 0)
          goto LAB_088fd8f0;
          sVar4 = *(short *)(iVar3 + 0x18);
        }
        *(undefined2 *)(iVar3 + sVar4 * 0x1c + 0x1c) = 0;
        *(undefined1 *)(param_1[0xc] + *(short *)(param_1[0xc] + 0x18) * 0x1c + 0x1a) =
             *(undefined1 *)(param_1[2] + iVar11);
        *(undefined1 *)(param_1[0xc] + *(short *)(param_1[0xc] + 0x18) * 0x1c + 0x1b) =
             *(undefined1 *)(param_1[2] + iVar11 + 1);
        *(undefined2 *)(param_1[0xc] + *(short *)(param_1[0xc] + 0x18) * 0x1c + 0x1e) =
             *(undefined2 *)(param_1[2] + iVar11 + 2);
        *(undefined2 *)(param_1[0xc] + *(short *)(param_1[0xc] + 0x18) * 0x1c + 0x20) = 0;
        *(ushort *)(param_1[0xc] + *(short *)(param_1[0xc] + 0x18) * 0x1c + 0x22) =
             (ushort)*(byte *)(param_1[2] + iVar11 + 0xc);
        iVar2 = param_1[0xc];
        iVar10 = 0;
        iVar3 = (int)*(short *)(iVar2 + 0x18);
        iVar7 = param_1[2] + iVar11;
        iVar8 = iVar2 + iVar3 * 0x1c;
        do {
          bVar1 = *(byte *)(iVar7 + iVar10 + 0xd);
          if (bVar1 != 0xff) {
            *(ushort *)(iVar8 + *(short *)(iVar8 + 0x20) * 2 + 0x24) = (ushort)bVar1;
            iVar2 = param_1[0xc] + *(short *)(param_1[0xc] + 0x18) * 0x1c;
            *(short *)(iVar2 + 0x20) = *(short *)(iVar2 + 0x20) + 1;
            iVar2 = param_1[0xc];
            iVar3 = (int)*(short *)(iVar2 + 0x18);
            iVar7 = param_1[2] + iVar11;
            iVar8 = iVar2 + iVar3 * 0x1c;
          }
          sVar4 = (short)iVar3;
          iVar10 = iVar10 + 1;
        } while (iVar10 < 9);
        uVar6 = (uint)*(short *)(iVar7 + 6);
        uVar9 = *(ushort *)(iVar8 + 0x1c);
        if ((uVar6 != 0xffffffff) &&
           ((*(uint *)(DAT_089d726c + (uVar6 >> 5) * 4) & 1 << (uVar6 & 0x1f)) == 0)) {
          *(ushort *)(iVar8 + 0x1c) = uVar9 | 1;
          *(ushort *)(param_1[0xc] + 0x16) = *(ushort *)(param_1[0xc] + 0x16) | 1;
          iVar2 = param_1[0xc];
          sVar4 = *(short *)(iVar2 + 0x18);
          iVar7 = param_1[2] + iVar11;
          iVar8 = iVar2 + sVar4 * 0x1c;
          uVar9 = *(ushort *)(iVar8 + 0x1c);
        }
        uVar6 = (uint)*(short *)(iVar7 + 8);
        if ((uVar6 != 0xffffffff) &&
           ((*(uint *)(DAT_089d726c + (uVar6 >> 5) * 4) & 1 << (uVar6 & 0x1f)) == 0)) {
          *(ushort *)(iVar8 + 0x1c) = uVar9 | 2;
          iVar2 = param_1[0xc];
          sVar4 = *(short *)(iVar2 + 0x18);
          iVar7 = param_1[2] + iVar11;
          iVar8 = iVar2 + sVar4 * 0x1c;
          uVar9 = *(ushort *)(iVar8 + 0x1c);
        }
        uVar6 = (uint)*(short *)(iVar7 + 10);
        if (uVar6 != 0xffffffff) {
          if (((*(uint *)(DAT_089d726c + (uVar6 >> 5) * 4) & 1 << (uVar6 & 0x1f)) != 0) &&
             ((uVar9 & 2) != 0)) {
            *(ushort *)(iVar8 + 0x1c) = uVar9 | 4;
            FUN_088fc010(param_1,(int)*(short *)(param_1[2] + iVar11 + 2));
            iVar2 = param_1[0xc];
            sVar4 = *(short *)(iVar2 + 0x18);
            uVar9 = *(ushort *)(iVar2 + sVar4 * 0x1c + 0x1c);
          }
        }
        if ((uVar9 & 3) != 0) {
          FUN_088fc628(param_1,(int)*(short *)(param_1[2] + iVar11 + 2),uVar9);
          iVar2 = param_1[0xc];
          sVar4 = *(short *)(iVar2 + 0x18);
        }
        *(short *)(iVar2 + 0x18) = sVar4 + 1;
        iVar2 = (int)*(short *)(*param_1 + 0x12);
      }
LAB_088fd8f0:
      iVar5 = iVar5 + 1;
      iVar11 = iVar11 + 0x16;
    } while (iVar5 < iVar2);
  }
  return;
}

