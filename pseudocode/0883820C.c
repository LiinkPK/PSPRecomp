/* Entry 0x0883820C | file offset 0x000351E4 | FUN_0883820c | bytes 236 */

bool FUN_0883820c(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 auStack_60 [4];
  undefined4 local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  
  iVar1 = FUN_08835378();
  if (iVar1 != 0) {
    FUN_08812664(auStack_60,param_1,iVar1);
    *param_2 = local_50;
    param_2[1] = local_4c;
    param_2[2] = local_48;
    param_2[3] = local_5c;
  }
  return iVar1 != 0;
}

