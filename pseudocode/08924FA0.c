/* Entry 0x08924FA0 | file offset 0x00121F78 | FUN_08924fa0 | bytes 164 */

void FUN_08924fa0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = func_0x08b42b40();
  iVar2 = FUN_0885c6cc(uVar1,0x2c,0,0,1,0);
  *(int *)(param_1 + 4) = iVar2;
  *(undefined1 *)(iVar2 + 0xc) = 0xff;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x3f800000;
  FUN_089a34c0(*(undefined4 *)(param_1 + 4),&local_20);
  *(undefined1 *)(*(int *)(param_1 + 4) + 0xd) = 0;
  *(undefined2 *)(*(int *)(param_1 + 4) + 0xe) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10) = 0;
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x28) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x24) = 0;
  return;
}

