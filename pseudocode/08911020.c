/* Entry 0x08911020 | file offset 0x0010DFF8 | FUN_08911020 | bytes 92 */

void FUN_08911020(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    param_2 = 0x270800;
  }
  uVar1 = FUN_0888204c(param_2);
  *param_1 = uVar1;
  uVar1 = FUN_0885c40c(uVar1,param_2,"WM::MEMORY",0x10);
  param_1[1] = uVar1;
  return;
}

