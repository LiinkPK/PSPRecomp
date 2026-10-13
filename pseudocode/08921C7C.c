/* Entry 0x08921C7C | file offset 0x0011EC54 | FUN_08921c7c | bytes 248 */

void FUN_08921c7c(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar1 = func_0x08b42b40();
  puVar2 = (undefined4 *)FUN_0885c6cc(uVar1,0x50,0,0,1,0);
  *(undefined4 **)(param_1 + 0xc) = puVar2;
  *puVar2 = 0xffffffff;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 8) = 0xffffffff;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10) = 0;
  FUN_08921dc0(param_1);
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_089a34c0(*(int *)(param_1 + 0xc) + 0x20,&local_20);
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_089a34c0(*(int *)(param_1 + 0xc) + 0x2c,&local_20);
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_089a34c0(*(int *)(param_1 + 0xc) + 0x38,&local_20);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x44) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x48) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x4c) = 1;
  return;
}

