/* Entry 0x08859194 | file offset 0x0005616C | FUN_08859194 | bytes 544 */

void FUN_08859194(int param_1)

{
  short sVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  
  if ((*(char *)(param_1 + 0x2a8) != '\0') && (*(int *)(param_1 + 0x2a4) != 0)) {
    iVar9 = *(int *)(param_1 + 0x2a0);
    FUN_089a03dc(1);
    FUN_089a0384(4);
    FUN_089a0384(9);
    FUN_089a12a4(0,2,3,0,0);
    iVar8 = 0;
    if (0 < *(int *)(param_1 + 0x2a4)) {
      do {
        iVar4 = iVar9 * 0x40;
        iVar9 = iVar9 + 1;
        iVar4 = param_1 + iVar4;
        if (9 < iVar9) {
          iVar9 = 0;
        }
        if (*(char *)(iVar4 + 0x28) != '\0') {
          puVar2 = (undefined2 *)FUN_0885cd44(0x20);
          FUN_0899d2f8(*(undefined4 *)(param_1 + *(int *)(iVar4 + 0x20) * 4));
          iVar3 = FUN_0899c1c0(*(undefined4 *)(param_1 + *(int *)(iVar4 + 0x20) * 4));
          fVar10 = *(float *)(iVar4 + 0x34);
          fVar11 = *(float *)(iVar4 + 0x44);
          uVar5 = *(undefined4 *)(iVar4 + 0x50);
          sVar6 = (short)(int)((*(float *)(iVar4 + 0x30) + *(float *)(iVar4 + 0x40)) -
                              (float)(*(ushort *)(iVar3 + 8) / 2));
          puVar2[4] = sVar6;
          sVar7 = (short)(int)((fVar10 + fVar11) - 15.0);
          puVar2[5] = sVar7;
          puVar2[6] = 0;
          *puVar2 = 1;
          puVar2[1] = 1;
          *(undefined4 *)(puVar2 + 2) = uVar5;
          sVar1 = *(short *)(iVar3 + 8);
          uVar5 = *(undefined4 *)(iVar4 + 0x50);
          puVar2[0xc] = sVar6 + sVar1 + -2;
          puVar2[0xd] = sVar7 + 0x1e;
          puVar2[0xe] = 0;
          puVar2[8] = sVar1 + -2;
          puVar2[9] = 0x1f;
          *(undefined4 *)(puVar2 + 10) = uVar5;
          FUN_089a0520(6,0x80011e,2,0,puVar2);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(param_1 + 0x2a4));
    }
  }
  return;
}

