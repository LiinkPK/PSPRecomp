/* Entry 0x08922900 | file offset 0x0011F8D8 | FUN_08922900 | bytes 432 */

void FUN_08922900(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar1 = func_0x08b42b40(0xffffffff);
  iVar2 = FUN_0885c6cc(uVar1,0xe0,0,0,1,0);
  *(int *)(param_1 + 0x20) = iVar2;
  *(undefined2 *)(iVar2 + 0x10) = 0xffff;
  *(undefined2 *)(*(int *)(param_1 + 0x20) + 0x12) = 0xffff;
  *(undefined2 *)(*(int *)(param_1 + 0x20) + 0x14) = 0xffff;
  *(undefined2 *)(*(int *)(param_1 + 0x20) + 0x16) = 0xffff;
  *(undefined2 *)(*(int *)(param_1 + 0x20) + 0x18) = 0xffff;
  *(undefined2 *)(*(int *)(param_1 + 0x20) + 0x3a) = 0xffff;
  *(undefined2 *)(*(int *)(param_1 + 0x20) + 0x3c) = 0xffff;
  *(undefined2 *)(*(int *)(param_1 + 0x20) + 0x3e) = 0xffff;
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x40) = 0xffffffff;
  iVar3 = 0;
  *(int *)(*(int *)(param_1 + 0x20) + 0xd0) = (int)*(short *)(param_1 + 4);
  iVar2 = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xb4) = 0;
  iVar4 = *(int *)(param_1 + 0x20);
  do {
    *(undefined4 *)(iVar4 + iVar2 + 0x74) = 0;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
    iVar4 = *(int *)(param_1 + 0x20);
  } while (iVar3 < 0x10);
  *(undefined4 *)(iVar4 + 0xbc) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xc0) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xc4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 200) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xcc) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x20) + 0xdc) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0x20) + 0x44) = 0xffff;
  *(undefined2 *)(*(int *)(param_1 + 0x20) + 0x46) = 0xffff;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_089a34c0(*(int *)(param_1 + 0x20) + 0x50,&local_20);
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x48) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x4c) = 0;
  local_20 = 0x3f800000;
  local_1c = 0x3f800000;
  local_18 = 0x3f800000;
  FUN_089a34c0(*(int *)(param_1 + 0x20) + 0x5c,&local_20);
  local_20 = 0x3f800000;
  local_1c = 0x3f800000;
  local_18 = 0x3f800000;
  FUN_089a34c0(*(int *)(param_1 + 0x20) + 0x68,&local_20);
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xb8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xd4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xd8) = 0xbf800000;
  return;
}

