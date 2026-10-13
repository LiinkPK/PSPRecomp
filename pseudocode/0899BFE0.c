/* Entry 0x0899BFE0 | file offset 0x00198FB8 | FUN_0899bfe0 | bytes 480 */

void FUN_0899bfe0(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  iVar8 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 4) = 0;
  if (iVar8 != 0) {
    if (*(ushort *)(iVar8 + 0x2a) < 2) {
      uVar1 = *(ushort *)(iVar8 + 0x2e);
    }
    else {
      *(undefined4 *)(param_1 + 4) = 1;
      uVar1 = *(ushort *)(iVar8 + 0x2e);
    }
    if (uVar1 < 2) {
      uVar1 = *(ushort *)(iVar8 + 8);
    }
    else {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
      uVar1 = *(ushort *)(iVar8 + 8);
    }
    uVar10 = (uint)uVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 10);
    uVar11 = 1 << (0x20U - LZCOUNT(uVar9 - 1) & 0x1f);
    uVar5 = 1 << (0x20U - LZCOUNT(uVar10 - 1) & 0x1f);
    if (uVar10 == uVar5 && uVar9 == uVar11) {
      uVar2 = *(ushort *)(iVar8 + 0xe);
    }
    else {
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x60;
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(float *)(param_1 + 0x2c) = (float)uVar9 / (float)(int)uVar11;
      *(float *)(param_1 + 0x28) = (float)uVar10 / (float)(int)uVar5;
      uVar2 = *(ushort *)(iVar8 + 0xe);
    }
    if (*(ushort *)(iVar8 + 0xc) == 0) {
      trap(7);
    }
    uVar2 = (short)(((uint)uVar2 << 3) / (uint)*(ushort *)(iVar8 + 0xc)) - 1;
    *(ushort *)(param_1 + 0x1c) = uVar1 + uVar2 & ~uVar2;
  }
  iVar8 = *(int *)(param_1 + 0x10);
  if (iVar8 == 0) {
    uVar5 = *(uint *)(param_1 + 4);
  }
  else {
    uVar1 = *(ushort *)(iVar8 + 0x2a);
    if (uVar1 < 2) {
      uVar2 = *(ushort *)(iVar8 + 0x2e);
    }
    else {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 4;
      uVar2 = *(ushort *)(iVar8 + 0x2e);
    }
    if (uVar2 < 2) {
      uVar2 = *(ushort *)(iVar8 + 8);
    }
    else {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 8;
      uVar2 = *(ushort *)(iVar8 + 8);
    }
    uVar5 = (uint)(uVar2 >> 4) * (uint)uVar1;
    if (*(short *)(iVar8 + 4) == 3) {
      uVar5 = uVar5 * 2;
    }
    if (uVar5 < 0x21) {
      uVar3 = (undefined2)uVar5;
    }
    else {
      uVar3 = 0x20;
    }
    *(undefined2 *)(param_1 + 0x1e) = uVar3;
    uVar5 = *(uint *)(param_1 + 4);
  }
  if ((uVar5 & 10) == 0) {
    iVar8 = 0;
    if (*(int *)(param_1 + 0x58) < 1) goto LAB_0899c174;
    piVar6 = *(int **)(param_1 + 0x54);
    iVar4 = *piVar6;
    while( true ) {
      iVar8 = iVar8 + 1;
      piVar6 = piVar6 + 1;
      if (*(short *)(iVar4 + 0xe) != 0) break;
      if (*(int *)(param_1 + 0x58) <= iVar8) {
        uVar7 = *(undefined4 *)(param_1 + 0x60);
        goto LAB_0899c178;
      }
      iVar4 = *piVar6;
    }
  }
  *(uint *)(param_1 + 4) = uVar5 | 0x10;
LAB_0899c174:
  uVar7 = *(undefined4 *)(param_1 + 0x60);
LAB_0899c178:
  FUN_0899c2c4(param_1,uVar7);
  return;
}

