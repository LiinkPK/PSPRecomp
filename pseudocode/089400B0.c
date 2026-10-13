/* Entry 0x089400B0 | file offset 0x0013D088 | FUN_089400b0 | bytes 680 */

undefined4 FUN_089400b0(uint *param_1,uint param_2,undefined4 *param_3)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint local_80 [32];
  
  uVar6 = param_2 << 3;
  puVar1 = local_80;
  if (((uint)param_1 & 0xf) == 0 && (param_2 & 0x3f) == 0) {
    while (param_2 != 0) {
      iVar2 = 0x10;
      puVar4 = puVar1;
      do {
        uVar5 = *param_1;
        iVar2 = iVar2 + -1;
        param_1 = param_1 + 1;
        *puVar4 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                  uVar5 >> 0x18;
        puVar4 = puVar4 + 1;
      } while (iVar2 != 0);
      param_2 = param_2 - 0x40;
      FUN_0893ff58();
    }
    iVar2 = 0x10;
    puVar4 = puVar1;
    do {
      iVar2 = iVar2 + -4;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4 = puVar4 + 4;
    } while (iVar2 != 0);
    puVar1[0xf] = uVar6;
    *puVar1 = 0x80000000;
    FUN_0893ff58();
  }
  else {
    for (; 0x3f < param_2; param_2 = param_2 - 0x40) {
      iVar2 = 0x10;
      puVar4 = puVar1;
      do {
        uVar5 = *param_1;
        iVar2 = iVar2 + -1;
        param_1 = param_1 + 1;
        *puVar4 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                  uVar5 >> 0x18;
        puVar4 = puVar4 + 1;
      } while (iVar2 != 0);
      FUN_0893ff58();
    }
    iVar2 = 0x10;
    puVar4 = puVar1;
    do {
      iVar2 = iVar2 + -4;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4 = puVar4 + 4;
    } while (iVar2 != 0);
    puVar4 = param_1;
    puVar3 = puVar1;
    uVar5 = param_2;
    if (0x37 < param_2) {
      do {
        uVar5 = uVar5 - 1;
        *(char *)puVar3 = (char)*puVar4;
        puVar3 = (uint *)((int)puVar3 + 1);
        puVar4 = (uint *)((int)puVar4 + 1);
      } while (uVar5 != 0);
      *(undefined1 *)puVar3 = 0x80;
      iVar2 = 0x10;
      puVar4 = puVar1;
      do {
        uVar5 = *puVar4;
        iVar2 = iVar2 + -1;
        *puVar4 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                  uVar5 >> 0x18;
        puVar4 = puVar4 + 1;
      } while (iVar2 != 0);
      FUN_0893ff58();
      param_2 = param_2 - 0x40;
      iVar2 = 0x10;
      puVar4 = puVar1;
      do {
        iVar2 = iVar2 + -4;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4 = puVar4 + 4;
      } while (iVar2 != 0);
    }
    puVar1[0xf] = uVar6;
    puVar4 = puVar1;
    if ((int)param_2 < 1) {
      *puVar1 = (uint)(param_2 == 0) << 0x1f;
    }
    else {
      do {
        uVar6 = *param_1;
        param_2 = param_2 - 1;
        param_1 = (uint *)((int)param_1 + 1);
        *(char *)puVar4 = (char)uVar6;
        puVar4 = (uint *)((int)puVar4 + 1);
      } while (param_2 != 0);
      *(undefined1 *)puVar4 = 0x80;
      iVar2 = 0xe;
      do {
        uVar6 = *puVar1;
        iVar2 = iVar2 + -1;
        *puVar1 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                  uVar6 >> 0x18;
        puVar1 = puVar1 + 1;
      } while (iVar2 != 0);
    }
    FUN_0893ff58();
  }
  *param_3 = 0x1234567;
  param_3[1] = 0x89abcdef;
  param_3[2] = 0xfedcba98;
  param_3[3] = 0x76543210;
  param_3[4] = 0xf0e1d2c3;
  return 0;
}

