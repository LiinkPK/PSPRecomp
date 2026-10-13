/* Entry 0x088EC7A0 | file offset 0x000E9778 | FUN_088ec7a0 | bytes 120 */

void FUN_088ec7a0(int param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = FUN_088d4c5c();
  FUN_08873d34((float)iVar1,2,0,0,0,2);
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_08873db0(&local_20,2);
  FUN_088ec634(param_1 + 4);
  FUN_088ec34c(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x24) = 0;
  return;
}

