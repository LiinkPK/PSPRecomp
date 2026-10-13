/* Entry 0x088C51AC | file offset 0x000C2184 | FUN_088c51ac | bytes 500 */

uint FUN_088c51ac(int param_1,short *param_2,int param_3,char param_4)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  short *psVar7;
  
  uVar3 = 0;
  if (*(char *)(param_3 + 3) == -1) {
    sVar1 = *(short *)(param_3 + 10);
    if (param_2 != (short *)0x0) {
      *param_2 = sVar1;
      param_2[2] = *(short *)(param_3 + 0xc);
      param_2[4] = *(short *)(param_3 + 0xe);
      param_2[6] = *(short *)(param_3 + 0x10);
      param_2[8] = *(short *)(param_3 + 0x12);
      param_2[10] = *(short *)(param_3 + 0x14);
      param_2[0xc] = *(short *)(param_3 + 0x16);
      param_2[0xe] = *(short *)(param_3 + 0x18);
      sVar1 = *(short *)(param_3 + 10);
    }
    uVar3 = (uint)(sVar1 != -1);
    if (*(short *)(param_3 + 0xc) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(short *)(param_3 + 0xe) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(short *)(param_3 + 0x10) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(short *)(param_3 + 0x12) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(short *)(param_3 + 0x14) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(short *)(param_3 + 0x16) != -1) {
      uVar3 = uVar3 + 1;
    }
    if (*(short *)(param_3 + 0x18) != -1) {
      uVar3 = uVar3 + 1;
    }
  }
  else if ((DAT_089d76e0 != 0) && (iVar6 = 0, *(short *)(DAT_089d76d8 + 4) != 0)) {
    iVar4 = 0;
    psVar5 = param_2;
    do {
      psVar7 = (short *)(DAT_089d76e0 + iVar4);
      if ((char)psVar7[2] == *(char *)(param_3 + 3)) {
        if (param_4 != '\0') {
          uVar2 = psVar7[1];
          if ((uVar2 != 0xffff) &&
             ((*(uint *)(DAT_089d726c + (uint)(uVar2 >> 5) * 4) & 1 << (uVar2 & 0x1f)) == 0))
          goto LAB_088c537c;
        }
        if (param_2 != (short *)0x0) {
          *psVar5 = *psVar7;
          psVar5[1] = *(short *)(DAT_089d76e0 + iVar4 + 2);
        }
        if (param_1 + -1 < (int)uVar3) {
          return uVar3;
        }
        uVar3 = uVar3 + 1;
        psVar5 = psVar5 + 2;
      }
LAB_088c537c:
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 8;
    } while (iVar6 < (int)(uint)*(ushort *)(DAT_089d76d8 + 4));
  }
  return uVar3;
}

