/* Entry 0x089C33D8 | file offset 0x001C03B0 | FUN_089c33d8 | bytes 412 */

void FUN_089c33d8(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  puVar3 = *(undefined4 **)(param_1 + iVar2 * 4);
  uVar1 = FUN_089a48cc(param_5);
  FUN_089a34c0(puVar3 + 3,param_2);
  puVar3[2] = uVar1;
  *puVar3 = *(undefined4 *)(param_1 + 0x10);
  puVar3[1] = *(undefined4 *)(param_1 + 0x18);
  FUN_089a34c0(puVar3 + 9,param_2 + 0x10);
  puVar3[8] = uVar1;
  puVar3[6] = *(undefined4 *)(param_1 + 0x10);
  puVar3[7] = *(undefined4 *)(param_1 + 0x1c);
  FUN_089a34c0(puVar3 + 0xf,param_3);
  puVar3[0xe] = uVar1;
  puVar3[0xc] = *(undefined4 *)(param_1 + 0x20);
  puVar3[0xd] = *(undefined4 *)(param_1 + 0x18);
  FUN_089a34c0(puVar3 + 0x15,param_3 + 0x10);
  puVar3[0x14] = uVar1;
  puVar3[0x12] = *(undefined4 *)(param_1 + 0x20);
  puVar3[0x13] = *(undefined4 *)(param_1 + 0x1c);
  FUN_089a34c0(puVar3 + 0x1b,param_3 + 0x30);
  puVar3[0x1a] = uVar1;
  puVar3[0x18] = *(undefined4 *)(param_1 + 0x20);
  puVar3[0x19] = *(undefined4 *)(param_1 + 0x18);
  FUN_089a34c0(puVar3 + 0x21,param_3 + 0x20);
  puVar3[0x20] = uVar1;
  puVar3[0x1e] = *(undefined4 *)(param_1 + 0x20);
  puVar3[0x1f] = *(undefined4 *)(param_1 + 0x1c);
  FUN_089a34c0(puVar3 + 0x27,param_4 + 0x30);
  puVar3[0x26] = uVar1;
  puVar3[0x24] = *(undefined4 *)(param_1 + 0x14);
  puVar3[0x25] = *(undefined4 *)(param_1 + 0x18);
  FUN_089a34c0(puVar3 + 0x2d,param_4 + 0x20);
  puVar3[0x2c] = uVar1;
  puVar3[0x2a] = *(undefined4 *)(param_1 + 0x14);
  puVar3[0x2b] = *(undefined4 *)(param_1 + 0x1c);
  FUN_089a0520(4,0x19f,8,0,puVar3);
  *(int *)(param_1 + 8) = 1 - iVar2;
  return;
}

