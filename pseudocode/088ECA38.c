/* Entry 0x088ECA38 | file offset 0x000E9A10 | FUN_088eca38 | bytes 156 */

void FUN_088eca38(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = FUN_088d4c5c();
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  FUN_08873d34((float)iVar1,2,FUN_088ecd98,param_1,0,2);
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_08873db0(&local_20,2);
  uVar2 = FUN_088daa68(uVar2);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  FUN_088ec634(param_1 + 4);
  FUN_088ec34c(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

