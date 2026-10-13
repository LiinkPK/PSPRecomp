/* Entry 0x089BD344 | file offset 0x001BA31C | FUN_089bd344 | bytes 580 */

void FUN_089bd344(float param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined2 uVar6;
  
  iVar2 = (int)*(char *)(param_2 + 0x19);
  iVar5 = *(int *)(param_2 + 0xc);
  if (iVar2 < 0) {
    uVar3 = (uint)*(byte *)(param_2 + 0x18);
    uVar6 = (undefined2)(int)FLOOR(param_1);
  }
  else {
    uVar3 = (uint)*(byte *)(param_2 + 0x18);
    uVar6 = (undefined2)(int)FLOOR(param_1);
    if (iVar2 <= (int)uVar3) {
      iVar2 = *(int *)(param_2 + 0x14) + iVar2 * 0x30;
      goto code_r0x089bd3cc;
    }
  }
  iVar2 = *(int *)(param_2 + 0x14) + uVar3 * 0x30;
code_r0x089bd3cc:
  uVar4 = (undefined1)uVar6;
  switch(param_3) {
  case 1:
    FUN_089bcf88(param_2);
    return;
  case 3:
    if (iVar2 != 0) {
      *(undefined2 *)(iVar2 + 0x28) = uVar6;
      *(undefined2 *)(iVar2 + 0x2a) = uVar6;
      return;
    }
    break;
  case 0xb:
    if (iVar2 != 0) {
      *(undefined2 *)(iVar2 + 0x2c) = uVar6;
      *(undefined2 *)(iVar2 + 0x2e) = uVar6;
      return;
    }
    break;
  case 0x10:
    if (iVar5 != 0) {
      uVar1 = *(ushort *)(iVar5 + 0x12);
      *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 0x20;
      *(float *)(param_2 + 0x20) = param_1 / (float)(1 << (-LZCOUNT(uVar1 - 1) & 0x1fU));
      return;
    }
    break;
  case 0x11:
    if (iVar5 != 0) {
      uVar1 = *(ushort *)(iVar5 + 0x14);
      *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 0x20;
      *(float *)(param_2 + 0x24) = param_1 / (float)(1 << (-LZCOUNT(uVar1 - 1) & 0x1fU));
      return;
    }
    break;
  case 0x12:
    if (iVar5 != 0) {
      uVar1 = *(ushort *)(iVar5 + 0x12);
      *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 0x20;
      *(float *)(param_2 + 0x28) = param_1 / (float)(1 << (-LZCOUNT(uVar1 - 1) & 0x1fU));
      return;
    }
    break;
  case 0x13:
    if (iVar5 != 0) {
      uVar1 = *(ushort *)(iVar5 + 0x14);
      *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 0x20;
      *(float *)(param_2 + 0x2c) = param_1 / (float)(1 << (-LZCOUNT(uVar1 - 1) & 0x1fU));
      return;
    }
    break;
  case 0x20:
    *(undefined1 *)(param_2 + 0x30) = uVar4;
    return;
  case 0x22:
    *(undefined1 *)(param_2 + 0x32) = uVar4;
    return;
  case 0x23:
    *(undefined1 *)(param_2 + 0x33) = uVar4;
    return;
  case 0x24:
    *(undefined1 *)(param_2 + 0x34) = uVar4;
    return;
  case 0x25:
    *(undefined1 *)(param_2 + 0x35) = uVar4;
    return;
  case 0x26:
    *(undefined1 *)(param_2 + 0x36) = uVar4;
    return;
  case 0x27:
    *(undefined1 *)(param_2 + 0x37) = uVar4;
    return;
  }
  return;
}

