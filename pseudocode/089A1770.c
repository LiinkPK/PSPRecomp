/* Entry 0x089A1770 | file offset 0x0019E748 | FUN_089a1770 | bytes 412 */

void FUN_089a1770(int param_1,short param_2,short param_3,undefined2 param_4,short param_5,
                 short param_6,uint param_7,int param_8)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  short sVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint *puVar10;
  uint *puVar11;
  
  puVar11 = *(uint **)(param_1 + 8);
  uVar7 = *(undefined4 *)(param_1 + 0xc0);
  puVar6 = puVar11 + 7;
  uVar8 = *(undefined4 *)(param_1 + 0xc4);
  uVar9 = *(undefined4 *)(param_1 + 200);
  sVar4 = param_5 + (short)*(undefined4 *)(param_1 + 0xbc);
  puVar10 = puVar11 + 2;
  *(short *)(puVar11 + 2) = param_5;
  *puVar11 = (((uint)puVar6 & 0xfffffff) >> 0x18) << 0x10 | 0x10000000;
  puVar11[1] = (uint)puVar6 & 0xffffff | 0x8000000;
  *(uint **)(param_1 + 8) = puVar6;
  *(short *)(puVar11 + 5) = param_6 + (short)uVar7;
  *(short *)((int)puVar11 + 0x16) = param_2 + (short)uVar8;
  *(short *)(puVar11 + 6) = param_3 + (short)uVar9;
  *(undefined2 *)((int)puVar11 + 0x1a) = param_4;
  *(short *)((int)puVar11 + 10) = param_6;
  *(short *)(puVar11 + 3) = param_2;
  *(short *)((int)puVar11 + 0xe) = param_3;
  *(undefined2 *)(puVar11 + 4) = param_4;
  *(short *)((int)puVar11 + 0x12) = sVar4;
  if ((param_7 & 1) != 0) {
    uVar3 = puVar11[2];
    *(short *)(puVar11 + 2) = sVar4;
    *(short *)((int)puVar11 + 0x12) = (short)uVar3;
  }
  if ((int)(param_7 << 0x1e) < 0) {
    uVar3 = puVar11[5];
    *(undefined2 *)(puVar11 + 5) = *(undefined2 *)((int)puVar11 + 10);
    *(short *)((int)puVar11 + 10) = (short)uVar3;
  }
  if (param_8 == 1) {
    uVar3 = puVar11[6];
    *(undefined2 *)(puVar11 + 6) = *(undefined2 *)((int)puVar11 + 0xe);
    *(short *)((int)puVar11 + 0xe) = (short)uVar3;
  }
  else {
    if (param_8 < 2) {
      puVar5 = *(undefined4 **)(param_1 + 8);
      goto LAB_089a1858;
    }
    if (param_8 == 2) {
      uVar1 = *(undefined2 *)((int)puVar11 + 0xe);
      uVar2 = *(undefined2 *)((int)puVar11 + 0x16);
      *(short *)((int)puVar11 + 0x16) = (short)puVar11[3];
      *(undefined2 *)(puVar11 + 3) = uVar2;
      *(short *)((int)puVar11 + 0xe) = (short)puVar11[6];
      *(undefined2 *)(puVar11 + 6) = uVar1;
    }
    else if (param_8 == 3) {
      uVar1 = *(undefined2 *)((int)puVar11 + 0x16);
      *(short *)((int)puVar11 + 0x16) = (short)puVar11[3];
      *(undefined2 *)(puVar11 + 3) = uVar1;
    }
  }
  puVar5 = *(undefined4 **)(param_1 + 8);
LAB_089a1858:
  *puVar5 = 0x12800102;
  *(undefined4 **)(param_1 + 8) = puVar5 + 1;
  if (puVar10 != (uint *)0x0) {
    puVar5[1] = (((uint)puVar10 & 0xfffffff) >> 0x18) << 0x10 | 0x10000000;
    puVar5[2] = (uint)puVar10 & 0xffffff | 0x1000000;
    *(undefined4 **)(param_1 + 8) = puVar5 + 3;
  }
  puVar5 = *(undefined4 **)(param_1 + 8);
  *puVar5 = 0x4060002;
  *(undefined4 **)(param_1 + 8) = puVar5 + 1;
  return;
}

