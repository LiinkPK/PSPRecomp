/* Entry 0x088DD608 | file offset 0x000DA5E0 | FUN_088dd608 | bytes 2116 */

uint FUN_088dd608(undefined4 param_1,undefined2 *param_2,undefined2 *param_3,short param_4)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined2 *local_50;
  
  iVar3 = (int)param_4;
  uVar10 = iVar3 * 2 + 3U & 0xfffffffc;
  puVar7 = (undefined2 *)0x0;
  local_50 = (undefined2 *)0x0;
  if (param_3 != (undefined2 *)0x0) {
    puVar7 = (undefined2 *)((int)param_3 + uVar10);
    local_50 = param_3;
  }
  iVar9 = 0;
  if (0 < iVar3) {
    do {
      cVar1 = *(char *)(param_2 + 8);
      uVar5 = *(uint *)(param_2 + 0x2e) & 0xffff;
      if (((((((param_2[0x2b] == 0) && (param_2[0x2c] == 0)) && (param_2[0x2d] == 0)) &&
            ((param_2[3] == 0 && (param_2[4] == 0)))) && (param_2[0x17] == 0)) &&
          (((param_2[0x18] == 0 && (param_2[5] == 0)) &&
           ((param_2[6] == 0 &&
            (((param_2[7] == 0 && (param_2[0x19] == 0)) && (param_2[0x1a] == 0)))))))) &&
         (param_2[0x1b] == 0)) {
        uVar5 = uVar5 | 0x10;
      }
      if (((*(float *)(param_2 + 0xc) == 1.0) && (*(float *)(param_2 + 0xe) == 1.0)) &&
         ((*(float *)(param_2 + 0x20) == 1.0 && (*(float *)(param_2 + 0x22) == 1.0)))) {
        uVar5 = uVar5 | 0x20;
      }
      if (((cVar1 == *(char *)(param_2 + 0x1c)) &&
          (*(char *)((int)param_2 + 0x11) == *(char *)((int)param_2 + 0x39))) &&
         ((*(char *)(param_2 + 9) == *(char *)(param_2 + 0x1d) &&
          (*(char *)((int)param_2 + 0x13) == *(char *)((int)param_2 + 0x3b))))) {
        uVar5 = uVar5 | 0x100;
      }
      if ((param_2[1] == param_2[0x15]) && (param_2[2] == param_2[0x16])) {
        uVar5 = uVar5 | 0x200;
      }
      if ((*(float *)(param_2 + 0x12) == 0.3) && (*(float *)(param_2 + 0x26) == 0.7)) {
        uVar5 = uVar5 | 0x400;
      }
      uVar4 = (ushort)uVar5;
      if ((param_2[0x29] == 0) && (param_2[0x2a] == 0)) {
        if ((uVar5 & 0x10) == 0) {
          iVar6 = 1;
          if ((uVar5 & 0x400) != 0) {
            iVar6 = 8;
          }
          iVar8 = *(int *)(&UNK_089cc268 + iVar6 * 4);
        }
        else if ((((param_2[1] == param_2[0x15]) && (param_2[2] == param_2[0x16])) &&
                 (cVar1 == *(char *)(param_2 + 0x1c))) &&
                (((*(char *)((int)param_2 + 0x11) == *(char *)((int)param_2 + 0x39) &&
                  (*(char *)(param_2 + 9) == *(char *)(param_2 + 0x1d))) &&
                 ((*(char *)((int)param_2 + 0x13) == *(char *)((int)param_2 + 0x3b) &&
                  ((*(float *)(param_2 + 0xc) == *(float *)(param_2 + 0x20) &&
                   (*(float *)(param_2 + 0xe) == *(float *)(param_2 + 0x22))))))))) {
          uVar4 = uVar4 | 0x40;
          iVar6 = 4;
          if (cVar1 == -0x80) {
            iVar8 = 0x10;
            if (((*(char *)((int)param_2 + 0x11) == -0x80) &&
                (iVar8 = 0x10, *(char *)(param_2 + 9) == -0x80)) &&
               (iVar8 = 0x10, *(char *)((int)param_2 + 0x13) == -1)) {
              iVar6 = 6;
              goto LAB_088dd944;
            }
          }
          else {
LAB_088dd944:
            iVar8 = iVar6 << 2;
          }
          iVar8 = *(int *)(&UNK_089cc268 + iVar8);
        }
        else {
          if (((uVar5 & 0x20) == 0) || ((uVar5 & 0x400) == 0)) {
            iVar6 = 0;
            if ((uVar5 & 0x400) != 0) {
              iVar6 = 7;
            }
          }
          else {
            iVar6 = 5;
          }
          iVar8 = *(int *)(&UNK_089cc268 + iVar6 * 4);
        }
      }
      else {
        iVar6 = 3;
        if ((uVar5 & 0x10) != 0) {
          iVar6 = 2;
        }
        iVar8 = *(int *)(&UNK_089cc268 + iVar6 * 4);
      }
      if (param_3 != (undefined2 *)0x0) {
        *local_50 = (short)uVar10;
        *puVar7 = *param_2;
        puVar7[1] = param_2[0x14];
        uVar2 = param_2[0x28];
        puVar7[3] = uVar4;
        *(char *)(puVar7 + 2) = (char)uVar2;
        *(char *)((int)puVar7 + 5) = (char)iVar6;
        *(undefined4 *)(puVar7 + 4) = 0xbf800000;
        if (((iVar6 != 4) && (iVar6 != 5)) && ((iVar6 != 6 && ((iVar6 != 7 && (iVar6 != 8)))))) {
          FUN_08935524(puVar7 + 0xc,param_2 + 1,4);
          FUN_08935524(puVar7 + 0xe,param_2 + 8,4);
          FUN_08935524(puVar7 + 0x14,param_2 + 0xc,8);
          FUN_08935524(puVar7 + 0x1c,param_2 + 0x12,4);
          FUN_08935524(puVar7 + 0x10,param_2 + 0x15,4);
          FUN_08935524(puVar7 + 0x12,param_2 + 0x1c,4);
          FUN_08935524(puVar7 + 0x18,param_2 + 0x20,8);
          FUN_08935524(puVar7 + 0x1e,param_2 + 0x26,4);
        }
        if (iVar6 == 1) {
          FUN_08935524(puVar7 + 0x20,param_2 + 0x2b,6);
          FUN_08935524(puVar7 + 0x23,param_2 + 5,6);
          FUN_08935524(puVar7 + 0x26,param_2 + 0x19,6);
          FUN_08935524(puVar7 + 0x29,param_2 + 3,4);
          FUN_08935524(puVar7 + 0x2b,param_2 + 0x17,4);
        }
        else if ((iVar6 == 2) || (iVar6 == 3)) {
          FUN_08935524(puVar7 + 0x20,param_2 + 0x29,4);
          FUN_08935524(puVar7 + 0x22,param_2 + 0x30,4);
          FUN_08935524(puVar7 + 0x24,param_2 + 10,4);
          FUN_08935524(puVar7 + 0x26,param_2 + 0x1e,4);
          if (iVar6 == 3) {
            *(undefined1 *)((int)puVar7 + 5) = 3;
            FUN_08935524(puVar7 + 0x28,param_2 + 0x2b,6);
            FUN_08935524(puVar7 + 0x2b,param_2 + 5,6);
            FUN_08935524(puVar7 + 0x2e,param_2 + 0x19,6);
            FUN_08935524(puVar7 + 0x31,param_2 + 3,4);
            FUN_08935524(puVar7 + 0x33,param_2 + 0x17,4);
          }
        }
        else if (iVar6 == 4) {
          puVar7[6] = param_2[1];
          puVar7[7] = param_2[2];
          *(undefined4 *)(puVar7 + 8) = *(undefined4 *)(param_2 + 0xc);
          *(undefined4 *)(puVar7 + 10) = *(undefined4 *)(param_2 + 0xe);
          FUN_08935524(puVar7 + 0xc,param_2 + 8,4);
        }
        else if (iVar6 == 6) {
          puVar7[6] = param_2[1];
          puVar7[7] = param_2[2];
          *(undefined4 *)(puVar7 + 8) = *(undefined4 *)(param_2 + 0xc);
          *(undefined4 *)(puVar7 + 10) = *(undefined4 *)(param_2 + 0xe);
        }
        else if (iVar6 == 5) {
          FUN_08935524(puVar7 + 0xc,param_2 + 1,4);
          FUN_08935524(puVar7 + 0xe,param_2 + 8,4);
          FUN_08935524(puVar7 + 0x10,param_2 + 0x15,4);
          FUN_08935524(puVar7 + 0x12,param_2 + 0x1c,4);
        }
        else if (iVar6 == 7) {
          FUN_08935524(puVar7 + 0xc,param_2 + 1,4);
          FUN_08935524(puVar7 + 0xe,param_2 + 8,4);
          FUN_08935524(puVar7 + 0x14,param_2 + 0xc,8);
          FUN_08935524(puVar7 + 0x10,param_2 + 0x15,4);
          FUN_08935524(puVar7 + 0x12,param_2 + 0x1c,4);
          FUN_08935524(puVar7 + 0x18,param_2 + 0x20,8);
        }
        else if (iVar6 == 8) {
          FUN_08935524(puVar7 + 0xc,param_2 + 1,4);
          FUN_08935524(puVar7 + 0xe,param_2 + 8,4);
          FUN_08935524(puVar7 + 0x14,param_2 + 0xc,8);
          FUN_08935524(puVar7 + 0x10,param_2 + 0x15,4);
          FUN_08935524(puVar7 + 0x12,param_2 + 0x1c,4);
          FUN_08935524(puVar7 + 0x18,param_2 + 0x20,8);
          FUN_08935524(puVar7 + 0x1c,param_2 + 0x2b,6);
          FUN_08935524(puVar7 + 0x1f,param_2 + 5,6);
          FUN_08935524(puVar7 + 0x22,param_2 + 0x19,6);
          FUN_08935524(puVar7 + 0x25,param_2 + 3,4);
          FUN_08935524(puVar7 + 0x27,param_2 + 0x17,4);
        }
      }
      iVar6 = (int)(iVar8 + 3 + ((uint)(iVar8 + 3 >> 2) >> 0x1e)) >> 2;
      puVar7 = puVar7 + iVar6 * 2;
      uVar10 = uVar10 + iVar6 * 4;
      local_50 = local_50 + 1;
      iVar9 = iVar9 + 1;
      param_2 = param_2 + 0x32;
    } while (iVar9 < iVar3);
  }
  return uVar10;
}

