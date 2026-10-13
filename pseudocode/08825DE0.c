/* Entry 0x08825DE0 | file offset 0x00022DB8 | FUN_08825de0 | bytes 968 */

void FUN_08825de0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 auStack_9c [44];
  uint local_70;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  
  local_4c = FUN_08899300();
  uVar1 = *(uint *)(param_1 + 0x20);
  local_44 = 0;
  if (0 < (int)(((uVar1 & 0x1fe0) >> 5 ^ 0x80) - 0x80)) {
    local_50 = 0x1000;
    local_54 = 0x1000;
    local_48 = 0;
    do {
      iVar6 = *(int *)(param_1 + 0x28) + local_48;
      if ((*(byte *)(iVar6 + 299) & 2) == 0) {
        fVar9 = 3.4028235e+38;
        uVar1 = (int)*(char *)(iVar6 + 0x12a) & 0x3f;
        iVar5 = 0;
        uVar7 = (int)*(char *)(iVar6 + 0x129) & 0x7f;
        fVar8 = fVar9;
        if (uVar1 != 0) {
          do {
            iVar2 = uVar7 + iVar5;
            puVar4 = (undefined4 *)(*(int *)(param_1 + 0x2c) + iVar2 * 0x80);
            if (*(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x568) + 0x14) == 1) {
              *(undefined2 *)(puVar4 + 0x1f) = 0xffff;
              *(byte *)((int)puVar4 + 0x7f) = *(byte *)((int)puVar4 + 0x7f) | 1;
              puVar4[0x1e] = 0xfeffffff;
              *(byte *)((int)puVar4 + 0x7f) = *(byte *)((int)puVar4 + 0x7f) | 0x10;
LAB_0882602c:
              iVar2 = puVar4[0x1c];
LAB_08826030:
              fVar10 = ((float)puVar4[1] - *(float *)(iVar2 + 0x18)) - (float)puVar4[0x1e];
              puVar4[0x1d] = fVar10;
              if (fVar10 < fVar8) {
                fVar9 = (float)puVar4[0x1e];
                fVar8 = fVar10;
              }
            }
            else {
              if (param_2 != -1) {
                if (param_2 == iVar2) {
                  local_a8 = *puVar4;
                  goto LAB_08825f74;
                }
                if ((*(byte *)(iVar6 + 299) & 0x10) != 0) {
                  local_a8 = *puVar4;
                  goto LAB_08825f74;
                }
                iVar2 = puVar4[0x1c];
                goto LAB_08826030;
              }
              local_a8 = *puVar4;
LAB_08825f74:
              local_a4 = puVar4[1];
              local_a0 = puVar4[2];
              fVar10 = (float)FUN_088976e4(local_4c,auStack_9c,&local_a8,2,1,local_50,local_54);
              *(byte *)((int)puVar4 + 0x7f) = *(byte *)((int)puVar4 + 0x7f) | 8;
              if (fVar10 != -3.4028235e+38) {
                puVar4[0x1e] = fVar10;
                *(ushort *)(puVar4 + 0x1f) = (ushort)(byte)local_70;
                *(byte *)((int)puVar4 + 0x7f) = *(byte *)((int)puVar4 + 0x7f) | 1;
                *(byte *)((int)puVar4 + 0x7f) =
                     *(byte *)((int)puVar4 + 0x7f) & 0xef | ((local_70 & 0x1f0000) == 0) << 4;
                goto LAB_0882602c;
              }
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)uVar1);
        }
        fVar10 = 3.4028235e+38;
        if (fVar8 == 3.4028235e+38) {
          if (*(float *)(*(int *)(param_1 + 0x28) + local_48 + 0x124) != 3.4028235e+38) {
            iVar5 = 0;
            if (uVar1 != 0) {
              iVar2 = uVar7 << 7;
              fVar8 = fVar10;
              do {
                iVar3 = *(int *)(param_1 + 0x2c) + iVar2;
                fVar10 = (*(float *)(iVar3 + 4) - *(float *)(*(int *)(iVar3 + 0x70) + 0x18)) -
                         *(float *)(iVar6 + 0x124);
                *(float *)(iVar3 + 0x74) = fVar10;
                if (fVar8 <= fVar10) {
                  fVar10 = fVar8;
                }
                iVar5 = iVar5 + 1;
                iVar2 = iVar2 + 0x80;
                fVar8 = fVar10;
              } while (iVar5 < (int)uVar1);
            }
            if (fVar10 != 3.4028235e+38) {
              *(float *)(iVar6 + 0x120) = fVar10;
            }
          }
        }
        else {
          *(float *)(iVar6 + 0x120) = fVar8;
          *(float *)(iVar6 + 0x124) = fVar9;
        }
        uVar1 = *(uint *)(param_1 + 0x20);
      }
      local_44 = local_44 + 1;
      local_48 = local_48 + 0x130;
    } while (local_44 < (int)(((uVar1 & 0x1fe0) >> 5 ^ 0x80) - 0x80));
  }
  return;
}

