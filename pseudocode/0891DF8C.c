/* Entry 0x0891DF8C | file offset 0x0011AF64 | FUN_0891df8c | bytes 244 */

void FUN_0891df8c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 local_60 [32];
  undefined2 local_20;
  int local_1c;
  
  FUN_08883f78();
  FUN_08865088(param_1 + 0x100,0,0,FUN_0891e2e0,"Update");
  uVar1 = FUN_0888204c(0x270800);
  *(undefined4 *)(param_1 + 0x138) = uVar1;
  uVar1 = FUN_0885c40c(uVar1,0x270800,"PARTY BATTLE TITLE",4);
  *(undefined4 *)(param_1 + 0x134) = uVar1;
  local_60[0] = 0;
  local_20 = 0xffff;
  FUN_08935e30(local_60,param_1 + 0x148);
  local_20 = *(undefined2 *)(param_1 + 0x188);
  local_1c = 0;
  iVar2 = FUN_0885c6cc(*(undefined4 *)(param_1 + 0x134),0x20,0,0,1,0);
  iVar3 = local_1c;
  if (iVar2 != 0) {
    FUN_0891e300(iVar2);
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x13c) = iVar3;
  FUN_0891e34c(iVar3,*(undefined4 *)(param_1 + 0x134),local_60);
  FUN_0891e6a4(*(undefined4 *)(param_1 + 0x13c));
  return;
}

