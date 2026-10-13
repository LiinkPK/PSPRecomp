/* Entry 0x0899F200 | file offset 0x0019C1D8 | FUN_0899f200 | bytes 508 */

undefined4 FUN_0899f200(uint *param_1,undefined1 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint local_50 [14];
  byte local_18 [8];
  
  puVar4 = local_50;
  puVar8 = local_50;
  puVar5 = local_50;
  puVar3 = local_50;
  puVar6 = local_50;
  uVar2 = 0x80000103;
  if (param_1 != (uint *)0x0 && param_2 != (undefined1 *)0x0) {
    if (*(short *)((int)param_1 + 0x16) == 0) {
      uVar9 = (uint)(ushort)param_1[5];
      iVar10 = 0xf;
      do {
        iVar10 = iVar10 + -1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (-1 < iVar10);
      puVar4 = param_1 + 8;
      uVar7 = 0;
      if (uVar9 != 0) {
        do {
          uVar7 = uVar7 + 1;
          *(char *)puVar8 = (char)*puVar4;
          puVar4 = (uint *)((int)puVar4 + 1);
          puVar8 = (uint *)((int)puVar8 + 1);
        } while (uVar7 < uVar9);
      }
      *(undefined1 *)((int)local_50 + uVar9) = 0x80;
      if (0x37 < uVar9) {
        uVar9 = 0;
        do {
          uVar7 = *puVar5;
          uVar9 = uVar9 + 1;
          *puVar5 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                    uVar7 >> 0x18;
          puVar5 = puVar5 + 1;
        } while (uVar9 < 0x10);
        FUN_0893fee0(local_50,param_1);
        iVar10 = 0xf;
        do {
          iVar10 = iVar10 + -1;
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        } while (-1 < iVar10);
      }
      uVar9 = param_1[6];
      uVar7 = 0x38;
      uVar12 = param_1[7] << 3 | uVar9 >> 0x1d;
      iVar10 = 0;
      do {
        iVar11 = iVar10 + 1;
        if ((int)(uVar7 << 0x1a) < 0) {
          bVar1 = (byte)(uVar12 >> (uVar7 & 0x1f));
        }
        else {
          bVar1 = (byte)((uVar9 << 3) >> (uVar7 & 0x1f));
          if (uVar7 << 0x1a != 0) {
            bVar1 = bVar1 | (byte)(uVar12 << (-uVar7 & 0x1f));
          }
        }
        local_18[iVar10] = bVar1;
        uVar7 = uVar7 - 8;
        iVar10 = iVar11;
      } while (iVar11 < 8);
      uVar9 = 0;
      do {
        uVar7 = *puVar6;
        uVar9 = uVar9 + 1;
        *puVar6 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                  uVar7 >> 0x18;
        puVar6 = puVar6 + 1;
      } while (uVar9 < 0x10);
      FUN_0893fee0(local_50,param_1);
      uVar9 = 0;
      puVar4 = param_1;
      do {
        uVar7 = *puVar4;
        uVar9 = uVar9 + 1;
        *puVar4 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                  uVar7 >> 0x18;
        puVar4 = puVar4 + 1;
      } while (uVar9 < 5);
      *(undefined2 *)((int)param_1 + 0x16) = 1;
      iVar10 = 0;
      do {
        iVar11 = iVar10 + 1;
        *(undefined1 *)((int)param_1 + iVar10 + 0x20) = 0;
        iVar10 = iVar11;
      } while (iVar11 < 0x40);
    }
    uVar9 = 0;
    do {
      uVar9 = uVar9 + 1;
      *param_2 = (char)*param_1;
      param_1 = (uint *)((int)param_1 + 1);
      param_2 = param_2 + 1;
    } while (uVar9 < 0x14);
    uVar2 = 0;
  }
  return uVar2;
}

