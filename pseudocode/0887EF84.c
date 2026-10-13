/* Entry 0x0887EF84 | file offset 0x0007BF5C | FUN_0887ef84 | bytes 784 */

void FUN_0887ef84(int param_1,short param_2,int param_3,int param_4)

{
  byte bVar1;
  undefined4 uVar2;
  short *psVar3;
  uint uVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  short *psVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  short sVar12;
  short sVar13;
  
  uVar2 = FUN_089a04e8();
  FUN_0899fdc4(0);
  FUN_089a0384(9);
  FUN_089a0384(4);
  FUN_089a0384(0x15);
  FUN_089a113c(6,0,0xff);
  FUN_089a0384(0);
  FUN_089a0384(1);
  FUN_089a03dc(5);
  FUN_089a0e20(0,1);
  FUN_089a0e60(1,1);
  if (*(char *)(param_3 + 1) != '\0') {
    sVar12 = *(short *)(param_4 + 0x14);
    uVar4 = *(uint *)(param_4 + 0x10);
    sVar13 = *(short *)(param_4 + 0x16);
    if ((uVar4 & 4) == 0) {
      if ((uVar4 & 8) != 0) {
        sVar12 = sVar12 - *(ushort *)(param_3 + 4) / 2;
      }
    }
    else {
      sVar12 = sVar12 - *(short *)(param_3 + 4);
    }
    if ((uVar4 & 0x20) == 0) {
      if ((uVar4 & 0x40) != 0) {
        sVar13 = sVar13 - *(byte *)(param_1 + 0xb) / 2;
      }
    }
    else {
      sVar13 = sVar13 - (ushort)*(byte *)(param_1 + 0xb);
    }
    FUN_0899d2f8(*(undefined4 *)(param_1 + 0x310));
    psVar3 = (short *)FUN_089a00f4((uint)*(byte *)(param_3 + 1) << 6);
    iVar6 = 0;
    if (*(char *)(param_3 + 1) != '\0') {
      puVar11 = (undefined4 *)(param_3 + 0x10);
      psVar5 = psVar3;
      iVar7 = param_3;
      do {
        sVar8 = *(short *)(iVar7 + 10);
        psVar5[0x10] = sVar8;
        *psVar5 = sVar8;
        sVar8 = *psVar5 + (*(byte *)(iVar7 + 0xd) & 0xf);
        psVar5[0x18] = sVar8;
        psVar5[8] = sVar8;
        bVar1 = *(byte *)(iVar7 + 0xc);
        psVar5[9] = (ushort)bVar1;
        psVar5[1] = (ushort)bVar1;
        sVar8 = psVar5[1] + (short)((int)(uint)*(byte *)(iVar7 + 0xd) >> 4);
        psVar5[0x19] = sVar8;
        psVar5[0x11] = sVar8;
        psVar9 = psVar5 + 2;
        if ((*(int *)(iVar7 + 0x10) == 0) || ((*(uint *)(param_4 + 0x10) & 0x4000) != 0)) {
          uVar10 = *(undefined4 *)(param_4 + 0xc);
          *(undefined4 *)psVar9 = uVar10;
        }
        else {
          *(undefined4 *)psVar9 = *puVar11;
          *(char *)((int)psVar5 + 7) = (char)((uint)*(undefined4 *)(param_4 + 0xc) >> 0x18);
          uVar10 = *(undefined4 *)psVar9;
        }
        *(undefined4 *)(psVar5 + 10) = uVar10;
        *(undefined4 *)(psVar5 + 0x12) = uVar10;
        *(undefined4 *)(psVar5 + 0x1a) = uVar10;
        sVar8 = sVar12 + *(short *)(iVar7 + 8);
        psVar5[0x14] = sVar8;
        psVar5[4] = sVar8;
        sVar8 = psVar5[4] + (*(byte *)(iVar7 + 0xd) & 0xf);
        psVar5[0x1c] = sVar8;
        psVar5[0xc] = sVar8;
        psVar5[0xd] = sVar13;
        psVar5[5] = sVar13;
        sVar8 = psVar5[5] + (short)((int)(uint)*(byte *)(iVar7 + 0xd) >> 4);
        psVar5[0x1d] = sVar8;
        psVar5[0x15] = sVar8;
        psVar5[0x1e] = param_2;
        psVar5[0x16] = param_2;
        psVar5[0xe] = param_2;
        psVar5[6] = param_2;
        iVar6 = iVar6 + 1;
        psVar5 = psVar5 + 0x20;
        iVar7 = iVar7 + 0xc;
        puVar11 = puVar11 + 3;
      } while (iVar6 < (int)(uint)*(byte *)(param_3 + 1));
    }
    FUN_089a12a4(0,2,3,0,0);
    FUN_089a05f0(4,0x80011e,4,*(undefined1 *)(param_3 + 1),0,psVar3);
  }
  FUN_0899fdc4(uVar2);
  return;
}

