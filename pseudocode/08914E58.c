/* Entry 0x08914E58 | file offset 0x00111E30 | FUN_08914e58 | bytes 224 */

void FUN_08914e58(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  *(undefined1 *)(param_1 + 0x7d7) = 0;
  *(uint *)(*(int *)(param_1 + 0x6d0) + 0x380) = *(uint *)(*(int *)(param_1 + 0x6d0) + 0x380) | 2;
  FUN_089168a4(param_1,0x3c);
  FUN_08873d34(0x41800000,2,0,0,0,2);
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_08873db0(&local_20,2);
  iVar1 = FUN_0891705c(0xffffffff);
  *(undefined4 *)(iVar1 + 0x264) = *(undefined4 *)(iVar1 + 0x264);
  *(uint *)(iVar1 + 0x260) = *(uint *)(iVar1 + 0x260) & 0xfffffffd;
  uVar2 = FUN_0891705c(0xffffffff);
  FUN_08912a6c(uVar2);
  FUN_0890f4ac(param_1 + 0x90);
  FUN_08916f78(0,FUN_08917b0c);
  *(undefined4 *)(param_1 + 0x48) = 0;
  FUN_08914b64(param_1,7);
  return;
}

