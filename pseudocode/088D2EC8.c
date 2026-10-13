/* Entry 0x088D2EC8 | file offset 0x000CFEA0 | FUN_088d2ec8 | bytes 104 */

void FUN_088d2ec8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  FUN_088d2f30();
  if (param_3 < 0) {
    uVar1 = FUN_088daa68(param_2);
    *param_1 = uVar1;
  }
  else {
    uVar1 = FUN_088daa40(param_2,param_3,0);
    *param_1 = uVar1;
  }
  return;
}

