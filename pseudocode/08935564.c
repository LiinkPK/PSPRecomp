/* Entry 0x08935564 | file offset 0x0013253C | FUN_08935564 | bytes 700 */

undefined4 * FUN_08935564(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int iVar12;
  
  if ((param_2 < param_1) && (puVar6 = (undefined4 *)((int)param_2 + param_3), param_1 < puVar6)) {
    param_1 = (undefined4 *)((int)param_1 + param_3);
    puVar10 = param_1;
    if (7 < param_3) {
      if ((((uint)puVar6 ^ (uint)param_1) & 3) == 0) {
        uVar7 = (uint)puVar6 & 3;
        if (uVar7 != 0) {
          puVar2 = (undefined1 *)((int)puVar6 - 1);
          uVar9 = (uint)puVar2 & 3;
          param_3 = param_3 - uVar7;
          puVar6 = (undefined4 *)((int)puVar6 - uVar7);
          uVar3 = (int)param_1 - 1U & 3;
          puVar4 = (uint *)((undefined1 *)((int)param_1 - 1U) + -uVar3);
          *puVar4 = *puVar4 & -1 << (uVar3 + 1) * 8 |
                    (uint)(*(int *)(puVar2 + -uVar9) << (3 - uVar9) * 8) >> (3 - uVar3) * 8;
          puVar10 = (undefined4 *)((int)param_1 - uVar7);
        }
        if (param_3 >> 4 != 0) {
          uVar7 = 0;
          do {
            puVar1 = puVar6 + -1;
            uVar5 = puVar6[-4];
            uVar8 = puVar6[-3];
            uVar11 = puVar6[-2];
            puVar6 = puVar6 + -4;
            puVar10[-1] = *puVar1;
            uVar7 = uVar7 + 1;
            puVar10[-4] = uVar5;
            puVar10[-3] = uVar8;
            puVar10[-2] = uVar11;
            puVar10 = puVar10 + -4;
          } while (param_3 >> 4 != uVar7);
        }
        uVar7 = (param_3 & 0xf) >> 2;
        param_3 = param_3 & 3;
        if (uVar7 != 0) {
          uVar9 = 0;
          do {
            puVar6 = puVar6 + -1;
            puVar10 = puVar10 + -1;
            uVar9 = uVar9 + 1;
            *puVar10 = *puVar6;
          } while (uVar7 != uVar9);
        }
      }
      else {
        uVar7 = param_3 + 3;
        if (-1 < (int)param_3) {
          uVar7 = param_3;
        }
        param_3 = (int)param_3 % 4;
        if ((int)uVar7 >> 2 != 0) {
          iVar12 = 1;
          while( true ) {
            puVar6 = puVar6 + -1;
            puVar10 = puVar10 + -1;
            *puVar10 = *puVar6;
            if ((int)uVar7 >> 2 == iVar12) break;
            iVar12 = iVar12 + 1;
          }
        }
      }
    }
    uVar7 = 0;
    if (0 < (int)param_3) {
      do {
        puVar6 = (undefined4 *)((int)puVar6 + -1);
        puVar10 = (undefined4 *)((int)puVar10 + -1);
        uVar7 = uVar7 + 1;
        *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
      } while (param_3 != uVar7);
      return param_1;
    }
  }
  else {
    puVar6 = param_1;
    if (7 < param_3) {
      if ((((uint)param_2 ^ (uint)param_1) & 3) == 0) {
        uVar7 = (uint)param_2 & 3;
        if (uVar7 != 0) {
          iVar12 = 4 - uVar7;
          param_3 = param_3 - iVar12;
          puVar6 = (undefined4 *)((int)param_1 + iVar12);
          uVar9 = (uint)param_2 & 3;
          uVar3 = (uint)param_1 & 3;
          *(uint *)((int)param_1 - uVar3) =
               *(uint *)((int)param_1 - uVar3) & 0xffffffffU >> (4 - uVar3) * 8 |
               (uVar7 & -1 << (4 - uVar9) * 8 | *(uint *)((int)param_2 - uVar9) >> uVar9 * 8) <<
               uVar3 * 8;
          param_2 = (undefined4 *)((int)param_2 + iVar12);
        }
        if (param_3 >> 4 != 0) {
          uVar7 = 0;
          do {
            uVar8 = param_2[2];
            uVar11 = param_2[3];
            uVar5 = *param_2;
            uVar7 = uVar7 + 1;
            puVar6[1] = param_2[1];
            param_2 = param_2 + 4;
            *puVar6 = uVar5;
            puVar6[2] = uVar8;
            puVar6[3] = uVar11;
            puVar6 = puVar6 + 4;
          } while (param_3 >> 4 != uVar7);
        }
        uVar7 = (param_3 & 0xf) >> 2;
        param_3 = param_3 & 3;
        if (uVar7 != 0) {
          uVar9 = 0;
          do {
            uVar5 = *param_2;
            uVar9 = uVar9 + 1;
            param_2 = param_2 + 1;
            *puVar6 = uVar5;
            puVar6 = puVar6 + 1;
          } while (uVar9 != uVar7);
        }
      }
      else {
        uVar7 = param_3 + 3;
        if (-1 < (int)param_3) {
          uVar7 = param_3;
        }
        param_3 = (int)param_3 % 4;
        if ((int)uVar7 >> 2 != 0) {
          iVar12 = 0;
          do {
            iVar12 = iVar12 + 1;
            uVar5 = *param_2;
            param_2 = param_2 + 1;
            *puVar6 = uVar5;
            puVar6 = puVar6 + 1;
          } while ((int)uVar7 >> 2 != iVar12);
        }
      }
    }
    if (0 < (int)param_3) {
      puVar10 = (undefined4 *)((int)puVar6 + param_3);
      do {
        *(undefined1 *)puVar6 = *(undefined1 *)param_2;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        param_2 = (undefined4 *)((int)param_2 + 1);
      } while (puVar10 != puVar6);
    }
  }
  return param_1;
}

