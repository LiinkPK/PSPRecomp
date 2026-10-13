/* Entry 0x089B4A70 | file offset 0x001B1A48 | FUN_089b4a70 | bytes 860 */

void FUN_089b4a70(int param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  ushort *puVar8;
  uint *puVar9;
  ushort *puVar10;
  
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar2 = *(int *)(param_2 + 2);
  sVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x28) = 0;
  puVar10 = (ushort *)(iVar2 + (int)param_2);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  puVar8 = puVar10;
  if (-1 < sVar1) {
    puVar8 = (ushort *)((int)param_2 + *(int *)(param_2 + 4));
  }
  if (puVar8 < puVar10) {
LAB_089b4ae8:
    do {
      uVar4 = *puVar8;
LAB_089b4aec:
      while( true ) {
        puVar9 = (uint *)(puVar8 + 4);
        if (-1 < (short)uVar4) {
          puVar9 = (uint *)((uint)puVar8[1] + (int)puVar8);
        }
        uVar4 = uVar4 & 0x7fff;
        if (uVar4 == 0x83) {
          FUN_089ba1ec(param_1 + 0x1c,puVar9);
          uVar5 = puVar9[4];
          *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffffff;
          puVar8 = (ushort *)(*(int *)(puVar8 + 2) + (int)puVar8);
          *(uint *)(param_1 + 0x28) = uVar5;
          if (puVar8 < puVar10) goto LAB_089b4ae8;
          uVar5 = *(uint *)(param_1 + 0x10);
          goto LAB_089b4b50;
        }
        if (0x83 < uVar4) break;
        if (uVar4 == 0x81) {
          uVar5 = 1 << (*puVar9 & 0x1f);
          uVar6 = *(uint *)(param_1 + 0x30) & ~uVar5;
          *(uint *)(param_1 + 0x30) = uVar6;
          *(uint *)(param_1 + 0x34) = uVar5 | *(uint *)(param_1 + 0x34);
          if (puVar9[1] == 0) {
            uVar5 = 0;
          }
          *(uint *)(param_1 + 0x30) = uVar5 | uVar6;
          puVar8 = (ushort *)(*(int *)(puVar8 + 2) + (int)puVar8);
          if (puVar10 <= puVar8) {
            uVar5 = *(uint *)(param_1 + 0x10);
            goto LAB_089b4b50;
          }
          uVar4 = *puVar8;
        }
        else if (uVar4 < 0x82) {
          if (uVar4 == 9) {
            psVar3 = (short *)FUN_089b49f4(puVar8,0x92,0);
            if (psVar3 == (short *)0x0) {
              uVar5 = 0;
            }
            else {
              piVar7 = (int *)(psVar3 + 4);
              if (-1 < *psVar3) {
                piVar7 = (int *)((uint)(ushort)psVar3[1] + (int)psVar3);
              }
              uVar5 = 0;
              if (piVar7 != (int *)0x0) {
                uVar5 = *piVar7 - 0x82;
              }
            }
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1 << (uVar5 & 0x1f);
            puVar8 = (ushort *)(*(int *)(puVar8 + 2) + (int)puVar8);
            if (puVar10 <= puVar8) {
              uVar5 = *(uint *)(param_1 + 0x10);
              goto LAB_089b4b50;
            }
            uVar4 = *puVar8;
          }
          else {
            iVar2 = *(int *)(puVar8 + 2);
LAB_089b4b3c:
            puVar8 = (ushort *)(iVar2 + (int)puVar8);
            if (puVar10 <= puVar8) {
              uVar5 = *(uint *)(param_1 + 0x10);
              goto LAB_089b4b50;
            }
            uVar4 = *puVar8;
          }
        }
        else {
          FUN_089ba1ec(param_1 + 0x18,puVar9);
          puVar8 = (ushort *)(*(int *)(puVar8 + 2) + (int)puVar8);
          if (puVar10 <= puVar8) {
            uVar5 = *(uint *)(param_1 + 0x10);
            goto LAB_089b4b50;
          }
          uVar4 = *puVar8;
        }
      }
      if (uVar4 == 0x85) {
        FUN_089ba1ec(param_1 + 0x24,puVar9);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x80000000;
        puVar8 = (ushort *)(*(int *)(puVar8 + 2) + (int)puVar8);
        if (puVar10 <= puVar8) {
          uVar5 = *(uint *)(param_1 + 0x10);
          goto LAB_089b4b50;
        }
        uVar4 = *puVar8;
        goto LAB_089b4aec;
      }
      if (uVar4 < 0x85) {
        FUN_089ba1ec(param_1 + 0x20,puVar9);
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffff;
        puVar8 = (ushort *)(*(int *)(puVar8 + 2) + (int)puVar8);
        if (puVar10 <= puVar8) {
          uVar5 = *(uint *)(param_1 + 0x10);
          goto LAB_089b4b50;
        }
        uVar4 = *puVar8;
        goto LAB_089b4aec;
      }
      iVar2 = *(int *)(puVar8 + 2);
      if (uVar4 != 0x86) goto LAB_089b4b3c;
      puVar8 = (ushort *)(iVar2 + (int)puVar8);
      *(uint *)(param_1 + 0x2c) = *puVar9;
    } while (puVar8 < puVar10);
    uVar5 = *(uint *)(param_1 + 0x10);
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x10);
  }
LAB_089b4b50:
  if (-1 < (int)uVar5) {
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x18);
  }
  uVar6 = uVar5;
  if ((uVar5 & 1) == 0) {
    uVar6 = uVar5 | 0x10000;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(uint *)(param_1 + 0x10) = uVar6;
  }
  if (((uVar5 & 4) == 0) && (*(int *)(param_1 + 0x20) != 0)) {
    uVar6 = uVar6 | 0x40000;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(uint *)(param_1 + 0x10) = uVar6;
  }
  if (((uVar6 & 0x10) == 0) && (0.0 < *(float *)(param_1 + 0x2c))) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(uint *)(param_1 + 0x10) = uVar6 | 0x100000;
  }
  return;
}

