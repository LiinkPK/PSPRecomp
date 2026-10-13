/* Entry 0x088A573C | file offset 0x000A2714 | FUN_088a573c | bytes 116 */

void FUN_088a573c(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (((param_2 != 0) && (param_3 != 0)) && (0 < param_4)) {
    uVar1 = FUN_088a51c0(param_4);
    *(undefined4 *)(param_1 + 0x1248) = uVar1;
    uVar1 = FUN_088a5208(uVar1);
    FUN_08935524(uVar1,param_3,param_4);
    FUN_088a522c(*(undefined4 *)(param_1 + 0x1248));
  }
  return;
}

