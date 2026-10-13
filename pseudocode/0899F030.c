/* Entry 0x0899F030 | file offset 0x0019C008 | FUN_0899f030 | bytes 464 */

undefined4 FUN_0899f030(int param_1,undefined1 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_60 [16];
  
  uVar1 = 0x80000103;
  if ((param_1 != 0 && param_2 != (undefined1 *)0x0) &&
     (uVar1 = 0x80000021, *(short *)(param_1 + 0x16) == 0)) {
    uVar7 = (uint)*(ushort *)(param_1 + 0x14);
    uVar4 = *(int *)(param_1 + 0x18) + param_3;
    uVar8 = uVar7 + param_3;
    *(uint *)(param_1 + 0x18) = uVar4;
    *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (uint)(uVar4 < param_3);
    if (0x3f < uVar8) {
      while( true ) {
        uVar4 = 0;
        puVar2 = param_2;
        puVar5 = local_60;
        if (uVar7 == 0) {
          do {
            uVar4 = uVar4 + 1;
            *(undefined1 *)puVar5 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar5 = (uint *)((int)puVar5 + 1);
          } while (uVar4 < 0x40);
          param_2 = param_2 + 0x40;
        }
        else {
          uVar6 = 0x40 - uVar7;
          puVar2 = (undefined1 *)(param_1 + 0x20);
          puVar5 = local_60;
          if (uVar7 != 0) {
            do {
              uVar4 = uVar4 + 1;
              *(undefined1 *)puVar5 = *puVar2;
              puVar2 = puVar2 + 1;
              puVar5 = (uint *)((int)puVar5 + 1);
            } while (uVar4 < uVar7);
          }
          puVar3 = (undefined1 *)((int)local_60 + uVar7);
          uVar4 = 0;
          puVar2 = param_2;
          if (uVar6 != 0) {
            do {
              uVar4 = uVar4 + 1;
              *puVar3 = *puVar2;
              puVar2 = puVar2 + 1;
              puVar3 = puVar3 + 1;
            } while (uVar4 < uVar6);
          }
          param_2 = param_2 + uVar6;
          *(undefined2 *)(param_1 + 0x14) = 0;
        }
        uVar4 = 0;
        puVar5 = local_60;
        do {
          uVar7 = *puVar5;
          uVar4 = uVar4 + 1;
          *puVar5 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                    uVar7 >> 0x18;
          puVar5 = puVar5 + 1;
        } while (uVar4 < 0x10);
        uVar8 = uVar8 - 0x40;
        FUN_0893fee0(local_60,param_1);
        if (uVar8 < 0x40) break;
        uVar7 = (uint)*(ushort *)(param_1 + 0x14);
      }
    }
    if (uVar8 == 0) {
      *(undefined2 *)(param_1 + 0x14) = 0;
    }
    else {
      uVar7 = (uint)*(ushort *)(param_1 + 0x14);
      uVar4 = 0;
      puVar2 = (undefined1 *)(param_1 + uVar7 + 0x20);
      if (uVar8 != uVar7) {
        do {
          uVar4 = uVar4 + 1;
          *puVar2 = *param_2;
          param_2 = param_2 + 1;
          puVar2 = puVar2 + 1;
        } while (uVar4 < uVar8 - uVar7);
      }
      *(short *)(param_1 + 0x14) = (short)uVar8;
    }
    uVar1 = 0;
  }
  return uVar1;
}

