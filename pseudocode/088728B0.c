/* Entry 0x088728B0 | file offset 0x0006F888 | FUN_088728b0 | bytes 184 */

void FUN_088728b0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = FUN_08873084();
  if (iVar1 == 0) {
    FUN_08871d6c(&local_20,param_2);
    *param_1 = local_20;
    param_1[1] = local_1c;
    param_1[2] = local_18;
    param_1[3] = local_14;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0x3f800000;
  }
  return;
}

