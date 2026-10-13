/* Entry 0x088A99C4 | file offset 0x000A699C | FUN_088a99c4 | bytes 136 */

undefined4 FUN_088a99c4(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_088aa434(param_1,param_2);
    if (param_3 != 0) {
      FUN_088aa440(param_1,param_3);
    }
    if (param_4 != 0) {
      FUN_088aa47c(param_1,param_4);
    }
    uVar1 = 1;
  }
  return uVar1;
}

