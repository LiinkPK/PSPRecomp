/* Entry 0x089AEF1C | file offset 0x001ABEF4 | FUN_089aef1c | bytes 716 */

int FUN_089aef1c(int param_1,int param_2,uint param_3,int param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 uVar11;
  uint *puVar12;
  uint *puVar13;
  undefined4 uVar14;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_4 == 0)) {
    return 0;
  }
  if (param_1 != param_2) {
    if ((param_3 & 0x81) == 0) {
      param_3 = 0;
    }
    FUN_089ac384();
    uVar11 = *(undefined4 *)(param_2 + 8);
    uVar1 = *(undefined2 *)(param_2 + 0xc);
    uVar2 = *(undefined2 *)(param_2 + 0xe);
    uVar14 = *(undefined4 *)(param_2 + 0x10);
    uVar7 = *(undefined4 *)(param_2 + 0x14);
    uVar8 = *(undefined4 *)(param_2 + 0x18);
    uVar3 = *(undefined2 *)(param_2 + 0x1c);
    uVar4 = *(undefined2 *)(param_2 + 0x1e);
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
    *(undefined4 *)(param_1 + 8) = uVar11;
    *(undefined2 *)(param_1 + 0xc) = uVar1;
    *(undefined2 *)(param_1 + 0xe) = uVar2;
    *(undefined4 *)(param_1 + 0x14) = uVar7;
    *(undefined4 *)(param_1 + 0x18) = uVar8;
    *(undefined2 *)(param_1 + 0x1c) = uVar3;
    *(undefined2 *)(param_1 + 0x1e) = uVar4;
    *(undefined4 *)(param_1 + 0x10) = uVar14;
    if (param_3 == 0) {
      FUN_089ab6dc(1,uVar14);
      FUN_089ab6dc(1,*(undefined4 *)(param_1 + 8));
      FUN_089ab6dc(1,*(undefined4 *)(param_1 + 0x14));
      return param_1;
    }
    iVar6 = (uint)*(ushort *)(param_2 + 0x1c) * (uint)*(ushort *)(param_2 + 0x1e);
    uVar5 = *(ushort *)(param_2 + 0xc);
    uVar7 = 1;
    uVar8 = 0x60;
    if ((int)param_3 < 0) {
      uVar7 = 2;
    }
    if (*(int *)(param_2 + 0x10) == 0) {
      uVar8 = 0;
    }
    uVar11 = FUN_089aba0c(param_4,uVar7,4,uVar8);
    *(undefined4 *)(param_1 + 0x10) = uVar11;
    uVar11 = FUN_089aba0c(param_4,uVar7,4,(uint)uVar5 << 2);
    *(undefined4 *)(param_1 + 8) = uVar11;
    uVar7 = FUN_089aba0c(param_4,uVar7,4,iVar6);
    uVar11 = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = uVar7;
    FUN_08935524(*(undefined4 *)(param_1 + 0x10),uVar11,uVar8);
    FUN_08935524(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_2 + 0x14),iVar6);
    puVar10 = *(uint **)(param_1 + 8);
    puVar13 = puVar10 + *(ushort *)(param_1 + 0xc);
    puVar12 = *(uint **)(param_2 + 8);
    if (puVar10 < puVar13) {
      uVar9 = *puVar12;
      while( true ) {
        puVar12 = puVar12 + 1;
        *puVar10 = uVar9;
        if (uVar9 >> 0x18 == 1) {
          uVar9 = (puVar10[-1] & 0xf0000) << 8 | uVar9 & 0xffffff;
          if (uVar9 == *(uint *)(param_2 + 0x14)) {
            uVar9 = *(uint *)(param_1 + 0x14);
          }
          if (uVar9 == *(uint *)(param_2 + 0x10)) {
            uVar9 = *(uint *)(param_1 + 0x10);
          }
          *puVar10 = uVar9 & 0xffffff | 0x1000000;
          puVar10[-1] = ((uVar9 & 0xfffffff) >> 0x18) << 0x10 | 0x10000000;
        }
        else if (uVar9 >> 0x18 == 9) {
          *puVar10 = (uint)(puVar13 + -1) & 0xffffff | 0x9000000;
          puVar10[-1] = (((uint)(puVar13 + -1) & 0xfffffff) >> 0x18) << 0x10 | 0x10000000;
        }
        if (puVar13 <= puVar10 + 1) break;
        uVar9 = *puVar12;
        puVar10 = puVar10 + 1;
      }
    }
    sceKernelDcacheWritebackAll();
  }
  return param_1;
}

