/* Entry 0x08985C74 | file offset 0x00182C4C | FUN_08985c74 | bytes 552 */

void FUN_08985c74(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (param_1 != -0x50) {
      *(undefined1 *)(param_1 + 0xc0) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(undefined4 *)(param_1 + 0x70) = 0;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x84) = 0;
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 0xac) = 0;
      *(undefined4 *)(param_1 + 0xa8) = 0;
      *(undefined4 *)(param_1 + 0xa4) = 0;
      *(undefined4 *)(param_1 + 0xa0) = 0;
      *(undefined4 *)(param_1 + 0x9c) = 0;
      *(undefined1 *)(param_1 + 0xb3) = 0;
      *(undefined1 *)(param_1 + 0xb2) = 0;
      *(undefined1 *)(param_1 + 0xb1) = 0;
      *(undefined1 *)(param_1 + 0xb0) = 0;
      *(undefined4 *)(param_1 + 0xbc) = 0;
      *(undefined4 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xb4) = 0;
      *(undefined4 *)(param_1 + 0xc4) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xcc) = 0;
      *(undefined4 *)(param_1 + 200) = 0;
      *(undefined4 *)(param_1 + 0xd4) = 0;
      *(undefined4 *)(param_1 + 0xd0) = 0;
      *(undefined4 *)(param_1 + 0xdc) = 0;
      *(undefined4 *)(param_1 + 0xd8) = 0;
      *(undefined4 *)(param_1 + 0xe4) = 0;
      *(undefined4 *)(param_1 + 0xe0) = 0x42c80000;
      *(undefined2 *)(param_1 + 0xee) = 0;
      *(undefined2 *)(param_1 + 0xec) = 0;
      *(undefined2 *)(param_1 + 0xea) = 0;
      *(undefined2 *)(param_1 + 0xe8) = 0;
      *(undefined1 *)(param_1 + 0xf3) = 0;
      *(undefined1 *)(param_1 + 0xf2) = 0;
      *(undefined1 *)(param_1 + 0xf1) = 0;
      *(undefined1 *)(param_1 + 0xf0) = 0;
    }
    iVar2 = DAT_09b6f478;
    if ((param_1 != -0x38) && (*(int *)(param_1 + 0x38) != 0)) {
      iVar1 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),*(int *)(param_1 + 0x38));
      iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    iVar2 = DAT_09b6f478;
    if ((param_1 != -0x30) && (*(int *)(param_1 + 0x30) != 0)) {
      iVar1 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),*(int *)(param_1 + 0x30));
      iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    iVar2 = DAT_09b6f478;
    if ((param_1 != -0x28) && (*(int *)(param_1 + 0x28) != 0)) {
      iVar1 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),*(int *)(param_1 + 0x28));
      iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    if (param_1 != -0x1c) {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    if ((param_2 & 1) != 0) {
      FUN_08986eac(param_1);
    }
  }
  return;
}

